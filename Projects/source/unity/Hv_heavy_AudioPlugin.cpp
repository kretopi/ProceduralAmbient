/** Piotr Goj, kretopi@gmail.com */

// http://docs.unity3d.com/500/Documentation/Manual/AudioMixerNativeAudioPlugin.html

#include "AudioPluginUtil.h"
#include "heavy/Heavy_heavy.hpp"

namespace Hv_heavy_UnityPlugin {

  enum Param {
    P_NUM_HV_PARAMS_
  };

  struct EffectData {
    struct Data {
      float p[1];
      HeavyContextInterface *context;
    } data;
  };

  int InternalRegisterEffectDefinition(UnityAudioEffectDefinition& definition) {
    int numparams = P_NUM_HV_PARAMS_;
    definition.paramdefs = new UnityAudioParameterDefinition[numparams];
    // channels will be set to 0 if numInputChannels > 0 else it will be set to numOutputChannels
    definition.channels = 2;
    return numparams;
  }

  UNITY_AUDIODSP_RESULT UNITY_AUDIODSP_CALLBACK CreateCallback(UnityAudioEffectState* state) {
    EffectData* effectdata = new EffectData;
    effectdata->data.context = new Heavy_heavy((double) state->samplerate, 10, 2, 2);
    state->effectdata = effectdata;
    InitParametersFromDefinitions(InternalRegisterEffectDefinition, effectdata->data.p);
    return UNITY_AUDIODSP_OK;
  }

  UNITY_AUDIODSP_RESULT UNITY_AUDIODSP_CALLBACK ReleaseCallback(UnityAudioEffectState* state) {
    EffectData::Data* data = &state->GetEffectData<EffectData>()->data;
    delete data->context;
    delete data;
    return UNITY_AUDIODSP_OK;
  }

  UNITY_AUDIODSP_RESULT UNITY_AUDIODSP_CALLBACK SetFloatParameterCallback(
      UnityAudioEffectState* state, int index, float value) {
    EffectData::Data *data = &state->GetEffectData<EffectData>()->data;

    switch (index) {
      default: return UNITY_AUDIODSP_ERR_UNSUPPORTED;
    }

    data->p[index] = value;
    return UNITY_AUDIODSP_OK;
  }

  UNITY_AUDIODSP_RESULT UNITY_AUDIODSP_CALLBACK GetFloatParameterCallback(
        UnityAudioEffectState* state, int index, float* value, char *valuestr) {
    EffectData::Data* data = &state->GetEffectData<EffectData>()->data;
    if (index < 0 || index >= P_NUM_HV_PARAMS_) return UNITY_AUDIODSP_ERR_UNSUPPORTED;
    if (value != NULL) *value = data->p[index];
    if (valuestr != NULL) valuestr[0] = 0;
    return UNITY_AUDIODSP_OK;
  }

  int UNITY_AUDIODSP_CALLBACK GetFloatBufferCallback(UnityAudioEffectState* state,
      const char* name, float* buffer, int numsamples) {
    return UNITY_AUDIODSP_OK;
  }

  UNITY_AUDIODSP_RESULT UNITY_AUDIODSP_CALLBACK ProcessCallback(
      UnityAudioEffectState* state, float* inbuffer, float* outbuffer,
      unsigned int length, int inchannels, int outchannels) {
    EffectData::Data* data = &state->GetEffectData<EffectData>()->data;
    if (state->flags & UnityAudioEffectStateFlags_IsPaused) return UNITY_AUDIODSP_OK;
    hv_assert(inchannels == data->context->getNumInputChannels());
    hv_assert(outchannels == data->context->getNumOutputChannels());

    data->context->processInlineInterleaved(inbuffer, outbuffer, length);
    return UNITY_AUDIODSP_OK;
  }
}