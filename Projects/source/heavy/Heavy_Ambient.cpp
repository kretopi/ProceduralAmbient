/** Piotr Goj, kretopi@gmail.com */

#include "Heavy_Ambient.hpp"

#define Context(_c) reinterpret_cast<Heavy_Ambient *>(_c)



/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_Ambient_new(double sampleRate) {
    return new Heavy_Ambient(sampleRate);
  }

  HV_EXPORT HeavyContextInterface *hv_Ambient_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    return new Heavy_Ambient(sampleRate, poolKb, inQueueKb, outQueueKb);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_Ambient::Heavy_Ambient(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sLine_init(&sLine_kpkMT8Sb);
  numBytes += sCPole_init(&sCPole_04JpBHOA);
  numBytes += sLine_init(&sLine_vxaSioEe);
  numBytes += sLine_init(&sLine_Ms6wqZEv);
  numBytes += sCPole_init(&sCPole_ZY1KQizK);
  numBytes += sLine_init(&sLine_eoCzZZGe);
  numBytes += sLine_init(&sLine_4PdLiRgN);
  numBytes += sCPole_init(&sCPole_pIqpythw);
  numBytes += sLine_init(&sLine_EPLLdhF9);
  numBytes += sLine_init(&sLine_pSM8ZlIy);
  numBytes += sCPole_init(&sCPole_HPxrZdPk);
  numBytes += sLine_init(&sLine_Qy37aPMN);
  numBytes += sLine_init(&sLine_VvxpDCIw);
  numBytes += sCPole_init(&sCPole_mks8Vpmq);
  numBytes += sLine_init(&sLine_EFxFip1a);
  numBytes += sLine_init(&sLine_PTCP9CZh);
  numBytes += sCPole_init(&sCPole_JVa27YJm);
  numBytes += sLine_init(&sLine_UexAEjF2);
  numBytes += sLine_init(&sLine_ALtjE7ve);
  numBytes += sCPole_init(&sCPole_RxGRIZb3);
  numBytes += sLine_init(&sLine_8q2SriBt);
  numBytes += sLine_init(&sLine_AmvoMKPV);
  numBytes += sCPole_init(&sCPole_uqlbefyD);
  numBytes += sLine_init(&sLine_tGX77vIy);
  numBytes += sLine_init(&sLine_yjkwNY7W);
  numBytes += sCPole_init(&sCPole_pbGo1Buk);
  numBytes += sLine_init(&sLine_94QtbIz7);
  numBytes += sLine_init(&sLine_nhTOyfjt);
  numBytes += sCPole_init(&sCPole_NSF8LKDu);
  numBytes += sLine_init(&sLine_bOHgupoX);
  numBytes += sLine_init(&sLine_IKs3z4LT);
  numBytes += sCPole_init(&sCPole_MhMeAaX3);
  numBytes += sLine_init(&sLine_IkCYM5gX);
  numBytes += sLine_init(&sLine_Db76Xyoq);
  numBytes += sCPole_init(&sCPole_sEgDw1l6);
  numBytes += sLine_init(&sLine_2nEjRgnK);
  numBytes += sLine_init(&sLine_OgB4HsJQ);
  numBytes += sCPole_init(&sCPole_jVrj0Ksk);
  numBytes += sLine_init(&sLine_0JHdmdzQ);
  numBytes += sLine_init(&sLine_mxv4RPjm);
  numBytes += sCPole_init(&sCPole_Iw2D21Ek);
  numBytes += sLine_init(&sLine_McXK7tec);
  numBytes += sRPole_init(&sRPole_jLUBGqQ5);
  numBytes += sRPole_init(&sRPole_c83NNsWh);
  numBytes += cDelay_init(this, &cDelay_yeIqcyJ5, 0.0f);
  numBytes += cBinop_init(&cBinop_YbzG6G7h, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_Pe4f85KA, 50.0f);
  numBytes += cPack_init(&cPack_OVw8ze61, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_U9TwXyrO, 59287215);
  numBytes += cSlice_init(&cSlice_0gW2BQfu, 1, 1);
  numBytes += cPack_init(&cPack_O0aMK3iD, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_ZV95g89U, 0.0f);
  numBytes += cSlice_init(&cSlice_ssdusbtb, 1, 1);
  numBytes += cRandom_init(&cRandom_dJunupIz, -1913961098);
  numBytes += cBinop_init(&cBinop_6GeWIpso, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_93uNXWK3, 20.0f);
  numBytes += cBinop_init(&cBinop_lg7RUtqZ, 0.0f); // __sub
  numBytes += cSlice_init(&cSlice_f1HFzAPQ, 0, 1);
  numBytes += cSlice_init(&cSlice_BXyPmW1D, 1, 1);
  numBytes += cVar_init_f(&cVar_FV1v7Nq0, 0.0f);
  numBytes += cVar_init_f(&cVar_AZVqBIZm, 0.0f);
  numBytes += cBinop_init(&cBinop_oPtIOjZa, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_s1rupZup, 0.0f);
  numBytes += cBinop_init(&cBinop_NFNdtQKt, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_UM1pCcok, 1, -1);
  numBytes += cSlice_init(&cSlice_UE47wLPO, 1, -1);
  numBytes += cBinop_init(&cBinop_RoaxD8Mx, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_ls13K5Wh, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_ihg8ufbc, 20.0f);
  numBytes += cBinop_init(&cBinop_IEj2QZEM, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_1W2VrZPz, 0.0f);
  numBytes += cVar_init_f(&cVar_vNEDeetq, 0.0f);
  numBytes += cBinop_init(&cBinop_QB54hYWE, 20.0f); // __div
  numBytes += cVar_init_f(&cVar_2yoyAoj2, 0.0f);
  numBytes += cBinop_init(&cBinop_6m0fRad2, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_72XtMA3z, 0.0f); // __sub
  numBytes += cPack_init(&cPack_wJtCI8Lx, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_axW2TNoz, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_72C0EA3k, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_ltVQ2UCU, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_S71Fvuqu, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Chcilu2J, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_uVXCSZzy, 0.0f, 0.0f, false);
  numBytes += cRandom_init(&cRandom_NpYBKHuP, -1845677107);
  numBytes += cSlice_init(&cSlice_OG9U7JNH, 1, 1);
  numBytes += sVarf_init(&sVarf_Ctxyal7S, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_wlthupOS, false);
  numBytes += cVar_init_f(&cVar_VHu7B7JN, 250.0f);
  numBytes += sVarf_init(&sVarf_iD87VwlW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_iaq66yxr, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_WeT7a3eJ, 0.0f, 0.0f, false);
  numBytes += cRandom_init(&cRandom_rCprS9yY, 33244371);
  numBytes += cSlice_init(&cSlice_eyEdgQkW, 1, 1);
  numBytes += cSlice_init(&cSlice_IGLTGarF, 1, 1);
  numBytes += cRandom_init(&cRandom_sibzE25p, -1440240180);
  numBytes += cDelay_init(this, &cDelay_aY6h9uYQ, 0.0f);
  numBytes += cBinop_init(&cBinop_xEtPU3cT, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_RSuToo81, 50.0f);
  numBytes += cIf_init(&cIf_BT0rVAFn, false);
  numBytes += sVarf_init(&sVarf_0MwW1bp5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rLJkfdV5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_JCCZhyeK, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_irwwzLr7, 250.0f);
  numBytes += sVarf_init(&sVarf_LEW1UPSU, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xiPXVgtF, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_sLp5nVTH, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_HBe7UQ8F, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_Molv29Ly, 1, 1);
  numBytes += cRandom_init(&cRandom_72Rg4mB7, -631463663);
  numBytes += cDelay_init(this, &cDelay_ZsZ8sOSK, 0.0f);
  numBytes += cBinop_init(&cBinop_IJ9TB99P, 0.0f); // __sub
  numBytes += cSlice_init(&cSlice_lrgwOVy8, 1, -1);
  numBytes += cSlice_init(&cSlice_AtsTFJXi, 1, -1);
  numBytes += cBinop_init(&cBinop_xX7fGcA8, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_r5YJRnPq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Quyd1IJK, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_U6TwmZP4, 0.0f);
  numBytes += cVar_init_f(&cVar_HIFwDSsz, 0.0f);
  numBytes += cBinop_init(&cBinop_6PNtCV6w, 0.0f); // __add
  numBytes += cSlice_init(&cSlice_08mqknHJ, 0, 1);
  numBytes += cSlice_init(&cSlice_2dZRkZA3, 1, 1);
  numBytes += cBinop_init(&cBinop_O5lG9FpQ, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_PmiX8ie7, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_14ZABYlW, 20.0f);
  numBytes += cDelay_init(this, &cDelay_6AKFU4N0, 0.0f);
  numBytes += cBinop_init(&cBinop_zIFn8Pmy, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_9lGFNTB9, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_866EVuXn, 0.0f);
  numBytes += cBinop_init(&cBinop_aZNgUb5X, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_82Q5Ikps, 0.0f);
  numBytes += cVar_init_f(&cVar_TyoVdX3n, 0.0f);
  numBytes += cVar_init_f(&cVar_On9CkrTf, 20.0f);
  numBytes += cBinop_init(&cBinop_eTynncJ6, 0.0f); // __mul
  numBytes += cRandom_init(&cRandom_FHkqtMsi, 276606367);
  numBytes += cSlice_init(&cSlice_wLrLziQv, 1, 1);
  numBytes += sVarf_init(&sVarf_RUGDNAhE, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_iOTx5EKN, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_JHFcYeZD, 0.0f); // __sub
  numBytes += cPack_init(&cPack_9V9SweVU, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_nrsPlUqu, 1, 1);
  numBytes += cRandom_init(&cRandom_yPKX5KCE, -761622542);
  numBytes += cPack_init(&cPack_VlllOoNZ, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_qxLkoyLE, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_TzpDPZFP, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_jeHUbcjq, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_ArVetRiC, 1, 1);
  numBytes += cRandom_init(&cRandom_IL14635g, -1613538241);
  numBytes += sVarf_init(&sVarf_ihI7vTfK, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_j0UViC3R, 0.0f);
  numBytes += cBinop_init(&cBinop_5lYk9Whw, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ueXCK7dA, 0.0f); // __sub
  numBytes += cRandom_init(&cRandom_W3fIcNmu, 2098592598);
  numBytes += cSlice_init(&cSlice_i0IrLwgV, 1, 1);
  numBytes += cBinop_init(&cBinop_x64x2XkH, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_F6YLyiG9, 0.0f);
  numBytes += cBinop_init(&cBinop_nGdWwUNr, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_kI5fPeIJ, 0.0f); // __div
  numBytes += cSlice_init(&cSlice_Lr0SNoIX, 1, 1);
  numBytes += cSlice_init(&cSlice_LFlCzbc7, 0, 1);
  numBytes += cBinop_init(&cBinop_fQj7mnud, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_aw3Jz6mm, 0.0f);
  numBytes += cBinop_init(&cBinop_LbuXMHvh, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_QAgLeD9T, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_1vzw3b4s, 20.0f); // __div
  numBytes += cDelay_init(this, &cDelay_3fRBZfDG, 0.0f);
  numBytes += cVar_init_f(&cVar_Kpe1d3RP, 20.0f);
  numBytes += cBinop_init(&cBinop_n5pyDLHN, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_O8Okp1f6, 20.0f);
  numBytes += cBinop_init(&cBinop_Keb5c4FR, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_Gl6KVk3G, 0.0f);
  numBytes += cVar_init_f(&cVar_7xkOlHLo, 0.0f);
  numBytes += cVar_init_f(&cVar_3I1XZeAP, 0.0f);
  numBytes += cSlice_init(&cSlice_xRohhGaL, 1, -1);
  numBytes += cSlice_init(&cSlice_o2U2tDER, 1, -1);
  numBytes += cBinop_init(&cBinop_tImHrLBZ, 0.0f); // __add
  numBytes += sVarf_init(&sVarf_i504brLg, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_1S4q3Upp, 1, 1);
  numBytes += cRandom_init(&cRandom_QWsk6K9s, 1579565372);
  numBytes += cPack_init(&cPack_8PeHgOxK, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_Wo0hGDNo, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_lQMsinVE, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_BJTkgrtf, 250.0f);
  numBytes += cIf_init(&cIf_wXPhHxP5, false);
  numBytes += sVarf_init(&sVarf_nXqF4mYY, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_5Yx160mC, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rZFqwUSH, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_qmZ05r4q, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_O53c1xVS, 0.0f);
  numBytes += cVar_init_f(&cVar_sxCCVpPm, 50.0f);
  numBytes += cSlice_init(&cSlice_Nhgwp8Aw, 1, 1);
  numBytes += cRandom_init(&cRandom_P4pu89Ca, 1800245294);
  numBytes += cVar_init_f(&cVar_BxGqebHR, 250.0f);
  numBytes += sVarf_init(&sVarf_5JtBFaJ0, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_6Yy4p31e, false);
  numBytes += sVarf_init(&sVarf_d0xlBOb9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_AQCGwVEX, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_tCbwuwsd, 0.0f, 0.0f, false);
  numBytes += cRandom_init(&cRandom_ePdAEFtY, 1069325405);
  numBytes += cSlice_init(&cSlice_Uc3GKrQF, 1, 1);
  numBytes += cVar_init_f(&cVar_IMr1QnAi, 50.0f);
  numBytes += cBinop_init(&cBinop_z5I5EDNU, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_niRtbZsd, 0.0f);
  numBytes += cSlice_init(&cSlice_qFVe1jmB, 1, 1);
  numBytes += cRandom_init(&cRandom_LjVzupMD, -237667593);
  numBytes += cPack_init(&cPack_eFir6z0l, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_9gDn4Qdd, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_qC97mvdh, 0.0f);
  numBytes += sVarf_init(&sVarf_0jyibtbV, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_8dg7RpLD, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_GtTYZnZ6, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_bKjJfLAz, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_5khhCy0k, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_PUWS4tOJ, 0.0f); // __sub
  numBytes += cSlice_init(&cSlice_xV5ABJVp, 1, 1);
  numBytes += cRandom_init(&cRandom_BMrehd7M, -475634708);
  numBytes += cVar_init_f(&cVar_1btvaHU4, 0.0f);
  numBytes += cVar_init_f(&cVar_4l1i4Gzh, 20.0f);
  numBytes += cVar_init_f(&cVar_iotyNisN, 0.0f);
  numBytes += cBinop_init(&cBinop_rGVBwgPF, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_8kBvgHc1, 0.0f); // __add
  numBytes += cSlice_init(&cSlice_yYf21SJE, 1, 1);
  numBytes += cSlice_init(&cSlice_jmwtWc8K, 0, 1);
  numBytes += cSlice_init(&cSlice_sSKw7B6y, 1, -1);
  numBytes += cSlice_init(&cSlice_sFx2cLmG, 1, -1);
  numBytes += cBinop_init(&cBinop_Nyed9upm, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_i5aDkoR1, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_2MhM414k, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_P6eyRyGI, 0.0f);
  numBytes += cBinop_init(&cBinop_tcP4qlyr, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_9K4Wew1r, 20.0f);
  numBytes += cDelay_init(this, &cDelay_pNkiYBQt, 0.0f);
  numBytes += cVar_init_f(&cVar_BtqSy0ld, 0.0f);
  numBytes += cVar_init_f(&cVar_FbjKCE6r, 0.0f);
  numBytes += cBinop_init(&cBinop_HMBn25Tx, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_itgQ6nHp, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_AAcn77PQ, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Ib0kiJNa, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_Q3xWAgPN, 1, 1);
  numBytes += cRandom_init(&cRandom_p56pHwYV, -602000517);
  numBytes += cBinop_init(&cBinop_e7eFx40I, 0.0f); // __sub
  numBytes += cRandom_init(&cRandom_AzjS41Jb, 1365233259);
  numBytes += cSlice_init(&cSlice_NyL2rKjP, 1, 1);
  numBytes += cPack_init(&cPack_ggKRvK48, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_qOqRQUjY, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_izla5mHP, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_XN7TerGb, 0.0f);
  numBytes += cSlice_init(&cSlice_8lM63LmY, 1, 1);
  numBytes += cRandom_init(&cRandom_n0ZE7SnF, -2040022646);
  numBytes += cBinop_init(&cBinop_2H4BK0kh, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_Gqn9v48u, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_1A4q133W, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_9cQZMSiF, 0.0f); // __sub
  numBytes += cRandom_init(&cRandom_ieQerWcf, -1516413811);
  numBytes += cSlice_init(&cSlice_28m9Rq6d, 1, 1);
  numBytes += sVarf_init(&sVarf_k89N2j2H, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_5ACGh7T2, 0.0f);
  numBytes += cBinop_init(&cBinop_2b2uOfPI, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_HCZU4ClW, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_DJqKhCtV, 0.0f);
  numBytes += cBinop_init(&cBinop_Pehj4XI2, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_tBpgdcHu, 0.0f);
  numBytes += cVar_init_f(&cVar_x6u3IDyL, 20.0f);
  numBytes += cBinop_init(&cBinop_9RzBIFnA, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_tFE8C5c7, 20.0f);
  numBytes += cDelay_init(this, &cDelay_CVa7t8YM, 0.0f);
  numBytes += cSlice_init(&cSlice_QH2bBO9c, 0, 1);
  numBytes += cSlice_init(&cSlice_KU296d90, 1, 1);
  numBytes += cBinop_init(&cBinop_R0QUFOM0, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_jfgjD8Ti, 20.0f); // __div
  numBytes += cSlice_init(&cSlice_tUBEr0p0, 1, -1);
  numBytes += cSlice_init(&cSlice_pw0ODIfd, 1, -1);
  numBytes += cVar_init_f(&cVar_FINKAFyd, 0.0f);
  numBytes += cBinop_init(&cBinop_Pm9dgvNN, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_DAZeYeEr, 0.0f);
  numBytes += cBinop_init(&cBinop_V2SuJCRY, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_tAoVwmOn, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_rc1qKY5G, 1, 1);
  numBytes += cRandom_init(&cRandom_gNC6zD21, 798796566);
  numBytes += cPack_init(&cPack_jGwE1vb1, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_RABCHC4g, 2, 0.0f, 0.0f);
  numBytes += cVar_init_f(&cVar_GDWfpRRb, 50.0f);
  numBytes += cBinop_init(&cBinop_mUtPdLZb, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_D1DejeuU, 0.0f);
  numBytes += sVarf_init(&sVarf_Dc33QfEN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_S2VWjGV9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vIaW9ICs, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TpqYVykL, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_2PUzlv8C, false);
  numBytes += cVar_init_f(&cVar_08CHn3Cp, 250.0f);
  numBytes += cPack_init(&cPack_mzlB6EUB, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_STK3fg5e, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_shjgKrSV, 0.0f);
  numBytes += cVar_init_f(&cVar_kw06mRuq, 50.0f);
  numBytes += cSlice_init(&cSlice_sOKMnv5n, 1, 1);
  numBytes += cRandom_init(&cRandom_1vWgPmZM, 1525644489);
  numBytes += cIf_init(&cIf_VcLQEfvG, false);
  numBytes += cVar_init_f(&cVar_CESUsbED, 250.0f);
  numBytes += sVarf_init(&sVarf_VOf1Udl6, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NCgtUvXu, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_DWp5M0iA, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QkhPZiGG, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_Au4plqZ9, 1, 1);
  numBytes += cRandom_init(&cRandom_nh37TLlZ, -1083104266);
  numBytes += cPack_init(&cPack_BJFlW2w1, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_Yy2TGrzA, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_FKKnhgd9, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_JGEaWa6o, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_hea1eer4, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_FUSxJqIy, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_e7yqi2Mw, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_BdfVzaKQ, 0.0f);
  numBytes += cSlice_init(&cSlice_Rolr0yf7, 1, 1);
  numBytes += cSlice_init(&cSlice_Ws1Te3eQ, 0, 1);
  numBytes += cSlice_init(&cSlice_ircZgct2, 1, -1);
  numBytes += cSlice_init(&cSlice_qI8lSLeD, 1, -1);
  numBytes += cBinop_init(&cBinop_lVQNA8lX, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_2KzwNHdR, 0.0f);
  numBytes += cVar_init_f(&cVar_7Lmt9rz8, 20.0f);
  numBytes += cVar_init_f(&cVar_v9fsdXDX, 0.0f);
  numBytes += cBinop_init(&cBinop_bqDKfiWb, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_CVW7Gbh4, 20.0f);
  numBytes += cBinop_init(&cBinop_rp6mLSqn, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_a2PNqgp6, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_ODsWw6Nn, 0.0f);
  numBytes += cVar_init_f(&cVar_HeER5HKx, 0.0f);
  numBytes += cVar_init_f(&cVar_psFfO40Z, 0.0f);
  numBytes += cSlice_init(&cSlice_blT0lMru, 1, 1);
  numBytes += cRandom_init(&cRandom_cKRiDuXk, 2089717487);
  numBytes += cBinop_init(&cBinop_2u9zJRNy, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_To6OnczX, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_4lKVIT9m, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_U8r4haXL, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_7oPUoK92, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_QzJ5gZoH, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_RamEIDkS, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_gDx3xFzh, 0.0f);
  numBytes += cSlice_init(&cSlice_FYlHar1V, 1, 1);
  numBytes += cRandom_init(&cRandom_HZI2ybap, 1628774068);
  numBytes += cPack_init(&cPack_mR3dDZSR, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_aEq46AjZ, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_4XLMrTdj, 250.0f);
  numBytes += sVarf_init(&sVarf_72M1CbR9, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_PgeP5cy6, false);
  numBytes += sVarf_init(&sVarf_vWJ6Kciq, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QgPlqAMg, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_tS1Bi5FP, 50.0f);
  numBytes += cDelay_init(this, &cDelay_Khl1LbLE, 0.0f);
  numBytes += cBinop_init(&cBinop_HdGweHMQ, 0.0f); // __mul
  numBytes += cRandom_init(&cRandom_bILyboQo, 1543344801);
  numBytes += cSlice_init(&cSlice_3ZaxqYnV, 1, 1);
  numBytes += cSlice_init(&cSlice_Q7lCoMb5, 1, 1);
  numBytes += cRandom_init(&cRandom_fj3gTz6B, 1430673439);
  numBytes += cPack_init(&cPack_ke5z8o8h, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_JJgh48H9, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_E58SXT24, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_lfmwPUwO, 0.0f); // __sub
  numBytes += cRandom_init(&cRandom_SNX1seTx, 1050941021);
  numBytes += cSlice_init(&cSlice_bez9s1w8, 1, 1);
  numBytes += cBinop_init(&cBinop_kv7PpcFH, 0.0f); // __sub
  numBytes += cDelay_init(this, &cDelay_E2lEn8OP, 0.0f);
  numBytes += cVar_init_f(&cVar_cTqIkR90, 20.0f);
  numBytes += cBinop_init(&cBinop_fLRU9C8V, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_qonXZqIG, 20.0f);
  numBytes += cDelay_init(this, &cDelay_bPqmetpq, 0.0f);
  numBytes += cBinop_init(&cBinop_flN0PQ9H, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_EJShhbe7, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_omN6apoa, 0.0f);
  numBytes += cVar_init_f(&cVar_N27wstDy, 0.0f);
  numBytes += cSlice_init(&cSlice_hR90XjCJ, 1, -1);
  numBytes += cSlice_init(&cSlice_ZS5sCTKg, 1, -1);
  numBytes += cBinop_init(&cBinop_fSfsHE7m, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_CA0KPfkQ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_27bwO6wU, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_FTZ3MPHm, 0.0f);
  numBytes += cVar_init_f(&cVar_cz8TT4nE, 0.0f);
  numBytes += cBinop_init(&cBinop_6DzTWTc4, 20.0f); // __div
  numBytes += cVar_init_f(&cVar_l7cZrKvz, 0.0f);
  numBytes += cBinop_init(&cBinop_qbjZS08E, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_HlyGfzpE, 0.0f); // __div
  numBytes += cSlice_init(&cSlice_fsJxVSWs, 1, 1);
  numBytes += cSlice_init(&cSlice_50BB4Q8S, 0, 1);
  numBytes += sVarf_init(&sVarf_YwXE32u9, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_0yg8sgKa, 1, 1);
  numBytes += cRandom_init(&cRandom_ZV9HgagZ, 186637809);
  numBytes += cBinop_init(&cBinop_6dL4pcJf, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_eUS0Xrf2, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_wVuetUjl, 2, 0.0f, 0.0f);
  numBytes += cVar_init_f(&cVar_CdY0PsYM, 0.0f);
  numBytes += cBinop_init(&cBinop_wHXOPMPc, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_eUdNOiVL, 22050.0f);
  numBytes += sVarf_init(&sVarf_CJZKkqCl, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_o0qUCsxF, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_LRjXfsTD, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_8sbYHj8R, -37206461);
  numBytes += cSlice_init(&cSlice_K1cIy1vD, 1, 1);
  numBytes += cDelay_init(this, &cDelay_ycrQCA30, 0.0f);
  numBytes += cBinop_init(&cBinop_FpzsZ404, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_fM886FTP, 50.0f);
  numBytes += cIf_init(&cIf_hk3oyNdX, false);
  numBytes += sVarf_init(&sVarf_6Sr6loz0, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_11IWFZ2O, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Ccs4XKNW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_OL9p5kSu, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_43UzNyBn, 250.0f);
  numBytes += cPack_init(&cPack_Ll1tVloY, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_5Otxhdau, 862828007);
  numBytes += cSlice_init(&cSlice_UX19zmbM, 1, 1);
  numBytes += cBinop_init(&cBinop_pWAMKlBY, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_gg0Nx420, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_CbUO3bP9, 0.0f);
  numBytes += cBinop_init(&cBinop_UpKiIm5J, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_oXDGHVqF, 20.0f);
  numBytes += cVar_init_f(&cVar_nCaQEmXr, 0.0f);
  numBytes += cSlice_init(&cSlice_ScUohR8s, 1, 1);
  numBytes += cSlice_init(&cSlice_KDO6ivWT, 0, 1);
  numBytes += cVar_init_f(&cVar_9B1FzMWN, 0.0f);
  numBytes += cVar_init_f(&cVar_Cm5UiaxW, 0.0f);
  numBytes += cBinop_init(&cBinop_uP7zSofU, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_It6GazZD, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_s06ihgxU, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_C05GhlLw, 20.0f);
  numBytes += cBinop_init(&cBinop_DkPlRMF0, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_NQV3k9TW, 0.0f);
  numBytes += cBinop_init(&cBinop_eU9vYWjV, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_cbT58xqs, 0.0f);
  numBytes += cBinop_init(&cBinop_2e1hmIdG, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_BRN3HEXh, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_hkZcitbD, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_tRERVano, 1, -1);
  numBytes += cSlice_init(&cSlice_YqVen8hD, 1, -1);
  numBytes += cDelay_init(this, &cDelay_lu0qJky1, 0.0f);
  numBytes += cSlice_init(&cSlice_TFbG0FUq, 1, 1);
  numBytes += cRandom_init(&cRandom_GZye0rUf, 1238528577);
  numBytes += cBinop_init(&cBinop_ObBDfC9Z, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_qgR3m3Yw, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_Ne4ZCH6R, 1, 1);
  numBytes += cRandom_init(&cRandom_aCoDvm8I, 1623537544);
  numBytes += cBinop_init(&cBinop_RZJiZKQJ, 0.0f); // __mul
  numBytes += cPack_init(&cPack_3uSz0hSN, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_BAQV7s7S, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_E8qlXFSi, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_9aL8c52W, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_523aqn6i, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_Cx9aVgen, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_W96uWS2B, 22050.0f);
  numBytes += cDelay_init(this, &cDelay_TEnTkVe2, 0.0f);
  numBytes += cBinop_init(&cBinop_Y3twqWkm, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_saSqtJlr, 50.0f);
  numBytes += cRandom_init(&cRandom_YiYHweCt, -2082496426);
  numBytes += cSlice_init(&cSlice_dbXQZD1i, 1, 1);
  numBytes += cBinop_init(&cBinop_8H06f10o, 0.0f); // __sub
  numBytes += cRandom_init(&cRandom_aNp7wtC5, 1201640294);
  numBytes += cSlice_init(&cSlice_KA3B72SG, 1, 1);
  numBytes += sVarf_init(&sVarf_UCo4wApe, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_S2vUQ5Jl, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_Dy30iI8M, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_wLDNsAUC, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_KeXFIfUq, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_TLCqOoyB, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_HsyIegC5, 0.0f);
  numBytes += cBinop_init(&cBinop_JjNVW8C7, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_vyKSy1wU, 0.0f);
  numBytes += cVar_init_f(&cVar_yjwBPRgs, 20.0f);
  numBytes += cBinop_init(&cBinop_EqlSb9et, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_Mr0YkmO3, 0.0f);
  numBytes += cBinop_init(&cBinop_BFybiRXe, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_d2lSUwlG, 0.0f); // __sub
  numBytes += cSlice_init(&cSlice_JApQBA9Z, 1, -1);
  numBytes += cSlice_init(&cSlice_Kl2zT1Lv, 1, -1);
  numBytes += cBinop_init(&cBinop_P0Y728AA, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_ubfBt8GB, 20.0f);
  numBytes += cVar_init_f(&cVar_FP2vYYqW, 0.0f);
  numBytes += cVar_init_f(&cVar_DaKK0EMB, 0.0f);
  numBytes += cBinop_init(&cBinop_y29k62TY, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_mdxSzMtI, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_FJHxtO8z, 0.0f);
  numBytes += cSlice_init(&cSlice_lyg564h4, 0, 1);
  numBytes += cSlice_init(&cSlice_QuOqMQ0S, 1, 1);
  numBytes += cBinop_init(&cBinop_iKsicy2S, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_CVFqG9r2, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_gtNxpxM7, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_ibjaRnil, 0.0f);
  numBytes += cRandom_init(&cRandom_ZQwdxUFz, -1434679927);
  numBytes += cSlice_init(&cSlice_xr3ieCQv, 1, 1);
  numBytes += cPack_init(&cPack_aytatvxo, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_nbkWWrl9, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_RrlfY4ZS, 1, 1);
  numBytes += cRandom_init(&cRandom_P1VEutAH, 294098924);
  numBytes += sVarf_init(&sVarf_ymXd167q, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_RR9qjJI6, false);
  numBytes += sVarf_init(&sVarf_kUidlgQs, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_jsT5uniN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_hG9zuFJR, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_LUbfywVs, 250.0f);
  numBytes += cPack_init(&cPack_IvhJ77Up, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_fraFLG2h, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_o8oZK5a5, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ArCasLLd, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_zNkRrTeH, 20.0f);
  numBytes += cBinop_init(&cBinop_sbTQVEDx, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_Z6ee2gYs, 0.0f);
  numBytes += cBinop_init(&cBinop_PDw0kwjG, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_QRiJF90t, 0.0f);
  numBytes += cBinop_init(&cBinop_aXhmIAT7, 0.0f); // __sub
  numBytes += cSlice_init(&cSlice_feqtEvYe, 1, -1);
  numBytes += cSlice_init(&cSlice_7n30xPff, 1, -1);
  numBytes += cBinop_init(&cBinop_R5pFxclX, 20.0f); // __div
  numBytes += cVar_init_f(&cVar_7EFjRxOb, 0.0f);
  numBytes += cVar_init_f(&cVar_u2H66eTX, 0.0f);
  numBytes += cVar_init_f(&cVar_BBOrVZAi, 20.0f);
  numBytes += cBinop_init(&cBinop_osRUct3e, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_YiCUahqQ, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_NmOnRpgI, 0.0f);
  numBytes += cBinop_init(&cBinop_03nRqzY2, 0.0f); // __div
  numBytes += cSlice_init(&cSlice_qPpCwZUJ, 1, 1);
  numBytes += cSlice_init(&cSlice_W3useXit, 0, 1);
  numBytes += cVar_init_f(&cVar_ahC5oRgF, 0.0f);
  numBytes += cBinop_init(&cBinop_gfAB8oiI, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_P2G5j7Nd, 0.0f); // __sub
  numBytes += cSlice_init(&cSlice_ZQ1Yqqnf, 1, 1);
  numBytes += cRandom_init(&cRandom_JG8ex1z6, 898163493);
  numBytes += cSlice_init(&cSlice_n9UY2NMq, 1, 1);
  numBytes += cRandom_init(&cRandom_JMkjzkMQ, 1176949374);
  numBytes += sVarf_init(&sVarf_Uo4XXzwN, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_gWFZcoz4, 0.0f);
  numBytes += cBinop_init(&cBinop_0gdzwWDx, 0.0f); // __mul
  numBytes += cPack_init(&cPack_IqV34U4m, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_dsBjunz9, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_QwzLpXlX, 0.0f); // __sub
  numBytes += cDelay_init(this, &cDelay_ZkIjCMhp, 0.0f);
  numBytes += cVar_init_f(&cVar_uyroj1UI, 50.0f);
  numBytes += cBinop_init(&cBinop_iAokmvwS, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_meRrkw0u, 1, 1);
  numBytes += cRandom_init(&cRandom_QidceMo8, 599943023);
  numBytes += cSlice_init(&cSlice_57irbJMm, 1, 1);
  numBytes += cRandom_init(&cRandom_TYj1h4Ta, 2004518577);
  numBytes += cPack_init(&cPack_BEfbMuLP, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_4EqTbcqV, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_qBWnK3gi, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_LPflPWYe, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_lF8gxT1G, 250.0f);
  numBytes += cIf_init(&cIf_99KpjM9U, false);
  numBytes += sVarf_init(&sVarf_5erRNfiL, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_6y0XFbpu, 1, 1);
  numBytes += cRandom_init(&cRandom_pJcXfVVT, 818672433);
  numBytes += sVari_init(&sVari_pdgLcTuZ, 0, 0, false);
  numBytes += cSlice_init(&cSlice_KHtIqElD, 1, 1);
  numBytes += cRandom_init(&cRandom_EzGUzv5f, 1210277625);
  numBytes += sVarf_init(&sVarf_BEyxLDqu, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_tLRawH8a, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NnRGOxMR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_oP4iklVo, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_dKbPzylL, false);
  numBytes += cVar_init_f(&cVar_txXVXEFK, 250.0f);
  numBytes += cPack_init(&cPack_kzItqaIW, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_3wcmYO2p, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_wgdEVtOD, 1, 1);
  numBytes += cRandom_init(&cRandom_3N8NIG0J, 2000193888);
  numBytes += cDelay_init(this, &cDelay_kgsE8ts7, 0.0f);
  numBytes += cPack_init(&cPack_ZMGDDOpK, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_tf7eWNZz, -1895781242);
  numBytes += cSlice_init(&cSlice_lpdq9N9q, 1, 1);
  numBytes += cBinop_init(&cBinop_XM8YhLSj, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_zO63LVR8, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_9ZtOTizG, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_srAWdFio, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_1bTLPgZc, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_WSTsX39g, 20.0f);
  numBytes += cBinop_init(&cBinop_yHEO6PbK, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_3OfiA0kN, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_n47YmbGl, 0.0f);
  numBytes += cVar_init_f(&cVar_ncjh9UrI, 20.0f);
  numBytes += cBinop_init(&cBinop_96D0S9bU, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_imj2JX4s, 0.0f); // __add
  numBytes += cSlice_init(&cSlice_tsj1UGE2, 1, -1);
  numBytes += cSlice_init(&cSlice_sGtgPteN, 1, -1);
  numBytes += cBinop_init(&cBinop_I54eDKFQ, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_eKCnfCg0, 0.0f);
  numBytes += cVar_init_f(&cVar_0Ijx7B6n, 0.0f);
  numBytes += cBinop_init(&cBinop_tsTFmi7M, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_eW9DFOA4, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_isJ1ZCZP, 0.0f);
  numBytes += cVar_init_f(&cVar_MBZsjnZP, 0.0f);
  numBytes += cSlice_init(&cSlice_cGlxWS1i, 1, 1);
  numBytes += cSlice_init(&cSlice_HRPtk0Tc, 0, 1);
  numBytes += cVar_init_f(&cVar_AxHXT0vV, 0.0f);
  numBytes += cBinop_init(&cBinop_dEHyPwt3, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_0s8w1iLD, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_cKkRe9Tr, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_XcDyVGEr, 0.0f, 0.0f, false);
  numBytes += cRandom_init(&cRandom_x3repbVc, -45127968);
  numBytes += cSlice_init(&cSlice_yvixjA6J, 1, 1);
  numBytes += cVar_init_f(&cVar_uJ8LvtoD, 50.0f);
  numBytes += cDelay_init(this, &cDelay_mtvZq6xm, 0.0f);
  numBytes += cBinop_init(&cBinop_7ngCQi0F, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_InPNGpFA, 1.0f);
  numBytes += cDelay_init(this, &cDelay_WznO6zQW, 0.0f);
  numBytes += cBinop_init(&cBinop_cA7AOxJN, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_1sEWZKTn, 0.0f); // __sub
  numBytes += cPack_init(&cPack_qTggsyog, 2, 0.0f, 0.0f);
  numBytes += cVar_init_f(&cVar_3Tn7ud5o, 0.0f);
  numBytes += cSlice_init(&cSlice_xvf029SD, 1, -1);
  numBytes += cSlice_init(&cSlice_bpQYS7P1, 1, -1);
  numBytes += cBinop_init(&cBinop_JdVP08JH, 0.0f); // __sub
  numBytes += cSlice_init(&cSlice_F9fAHCu2, 1, 1);
  numBytes += cSlice_init(&cSlice_Ro5uKcYl, 0, 1);
  numBytes += cBinop_init(&cBinop_fL5BBdCD, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_iKgC2Y0L, 0.0f);
  numBytes += cVar_init_f(&cVar_lsrhgSaj, 0.0f);
  numBytes += cBinop_init(&cBinop_DarZ27E1, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_GifgF9fe, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_aodDr1rD, 20.0f);
  numBytes += cDelay_init(this, &cDelay_WxPqB6iC, 0.0f);
  numBytes += cVar_init_f(&cVar_bV1AMrSp, 0.0f);
  numBytes += cVar_init_f(&cVar_FfO9MjH8, 0.0f);
  numBytes += cBinop_init(&cBinop_qGVlR7hm, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_e8J0NL4e, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_TOj1uYcT, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_PTvLqJQv, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_vRqSjQBg, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_NDyAHXxE, 20.0f);
  numBytes += cBinop_init(&cBinop_zXitEq8o, 0.0f); // __mul
  numBytes += cRandom_init(&cRandom_EhU1hGXb, 1237518652);
  numBytes += cSlice_init(&cSlice_2V9sVhnD, 1, 1);
  numBytes += cBinop_init(&cBinop_llPiv8Gc, 0.0f); // __sub
  numBytes += cRandom_init(&cRandom_FtH4unM9, 2086865580);
  numBytes += cSlice_init(&cSlice_geZQKa7Y, 1, 1);
  numBytes += cBinop_init(&cBinop_CqomZBn0, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_bcfpngPx, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MEQNpVsQ, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_dYoDzmoL, 0.0f);
  numBytes += cBinop_init(&cBinop_3i0g8Xci, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_PTy1WfbC, 50.0f);
  numBytes += cPack_init(&cPack_KgljkbFA, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_u3D17KKT, -32750298);
  numBytes += cSlice_init(&cSlice_9HVSoC4i, 1, 1);
  numBytes += cSlice_init(&cSlice_dJbpWiMc, 1, 1);
  numBytes += cRandom_init(&cRandom_8dbB1zLQ, 707974825);
  numBytes += sVarf_init(&sVarf_ILlAx9Xz, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_k7Gbrzio, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vo90G0Ob, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_fgSRPBCr, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_iZFbbADp, false);
  numBytes += cVar_init_f(&cVar_Vi4qxlKC, 250.0f);
  numBytes += cPack_init(&cPack_CxigmVbf, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_D3ZyS2wJ, 2, 0.0f, 0.0f);
  numBytes += cVar_init_f(&cVar_gp22HpnH, 50.0f);
  numBytes += cDelay_init(this, &cDelay_qH6zuDQc, 0.0f);
  numBytes += cBinop_init(&cBinop_Zdl1WC0v, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_7KmwE1TY, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_EbmSK7n2, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_eU4Sn7b5, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_b8qAUmMY, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_rbZkuQnS, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_UUs2bUN9, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_8WonvX9v, 0.0f); // __mul
  numBytes += cRandom_init(&cRandom_AXLAWuj2, -933444904);
  numBytes += cSlice_init(&cSlice_7QlDJoYx, 1, 1);
  numBytes += cVar_init_f(&cVar_T91B30bp, 20.0f);
  numBytes += cBinop_init(&cBinop_s5KlUziN, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_0KoxwS3i, 0.0f);
  numBytes += cBinop_init(&cBinop_1l6Cwok1, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_ofJi1TAi, 0.0f);
  numBytes += cBinop_init(&cBinop_dCs8LID5, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_Ok6vMMNG, 0.0f);
  numBytes += cVar_init_f(&cVar_capSdOkt, 0.0f);
  numBytes += cSlice_init(&cSlice_fhngpFHq, 1, -1);
  numBytes += cSlice_init(&cSlice_iCDxXvWd, 1, -1);
  numBytes += cBinop_init(&cBinop_GfWHArT1, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_Mnu6Cz1b, 0.0f);
  numBytes += cBinop_init(&cBinop_FER1kySj, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_vIGADF9U, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_p4Hj1DSl, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_1rvt49Ic, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_LHw8TH1W, 20.0f);
  numBytes += cBinop_init(&cBinop_fgxPiNHC, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_YxFn8UBV, 0.0f);
  numBytes += cSlice_init(&cSlice_ewWHpCsB, 0, 1);
  numBytes += cSlice_init(&cSlice_UO4O9QlR, 1, 1);
  numBytes += cSlice_init(&cSlice_gXytbuu5, 1, 1);
  numBytes += cRandom_init(&cRandom_nI2dZsNJ, 2059347978);
  numBytes += cBinop_init(&cBinop_KcDhVPoI, 0.0f); // __sub
  numBytes += cDelay_init(this, &cDelay_Ueh1qfgp, 0.0f);
  numBytes += cSlice_init(&cSlice_niGcb8VE, 1, 1);
  numBytes += cRandom_init(&cRandom_Y7UrYW4T, 1859940070);
  numBytes += cSlice_init(&cSlice_8csq1NXn, 1, 1);
  numBytes += cRandom_init(&cRandom_x5zUafVC, -325756085);
  numBytes += cPack_init(&cPack_kgSuTnfp, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_maQh22E6, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_lioPV0i8, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_Oj63g94t, false);
  numBytes += cVar_init_f(&cVar_HWdNNXMf, 250.0f);
  numBytes += sVarf_init(&sVarf_DWMFOcMb, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_yqIvIpcT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_9hNDWcfq, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_nhh1Hhag, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_7Xl12SgN, 250.0f);
  numBytes += sVarf_init(&sVarf_Pc0gz6r7, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_kZWQtxfb, false);
  numBytes += sVarf_init(&sVarf_THvI1zS0, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_2soE1jD3, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_F7KaR8Lx, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_fv4LdLfe, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_PUGIgKjD, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_erIVTdCV, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_OXDKZDxi, 0.0f, 0.0f, false);
  numBytes += cRandom_init(&cRandom_9stqTU3U, -595083758);
  numBytes += cSlice_init(&cSlice_E4tiejZg, 1, 1);
  numBytes += cDelay_init(this, &cDelay_rqsbOucf, 0.0f);
  numBytes += cBinop_init(&cBinop_ndBmMKR6, 0.0f); // __mul
  numBytes += cRandom_init(&cRandom_4XvmSZxs, -43047978);
  numBytes += cSlice_init(&cSlice_sBn6wJRJ, 1, 1);
  numBytes += cBinop_init(&cBinop_gCXPA3X7, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_oMYvRxzW, 1, 1);
  numBytes += cSlice_init(&cSlice_yZMw4QPU, 0, 1);
  numBytes += cVar_init_f(&cVar_BxJj0RF4, 0.0f);
  numBytes += cVar_init_f(&cVar_WEL8EFGy, 0.0f);
  numBytes += cSlice_init(&cSlice_Wrs3BQ8F, 1, -1);
  numBytes += cSlice_init(&cSlice_ZVYWtMF9, 1, -1);
  numBytes += cBinop_init(&cBinop_utKLwXlr, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_hpBH4K3a, 20.0f);
  numBytes += cBinop_init(&cBinop_cveVKxmj, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_jYGutSUD, 0.0f); // __sub
  numBytes += cDelay_init(this, &cDelay_j8PzhiSK, 0.0f);
  numBytes += cBinop_init(&cBinop_FhtqPAJe, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_FDtrRm8p, 20.0f);
  numBytes += cVar_init_f(&cVar_exCfWmbR, 0.0f);
  numBytes += cBinop_init(&cBinop_77K5V8yZ, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_wI7IynAn, 0.0f);
  numBytes += cBinop_init(&cBinop_yOTQNGdQ, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_yxmjp6jB, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_98XLNl4x, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_L2NkZTs3, 0.0f);
  numBytes += cBinop_init(&cBinop_nRWPKx32, 0.0f); // __div
  numBytes += cSlice_init(&cSlice_ONVKjiM2, 1, 1);
  numBytes += cRandom_init(&cRandom_fv3n3HFz, 347406341);
  numBytes += cPack_init(&cPack_sYkps2xw, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_kiPg7ekA, -1014335778);
  numBytes += cSlice_init(&cSlice_4Wxej5X4, 1, 1);
  numBytes += cPack_init(&cPack_aPyuuj7x, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_BSxk2EBZ, 0.0f);
  numBytes += cBinop_init(&cBinop_ICV0aVuB, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_bklfej2s, 50.0f);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Ambient::~Heavy_Ambient() {
  cPack_free(&cPack_OVw8ze61);
  cPack_free(&cPack_O0aMK3iD);
  cPack_free(&cPack_wJtCI8Lx);
  cPack_free(&cPack_sLp5nVTH);
  cPack_free(&cPack_9V9SweVU);
  cPack_free(&cPack_VlllOoNZ);
  cPack_free(&cPack_qxLkoyLE);
  cPack_free(&cPack_8PeHgOxK);
  cPack_free(&cPack_Wo0hGDNo);
  cPack_free(&cPack_eFir6z0l);
  cPack_free(&cPack_9gDn4Qdd);
  cPack_free(&cPack_8dg7RpLD);
  cPack_free(&cPack_ggKRvK48);
  cPack_free(&cPack_jGwE1vb1);
  cPack_free(&cPack_RABCHC4g);
  cPack_free(&cPack_mzlB6EUB);
  cPack_free(&cPack_BJFlW2w1);
  cPack_free(&cPack_QzJ5gZoH);
  cPack_free(&cPack_mR3dDZSR);
  cPack_free(&cPack_ke5z8o8h);
  cPack_free(&cPack_wVuetUjl);
  cPack_free(&cPack_LRjXfsTD);
  cPack_free(&cPack_Ll1tVloY);
  cPack_free(&cPack_3uSz0hSN);
  cPack_free(&cPack_S2vUQ5Jl);
  cPack_free(&cPack_aytatvxo);
  cPack_free(&cPack_nbkWWrl9);
  cPack_free(&cPack_IvhJ77Up);
  cPack_free(&cPack_IqV34U4m);
  cPack_free(&cPack_BEfbMuLP);
  cPack_free(&cPack_kzItqaIW);
  cPack_free(&cPack_3wcmYO2p);
  cPack_free(&cPack_ZMGDDOpK);
  cPack_free(&cPack_qTggsyog);
  cPack_free(&cPack_KgljkbFA);
  cPack_free(&cPack_CxigmVbf);
  cPack_free(&cPack_D3ZyS2wJ);
  cPack_free(&cPack_EbmSK7n2);
  cPack_free(&cPack_kgSuTnfp);
  cPack_free(&cPack_2soE1jD3);
  cPack_free(&cPack_sYkps2xw);
  cPack_free(&cPack_aPyuuj7x);
}

HvTable *Heavy_Ambient::getTableForHash(hv_uint32_t tableHash) {
  return nullptr;
}

void Heavy_Ambient::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZI3roaUK_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_Ambient::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 0;
}



/*
 * Send Function Implementations
 */


void Heavy_Ambient::cCast_ROOgU2b8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Gd8eP3Pt_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_NhPl0b6P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Qjc9a8r9_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cDelay_yeIqcyJ5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_yeIqcyJ5, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_yeIqcyJ5, 0, m, &cDelay_yeIqcyJ5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_danpwO3P_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HyBtDQlG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lGRktgF6_sendMessage);
}

void Heavy_Ambient::cBinop_YbzG6G7h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_4qfdxTpg_sendMessage);
}

void Heavy_Ambient::cBinop_1gxP6sQc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YbzG6G7h, HV_BINOP_MULTIPLY, 1, m, &cBinop_YbzG6G7h_sendMessage);
}

void Heavy_Ambient::cMsg_khylDGjk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_yeIqcyJ5, 0, m, &cDelay_yeIqcyJ5_sendMessage);
}

void Heavy_Ambient::cBinop_4qfdxTpg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_yeIqcyJ5, 2, m, &cDelay_yeIqcyJ5_sendMessage);
}

void Heavy_Ambient::cSwitchcase_fUtDY5zi_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_khylDGjk_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_khylDGjk_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Z18RlMY1_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_Z18RlMY1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_khylDGjk_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_yeIqcyJ5, 0, m, &cDelay_yeIqcyJ5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_danpwO3P_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HyBtDQlG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lGRktgF6_sendMessage);
}

void Heavy_Ambient::cVar_Pe4f85KA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YbzG6G7h, HV_BINOP_MULTIPLY, 0, m, &cBinop_YbzG6G7h_sendMessage);
}

void Heavy_Ambient::cMsg_XRzgWm8a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_F5otSCWo_sendMessage);
}

void Heavy_Ambient::cSystem_F5otSCWo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_1gxP6sQc_sendMessage);
}

void Heavy_Ambient::cCast_danpwO3P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_BEBuwhLo_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_lGRktgF6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_PT9rQD5S_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cPack_OVw8ze61_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_UexAEjF2, 0, m, NULL);
}

void Heavy_Ambient::cBinop_T83A6GO9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_O0aMK3iD, 0, m, &cPack_O0aMK3iD_sendMessage);
}

void Heavy_Ambient::cBinop_Ik9kYoln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Pe4f85KA, 0, m, &cVar_Pe4f85KA_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_O0aMK3iD, 1, m, &cPack_O0aMK3iD_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_OVw8ze61, 1, m, &cPack_OVw8ze61_sendMessage);
}

void Heavy_Ambient::cCast_HyBtDQlG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Ambient::cUnop_ZbENUI1E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1200.0f, 0, m, &cBinop_T83A6GO9_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_2rLSiDda_sendMessage);
}

void Heavy_Ambient::cBinop_E6XPY5lp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_ZbENUI1E_sendMessage);
}

void Heavy_Ambient::cRandom_U9TwXyrO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_E6XPY5lp_sendMessage);
}

void Heavy_Ambient::cSwitchcase_PT9rQD5S_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_0gW2BQfu, 0, m, &cSlice_0gW2BQfu_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_U9TwXyrO, 0, m, &cRandom_U9TwXyrO_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_0gW2BQfu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_U9TwXyrO, 1, m, &cRandom_U9TwXyrO_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cPack_O0aMK3iD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_PTCP9CZh, 0, m, NULL);
}

void Heavy_Ambient::cMsg_89bUCsHq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_axW2TNoz, HV_BINOP_SUBTRACT, 0, m, &cBinop_axW2TNoz_sendMessage);
}

void Heavy_Ambient::cBinop_8q6LNDyz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_uVXCSZzy, m);
}

void Heavy_Ambient::cMsg_Z21bQMPF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZV95g89U, 0, m, &cDelay_ZV95g89U_sendMessage);
}

void Heavy_Ambient::cDelay_ZV95g89U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ZV95g89U, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fwcCcJGY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KCry9YyA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eWOT6yhI_sendMessage);
}

void Heavy_Ambient::cCast_b8VhslrD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZV95g89U, 0, m, &cDelay_ZV95g89U_sendMessage);
}

void Heavy_Ambient::cSwitchcase_N0309cb1_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_Z21bQMPF_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_Z21bQMPF_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_ZV95g89U, 1, m, &cDelay_ZV95g89U_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_b8VhslrD_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_ssdusbtb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_dJunupIz, 1, m, &cRandom_dJunupIz_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cRandom_dJunupIz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_5yACTwAQ_sendMessage);
}

void Heavy_Ambient::cBinop_5yACTwAQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_oQH6u3kG_sendMessage);
}

void Heavy_Ambient::cUnop_oQH6u3kG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_IuBFieY1_sendMessage);
}

void Heavy_Ambient::cSwitchcase_nXXhzNCV_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ssdusbtb, 0, m, &cSlice_ssdusbtb_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_dJunupIz, 0, m, &cRandom_dJunupIz_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_kYAJucXz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_S71Fvuqu, HV_BINOP_MULTIPLY, 0, m, &cBinop_S71Fvuqu_sendMessage);
}

void Heavy_Ambient::cMsg_qSIY2jaU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_72XtMA3z, HV_BINOP_SUBTRACT, 0, m, &cBinop_72XtMA3z_sendMessage);
}

void Heavy_Ambient::cCast_JfpW7sQs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_89bUCsHq_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_eWOT6yhI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_N0309cb1_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_eAENmW0N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Chcilu2J, HV_BINOP_MULTIPLY, 1, m, &cBinop_Chcilu2J_sendMessage);
}

void Heavy_Ambient::cBinop_6GeWIpso_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_jMcKbNrb_sendMessage);
}

void Heavy_Ambient::cBinop_lQOgcNfH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vNEDeetq, 1, m, &cVar_vNEDeetq_sendMessage);
}

void Heavy_Ambient::cVar_93uNXWK3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ui4xFlbW_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_lg7RUtqZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vNEDeetq, 1, m, &cVar_vNEDeetq_sendMessage);
}

void Heavy_Ambient::cSlice_f1HFzAPQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5a7r3c6U_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7wVRqcZo_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_BXyPmW1D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ccrX6zFY_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1w6I3nDq_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cVar_FV1v7Nq0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_s1rupZup, 0, m, &cVar_s1rupZup_sendMessage);
}

void Heavy_Ambient::cMsg_w0IE3uPV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_dQK42kUk_sendMessage);
}

void Heavy_Ambient::cSystem_dQK42kUk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6GeWIpso, HV_BINOP_MULTIPLY, 1, m, &cBinop_6GeWIpso_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_NFNdtQKt, HV_BINOP_MULTIPLY, 1, m, &cBinop_NFNdtQKt_sendMessage);
}

void Heavy_Ambient::cVar_AZVqBIZm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ccrX6zFY_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1w6I3nDq_sendMessage);
}

void Heavy_Ambient::cMsg_O8Xo11Il_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_otj8rLRb_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_oPtIOjZa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RoaxD8Mx, HV_BINOP_ADD, 1, m, &cBinop_RoaxD8Mx_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ls13K5Wh, HV_BINOP_ADD, 1, m, &cBinop_ls13K5Wh_sendMessage);
}

void Heavy_Ambient::cBinop_Be2XMazV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_NIYQ5RI1_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_lOPFmJgY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FV1v7Nq0, 0, m, &cVar_FV1v7Nq0_sendMessage);
}

void Heavy_Ambient::cMsg_4Z56heRa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_otj8rLRb_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_RoaxD8Mx, HV_BINOP_ADD, 1, m, &cBinop_RoaxD8Mx_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ls13K5Wh, HV_BINOP_ADD, 1, m, &cBinop_ls13K5Wh_sendMessage);
}

void Heavy_Ambient::cCast_Xkx7I9YT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aXcKkxw9_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_jMcKbNrb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lg7RUtqZ, HV_BINOP_SUBTRACT, 1, m, &cBinop_lg7RUtqZ_sendMessage);
}

void Heavy_Ambient::cCast_5a7r3c6U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FV1v7Nq0, 1, m, &cVar_FV1v7Nq0_sendMessage);
}

void Heavy_Ambient::cCast_1w6I3nDq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QB54hYWE, HV_BINOP_DIVIDE, 0, m, &cBinop_QB54hYWE_sendMessage);
}

void Heavy_Ambient::cCast_pnWN7XU3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AZVqBIZm, 0, m, &cVar_AZVqBIZm_sendMessage);
}

void Heavy_Ambient::cCast_aUJwhTTg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PsM5K1o4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lOPFmJgY_sendMessage);
}

void Heavy_Ambient::cCast_fbeTAbvP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_s1rupZup, 0, m, &cVar_s1rupZup_sendMessage);
}

void Heavy_Ambient::cSwitchcase_NIYQ5RI1_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fbeTAbvP_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aUJwhTTg_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cVar_s1rupZup_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ls13K5Wh, HV_BINOP_ADD, 0, m, &cBinop_ls13K5Wh_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_RoaxD8Mx, HV_BINOP_ADD, 0, m, &cBinop_RoaxD8Mx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xsAgDGid_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KYb8Vdha_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_M21iepwn_sendMessage);
}

void Heavy_Ambient::cBinop_NFNdtQKt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_lQOgcNfH_sendMessage);
}

void Heavy_Ambient::cCast_voJd80uC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9OSv0rC1_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_pj3LVDRb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2XGLq8pj_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_RoaxD8Mx, HV_BINOP_ADD, 0, m, &cBinop_RoaxD8Mx_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_s1rupZup, 1, m, &cVar_s1rupZup_sendMessage);
}

void Heavy_Ambient::cSlice_UM1pCcok_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pgMgDrrx_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pj3LVDRb_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pgMgDrrx_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pj3LVDRb_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_UE47wLPO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_O8Xo11Il_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_O8Xo11Il_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_AkU6Gbaj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UE47wLPO, 0, m, &cSlice_UE47wLPO_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UM1pCcok, 0, m, &cSlice_UM1pCcok_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pnWN7XU3_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_BXyPmW1D, 0, m, &cSlice_BXyPmW1D_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_f1HFzAPQ, 0, m, &cSlice_f1HFzAPQ_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_voJd80uC_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Xkx7I9YT_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_ccrX6zFY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NFNdtQKt, HV_BINOP_MULTIPLY, 0, m, &cBinop_NFNdtQKt_sendMessage);
}

void Heavy_Ambient::cCast_Y06IgEJ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Lo6UqwAL_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_ui4xFlbW_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Y06IgEJ6_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_6GeWIpso, HV_BINOP_MULTIPLY, 0, m, &cBinop_6GeWIpso_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_QB54hYWE, HV_BINOP_DIVIDE, 1, m, &cBinop_QB54hYWE_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_ihg8ufbc, 0, m, &cVar_ihg8ufbc_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_9OSv0rC1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_otj8rLRb_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_RoaxD8Mx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2yoyAoj2, 0, m, &cVar_2yoyAoj2_sendMessage);
}

void Heavy_Ambient::cCast_2XGLq8pj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4Z56heRa_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_PsM5K1o4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4Z56heRa_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_pgMgDrrx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_O8Xo11Il_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_7wVRqcZo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6m0fRad2, HV_BINOP_SUBTRACT, 0, m, &cBinop_6m0fRad2_sendMessage);
}

void Heavy_Ambient::cBinop_ls13K5Wh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_s1rupZup, 1, m, &cVar_s1rupZup_sendMessage);
}

void Heavy_Ambient::cMsg_aXcKkxw9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_AZVqBIZm, 1, m, &cVar_AZVqBIZm_sendMessage);
}

void Heavy_Ambient::cMsg_BXCuuyB9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_1W2VrZPz, 0, m, &cDelay_1W2VrZPz_sendMessage);
}

void Heavy_Ambient::cVar_ihg8ufbc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IEj2QZEM, HV_BINOP_MULTIPLY, 0, m, &cBinop_IEj2QZEM_sendMessage);
}

void Heavy_Ambient::cBinop_d9wJJ8Ht_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_1W2VrZPz, 2, m, &cDelay_1W2VrZPz_sendMessage);
}

void Heavy_Ambient::cBinop_IEj2QZEM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_d9wJJ8Ht_sendMessage);
}

void Heavy_Ambient::cDelay_1W2VrZPz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_1W2VrZPz, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_1W2VrZPz, 0, m, &cDelay_1W2VrZPz_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_vNEDeetq, 0, m, &cVar_vNEDeetq_sendMessage);
}

void Heavy_Ambient::cMsg_YmhuDFZ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_iKxMo298_sendMessage);
}

void Heavy_Ambient::cSystem_iKxMo298_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_GV6OK5uI_sendMessage);
}

void Heavy_Ambient::cBinop_GV6OK5uI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IEj2QZEM, HV_BINOP_MULTIPLY, 1, m, &cBinop_IEj2QZEM_sendMessage);
}

void Heavy_Ambient::cCast_sgowQ8Ik_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BXCuuyB9_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_1W2VrZPz, 0, m, &cDelay_1W2VrZPz_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_vNEDeetq, 0, m, &cVar_vNEDeetq_sendMessage);
}

void Heavy_Ambient::cSwitchcase_otj8rLRb_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_BXCuuyB9_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_BXCuuyB9_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sgowQ8Ik_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cVar_vNEDeetq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lg7RUtqZ, HV_BINOP_SUBTRACT, 0, m, &cBinop_lg7RUtqZ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_Be2XMazV_sendMessage);
}

void Heavy_Ambient::cMsg_Lo6UqwAL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_6GeWIpso, HV_BINOP_MULTIPLY, 0, m, &cBinop_6GeWIpso_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QB54hYWE, HV_BINOP_DIVIDE, 1, m, &cBinop_QB54hYWE_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ihg8ufbc, 0, m, &cVar_ihg8ufbc_sendMessage);
}

void Heavy_Ambient::cBinop_QB54hYWE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oPtIOjZa, HV_BINOP_DIVIDE, 1, m, &cBinop_oPtIOjZa_sendMessage);
}

void Heavy_Ambient::cVar_2yoyAoj2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6m0fRad2, HV_BINOP_SUBTRACT, 1, m, &cBinop_6m0fRad2_sendMessage);
}

void Heavy_Ambient::cBinop_6m0fRad2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oPtIOjZa, HV_BINOP_DIVIDE, 0, m, &cBinop_oPtIOjZa_sendMessage);
}

void Heavy_Ambient::cBinop_72XtMA3z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nMIhLlsr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kYAJucXz_sendMessage);
}

void Heavy_Ambient::cCast_V9JaQsoz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_axW2TNoz, HV_BINOP_SUBTRACT, 1, m, &cBinop_axW2TNoz_sendMessage);
}

void Heavy_Ambient::cPack_wJtCI8Lx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_AkU6Gbaj_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_ERnJ9U7I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_wJtCI8Lx, 1, m, &cPack_wJtCI8Lx_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZV95g89U, 1, m, &cDelay_ZV95g89U_sendMessage);
}

void Heavy_Ambient::cCast_99btTM1n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ltVQ2UCU, HV_BINOP_SUBTRACT, 1, m, &cBinop_ltVQ2UCU_sendMessage);
}

void Heavy_Ambient::cBinop_axW2TNoz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_8q6LNDyz_sendMessage);
}

void Heavy_Ambient::cBinop_LmTsIRrj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_72C0EA3k, m);
}

void Heavy_Ambient::cCast_xsAgDGid_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_72XtMA3z, HV_BINOP_SUBTRACT, 1, m, &cBinop_72XtMA3z_sendMessage);
}

void Heavy_Ambient::cCast_nMIhLlsr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_S71Fvuqu, HV_BINOP_MULTIPLY, 1, m, &cBinop_S71Fvuqu_sendMessage);
}

void Heavy_Ambient::cBinop_ltVQ2UCU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_LmTsIRrj_sendMessage);
}

void Heavy_Ambient::cCast_eqX2OoYn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uMEILBsN_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_KCry9YyA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_nXXhzNCV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_KYb8Vdha_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qSIY2jaU_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_s9ROOtdM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Chcilu2J, HV_BINOP_MULTIPLY, 0, m, &cBinop_Chcilu2J_sendMessage);
}

void Heavy_Ambient::cBinop_S71Fvuqu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_V9JaQsoz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JfpW7sQs_sendMessage);
}

void Heavy_Ambient::cBinop_Chcilu2J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_99btTM1n_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eqX2OoYn_sendMessage);
}

void Heavy_Ambient::cRandom_NpYBKHuP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_VSSwZfs3_sendMessage);
}

void Heavy_Ambient::cUnop_GUvOa3gn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_ERnJ9U7I_sendMessage);
}

void Heavy_Ambient::cSwitchcase_VYdLUXOZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_OG9U7JNH, 0, m, &cSlice_OG9U7JNH_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_NpYBKHuP, 0, m, &cRandom_NpYBKHuP_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_OG9U7JNH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_NpYBKHuP, 1, m, &cRandom_NpYBKHuP_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_VSSwZfs3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_GUvOa3gn_sendMessage);
}

void Heavy_Ambient::cCast_M21iepwn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eAENmW0N_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_s9ROOtdM_sendMessage);
}

void Heavy_Ambient::cCast_fwcCcJGY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_VYdLUXOZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_uMEILBsN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ltVQ2UCU, HV_BINOP_SUBTRACT, 0, m, &cBinop_ltVQ2UCU_sendMessage);
}

void Heavy_Ambient::cBinop_IuBFieY1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_wJtCI8Lx, 0, m, &cPack_wJtCI8Lx_sendMessage);
}

void Heavy_Ambient::cBinop_2rLSiDda_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_OVw8ze61, 0, m, &cPack_OVw8ze61_sendMessage);
}

void Heavy_Ambient::cMsg_vyTmAI0S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_lrgfkOaO_sendMessage);
}

void Heavy_Ambient::cBinop_3j5bkqJs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_WeT7a3eJ, m);
}

void Heavy_Ambient::cBinop_ew2XQdOQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Ctxyal7S, m);
}

void Heavy_Ambient::cBinop_qIivwnur_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_wlthupOS, 1, m, &cIf_wlthupOS_sendMessage);
}

void Heavy_Ambient::cIf_wlthupOS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_JNXXcHUN_sendMessage(_c, 0, m);
      cMsg_3GIcH7bo_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_s5KaJE3e_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_ztlEFPUn_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_iD87VwlW, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cMsg_3jNZCmRO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_3j5bkqJs_sendMessage);
}

void Heavy_Ambient::cMsg_TLQUoYtd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ew2XQdOQ_sendMessage);
}

void Heavy_Ambient::cVar_VHu7B7JN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_qIivwnur_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_wlthupOS, 0, m, &cIf_wlthupOS_sendMessage);
}

void Heavy_Ambient::cMsg_s5KaJE3e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_a6B2IWw9_sendMessage);
}

void Heavy_Ambient::cMsg_3GIcH7bo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_iaq66yxr, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_iD87VwlW, m);
}

void Heavy_Ambient::cMsg_xWPyStpk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BKkelnXn_sendMessage);
}

void Heavy_Ambient::cSystem_BKkelnXn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3jNZCmRO_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_JNXXcHUN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_ztlEFPUn_sendMessage);
}

void Heavy_Ambient::cBinop_lrgfkOaO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TLQUoYtd_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_a6B2IWw9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iaq66yxr, m);
}

void Heavy_Ambient::cBinop_ztlEFPUn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vyTmAI0S_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cUnop_3CXiUGmg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_Ik9kYoln_sendMessage);
}

void Heavy_Ambient::cRandom_rCprS9yY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_6QdcBccb_sendMessage);
}

void Heavy_Ambient::cBinop_6QdcBccb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_3CXiUGmg_sendMessage);
}

void Heavy_Ambient::cSlice_eyEdgQkW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_rCprS9yY, 1, m, &cRandom_rCprS9yY_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_BEBuwhLo_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_eyEdgQkW, 0, m, &cSlice_eyEdgQkW_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_rCprS9yY, 0, m, &cRandom_rCprS9yY_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_dmtgh4pN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RSuToo81, 0, m, &cVar_RSuToo81_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_VlllOoNZ, 1, m, &cPack_VlllOoNZ_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_9V9SweVU, 1, m, &cPack_9V9SweVU_sendMessage);
}

void Heavy_Ambient::cSlice_IGLTGarF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_sibzE25p, 1, m, &cRandom_sibzE25p_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_IH0c4wB2_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_IGLTGarF, 0, m, &cSlice_IGLTGarF_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_sibzE25p, 0, m, &cRandom_sibzE25p_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_H9Zg87xo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_V86VVJmJ_sendMessage);
}

void Heavy_Ambient::cUnop_V86VVJmJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2000.0f, 0, m, &cBinop_g3jaVqyx_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_AE8DA2EY_sendMessage);
}

void Heavy_Ambient::cRandom_sibzE25p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_H9Zg87xo_sendMessage);
}

void Heavy_Ambient::cBinop_AE8DA2EY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_9V9SweVU, 0, m, &cPack_9V9SweVU_sendMessage);
}

void Heavy_Ambient::cCast_eH3mFrPx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Ambient::cBinop_g3jaVqyx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_VlllOoNZ, 0, m, &cPack_VlllOoNZ_sendMessage);
}

void Heavy_Ambient::cCast_M3jit7t5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SyHWu9tL_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_aY6h9uYQ, 0, m, &cDelay_aY6h9uYQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eXqOL0QT_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eH3mFrPx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cCFSNIXT_sendMessage);
}

void Heavy_Ambient::cDelay_aY6h9uYQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_aY6h9uYQ, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_aY6h9uYQ, 0, m, &cDelay_aY6h9uYQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eXqOL0QT_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eH3mFrPx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cCFSNIXT_sendMessage);
}

void Heavy_Ambient::cBinop_xEtPU3cT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_ErFPMbH0_sendMessage);
}

void Heavy_Ambient::cMsg_SyHWu9tL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_aY6h9uYQ, 0, m, &cDelay_aY6h9uYQ_sendMessage);
}

void Heavy_Ambient::cMsg_aEbZCXtE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_XKKI91a4_sendMessage);
}

void Heavy_Ambient::cSystem_XKKI91a4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_qdkD7OZK_sendMessage);
}

void Heavy_Ambient::cSwitchcase_8HyXBsBm_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_SyHWu9tL_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_SyHWu9tL_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M3jit7t5_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cVar_RSuToo81_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xEtPU3cT, HV_BINOP_MULTIPLY, 0, m, &cBinop_xEtPU3cT_sendMessage);
}

void Heavy_Ambient::cBinop_ErFPMbH0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_aY6h9uYQ, 2, m, &cDelay_aY6h9uYQ_sendMessage);
}

void Heavy_Ambient::cBinop_qdkD7OZK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xEtPU3cT, HV_BINOP_MULTIPLY, 1, m, &cBinop_xEtPU3cT_sendMessage);
}

void Heavy_Ambient::cBinop_HzUPX6uQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LEW1UPSU, m);
}

void Heavy_Ambient::cMsg_1x8KlQ6p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_rLJkfdV5, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_0MwW1bp5, m);
}

void Heavy_Ambient::cMsg_QxZ6MJtY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_3hCKxjPj_sendMessage);
}

void Heavy_Ambient::cIf_BT0rVAFn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_04sJfX91_sendMessage(_c, 0, m);
      cMsg_1x8KlQ6p_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_uJaSSAFx_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_CL49wFHR_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_0MwW1bp5, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_DdNwBofK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_BT0rVAFn, 1, m, &cIf_BT0rVAFn_sendMessage);
}

void Heavy_Ambient::cBinop_9LTKMBYy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rLJkfdV5, m);
}

void Heavy_Ambient::cMsg_04sJfX91_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_CL49wFHR_sendMessage);
}

void Heavy_Ambient::cBinop_7PwvnTOs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QxZ6MJtY_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_CL49wFHR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ew4LSjnr_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cVar_irwwzLr7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_DdNwBofK_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_BT0rVAFn, 0, m, &cIf_BT0rVAFn_sendMessage);
}

void Heavy_Ambient::cMsg_uJaSSAFx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_9LTKMBYy_sendMessage);
}

void Heavy_Ambient::cMsg_Ew4LSjnr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_7PwvnTOs_sendMessage);
}

void Heavy_Ambient::cMsg_fbDAeVDC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_HzUPX6uQ_sendMessage);
}

void Heavy_Ambient::cBinop_3hCKxjPj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_JCCZhyeK, m);
}

void Heavy_Ambient::cSystem_rFMbOSYt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fbDAeVDC_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_EwMzliFP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_rFMbOSYt_sendMessage);
}

void Heavy_Ambient::cCast_cCFSNIXT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_IH0c4wB2_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_XprDPrMA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_sLp5nVTH, 1, m, &cPack_sLp5nVTH_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZsZ8sOSK, 1, m, &cDelay_ZsZ8sOSK_sendMessage);
}

void Heavy_Ambient::cCast_k3wbUCrR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uuSB8nKl_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_riBafQ22_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_iOTx5EKN, HV_BINOP_SUBTRACT, 0, m, &cBinop_iOTx5EKN_sendMessage);
}

void Heavy_Ambient::cBinop_KmiqgYsj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_RUGDNAhE, m);
}

void Heavy_Ambient::cCast_2k4CUcya_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_kfnJqfqQ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_xUn4ns1R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HBe7UQ8F, HV_BINOP_MULTIPLY, 1, m, &cBinop_HBe7UQ8F_sendMessage);
}

void Heavy_Ambient::cMsg_uuSB8nKl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_JHFcYeZD, HV_BINOP_SUBTRACT, 0, m, &cBinop_JHFcYeZD_sendMessage);
}

void Heavy_Ambient::cPack_sLp5nVTH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_KnRy97dn_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_HBe7UQ8F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hRPGb2fr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eiKVFxM4_sendMessage);
}

void Heavy_Ambient::cCast_6D46hZ1r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eTynncJ6, HV_BINOP_MULTIPLY, 1, m, &cBinop_eTynncJ6_sendMessage);
}

void Heavy_Ambient::cCast_1ERwrkcG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iOTx5EKN, HV_BINOP_SUBTRACT, 1, m, &cBinop_iOTx5EKN_sendMessage);
}

void Heavy_Ambient::cSlice_Molv29Ly_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_72Rg4mB7, 1, m, &cRandom_72Rg4mB7_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_kfnJqfqQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Molv29Ly, 0, m, &cSlice_Molv29Ly_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_72Rg4mB7, 0, m, &cRandom_72Rg4mB7_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_72Rg4mB7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_lvCGdJsj_sendMessage);
}

void Heavy_Ambient::cBinop_lvCGdJsj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_PvsCL1Rf_sendMessage);
}

void Heavy_Ambient::cUnop_PvsCL1Rf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_XprDPrMA_sendMessage);
}

void Heavy_Ambient::cCast_C27mSGQ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JHFcYeZD, HV_BINOP_SUBTRACT, 1, m, &cBinop_JHFcYeZD_sendMessage);
}

void Heavy_Ambient::cMsg_ZZycJbjb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZsZ8sOSK, 0, m, &cDelay_ZsZ8sOSK_sendMessage);
}

void Heavy_Ambient::cCast_53BzcnOJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZsZ8sOSK, 0, m, &cDelay_ZsZ8sOSK_sendMessage);
}

void Heavy_Ambient::cSwitchcase_ltI04Lco_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_ZZycJbjb_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_ZZycJbjb_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_ZsZ8sOSK, 1, m, &cDelay_ZsZ8sOSK_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_53BzcnOJ_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cDelay_ZsZ8sOSK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ZsZ8sOSK, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2k4CUcya_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5uSj1NH0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M8Ki7u2O_sendMessage);
}

void Heavy_Ambient::cBinop_Et36n7wp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xiPXVgtF, m);
}

void Heavy_Ambient::cCast_hRPGb2fr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IJ9TB99P, HV_BINOP_SUBTRACT, 1, m, &cBinop_IJ9TB99P_sendMessage);
}

void Heavy_Ambient::cBinop_9XmwE70q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_sLp5nVTH, 0, m, &cPack_sLp5nVTH_sendMessage);
}

void Heavy_Ambient::cMsg_po9uStky_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_IJ9TB99P, HV_BINOP_SUBTRACT, 0, m, &cBinop_IJ9TB99P_sendMessage);
}

void Heavy_Ambient::cBinop_IJ9TB99P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_Et36n7wp_sendMessage);
}

void Heavy_Ambient::cMsg_g7jwIfMc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_g43WxvPG_sendMessage);
}

void Heavy_Ambient::cSystem_g43WxvPG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Quyd1IJK, HV_BINOP_MULTIPLY, 1, m, &cBinop_Quyd1IJK_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_r5YJRnPq, HV_BINOP_MULTIPLY, 1, m, &cBinop_r5YJRnPq_sendMessage);
}

void Heavy_Ambient::cCast_anD9dMnx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_e5Oty5rl_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_iQx0bhX8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PmiX8ie7, HV_BINOP_SUBTRACT, 0, m, &cBinop_PmiX8ie7_sendMessage);
}

void Heavy_Ambient::cCast_cvBKhV4a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_r5YJRnPq, HV_BINOP_MULTIPLY, 0, m, &cBinop_r5YJRnPq_sendMessage);
}

void Heavy_Ambient::cSlice_lrgwOVy8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_khwiRiNi_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sKH42xQ5_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_khwiRiNi_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sKH42xQ5_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_KnRy97dn_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_AtsTFJXi, 0, m, &cSlice_AtsTFJXi_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_lrgwOVy8, 0, m, &cSlice_lrgwOVy8_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OJnIAEQK_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_2dZRkZA3, 0, m, &cSlice_2dZRkZA3_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_08mqknHJ, 0, m, &cSlice_08mqknHJ_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eCl47II2_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eXdJ5JYS_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_AtsTFJXi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_k7aAMjqi_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_k7aAMjqi_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_xX7fGcA8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9lGFNTB9, HV_BINOP_DIVIDE, 1, m, &cBinop_9lGFNTB9_sendMessage);
}

void Heavy_Ambient::cBinop_r5YJRnPq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_6lBjvNON_sendMessage);
}

void Heavy_Ambient::cCast_glCTuv53_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_e5Oty5rl_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_Quyd1IJK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_CsilKPZY_sendMessage);
}

void Heavy_Ambient::cMsg_8JbdSsJ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_KpXlx5hN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_pGqKvFnC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_anD9dMnx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ATaJFPWL_sendMessage);
}

void Heavy_Ambient::cCast_nIFT3tob_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HIFwDSsz, 0, m, &cVar_HIFwDSsz_sendMessage);
}

void Heavy_Ambient::cSwitchcase_DY2b7PKp_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nIFT3tob_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pGqKvFnC_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cVar_U6TwmZP4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aZNgUb5X, HV_BINOP_SUBTRACT, 0, m, &cBinop_aZNgUb5X_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_EH2BXLX3_sendMessage);
}

void Heavy_Ambient::cVar_HIFwDSsz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_O5lG9FpQ, HV_BINOP_ADD, 0, m, &cBinop_O5lG9FpQ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_6PNtCV6w, HV_BINOP_ADD, 0, m, &cBinop_6PNtCV6w_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1ERwrkcG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aedeUwhO_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IqyKpYjN_sendMessage);
}

void Heavy_Ambient::cBinop_6lBjvNON_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_U6TwmZP4, 1, m, &cVar_U6TwmZP4_sendMessage);
}

void Heavy_Ambient::cCast_oe4xDtWN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qRtHHFTN_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_pd1xwNIh_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oe4xDtWN_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_Quyd1IJK, HV_BINOP_MULTIPLY, 0, m, &cBinop_Quyd1IJK_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_xX7fGcA8, HV_BINOP_DIVIDE, 1, m, &cBinop_xX7fGcA8_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_14ZABYlW, 0, m, &cVar_14ZABYlW_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_ATaJFPWL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_866EVuXn, 0, m, &cVar_866EVuXn_sendMessage);
}

void Heavy_Ambient::cCast_OJnIAEQK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TyoVdX3n, 0, m, &cVar_TyoVdX3n_sendMessage);
}

void Heavy_Ambient::cBinop_6PNtCV6w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_82Q5Ikps, 0, m, &cVar_82Q5Ikps_sendMessage);
}

void Heavy_Ambient::cSlice_08mqknHJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kPz9kBXE_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iQx0bhX8_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_2dZRkZA3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cvBKhV4a_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PxH3wByI_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cCast_kPz9kBXE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_866EVuXn, 1, m, &cVar_866EVuXn_sendMessage);
}

void Heavy_Ambient::cBinop_O5lG9FpQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HIFwDSsz, 1, m, &cVar_HIFwDSsz_sendMessage);
}

void Heavy_Ambient::cCast_sKH42xQ5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_glCTuv53_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_6PNtCV6w, HV_BINOP_ADD, 0, m, &cBinop_6PNtCV6w_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_HIFwDSsz, 1, m, &cVar_HIFwDSsz_sendMessage);
}

void Heavy_Ambient::cMsg_k7aAMjqi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_KpXlx5hN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_31WXhXvk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_TyoVdX3n, 1, m, &cVar_TyoVdX3n_sendMessage);
}

void Heavy_Ambient::cBinop_PmiX8ie7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9lGFNTB9, HV_BINOP_DIVIDE, 0, m, &cBinop_9lGFNTB9_sendMessage);
}

void Heavy_Ambient::cCast_5kS9TlK6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NvqydaMD_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_6AKFU4N0, 0, m, &cDelay_6AKFU4N0_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_U6TwmZP4, 0, m, &cVar_U6TwmZP4_sendMessage);
}

void Heavy_Ambient::cSwitchcase_KpXlx5hN_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_NvqydaMD_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_NvqydaMD_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5kS9TlK6_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_Csfdga5Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_6AKFU4N0, 2, m, &cDelay_6AKFU4N0_sendMessage);
}

void Heavy_Ambient::cSystem_A7czQaBW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_VPA4m0uP_sendMessage);
}

void Heavy_Ambient::cMsg_AphBEfF8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_A7czQaBW_sendMessage);
}

void Heavy_Ambient::cMsg_NvqydaMD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_6AKFU4N0, 0, m, &cDelay_6AKFU4N0_sendMessage);
}

void Heavy_Ambient::cVar_14ZABYlW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zIFn8Pmy, HV_BINOP_MULTIPLY, 0, m, &cBinop_zIFn8Pmy_sendMessage);
}

void Heavy_Ambient::cDelay_6AKFU4N0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_6AKFU4N0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_6AKFU4N0, 0, m, &cDelay_6AKFU4N0_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_U6TwmZP4, 0, m, &cVar_U6TwmZP4_sendMessage);
}

void Heavy_Ambient::cBinop_zIFn8Pmy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Csfdga5Z_sendMessage);
}

void Heavy_Ambient::cBinop_VPA4m0uP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zIFn8Pmy, HV_BINOP_MULTIPLY, 1, m, &cBinop_zIFn8Pmy_sendMessage);
}

void Heavy_Ambient::cBinop_9lGFNTB9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6PNtCV6w, HV_BINOP_ADD, 1, m, &cBinop_6PNtCV6w_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_O5lG9FpQ, HV_BINOP_ADD, 1, m, &cBinop_O5lG9FpQ_sendMessage);
}

void Heavy_Ambient::cVar_866EVuXn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HIFwDSsz, 0, m, &cVar_HIFwDSsz_sendMessage);
}

void Heavy_Ambient::cMsg_e5Oty5rl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_KpXlx5hN_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_6PNtCV6w, HV_BINOP_ADD, 1, m, &cBinop_6PNtCV6w_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_O5lG9FpQ, HV_BINOP_ADD, 1, m, &cBinop_O5lG9FpQ_sendMessage);
}

void Heavy_Ambient::cBinop_CsilKPZY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aZNgUb5X, HV_BINOP_SUBTRACT, 1, m, &cBinop_aZNgUb5X_sendMessage);
}

void Heavy_Ambient::cBinop_aZNgUb5X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_U6TwmZP4, 1, m, &cVar_U6TwmZP4_sendMessage);
}

void Heavy_Ambient::cCast_khwiRiNi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_k7aAMjqi_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_eXdJ5JYS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_31WXhXvk_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cVar_82Q5Ikps_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PmiX8ie7, HV_BINOP_SUBTRACT, 1, m, &cBinop_PmiX8ie7_sendMessage);
}

void Heavy_Ambient::cBinop_EH2BXLX3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_DY2b7PKp_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_eCl47II2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8JbdSsJ3_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_PxH3wByI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xX7fGcA8, HV_BINOP_DIVIDE, 0, m, &cBinop_xX7fGcA8_sendMessage);
}

void Heavy_Ambient::cVar_TyoVdX3n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cvBKhV4a_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PxH3wByI_sendMessage);
}

void Heavy_Ambient::cMsg_qRtHHFTN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Quyd1IJK, HV_BINOP_MULTIPLY, 0, m, &cBinop_Quyd1IJK_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xX7fGcA8, HV_BINOP_DIVIDE, 1, m, &cBinop_xX7fGcA8_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_14ZABYlW, 0, m, &cVar_14ZABYlW_sendMessage);
}

void Heavy_Ambient::cVar_On9CkrTf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_pd1xwNIh_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_MKJrIfhH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eTynncJ6, HV_BINOP_MULTIPLY, 0, m, &cBinop_eTynncJ6_sendMessage);
}

void Heavy_Ambient::cCast_IqyKpYjN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6D46hZ1r_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MKJrIfhH_sendMessage);
}

void Heavy_Ambient::cCast_5uSj1NH0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_9SOTBNZe_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_aedeUwhO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_riBafQ22_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_M8Ki7u2O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ltI04Lco_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_eTynncJ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_C27mSGQ6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k3wbUCrR_sendMessage);
}

void Heavy_Ambient::cCast_6dajqUyT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HBe7UQ8F, HV_BINOP_MULTIPLY, 0, m, &cBinop_HBe7UQ8F_sendMessage);
}

void Heavy_Ambient::cUnop_UWyjLihi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_9XmwE70q_sendMessage);
}

void Heavy_Ambient::cBinop_Pud3uKAq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_UWyjLihi_sendMessage);
}

void Heavy_Ambient::cRandom_FHkqtMsi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_Pud3uKAq_sendMessage);
}

void Heavy_Ambient::cSlice_wLrLziQv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_FHkqtMsi, 1, m, &cRandom_FHkqtMsi_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_9SOTBNZe_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_wLrLziQv, 0, m, &cSlice_wLrLziQv_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_FHkqtMsi, 0, m, &cRandom_FHkqtMsi_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_iOTx5EKN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xUn4ns1R_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6dajqUyT_sendMessage);
}

void Heavy_Ambient::cCast_eiKVFxM4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_po9uStky_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_JHFcYeZD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_KmiqgYsj_sendMessage);
}

void Heavy_Ambient::cPack_9V9SweVU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_2nEjRgnK, 0, m, NULL);
}

void Heavy_Ambient::cUnop_M7rqb8gR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_dmtgh4pN_sendMessage);
}

void Heavy_Ambient::cSlice_nrsPlUqu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_yPKX5KCE, 1, m, &cRandom_yPKX5KCE_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_qkDJMS5t_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_nrsPlUqu, 0, m, &cSlice_nrsPlUqu_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_yPKX5KCE, 0, m, &cRandom_yPKX5KCE_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_yPKX5KCE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_wDl5ZJuR_sendMessage);
}

void Heavy_Ambient::cBinop_wDl5ZJuR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_M7rqb8gR_sendMessage);
}

void Heavy_Ambient::cCast_eXqOL0QT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qkDJMS5t_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cPack_VlllOoNZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Db76Xyoq, 0, m, NULL);
}

void Heavy_Ambient::cCast_D2OQweBu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ueXCK7dA, HV_BINOP_SUBTRACT, 1, m, &cBinop_ueXCK7dA_sendMessage);
}

void Heavy_Ambient::cPack_qxLkoyLE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_6cwEMC5l_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_DGMkAyva_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jeHUbcjq, HV_BINOP_MULTIPLY, 1, m, &cBinop_jeHUbcjq_sendMessage);
}

void Heavy_Ambient::cBinop_k94oTY35_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ihI7vTfK, m);
}

void Heavy_Ambient::cCast_iXE3uPR3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OO3N3krD_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_TzpDPZFP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_BxetiX25_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JwmaZMfc_sendMessage);
}

void Heavy_Ambient::cCast_BxetiX25_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5lYk9Whw, HV_BINOP_MULTIPLY, 1, m, &cBinop_5lYk9Whw_sendMessage);
}

void Heavy_Ambient::cBinop_jeHUbcjq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sKBlJ5WS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iXE3uPR3_sendMessage);
}

void Heavy_Ambient::cCast_j5AuW5Wy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jeHUbcjq, HV_BINOP_MULTIPLY, 0, m, &cBinop_jeHUbcjq_sendMessage);
}

void Heavy_Ambient::cSwitchcase_43qQu21d_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ArVetRiC, 0, m, &cSlice_ArVetRiC_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_IL14635g, 0, m, &cRandom_IL14635g_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_ArVetRiC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_IL14635g, 1, m, &cRandom_IL14635g_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_ZlzgUUry_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_n78KIARG_sendMessage);
}

void Heavy_Ambient::cRandom_IL14635g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_WkTb1LM5_sendMessage);
}

void Heavy_Ambient::cBinop_WkTb1LM5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_ZlzgUUry_sendMessage);
}

void Heavy_Ambient::cBinop_8NtAiuyA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_qxLkoyLE, 0, m, &cPack_qxLkoyLE_sendMessage);
}

void Heavy_Ambient::cCast_AYhrDqRI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0CUSbMO1_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_n78KIARG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_qxLkoyLE, 1, m, &cPack_qxLkoyLE_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_j0UViC3R, 1, m, &cDelay_j0UViC3R_sendMessage);
}

void Heavy_Ambient::cCast_jfQtmXDG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_43qQu21d_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cDelay_j0UViC3R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_j0UViC3R, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jfQtmXDG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vJJ7gaIV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EJbYzpE3_sendMessage);
}

void Heavy_Ambient::cMsg_AJzNUiDO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_j0UViC3R, 0, m, &cDelay_j0UViC3R_sendMessage);
}

void Heavy_Ambient::cSwitchcase_xplyySDR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_AJzNUiDO_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_AJzNUiDO_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_j0UViC3R, 1, m, &cDelay_j0UViC3R_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GU59ORpH_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_GU59ORpH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_j0UViC3R, 0, m, &cDelay_j0UViC3R_sendMessage);
}

void Heavy_Ambient::cCast_JwmaZMfc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5lYk9Whw, HV_BINOP_MULTIPLY, 0, m, &cBinop_5lYk9Whw_sendMessage);
}

void Heavy_Ambient::cBinop_5lYk9Whw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_D2OQweBu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MdzjvAjt_sendMessage);
}

void Heavy_Ambient::cMsg_0CUSbMO1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TzpDPZFP, HV_BINOP_SUBTRACT, 0, m, &cBinop_TzpDPZFP_sendMessage);
}

void Heavy_Ambient::cBinop_ueXCK7dA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_X7n3qGDX_sendMessage);
}

void Heavy_Ambient::cCast_sKBlJ5WS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_x64x2XkH, HV_BINOP_SUBTRACT, 1, m, &cBinop_x64x2XkH_sendMessage);
}

void Heavy_Ambient::cRandom_W3fIcNmu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_XLjYx8oQ_sendMessage);
}

void Heavy_Ambient::cUnop_Xz0B655E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_8NtAiuyA_sendMessage);
}

void Heavy_Ambient::cSlice_i0IrLwgV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_W3fIcNmu, 1, m, &cRandom_W3fIcNmu_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_oBkbJR7R_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_i0IrLwgV, 0, m, &cSlice_i0IrLwgV_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_W3fIcNmu, 0, m, &cRandom_W3fIcNmu_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_XLjYx8oQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_Xz0B655E_sendMessage);
}

void Heavy_Ambient::cCast_MdzjvAjt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kW6XPeJm_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_EJbYzpE3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_xplyySDR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_X7n3qGDX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_i504brLg, m);
}

void Heavy_Ambient::cBinop_x64x2XkH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_k94oTY35_sendMessage);
}

void Heavy_Ambient::cCast_KTQeD3ks_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TzpDPZFP, HV_BINOP_SUBTRACT, 1, m, &cBinop_TzpDPZFP_sendMessage);
}

void Heavy_Ambient::cCast_aqKuIOYT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DGMkAyva_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_j5AuW5Wy_sendMessage);
}

void Heavy_Ambient::cMsg_kW6XPeJm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ueXCK7dA, HV_BINOP_SUBTRACT, 0, m, &cBinop_ueXCK7dA_sendMessage);
}

void Heavy_Ambient::cCast_HQwRFmI0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QAgLeD9T, HV_BINOP_MULTIPLY, 0, m, &cBinop_QAgLeD9T_sendMessage);
}

void Heavy_Ambient::cCast_5sSsxd7R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6SKQuSYH_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_9GavhvWr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fQj7mnud, HV_BINOP_SUBTRACT, 0, m, &cBinop_fQj7mnud_sendMessage);
}

void Heavy_Ambient::cVar_F6YLyiG9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LbuXMHvh, HV_BINOP_SUBTRACT, 0, m, &cBinop_LbuXMHvh_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_X4NufLXc_sendMessage);
}

void Heavy_Ambient::cMsg_fWvgsmu9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_3BGU3g5J_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_nGdWwUNr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Skvt5D2R_sendMessage);
}

void Heavy_Ambient::cBinop_kI5fPeIJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Keb5c4FR, HV_BINOP_ADD, 1, m, &cBinop_Keb5c4FR_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_tImHrLBZ, HV_BINOP_ADD, 1, m, &cBinop_tImHrLBZ_sendMessage);
}

void Heavy_Ambient::cSlice_Lr0SNoIX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HQwRFmI0_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jISxksu3_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_LFlCzbc7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_A7hnkFfi_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9GavhvWr_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_fQj7mnud_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kI5fPeIJ, HV_BINOP_DIVIDE, 0, m, &cBinop_kI5fPeIJ_sendMessage);
}

void Heavy_Ambient::cVar_aw3Jz6mm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HQwRFmI0_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jISxksu3_sendMessage);
}

void Heavy_Ambient::cMsg_6SKQuSYH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_3BGU3g5J_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Keb5c4FR, HV_BINOP_ADD, 1, m, &cBinop_Keb5c4FR_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_tImHrLBZ, HV_BINOP_ADD, 1, m, &cBinop_tImHrLBZ_sendMessage);
}

void Heavy_Ambient::cBinop_LbuXMHvh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_F6YLyiG9, 1, m, &cVar_F6YLyiG9_sendMessage);
}

void Heavy_Ambient::cBinop_QAgLeD9T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_I3hsSkpr_sendMessage);
}

void Heavy_Ambient::cBinop_1vzw3b4s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kI5fPeIJ, HV_BINOP_DIVIDE, 1, m, &cBinop_kI5fPeIJ_sendMessage);
}

void Heavy_Ambient::cCast_i1PWmeit_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1ogWvFsC_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_3fRBZfDG, 0, m, &cDelay_3fRBZfDG_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_F6YLyiG9, 0, m, &cVar_F6YLyiG9_sendMessage);
}

void Heavy_Ambient::cDelay_3fRBZfDG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_3fRBZfDG, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_3fRBZfDG, 0, m, &cDelay_3fRBZfDG_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_F6YLyiG9, 0, m, &cVar_F6YLyiG9_sendMessage);
}

void Heavy_Ambient::cBinop_rMapoAiN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_3fRBZfDG, 2, m, &cDelay_3fRBZfDG_sendMessage);
}

void Heavy_Ambient::cBinop_6oL0NWZN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_n5pyDLHN, HV_BINOP_MULTIPLY, 1, m, &cBinop_n5pyDLHN_sendMessage);
}

void Heavy_Ambient::cMsg_1ogWvFsC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_3fRBZfDG, 0, m, &cDelay_3fRBZfDG_sendMessage);
}

void Heavy_Ambient::cVar_Kpe1d3RP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_n5pyDLHN, HV_BINOP_MULTIPLY, 0, m, &cBinop_n5pyDLHN_sendMessage);
}

void Heavy_Ambient::cMsg_VJlbv4vT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DoqRLRjZ_sendMessage);
}

void Heavy_Ambient::cSystem_DoqRLRjZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_6oL0NWZN_sendMessage);
}

void Heavy_Ambient::cBinop_n5pyDLHN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_rMapoAiN_sendMessage);
}

void Heavy_Ambient::cSwitchcase_3BGU3g5J_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_1ogWvFsC_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_1ogWvFsC_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_i1PWmeit_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_CTPPvZQF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6SKQuSYH_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cVar_O8Okp1f6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_xX4mc8Dw_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_lGUvxE9W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5sSsxd7R_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Keb5c4FR, HV_BINOP_ADD, 0, m, &cBinop_Keb5c4FR_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Gl6KVk3G, 1, m, &cVar_Gl6KVk3G_sendMessage);
}

void Heavy_Ambient::cBinop_Keb5c4FR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3I1XZeAP, 0, m, &cVar_3I1XZeAP_sendMessage);
}

void Heavy_Ambient::cVar_Gl6KVk3G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tImHrLBZ, HV_BINOP_ADD, 0, m, &cBinop_tImHrLBZ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Keb5c4FR, HV_BINOP_ADD, 0, m, &cBinop_Keb5c4FR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KTQeD3ks_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AYhrDqRI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aqKuIOYT_sendMessage);
}

void Heavy_Ambient::cMsg_QRzbIUii_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_3BGU3g5J_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_X4NufLXc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_3YVZ5MOI_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cVar_7xkOlHLo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gl6KVk3G, 0, m, &cVar_Gl6KVk3G_sendMessage);
}

void Heavy_Ambient::cCast_HkYEZ8D1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aw3Jz6mm, 0, m, &cVar_aw3Jz6mm_sendMessage);
}

void Heavy_Ambient::cBinop_Skvt5D2R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LbuXMHvh, HV_BINOP_SUBTRACT, 1, m, &cBinop_LbuXMHvh_sendMessage);
}

void Heavy_Ambient::cCast_A7hnkFfi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7xkOlHLo, 1, m, &cVar_7xkOlHLo_sendMessage);
}

void Heavy_Ambient::cMsg_ZlO6JaCI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Py5fQtDX_sendMessage);
}

void Heavy_Ambient::cSystem_Py5fQtDX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nGdWwUNr, HV_BINOP_MULTIPLY, 1, m, &cBinop_nGdWwUNr_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QAgLeD9T, HV_BINOP_MULTIPLY, 1, m, &cBinop_QAgLeD9T_sendMessage);
}

void Heavy_Ambient::cMsg_gtPAEnfN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_nGdWwUNr, HV_BINOP_MULTIPLY, 0, m, &cBinop_nGdWwUNr_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1vzw3b4s, HV_BINOP_DIVIDE, 1, m, &cBinop_1vzw3b4s_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Kpe1d3RP, 0, m, &cVar_Kpe1d3RP_sendMessage);
}

void Heavy_Ambient::cVar_3I1XZeAP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fQj7mnud, HV_BINOP_SUBTRACT, 1, m, &cBinop_fQj7mnud_sendMessage);
}

void Heavy_Ambient::cCast_jISxksu3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1vzw3b4s, HV_BINOP_DIVIDE, 0, m, &cBinop_1vzw3b4s_sendMessage);
}

void Heavy_Ambient::cCast_I5pctEwh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oLgQwefM_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_hzvZwI6t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7xkOlHLo, 0, m, &cVar_7xkOlHLo_sendMessage);
}

void Heavy_Ambient::cMsg_oLgQwefM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_aw3Jz6mm, 1, m, &cVar_aw3Jz6mm_sendMessage);
}

void Heavy_Ambient::cSlice_xRohhGaL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dOF2mcuT_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lGUvxE9W_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dOF2mcuT_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lGUvxE9W_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_6cwEMC5l_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_o2U2tDER, 0, m, &cSlice_o2U2tDER_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_xRohhGaL, 0, m, &cSlice_xRohhGaL_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HkYEZ8D1_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Lr0SNoIX, 0, m, &cSlice_Lr0SNoIX_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_LFlCzbc7, 0, m, &cSlice_LFlCzbc7_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_usxNDQdG_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_I5pctEwh_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_o2U2tDER_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_QRzbIUii_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_QRzbIUii_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_I3hsSkpr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_F6YLyiG9, 1, m, &cVar_F6YLyiG9_sendMessage);
}

void Heavy_Ambient::cBinop_tImHrLBZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gl6KVk3G, 1, m, &cVar_Gl6KVk3G_sendMessage);
}

void Heavy_Ambient::cCast_hT2OgTZX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CTPPvZQF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hzvZwI6t_sendMessage);
}

void Heavy_Ambient::cCast_BGQ11Kwv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gl6KVk3G, 0, m, &cVar_Gl6KVk3G_sendMessage);
}

void Heavy_Ambient::cSwitchcase_3YVZ5MOI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BGQ11Kwv_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hT2OgTZX_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cCast_usxNDQdG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fWvgsmu9_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_iFKJR3BO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gtPAEnfN_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_xX4mc8Dw_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iFKJR3BO_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_nGdWwUNr, HV_BINOP_MULTIPLY, 0, m, &cBinop_nGdWwUNr_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_1vzw3b4s, HV_BINOP_DIVIDE, 1, m, &cBinop_1vzw3b4s_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_Kpe1d3RP, 0, m, &cVar_Kpe1d3RP_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_dOF2mcuT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QRzbIUii_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_vJJ7gaIV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_oBkbJR7R_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_OO3N3krD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_x64x2XkH, HV_BINOP_SUBTRACT, 0, m, &cBinop_x64x2XkH_sendMessage);
}

void Heavy_Ambient::cCast_tMVAp6AF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Ambient::cBinop_xeNhCuWL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Wo0hGDNo, 0, m, &cPack_Wo0hGDNo_sendMessage);
}

void Heavy_Ambient::cCast_73feNVYw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_RPuDMJjj_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_bND8Y4AS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_I8zWsA4L_sendMessage);
}

void Heavy_Ambient::cSlice_1S4q3Upp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_QWsk6K9s, 1, m, &cRandom_QWsk6K9s_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_I8zWsA4L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_2dA5EaG8_sendMessage);
}

void Heavy_Ambient::cRandom_QWsk6K9s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_bND8Y4AS_sendMessage);
}

void Heavy_Ambient::cSwitchcase_MJyORd5C_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_1S4q3Upp, 0, m, &cSlice_1S4q3Upp_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_QWsk6K9s, 0, m, &cRandom_QWsk6K9s_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cPack_8PeHgOxK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_bOHgupoX, 0, m, NULL);
}

void Heavy_Ambient::cPack_Wo0hGDNo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_nhTOyfjt, 0, m, NULL);
}

void Heavy_Ambient::cVar_BJTkgrtf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_DiCQy2C0_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_wXPhHxP5, 0, m, &cIf_wXPhHxP5_sendMessage);
}

void Heavy_Ambient::cMsg_Xi6huMnd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_l6l1RqQ8_sendMessage);
}

void Heavy_Ambient::cIf_wXPhHxP5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_AtHhOwCN_sendMessage(_c, 0, m);
      cMsg_1SJpkIDf_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_185T28bl_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_j6EFwSiM_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_nXqF4mYY, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_DiCQy2C0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_wXPhHxP5, 1, m, &cIf_wXPhHxP5_sendMessage);
}

void Heavy_Ambient::cBinop_WA1OF3UP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Xi6huMnd_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_1SJpkIDf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_lQMsinVE, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_nXqF4mYY, m);
}

void Heavy_Ambient::cMsg_185T28bl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_t7zNCnEC_sendMessage);
}

void Heavy_Ambient::cBinop_t7zNCnEC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lQMsinVE, m);
}

void Heavy_Ambient::cMsg_YMZvYdLT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_U7sjP51q_sendMessage);
}

void Heavy_Ambient::cBinop_j6EFwSiM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rMen0Wln_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_rMen0Wln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_WA1OF3UP_sendMessage);
}

void Heavy_Ambient::cBinop_U7sjP51q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5Yx160mC, m);
}

void Heavy_Ambient::cMsg_kV6fkRV9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_WHA5gqku_sendMessage);
}

void Heavy_Ambient::cSystem_WHA5gqku_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YMZvYdLT_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_AtHhOwCN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_j6EFwSiM_sendMessage);
}

void Heavy_Ambient::cBinop_l6l1RqQ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rZFqwUSH, m);
}

void Heavy_Ambient::cCast_eVhQASUj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_MJyORd5C_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_FMrGFq5t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_8PeHgOxK, 0, m, &cPack_8PeHgOxK_sendMessage);
}

void Heavy_Ambient::cBinop_2dA5EaG8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sxCCVpPm, 0, m, &cVar_sxCCVpPm_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_Wo0hGDNo, 1, m, &cPack_Wo0hGDNo_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_8PeHgOxK, 1, m, &cPack_8PeHgOxK_sendMessage);
}

void Heavy_Ambient::cBinop_qmZ05r4q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_RbvGGtDK_sendMessage);
}

void Heavy_Ambient::cMsg_AZTC6TrJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_O53c1xVS, 0, m, &cDelay_O53c1xVS_sendMessage);
}

void Heavy_Ambient::cMsg_OgplwNVy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_oTuPjpa8_sendMessage);
}

void Heavy_Ambient::cSystem_oTuPjpa8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_BtnRRsmY_sendMessage);
}

void Heavy_Ambient::cSwitchcase_ekS6Xe5m_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_AZTC6TrJ_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_AZTC6TrJ_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YUi2dA1m_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_YUi2dA1m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_AZTC6TrJ_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_O53c1xVS, 0, m, &cDelay_O53c1xVS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eVhQASUj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tMVAp6AF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_73feNVYw_sendMessage);
}

void Heavy_Ambient::cDelay_O53c1xVS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_O53c1xVS, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_O53c1xVS, 0, m, &cDelay_O53c1xVS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eVhQASUj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tMVAp6AF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_73feNVYw_sendMessage);
}

void Heavy_Ambient::cVar_sxCCVpPm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qmZ05r4q, HV_BINOP_MULTIPLY, 0, m, &cBinop_qmZ05r4q_sendMessage);
}

void Heavy_Ambient::cBinop_BtnRRsmY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qmZ05r4q, HV_BINOP_MULTIPLY, 1, m, &cBinop_qmZ05r4q_sendMessage);
}

void Heavy_Ambient::cBinop_RbvGGtDK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_O53c1xVS, 2, m, &cDelay_O53c1xVS_sendMessage);
}

void Heavy_Ambient::cSlice_Nhgwp8Aw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_P4pu89Ca, 1, m, &cRandom_P4pu89Ca_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_RPuDMJjj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Nhgwp8Aw, 0, m, &cSlice_Nhgwp8Aw_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_P4pu89Ca, 0, m, &cRandom_P4pu89Ca_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_Wx4ArgVW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_BbvrZJl9_sendMessage);
}

void Heavy_Ambient::cUnop_BbvrZJl9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 50.0f, 0, m, &cBinop_xeNhCuWL_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_FMrGFq5t_sendMessage);
}

void Heavy_Ambient::cRandom_P4pu89Ca_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_Wx4ArgVW_sendMessage);
}

void Heavy_Ambient::cMsg_qbBWDlVw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_hRL1ePzl_sendMessage);
}

void Heavy_Ambient::cBinop_Xw5fFj7L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_tCbwuwsd, m);
}

void Heavy_Ambient::cMsg_qZrWTZ7N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_rEoFt2Pv_sendMessage);
}

void Heavy_Ambient::cVar_BxGqebHR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_nxqFNT2A_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_6Yy4p31e, 0, m, &cIf_6Yy4p31e_sendMessage);
}

void Heavy_Ambient::cMsg_BaHnpBZX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Xw5fFj7L_sendMessage);
}

void Heavy_Ambient::cIf_6Yy4p31e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_DFKzbeA5_sendMessage(_c, 0, m);
      cMsg_9HjvIJM5_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_kcncLGYt_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_j3woOWDJ_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_AQCGwVEX, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_nxqFNT2A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_6Yy4p31e, 1, m, &cIf_6Yy4p31e_sendMessage);
}

void Heavy_Ambient::cMsg_DFKzbeA5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_j3woOWDJ_sendMessage);
}

void Heavy_Ambient::cMsg_o1z5A4BY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_eeplZ28E_sendMessage);
}

void Heavy_Ambient::cSystem_eeplZ28E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qZrWTZ7N_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_9HjvIJM5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_d0xlBOb9, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_AQCGwVEX, m);
}

void Heavy_Ambient::cBinop_rEoFt2Pv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5JtBFaJ0, m);
}

void Heavy_Ambient::cMsg_kcncLGYt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Kqkrza7q_sendMessage);
}

void Heavy_Ambient::cBinop_Kqkrza7q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_d0xlBOb9, m);
}

void Heavy_Ambient::cBinop_j3woOWDJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qbBWDlVw_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_hRL1ePzl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BaHnpBZX_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_GfZx5irB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_IMr1QnAi, 0, m, &cVar_IMr1QnAi_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_eFir6z0l, 1, m, &cPack_eFir6z0l_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_9gDn4Qdd, 1, m, &cPack_9gDn4Qdd_sendMessage);
}

void Heavy_Ambient::cRandom_ePdAEFtY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_0WZijmHt_sendMessage);
}

void Heavy_Ambient::cUnop_nefzkjdC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_GfZx5irB_sendMessage);
}

void Heavy_Ambient::cSwitchcase_CXQBf1sL_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Uc3GKrQF, 0, m, &cSlice_Uc3GKrQF_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_ePdAEFtY, 0, m, &cRandom_ePdAEFtY_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_0WZijmHt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_nefzkjdC_sendMessage);
}

void Heavy_Ambient::cSlice_Uc3GKrQF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_ePdAEFtY, 1, m, &cRandom_ePdAEFtY_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSystem_xOmaEUCY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_RezdFIvh_sendMessage);
}

void Heavy_Ambient::cMsg_tPkjmWmO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xOmaEUCY_sendMessage);
}

void Heavy_Ambient::cSwitchcase_m3zAetDM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_gOoOtzun_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_gOoOtzun_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gnZCu7Gv_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_wrZ4HcoC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_niRtbZsd, 2, m, &cDelay_niRtbZsd_sendMessage);
}

void Heavy_Ambient::cMsg_gOoOtzun_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_niRtbZsd, 0, m, &cDelay_niRtbZsd_sendMessage);
}

void Heavy_Ambient::cVar_IMr1QnAi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z5I5EDNU, HV_BINOP_MULTIPLY, 0, m, &cBinop_z5I5EDNU_sendMessage);
}

void Heavy_Ambient::cBinop_z5I5EDNU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_wrZ4HcoC_sendMessage);
}

void Heavy_Ambient::cDelay_niRtbZsd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_niRtbZsd, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_niRtbZsd, 0, m, &cDelay_niRtbZsd_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aJ03ZFzW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QL0cFgYg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ShtV4Ovq_sendMessage);
}

void Heavy_Ambient::cBinop_RezdFIvh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z5I5EDNU, HV_BINOP_MULTIPLY, 1, m, &cBinop_z5I5EDNU_sendMessage);
}

void Heavy_Ambient::cCast_gnZCu7Gv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gOoOtzun_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_niRtbZsd, 0, m, &cDelay_niRtbZsd_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aJ03ZFzW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QL0cFgYg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ShtV4Ovq_sendMessage);
}

void Heavy_Ambient::cBinop_c4kNcVO7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_WXsTuToB_sendMessage);
}

void Heavy_Ambient::cSlice_qFVe1jmB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_LjVzupMD, 1, m, &cRandom_LjVzupMD_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cRandom_LjVzupMD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_c4kNcVO7_sendMessage);
}

void Heavy_Ambient::cUnop_WXsTuToB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_RhcLrp3W_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_1KFegjOf_sendMessage);
}

void Heavy_Ambient::cSwitchcase_2EsoEADg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_qFVe1jmB, 0, m, &cSlice_qFVe1jmB_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_LjVzupMD, 0, m, &cRandom_LjVzupMD_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cPack_eFir6z0l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_kpkMT8Sb, 0, m, NULL);
}

void Heavy_Ambient::cBinop_RhcLrp3W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_eFir6z0l, 0, m, &cPack_eFir6z0l_sendMessage);
}

void Heavy_Ambient::cBinop_1KFegjOf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_9gDn4Qdd, 0, m, &cPack_9gDn4Qdd_sendMessage);
}

void Heavy_Ambient::cCast_ShtV4Ovq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_2EsoEADg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cPack_9gDn4Qdd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_vxaSioEe, 0, m, NULL);
}

void Heavy_Ambient::cSwitchcase_ZNgg7TSl_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_ZhlsUrVJ_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_ZhlsUrVJ_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_qC97mvdh, 1, m, &cDelay_qC97mvdh_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wDD5UsUl_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_wDD5UsUl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_qC97mvdh, 0, m, &cDelay_qC97mvdh_sendMessage);
}

void Heavy_Ambient::cMsg_ZhlsUrVJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_qC97mvdh, 0, m, &cDelay_qC97mvdh_sendMessage);
}

void Heavy_Ambient::cDelay_qC97mvdh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_qC97mvdh, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_a0jez7J4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pwjtyqdm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yqQzJdfs_sendMessage);
}

void Heavy_Ambient::cMsg_F81sYroS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_e7eFx40I, HV_BINOP_SUBTRACT, 0, m, &cBinop_e7eFx40I_sendMessage);
}

void Heavy_Ambient::cCast_a0jez7J4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_io8dy5Lb_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_yn5WbloM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ib0kiJNa, HV_BINOP_MULTIPLY, 0, m, &cBinop_Ib0kiJNa_sendMessage);
}

void Heavy_Ambient::cBinop_4JTpqRst_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_8dg7RpLD, 0, m, &cPack_8dg7RpLD_sendMessage);
}

void Heavy_Ambient::cCast_96LPfmNT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e7eFx40I, HV_BINOP_SUBTRACT, 1, m, &cBinop_e7eFx40I_sendMessage);
}

void Heavy_Ambient::cPack_8dg7RpLD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_0mWSLXfA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_GtTYZnZ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PEaG1ah4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_u9UfjfAj_sendMessage);
}

void Heavy_Ambient::cBinop_UYQ9dXEQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5khhCy0k, m);
}

void Heavy_Ambient::cCast_pwjtyqdm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_70vVUsDR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_5To4ORZ5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ib0kiJNa, HV_BINOP_MULTIPLY, 1, m, &cBinop_Ib0kiJNa_sendMessage);
}

void Heavy_Ambient::cBinop_bRWHRsvo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_8dg7RpLD, 1, m, &cPack_8dg7RpLD_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_qC97mvdh, 1, m, &cDelay_qC97mvdh_sendMessage);
}

void Heavy_Ambient::cCast_PEaG1ah4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PUWS4tOJ, HV_BINOP_SUBTRACT, 1, m, &cBinop_PUWS4tOJ_sendMessage);
}

void Heavy_Ambient::cCast_xbW4VevA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_F81sYroS_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_iCPE60ab_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5To4ORZ5_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yn5WbloM_sendMessage);
}

void Heavy_Ambient::cBinop_bKjJfLAz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_M6MZh6DA_sendMessage);
}

void Heavy_Ambient::cBinop_PUWS4tOJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_UYQ9dXEQ_sendMessage);
}

void Heavy_Ambient::cCast_yqQzJdfs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ZNgg7TSl_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cSlice_xV5ABJVp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_BMrehd7M, 1, m, &cRandom_BMrehd7M_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_1yONQYJn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_JuBmpI5e_sendMessage);
}

void Heavy_Ambient::cUnop_JuBmpI5e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_4JTpqRst_sendMessage);
}

void Heavy_Ambient::cRandom_BMrehd7M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_1yONQYJn_sendMessage);
}

void Heavy_Ambient::cSwitchcase_70vVUsDR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_xV5ABJVp, 0, m, &cSlice_xV5ABJVp_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_BMrehd7M, 0, m, &cRandom_BMrehd7M_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_gh5H7h2N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GtTYZnZ6, HV_BINOP_MULTIPLY, 1, m, &cBinop_GtTYZnZ6_sendMessage);
}

void Heavy_Ambient::cCast_u9UfjfAj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_leR5NBlx_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_gPCdnNiN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GtTYZnZ6, HV_BINOP_MULTIPLY, 0, m, &cBinop_GtTYZnZ6_sendMessage);
}

void Heavy_Ambient::cBinop_M6MZh6DA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0jyibtbV, m);
}

void Heavy_Ambient::cVar_1btvaHU4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rGVBwgPF, HV_BINOP_SUBTRACT, 0, m, &cBinop_rGVBwgPF_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_Tnbc6rgq_sendMessage);
}

void Heavy_Ambient::cVar_4l1i4Gzh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_lkh2Gzoo_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cVar_iotyNisN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8kBvgHc1, HV_BINOP_ADD, 0, m, &cBinop_8kBvgHc1_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2MhM414k, HV_BINOP_ADD, 0, m, &cBinop_2MhM414k_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_96LPfmNT_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xbW4VevA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iCPE60ab_sendMessage);
}

void Heavy_Ambient::cBinop_rGVBwgPF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1btvaHU4, 1, m, &cVar_1btvaHU4_sendMessage);
}

void Heavy_Ambient::cBinop_8kBvgHc1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iotyNisN, 1, m, &cVar_iotyNisN_sendMessage);
}

void Heavy_Ambient::cCast_dKr9KwKj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OPxfldDd_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_3ySmPs30_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FbjKCE6r, 0, m, &cVar_FbjKCE6r_sendMessage);
}

void Heavy_Ambient::cMsg_lRS0oKGS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_P6eyRyGI, 1, m, &cVar_P6eyRyGI_sendMessage);
}

void Heavy_Ambient::cSlice_yYf21SJE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_luNefVbF_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wx1dRSkA_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_jmwtWc8K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Xsaoi7KK_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Cl8z5jNK_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cCast_wNXNQ2d4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_W5RiwTcc_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSlice_sSKw7B6y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wNXNQ2d4_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zqRmDD1H_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wNXNQ2d4_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zqRmDD1H_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_sFx2cLmG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_W5RiwTcc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_W5RiwTcc_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_0mWSLXfA_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_sFx2cLmG, 0, m, &cSlice_sFx2cLmG_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_sSKw7B6y, 0, m, &cSlice_sSKw7B6y_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mNi5Hg1V_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_yYf21SJE, 0, m, &cSlice_yYf21SJE_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_jmwtWc8K, 0, m, &cSlice_jmwtWc8K_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2PV2ndZr_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_I9UgECze_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_OPxfldDd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_8qTMgK06_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2MhM414k, HV_BINOP_ADD, 1, m, &cBinop_2MhM414k_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_8kBvgHc1, HV_BINOP_ADD, 1, m, &cBinop_8kBvgHc1_sendMessage);
}

void Heavy_Ambient::cBinop_Nyed9upm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_WvzPKBWU_sendMessage);
}

void Heavy_Ambient::cCast_CkS6MWU6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gQ7zhPFh_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_lkh2Gzoo_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CkS6MWU6_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_Nyed9upm, HV_BINOP_MULTIPLY, 0, m, &cBinop_Nyed9upm_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_HMBn25Tx, HV_BINOP_DIVIDE, 1, m, &cBinop_HMBn25Tx_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_9K4Wew1r, 0, m, &cVar_9K4Wew1r_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_i5aDkoR1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Ee3EmPWb_sendMessage);
}

void Heavy_Ambient::cBinop_2MhM414k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BtqSy0ld, 0, m, &cVar_BtqSy0ld_sendMessage);
}

void Heavy_Ambient::cCast_zqRmDD1H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dKr9KwKj_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2MhM414k, HV_BINOP_ADD, 0, m, &cBinop_2MhM414k_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_iotyNisN, 1, m, &cVar_iotyNisN_sendMessage);
}

void Heavy_Ambient::cCast_oz6UHf5T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_T65HxaYA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3ySmPs30_sendMessage);
}

void Heavy_Ambient::cCast_jI5Elh6F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iotyNisN, 0, m, &cVar_iotyNisN_sendMessage);
}

void Heavy_Ambient::cSwitchcase_NbJmyXzn_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jI5Elh6F_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oz6UHf5T_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cVar_P6eyRyGI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_luNefVbF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wx1dRSkA_sendMessage);
}

void Heavy_Ambient::cMsg_gQ7zhPFh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Nyed9upm, HV_BINOP_MULTIPLY, 0, m, &cBinop_Nyed9upm_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_HMBn25Tx, HV_BINOP_DIVIDE, 1, m, &cBinop_HMBn25Tx_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_9K4Wew1r, 0, m, &cVar_9K4Wew1r_sendMessage);
}

void Heavy_Ambient::cSwitchcase_8qTMgK06_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_VQq2Hwvc_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_VQq2Hwvc_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5mRO1yYq_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_5mRO1yYq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VQq2Hwvc_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_pNkiYBQt, 0, m, &cDelay_pNkiYBQt_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_1btvaHU4, 0, m, &cVar_1btvaHU4_sendMessage);
}

void Heavy_Ambient::cBinop_7MpLXeGs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tcP4qlyr, HV_BINOP_MULTIPLY, 1, m, &cBinop_tcP4qlyr_sendMessage);
}

void Heavy_Ambient::cMsg_VQq2Hwvc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_pNkiYBQt, 0, m, &cDelay_pNkiYBQt_sendMessage);
}

void Heavy_Ambient::cBinop_KdbjFiXB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_pNkiYBQt, 2, m, &cDelay_pNkiYBQt_sendMessage);
}

void Heavy_Ambient::cSystem_EKE8WFFr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_7MpLXeGs_sendMessage);
}

void Heavy_Ambient::cMsg_ywhfx62O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_EKE8WFFr_sendMessage);
}

void Heavy_Ambient::cBinop_tcP4qlyr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_KdbjFiXB_sendMessage);
}

void Heavy_Ambient::cVar_9K4Wew1r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tcP4qlyr, HV_BINOP_MULTIPLY, 0, m, &cBinop_tcP4qlyr_sendMessage);
}

void Heavy_Ambient::cDelay_pNkiYBQt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_pNkiYBQt, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_pNkiYBQt, 0, m, &cDelay_pNkiYBQt_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_1btvaHU4, 0, m, &cVar_1btvaHU4_sendMessage);
}

void Heavy_Ambient::cVar_BtqSy0ld_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AAcn77PQ, HV_BINOP_SUBTRACT, 1, m, &cBinop_AAcn77PQ_sendMessage);
}

void Heavy_Ambient::cMsg_W5RiwTcc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_8qTMgK06_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_T65HxaYA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OPxfldDd_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_Cl8z5jNK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AAcn77PQ, HV_BINOP_SUBTRACT, 0, m, &cBinop_AAcn77PQ_sendMessage);
}

void Heavy_Ambient::cCast_2PV2ndZr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vwAbYxbU_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cVar_FbjKCE6r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iotyNisN, 0, m, &cVar_iotyNisN_sendMessage);
}

void Heavy_Ambient::cBinop_HMBn25Tx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_itgQ6nHp, HV_BINOP_DIVIDE, 1, m, &cBinop_itgQ6nHp_sendMessage);
}

void Heavy_Ambient::cBinop_WvzPKBWU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rGVBwgPF, HV_BINOP_SUBTRACT, 1, m, &cBinop_rGVBwgPF_sendMessage);
}

void Heavy_Ambient::cCast_wx1dRSkA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HMBn25Tx, HV_BINOP_DIVIDE, 0, m, &cBinop_HMBn25Tx_sendMessage);
}

void Heavy_Ambient::cCast_luNefVbF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_i5aDkoR1, HV_BINOP_MULTIPLY, 0, m, &cBinop_i5aDkoR1_sendMessage);
}

void Heavy_Ambient::cCast_Xsaoi7KK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FbjKCE6r, 1, m, &cVar_FbjKCE6r_sendMessage);
}

void Heavy_Ambient::cBinop_Ee3EmPWb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1btvaHU4, 1, m, &cVar_1btvaHU4_sendMessage);
}

void Heavy_Ambient::cBinop_itgQ6nHp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2MhM414k, HV_BINOP_ADD, 1, m, &cBinop_2MhM414k_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_8kBvgHc1, HV_BINOP_ADD, 1, m, &cBinop_8kBvgHc1_sendMessage);
}

void Heavy_Ambient::cCast_mNi5Hg1V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_P6eyRyGI, 0, m, &cVar_P6eyRyGI_sendMessage);
}

void Heavy_Ambient::cCast_I9UgECze_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lRS0oKGS_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSystem_quKmyc9n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Nyed9upm, HV_BINOP_MULTIPLY, 1, m, &cBinop_Nyed9upm_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_i5aDkoR1, HV_BINOP_MULTIPLY, 1, m, &cBinop_i5aDkoR1_sendMessage);
}

void Heavy_Ambient::cMsg_dU1Xmo7F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_quKmyc9n_sendMessage);
}

void Heavy_Ambient::cBinop_Tnbc6rgq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_NbJmyXzn_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_vwAbYxbU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_8qTMgK06_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_AAcn77PQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_itgQ6nHp, HV_BINOP_DIVIDE, 0, m, &cBinop_itgQ6nHp_sendMessage);
}

void Heavy_Ambient::cBinop_Ib0kiJNa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_l3F78mC9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_G2ZvLPYe_sendMessage);
}

void Heavy_Ambient::cCast_l3F78mC9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bKjJfLAz, HV_BINOP_SUBTRACT, 1, m, &cBinop_bKjJfLAz_sendMessage);
}

void Heavy_Ambient::cMsg_leR5NBlx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PUWS4tOJ, HV_BINOP_SUBTRACT, 0, m, &cBinop_PUWS4tOJ_sendMessage);
}

void Heavy_Ambient::cSlice_Q3xWAgPN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_p56pHwYV, 1, m, &cRandom_p56pHwYV_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_io8dy5Lb_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Q3xWAgPN, 0, m, &cSlice_Q3xWAgPN_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_p56pHwYV, 0, m, &cRandom_p56pHwYV_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_p56pHwYV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_OEe9OTEC_sendMessage);
}

void Heavy_Ambient::cBinop_OEe9OTEC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_uVmTtAf9_sendMessage);
}

void Heavy_Ambient::cUnop_uVmTtAf9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_bRWHRsvo_sendMessage);
}

void Heavy_Ambient::cBinop_e7eFx40I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gh5H7h2N_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gPCdnNiN_sendMessage);
}

void Heavy_Ambient::cMsg_Kpji9ZoI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_bKjJfLAz, HV_BINOP_SUBTRACT, 0, m, &cBinop_bKjJfLAz_sendMessage);
}

void Heavy_Ambient::cCast_G2ZvLPYe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Kpji9ZoI_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_aJ03ZFzW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_CXQBf1sL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_QL0cFgYg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Ambient::cBinop_UazbbQBT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_jGwE1vb1, 0, m, &cPack_jGwE1vb1_sendMessage);
}

void Heavy_Ambient::cUnop_4zsce0FR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 100.0f, 0, m, &cBinop_oDZN035c_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_UazbbQBT_sendMessage);
}

void Heavy_Ambient::cRandom_AzjS41Jb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_LoYdFt7U_sendMessage);
}

void Heavy_Ambient::cSlice_NyL2rKjP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_AzjS41Jb, 1, m, &cRandom_AzjS41Jb_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_LoYdFt7U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_4zsce0FR_sendMessage);
}

void Heavy_Ambient::cSwitchcase_x0svanU1_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_NyL2rKjP, 0, m, &cSlice_NyL2rKjP_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_AzjS41Jb, 0, m, &cRandom_AzjS41Jb_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_JjBID1G6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_k89N2j2H, m);
}

void Heavy_Ambient::cCast_iK236N5R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EVhn0RxD_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_qRWBekJ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2H4BK0kh, HV_BINOP_SUBTRACT, 1, m, &cBinop_2H4BK0kh_sendMessage);
}

void Heavy_Ambient::cMsg_JH4iiHEP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_qOqRQUjY, HV_BINOP_SUBTRACT, 0, m, &cBinop_qOqRQUjY_sendMessage);
}

void Heavy_Ambient::cPack_ggKRvK48_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_6sd4irfd_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_qOqRQUjY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6Qob8xjc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QHq5HFQy_sendMessage);
}

void Heavy_Ambient::cBinop_izla5mHP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qRWBekJ6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dHRnayNR_sendMessage);
}

void Heavy_Ambient::cMsg_uUYSaz9h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2H4BK0kh, HV_BINOP_SUBTRACT, 0, m, &cBinop_2H4BK0kh_sendMessage);
}

void Heavy_Ambient::cCast_dHRnayNR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uUYSaz9h_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_3R55aXC2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_G1b11R4d_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_LmIc93tW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_6yt4GiV4_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_s5RsVKIZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9cQZMSiF, HV_BINOP_SUBTRACT, 1, m, &cBinop_9cQZMSiF_sendMessage);
}

void Heavy_Ambient::cCast_6Qob8xjc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_izla5mHP, HV_BINOP_MULTIPLY, 1, m, &cBinop_izla5mHP_sendMessage);
}

void Heavy_Ambient::cSwitchcase_6yt4GiV4_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_iN7mSyjH_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_iN7mSyjH_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_XN7TerGb, 1, m, &cDelay_XN7TerGb_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FJ9ctzHo_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cDelay_XN7TerGb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_XN7TerGb, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TVPOfDMx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3R55aXC2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LmIc93tW_sendMessage);
}

void Heavy_Ambient::cMsg_iN7mSyjH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_XN7TerGb, 0, m, &cDelay_XN7TerGb_sendMessage);
}

void Heavy_Ambient::cCast_FJ9ctzHo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_XN7TerGb, 0, m, &cDelay_XN7TerGb_sendMessage);
}

void Heavy_Ambient::cSwitchcase_G1b11R4d_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_8lM63LmY, 0, m, &cSlice_8lM63LmY_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_n0ZE7SnF, 0, m, &cRandom_n0ZE7SnF_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_8lM63LmY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_n0ZE7SnF, 1, m, &cRandom_n0ZE7SnF_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_sSzYCBNy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_xjlpIVzD_sendMessage);
}

void Heavy_Ambient::cRandom_n0ZE7SnF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_iHPYiRlF_sendMessage);
}

void Heavy_Ambient::cBinop_iHPYiRlF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_sSzYCBNy_sendMessage);
}

void Heavy_Ambient::cBinop_2H4BK0kh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_sAYSYCqo_sendMessage);
}

void Heavy_Ambient::cCast_eg66I7Z2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1A4q133W, HV_BINOP_MULTIPLY, 0, m, &cBinop_1A4q133W_sendMessage);
}

void Heavy_Ambient::cCast_QHq5HFQy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_izla5mHP, HV_BINOP_MULTIPLY, 0, m, &cBinop_izla5mHP_sendMessage);
}

void Heavy_Ambient::cBinop_1A4q133W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_s5RsVKIZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iK236N5R_sendMessage);
}

void Heavy_Ambient::cCast_hP2MT2gA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qOqRQUjY, HV_BINOP_SUBTRACT, 1, m, &cBinop_qOqRQUjY_sendMessage);
}

void Heavy_Ambient::cBinop_9cQZMSiF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_JjBID1G6_sendMessage);
}

void Heavy_Ambient::cCast_ME7AkBGJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SJbgle0A_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eg66I7Z2_sendMessage);
}

void Heavy_Ambient::cRandom_ieQerWcf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_Eqbmbc9u_sendMessage);
}

void Heavy_Ambient::cSlice_28m9Rq6d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_ieQerWcf, 1, m, &cRandom_ieQerWcf_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_Eqbmbc9u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_UU2LZ9Xh_sendMessage);
}

void Heavy_Ambient::cUnop_UU2LZ9Xh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_M9BkaAvm_sendMessage);
}

void Heavy_Ambient::cSwitchcase_7XEjqS8r_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_28m9Rq6d, 0, m, &cSlice_28m9Rq6d_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_ieQerWcf, 0, m, &cRandom_ieQerWcf_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_M9BkaAvm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ggKRvK48, 1, m, &cPack_ggKRvK48_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_XN7TerGb, 1, m, &cDelay_XN7TerGb_sendMessage);
}

void Heavy_Ambient::cBinop_xjlpIVzD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ggKRvK48, 0, m, &cPack_ggKRvK48_sendMessage);
}

void Heavy_Ambient::cCast_TVPOfDMx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_7XEjqS8r_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_EVhn0RxD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_9cQZMSiF, HV_BINOP_SUBTRACT, 0, m, &cBinop_9cQZMSiF_sendMessage);
}

void Heavy_Ambient::cCast_V05Abhk7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JH4iiHEP_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_kFfgW0wm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_DAZeYeEr, 0, m, &cVar_DAZeYeEr_sendMessage);
}

void Heavy_Ambient::cVar_5ACGh7T2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Pm9dgvNN, HV_BINOP_SUBTRACT, 0, m, &cBinop_Pm9dgvNN_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_Z3ODJJJE_sendMessage);
}

void Heavy_Ambient::cBinop_2b2uOfPI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_nT7vOM0t_sendMessage);
}

void Heavy_Ambient::cBinop_HCZU4ClW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_V2SuJCRY, HV_BINOP_ADD, 1, m, &cBinop_V2SuJCRY_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_R0QUFOM0, HV_BINOP_ADD, 1, m, &cBinop_R0QUFOM0_sendMessage);
}

void Heavy_Ambient::cVar_DJqKhCtV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FINKAFyd, 0, m, &cVar_FINKAFyd_sendMessage);
}

void Heavy_Ambient::cBinop_Pehj4XI2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HCZU4ClW, HV_BINOP_DIVIDE, 0, m, &cBinop_HCZU4ClW_sendMessage);
}

void Heavy_Ambient::cVar_tBpgdcHu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Pehj4XI2, HV_BINOP_SUBTRACT, 1, m, &cBinop_Pehj4XI2_sendMessage);
}

void Heavy_Ambient::cBinop_b0oe9CDC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5ACGh7T2, 1, m, &cVar_5ACGh7T2_sendMessage);
}

void Heavy_Ambient::cMsg_BejsDtfr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_hMAObDM3_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cVar_x6u3IDyL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_dQ9c2vxO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_NR1TmWHK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_DJqKhCtV, 0, m, &cVar_DJqKhCtV_sendMessage);
}

void Heavy_Ambient::cMsg_4TDt5h7K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_hMAObDM3_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_U1b16dD9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6j16XBlF_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_d9qhjJje_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_VimmoxdB_sendMessage);
}

void Heavy_Ambient::cSystem_VimmoxdB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_7YfJOVAh_sendMessage);
}

void Heavy_Ambient::cBinop_7YfJOVAh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9RzBIFnA, HV_BINOP_MULTIPLY, 1, m, &cBinop_9RzBIFnA_sendMessage);
}

void Heavy_Ambient::cBinop_9RzBIFnA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_eoK624bv_sendMessage);
}

void Heavy_Ambient::cBinop_eoK624bv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_CVa7t8YM, 2, m, &cDelay_CVa7t8YM_sendMessage);
}

void Heavy_Ambient::cSwitchcase_hMAObDM3_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_S8J0K4Bf_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_S8J0K4Bf_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xbuvib6T_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cVar_tFE8C5c7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9RzBIFnA, HV_BINOP_MULTIPLY, 0, m, &cBinop_9RzBIFnA_sendMessage);
}

void Heavy_Ambient::cMsg_S8J0K4Bf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_CVa7t8YM, 0, m, &cDelay_CVa7t8YM_sendMessage);
}

void Heavy_Ambient::cDelay_CVa7t8YM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_CVa7t8YM, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_CVa7t8YM, 0, m, &cDelay_CVa7t8YM_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_5ACGh7T2, 0, m, &cVar_5ACGh7T2_sendMessage);
}

void Heavy_Ambient::cCast_xbuvib6T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_S8J0K4Bf_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_CVa7t8YM, 0, m, &cDelay_CVa7t8YM_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_5ACGh7T2, 0, m, &cVar_5ACGh7T2_sendMessage);
}

void Heavy_Ambient::cMsg_4ZU5hqrI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2b2uOfPI, HV_BINOP_MULTIPLY, 0, m, &cBinop_2b2uOfPI_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_jfgjD8Ti, HV_BINOP_DIVIDE, 1, m, &cBinop_jfgjD8Ti_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_tFE8C5c7, 0, m, &cVar_tFE8C5c7_sendMessage);
}

void Heavy_Ambient::cCast_G4TxSAYQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6HTHkm5d_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_ks79YJbA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4TDt5h7K_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_Z3ODJJJE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_kXBuy9yF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_nwwbQAC0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BejsDtfr_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSlice_QH2bBO9c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_x0S0AeYa_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5xhJvQlG_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_KU296d90_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Q7eAZlDg_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tDbluT8P_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_R0QUFOM0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FINKAFyd, 1, m, &cVar_FINKAFyd_sendMessage);
}

void Heavy_Ambient::cBinop_jfgjD8Ti_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HCZU4ClW, HV_BINOP_DIVIDE, 1, m, &cBinop_HCZU4ClW_sendMessage);
}

void Heavy_Ambient::cCast_oASjOcR6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4ZU5hqrI_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_dQ9c2vxO_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oASjOcR6_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_2b2uOfPI, HV_BINOP_MULTIPLY, 0, m, &cBinop_2b2uOfPI_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_jfgjD8Ti, HV_BINOP_DIVIDE, 1, m, &cBinop_jfgjD8Ti_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_tFE8C5c7, 0, m, &cVar_tFE8C5c7_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_tUBEr0p0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nwwbQAC0_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LUD0pJib_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nwwbQAC0_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LUD0pJib_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_pw0ODIfd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_BejsDtfr_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_BejsDtfr_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_6sd4irfd_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_pw0ODIfd, 0, m, &cSlice_pw0ODIfd_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_tUBEr0p0, 0, m, &cSlice_tUBEr0p0_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kFfgW0wm_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_KU296d90, 0, m, &cSlice_KU296d90_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_QH2bBO9c, 0, m, &cSlice_QH2bBO9c_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ks79YJbA_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_U1b16dD9_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_nT7vOM0t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Pm9dgvNN, HV_BINOP_SUBTRACT, 1, m, &cBinop_Pm9dgvNN_sendMessage);
}

void Heavy_Ambient::cVar_FINKAFyd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_R0QUFOM0, HV_BINOP_ADD, 0, m, &cBinop_R0QUFOM0_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_V2SuJCRY, HV_BINOP_ADD, 0, m, &cBinop_V2SuJCRY_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hP2MT2gA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_V05Abhk7_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ME7AkBGJ_sendMessage);
}

void Heavy_Ambient::cBinop_Pm9dgvNN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5ACGh7T2, 1, m, &cVar_5ACGh7T2_sendMessage);
}

void Heavy_Ambient::cCast_tDbluT8P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jfgjD8Ti, HV_BINOP_DIVIDE, 0, m, &cBinop_jfgjD8Ti_sendMessage);
}

void Heavy_Ambient::cCast_htYWcX6P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6HTHkm5d_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_x0S0AeYa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_DJqKhCtV, 1, m, &cVar_DJqKhCtV_sendMessage);
}

void Heavy_Ambient::cCast_5xhJvQlG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Pehj4XI2, HV_BINOP_SUBTRACT, 0, m, &cBinop_Pehj4XI2_sendMessage);
}

void Heavy_Ambient::cVar_DAZeYeEr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Q7eAZlDg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tDbluT8P_sendMessage);
}

void Heavy_Ambient::cBinop_V2SuJCRY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tBpgdcHu, 0, m, &cVar_tBpgdcHu_sendMessage);
}

void Heavy_Ambient::cCast_LUD0pJib_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_htYWcX6P_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_V2SuJCRY, HV_BINOP_ADD, 0, m, &cBinop_V2SuJCRY_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_FINKAFyd, 1, m, &cVar_FINKAFyd_sendMessage);
}

void Heavy_Ambient::cCast_EFsgYQlm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_G4TxSAYQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NR1TmWHK_sendMessage);
}

void Heavy_Ambient::cCast_vADoK5RP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FINKAFyd, 0, m, &cVar_FINKAFyd_sendMessage);
}

void Heavy_Ambient::cSwitchcase_kXBuy9yF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vADoK5RP_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EFsgYQlm_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cMsg_6HTHkm5d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_hMAObDM3_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_V2SuJCRY, HV_BINOP_ADD, 1, m, &cBinop_V2SuJCRY_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_R0QUFOM0, HV_BINOP_ADD, 1, m, &cBinop_R0QUFOM0_sendMessage);
}

void Heavy_Ambient::cCast_Q7eAZlDg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tAoVwmOn, HV_BINOP_MULTIPLY, 0, m, &cBinop_tAoVwmOn_sendMessage);
}

void Heavy_Ambient::cMsg_6j16XBlF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_DAZeYeEr, 1, m, &cVar_DAZeYeEr_sendMessage);
}

void Heavy_Ambient::cBinop_tAoVwmOn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_b0oe9CDC_sendMessage);
}

void Heavy_Ambient::cSystem_jKxZltmr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2b2uOfPI, HV_BINOP_MULTIPLY, 1, m, &cBinop_2b2uOfPI_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_tAoVwmOn, HV_BINOP_MULTIPLY, 1, m, &cBinop_tAoVwmOn_sendMessage);
}

void Heavy_Ambient::cMsg_WkhtxHKP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_jKxZltmr_sendMessage);
}

void Heavy_Ambient::cBinop_sAYSYCqo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Gqn9v48u, m);
}

void Heavy_Ambient::cCast_SJbgle0A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1A4q133W, HV_BINOP_MULTIPLY, 1, m, &cBinop_1A4q133W_sendMessage);
}

void Heavy_Ambient::cBinop_WAgjH1oB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GDWfpRRb, 0, m, &cVar_GDWfpRRb_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_RABCHC4g, 1, m, &cPack_RABCHC4g_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_jGwE1vb1, 1, m, &cPack_jGwE1vb1_sendMessage);
}

void Heavy_Ambient::cBinop_LNgdMXka_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_x6dpotm9_sendMessage);
}

void Heavy_Ambient::cUnop_x6dpotm9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_WAgjH1oB_sendMessage);
}

void Heavy_Ambient::cSlice_rc1qKY5G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_gNC6zD21, 1, m, &cRandom_gNC6zD21_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cRandom_gNC6zD21_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_LNgdMXka_sendMessage);
}

void Heavy_Ambient::cSwitchcase_zTMPVGiU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_rc1qKY5G, 0, m, &cSlice_rc1qKY5G_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_gNC6zD21, 0, m, &cRandom_gNC6zD21_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cPack_jGwE1vb1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_94QtbIz7, 0, m, NULL);
}

void Heavy_Ambient::cCast_epOG3b7U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_zTMPVGiU_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cPack_RABCHC4g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_yjkwNY7W, 0, m, NULL);
}

void Heavy_Ambient::cVar_GDWfpRRb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mUtPdLZb, HV_BINOP_MULTIPLY, 0, m, &cBinop_mUtPdLZb_sendMessage);
}

void Heavy_Ambient::cCast_LstSwNiR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rQxwmKdm_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_D1DejeuU, 0, m, &cDelay_D1DejeuU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_epOG3b7U_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xwPhQqIo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k276rKRX_sendMessage);
}

void Heavy_Ambient::cMsg_cmByDlDN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_5KpDa1Ii_sendMessage);
}

void Heavy_Ambient::cSystem_5KpDa1Ii_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_fIlpoZll_sendMessage);
}

void Heavy_Ambient::cBinop_mUtPdLZb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_NoFRPX5Q_sendMessage);
}

void Heavy_Ambient::cDelay_D1DejeuU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_D1DejeuU, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_D1DejeuU, 0, m, &cDelay_D1DejeuU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_epOG3b7U_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xwPhQqIo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k276rKRX_sendMessage);
}

void Heavy_Ambient::cSwitchcase_OrLjH65P_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_rQxwmKdm_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_rQxwmKdm_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LstSwNiR_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_fIlpoZll_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mUtPdLZb, HV_BINOP_MULTIPLY, 1, m, &cBinop_mUtPdLZb_sendMessage);
}

void Heavy_Ambient::cMsg_rQxwmKdm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_D1DejeuU, 0, m, &cDelay_D1DejeuU_sendMessage);
}

void Heavy_Ambient::cBinop_NoFRPX5Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_D1DejeuU, 2, m, &cDelay_D1DejeuU_sendMessage);
}

void Heavy_Ambient::cCast_k276rKRX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_x0svanU1_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_M4OOxUG6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_nmKqVdMi_sendMessage);
}

void Heavy_Ambient::cBinop_6utv5aB3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vIaW9ICs, m);
}

void Heavy_Ambient::cBinop_2HW62fvY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_TpqYVykL, m);
}

void Heavy_Ambient::cMsg_8uViyO0x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_2HW62fvY_sendMessage);
}

void Heavy_Ambient::cMsg_KIikmvj6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_6utv5aB3_sendMessage);
}

void Heavy_Ambient::cMsg_qS0Fwl42_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_TpqYVykL, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Dc33QfEN, m);
}

void Heavy_Ambient::cMsg_ggbLczx3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_E1glKrHS_sendMessage);
}

void Heavy_Ambient::cBinop_XGAUTTI3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_M4OOxUG6_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_nmKqVdMi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_S2VWjGV9, m);
}

void Heavy_Ambient::cBinop_GxkTJlw9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_2PUzlv8C, 1, m, &cIf_2PUzlv8C_sendMessage);
}

void Heavy_Ambient::cIf_2PUzlv8C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_ggbLczx3_sendMessage(_c, 0, m);
      cMsg_qS0Fwl42_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_8uViyO0x_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_E1glKrHS_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_Dc33QfEN, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_E1glKrHS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_t0BnqRuI_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_t0BnqRuI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_XGAUTTI3_sendMessage);
}

void Heavy_Ambient::cVar_08CHn3Cp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_GxkTJlw9_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_2PUzlv8C, 0, m, &cIf_2PUzlv8C_sendMessage);
}

void Heavy_Ambient::cMsg_2CDD0MqP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ihhuxzwE_sendMessage);
}

void Heavy_Ambient::cSystem_ihhuxzwE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KIikmvj6_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_oDZN035c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_RABCHC4g, 0, m, &cPack_RABCHC4g_sendMessage);
}

void Heavy_Ambient::cCast_xwPhQqIo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Ambient::cCast_kNMHJf91_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_SaBuXuiP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_AOxq1by4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_mzlB6EUB, 0, m, &cPack_mzlB6EUB_sendMessage);
}

void Heavy_Ambient::cPack_mzlB6EUB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_0JHdmdzQ, 0, m, NULL);
}

void Heavy_Ambient::cBinop_STK3fg5e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_n0rZrX91_sendMessage);
}

void Heavy_Ambient::cBinop_n0rZrX91_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_shjgKrSV, 2, m, &cDelay_shjgKrSV_sendMessage);
}

void Heavy_Ambient::cBinop_sCzrgLmI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_STK3fg5e, HV_BINOP_MULTIPLY, 1, m, &cBinop_STK3fg5e_sendMessage);
}

void Heavy_Ambient::cSwitchcase_MZknGjNI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_gkuFSqf2_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_gkuFSqf2_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_onNURCnV_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSystem_qUj26Jqh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_sCzrgLmI_sendMessage);
}

void Heavy_Ambient::cMsg_7UTI4LjT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qUj26Jqh_sendMessage);
}

void Heavy_Ambient::cCast_onNURCnV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gkuFSqf2_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_shjgKrSV, 0, m, &cDelay_shjgKrSV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lKKDSv4f_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D3LRmzxh_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kNMHJf91_sendMessage);
}

void Heavy_Ambient::cDelay_shjgKrSV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_shjgKrSV, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_shjgKrSV, 0, m, &cDelay_shjgKrSV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lKKDSv4f_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D3LRmzxh_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kNMHJf91_sendMessage);
}

void Heavy_Ambient::cMsg_gkuFSqf2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_shjgKrSV, 0, m, &cDelay_shjgKrSV_sendMessage);
}

void Heavy_Ambient::cVar_kw06mRuq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_STK3fg5e, HV_BINOP_MULTIPLY, 0, m, &cBinop_STK3fg5e_sendMessage);
}

void Heavy_Ambient::cSwitchcase_SaBuXuiP_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_sOKMnv5n, 0, m, &cSlice_sOKMnv5n_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_1vWgPmZM, 0, m, &cRandom_1vWgPmZM_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_pxzCVh1f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_FQp2lVM3_sendMessage);
}

void Heavy_Ambient::cSlice_sOKMnv5n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_1vWgPmZM, 1, m, &cRandom_1vWgPmZM_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_FQp2lVM3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2200.0f, 0, m, &cBinop_YDdbA9Ci_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_AOxq1by4_sendMessage);
}

void Heavy_Ambient::cRandom_1vWgPmZM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_pxzCVh1f_sendMessage);
}

void Heavy_Ambient::cBinop_YDdbA9Ci_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_BJFlW2w1, 0, m, &cPack_BJFlW2w1_sendMessage);
}

void Heavy_Ambient::cBinop_rTyrl3PL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QkhPZiGG, m);
}

void Heavy_Ambient::cBinop_iQrhLFmB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_NCgtUvXu, m);
}

void Heavy_Ambient::cMsg_N3zdE7sB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_rTyrl3PL_sendMessage);
}

void Heavy_Ambient::cBinop_AHm1Y2t3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_VcLQEfvG, 1, m, &cIf_VcLQEfvG_sendMessage);
}

void Heavy_Ambient::cIf_VcLQEfvG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_oeCvV8a7_sendMessage(_c, 0, m);
      cMsg_X3KywtIl_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_N3zdE7sB_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_CWc6tBK5_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_DWp5M0iA, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cVar_CESUsbED_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_AHm1Y2t3_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_VcLQEfvG, 0, m, &cIf_VcLQEfvG_sendMessage);
}

void Heavy_Ambient::cMsg_oeCvV8a7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_CWc6tBK5_sendMessage);
}

void Heavy_Ambient::cBinop_xXdzlvG2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_y4tM5plA_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSystem_Uob4Kqgi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Qu6BsYs2_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_U7VfQunM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Uob4Kqgi_sendMessage);
}

void Heavy_Ambient::cBinop_GtuxyIWB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_VOf1Udl6, m);
}

void Heavy_Ambient::cMsg_Qu6BsYs2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_iQrhLFmB_sendMessage);
}

void Heavy_Ambient::cMsg_g8ZUXZpn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_xXdzlvG2_sendMessage);
}

void Heavy_Ambient::cMsg_y4tM5plA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_GtuxyIWB_sendMessage);
}

void Heavy_Ambient::cMsg_X3KywtIl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_QkhPZiGG, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_DWp5M0iA, m);
}

void Heavy_Ambient::cBinop_CWc6tBK5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_g8ZUXZpn_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_lKKDSv4f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_xcguWN52_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cSlice_Au4plqZ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_nh37TLlZ, 1, m, &cRandom_nh37TLlZ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_xcguWN52_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Au4plqZ9, 0, m, &cSlice_Au4plqZ9_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_nh37TLlZ, 0, m, &cRandom_nh37TLlZ_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_nh37TLlZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_hO2yj2LH_sendMessage);
}

void Heavy_Ambient::cUnop_NNCEels9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_vkqbSUqr_sendMessage);
}

void Heavy_Ambient::cBinop_hO2yj2LH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_NNCEels9_sendMessage);
}

void Heavy_Ambient::cCast_D3LRmzxh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Ambient::cPack_BJFlW2w1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_OgB4HsJQ, 0, m, NULL);
}

void Heavy_Ambient::cMsg_n6FG0Ept_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4lKVIT9m, HV_BINOP_SUBTRACT, 0, m, &cBinop_4lKVIT9m_sendMessage);
}

void Heavy_Ambient::cMsg_8R0Umi6k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2u9zJRNy, HV_BINOP_SUBTRACT, 0, m, &cBinop_2u9zJRNy_sendMessage);
}

void Heavy_Ambient::cCast_EZTBO0Zq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_To6OnczX, HV_BINOP_SUBTRACT, 1, m, &cBinop_To6OnczX_sendMessage);
}

void Heavy_Ambient::cCast_tSxgz7CE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pMIy3pDj_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_yFonh7lu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_FPW2qFDX_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_kz6mkbEW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_U8r4haXL, HV_BINOP_MULTIPLY, 0, m, &cBinop_U8r4haXL_sendMessage);
}

void Heavy_Ambient::cCast_5z5jxHYS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_snEhNx9J_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wqpAHCAU_sendMessage);
}

void Heavy_Ambient::cCast_wqpAHCAU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RamEIDkS, HV_BINOP_MULTIPLY, 0, m, &cBinop_RamEIDkS_sendMessage);
}

void Heavy_Ambient::cMsg_QYvCaLS5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_kio0fLBf_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_izvU99Ei_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e7yqi2Mw, HV_BINOP_SUBTRACT, 1, m, &cBinop_e7yqi2Mw_sendMessage);
}

void Heavy_Ambient::cCast_u6vdlwa4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_px07Z5Kh_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSystem_nSHGdPl0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_a2PNqgp6, HV_BINOP_MULTIPLY, 1, m, &cBinop_a2PNqgp6_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_bqDKfiWb, HV_BINOP_MULTIPLY, 1, m, &cBinop_bqDKfiWb_sendMessage);
}

void Heavy_Ambient::cMsg_sxU1Goom_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_nSHGdPl0_sendMessage);
}

void Heavy_Ambient::cMsg_pLTNyFpb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_a2PNqgp6, HV_BINOP_MULTIPLY, 0, m, &cBinop_a2PNqgp6_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_hea1eer4, HV_BINOP_DIVIDE, 1, m, &cBinop_hea1eer4_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_7Lmt9rz8, 0, m, &cVar_7Lmt9rz8_sendMessage);
}

void Heavy_Ambient::cBinop_FKKnhgd9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JGEaWa6o, HV_BINOP_DIVIDE, 0, m, &cBinop_JGEaWa6o_sendMessage);
}

void Heavy_Ambient::cBinop_JGEaWa6o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FUSxJqIy, HV_BINOP_ADD, 1, m, &cBinop_FUSxJqIy_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rp6mLSqn, HV_BINOP_ADD, 1, m, &cBinop_rp6mLSqn_sendMessage);
}

void Heavy_Ambient::cBinop_hea1eer4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JGEaWa6o, HV_BINOP_DIVIDE, 1, m, &cBinop_JGEaWa6o_sendMessage);
}

void Heavy_Ambient::cCast_DKFFkWFC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HeER5HKx, 0, m, &cVar_HeER5HKx_sendMessage);
}

void Heavy_Ambient::cBinop_FUSxJqIy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BdfVzaKQ, 0, m, &cVar_BdfVzaKQ_sendMessage);
}

void Heavy_Ambient::cCast_SmuIHtY4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_u6vdlwa4_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_FUSxJqIy, HV_BINOP_ADD, 0, m, &cBinop_FUSxJqIy_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ODsWw6Nn, 1, m, &cVar_ODsWw6Nn_sendMessage);
}

void Heavy_Ambient::cBinop_4eMEdQ1l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_v9fsdXDX, 1, m, &cVar_v9fsdXDX_sendMessage);
}

void Heavy_Ambient::cCast_4X1jJ5Fa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pLTNyFpb_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_4Jm3iz5I_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4X1jJ5Fa_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_a2PNqgp6, HV_BINOP_MULTIPLY, 0, m, &cBinop_a2PNqgp6_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_hea1eer4, HV_BINOP_DIVIDE, 1, m, &cBinop_hea1eer4_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_7Lmt9rz8, 0, m, &cVar_7Lmt9rz8_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_e7yqi2Mw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_v9fsdXDX, 1, m, &cVar_v9fsdXDX_sendMessage);
}

void Heavy_Ambient::cVar_BdfVzaKQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FKKnhgd9, HV_BINOP_SUBTRACT, 1, m, &cBinop_FKKnhgd9_sendMessage);
}

void Heavy_Ambient::cSlice_Rolr0yf7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dqRV1rQL_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_G8KmpyuG_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_Ws1Te3eQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_M8C3Gd0h_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Qs4yUJ0R_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_ircZgct2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XIpF5min_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SmuIHtY4_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XIpF5min_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SmuIHtY4_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_vZFTF1fi_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_qI8lSLeD, 0, m, &cSlice_qI8lSLeD_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ircZgct2, 0, m, &cSlice_ircZgct2_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DKFFkWFC_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Rolr0yf7, 0, m, &cSlice_Rolr0yf7_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Ws1Te3eQ, 0, m, &cSlice_Ws1Te3eQ_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vIrNQHwA_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_An5JIu8K_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_qI8lSLeD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_QYvCaLS5_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_QYvCaLS5_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cMsg_JE3WzDfx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_QgSHrOy0_sendMessage);
}

void Heavy_Ambient::cSystem_QgSHrOy0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_1WBX9e0l_sendMessage);
}

void Heavy_Ambient::cBinop_lVQNA8lX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_P2HpwRJj_sendMessage);
}

void Heavy_Ambient::cBinop_P2HpwRJj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_2KzwNHdR, 2, m, &cDelay_2KzwNHdR_sendMessage);
}

void Heavy_Ambient::cDelay_2KzwNHdR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_2KzwNHdR, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_2KzwNHdR, 0, m, &cDelay_2KzwNHdR_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_v9fsdXDX, 0, m, &cVar_v9fsdXDX_sendMessage);
}

void Heavy_Ambient::cVar_7Lmt9rz8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lVQNA8lX, HV_BINOP_MULTIPLY, 0, m, &cBinop_lVQNA8lX_sendMessage);
}

void Heavy_Ambient::cCast_VMQDcROt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MwtrM3pK_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_2KzwNHdR, 0, m, &cDelay_2KzwNHdR_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_v9fsdXDX, 0, m, &cVar_v9fsdXDX_sendMessage);
}

void Heavy_Ambient::cBinop_1WBX9e0l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lVQNA8lX, HV_BINOP_MULTIPLY, 1, m, &cBinop_lVQNA8lX_sendMessage);
}

void Heavy_Ambient::cSwitchcase_kio0fLBf_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_MwtrM3pK_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_MwtrM3pK_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VMQDcROt_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_MwtrM3pK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_2KzwNHdR, 0, m, &cDelay_2KzwNHdR_sendMessage);
}

void Heavy_Ambient::cCast_M8C3Gd0h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_psFfO40Z, 1, m, &cVar_psFfO40Z_sendMessage);
}

void Heavy_Ambient::cMsg_px07Z5Kh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_kio0fLBf_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_FUSxJqIy, HV_BINOP_ADD, 1, m, &cBinop_FUSxJqIy_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rp6mLSqn, HV_BINOP_ADD, 1, m, &cBinop_rp6mLSqn_sendMessage);
}

void Heavy_Ambient::cCast_vIrNQHwA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6xwlIdjr_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_dqRV1rQL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bqDKfiWb, HV_BINOP_MULTIPLY, 0, m, &cBinop_bqDKfiWb_sendMessage);
}

void Heavy_Ambient::cVar_v9fsdXDX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e7yqi2Mw, HV_BINOP_SUBTRACT, 0, m, &cBinop_e7yqi2Mw_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_JCP3AABh_sendMessage);
}

void Heavy_Ambient::cCast_Qs4yUJ0R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FKKnhgd9, HV_BINOP_SUBTRACT, 0, m, &cBinop_FKKnhgd9_sendMessage);
}

void Heavy_Ambient::cCast_s1GXeXHe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_psFfO40Z, 0, m, &cVar_psFfO40Z_sendMessage);
}

void Heavy_Ambient::cMsg_6xwlIdjr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_kio0fLBf_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_JCP3AABh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_7v7SIiv0_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_G8KmpyuG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hea1eer4, HV_BINOP_DIVIDE, 0, m, &cBinop_hea1eer4_sendMessage);
}

void Heavy_Ambient::cCast_An5JIu8K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PgdV76Qe_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_PgdV76Qe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_HeER5HKx, 1, m, &cVar_HeER5HKx_sendMessage);
}

void Heavy_Ambient::cBinop_bqDKfiWb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_4eMEdQ1l_sendMessage);
}

void Heavy_Ambient::cCast_C9Lo2Vqx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Vk2QYhyc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_s1GXeXHe_sendMessage);
}

void Heavy_Ambient::cCast_iEbmWTlM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ODsWw6Nn, 0, m, &cVar_ODsWw6Nn_sendMessage);
}

void Heavy_Ambient::cSwitchcase_7v7SIiv0_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iEbmWTlM_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_C9Lo2Vqx_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cCast_XIpF5min_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QYvCaLS5_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_Vk2QYhyc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_px07Z5Kh_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cVar_CVW7Gbh4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_4Jm3iz5I_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_rp6mLSqn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ODsWw6Nn, 1, m, &cVar_ODsWw6Nn_sendMessage);
}

void Heavy_Ambient::cBinop_a2PNqgp6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_izvU99Ei_sendMessage);
}

void Heavy_Ambient::cVar_ODsWw6Nn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rp6mLSqn, HV_BINOP_ADD, 0, m, &cBinop_rp6mLSqn_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_FUSxJqIy, HV_BINOP_ADD, 0, m, &cBinop_FUSxJqIy_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EZTBO0Zq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tSxgz7CE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5z5jxHYS_sendMessage);
}

void Heavy_Ambient::cVar_HeER5HKx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dqRV1rQL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_G8KmpyuG_sendMessage);
}

void Heavy_Ambient::cVar_psFfO40Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ODsWw6Nn, 0, m, &cVar_ODsWw6Nn_sendMessage);
}

void Heavy_Ambient::cUnop_NEdnzLtA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_zgE2DwTm_sendMessage);
}

void Heavy_Ambient::cBinop_sefhPyqJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_NEdnzLtA_sendMessage);
}

void Heavy_Ambient::cSlice_blT0lMru_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_cKRiDuXk, 1, m, &cRandom_cKRiDuXk_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_FPW2qFDX_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_blT0lMru, 0, m, &cSlice_blT0lMru_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_cKRiDuXk, 0, m, &cRandom_cKRiDuXk_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_cKRiDuXk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_sefhPyqJ_sendMessage);
}

void Heavy_Ambient::cCast_SRDocxhc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_U8r4haXL, HV_BINOP_MULTIPLY, 1, m, &cBinop_U8r4haXL_sendMessage);
}

void Heavy_Ambient::cCast_9DhPVfpw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_n6FG0Ept_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_2NkgYwuV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_QzJ5gZoH, 1, m, &cPack_QzJ5gZoH_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_gDx3xFzh, 1, m, &cDelay_gDx3xFzh_sendMessage);
}

void Heavy_Ambient::cCast_oYbRkLkR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4lKVIT9m, HV_BINOP_SUBTRACT, 1, m, &cBinop_4lKVIT9m_sendMessage);
}

void Heavy_Ambient::cBinop_2u9zJRNy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_YZ9gnWSC_sendMessage);
}

void Heavy_Ambient::cBinop_To6OnczX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SRDocxhc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kz6mkbEW_sendMessage);
}

void Heavy_Ambient::cCast_Hkrk5pho_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_VGhIqxPP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_TLTLn9zX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8R0Umi6k_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_snEhNx9J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RamEIDkS, HV_BINOP_MULTIPLY, 1, m, &cBinop_RamEIDkS_sendMessage);
}

void Heavy_Ambient::cCast_PDYlcTAb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_D9mla5sR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_4lKVIT9m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_Nq5S4ZaA_sendMessage);
}

void Heavy_Ambient::cCast_i5FLkxuY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2u9zJRNy, HV_BINOP_SUBTRACT, 1, m, &cBinop_2u9zJRNy_sendMessage);
}

void Heavy_Ambient::cMsg_pMIy3pDj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_To6OnczX, HV_BINOP_SUBTRACT, 0, m, &cBinop_To6OnczX_sendMessage);
}

void Heavy_Ambient::cBinop_YZ9gnWSC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_7oPUoK92, m);
}

void Heavy_Ambient::cBinop_U8r4haXL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_i5FLkxuY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TLTLn9zX_sendMessage);
}

void Heavy_Ambient::cBinop_Nq5S4ZaA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Yy2TGrzA, m);
}

void Heavy_Ambient::cPack_QzJ5gZoH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_vZFTF1fi_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_zgE2DwTm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_QzJ5gZoH, 0, m, &cPack_QzJ5gZoH_sendMessage);
}

void Heavy_Ambient::cBinop_RamEIDkS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oYbRkLkR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9DhPVfpw_sendMessage);
}

void Heavy_Ambient::cDelay_gDx3xFzh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_gDx3xFzh, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Hkrk5pho_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yFonh7lu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PDYlcTAb_sendMessage);
}

void Heavy_Ambient::cMsg_tdkA5rGg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_gDx3xFzh, 0, m, &cDelay_gDx3xFzh_sendMessage);
}

void Heavy_Ambient::cCast_YIuwOusW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_gDx3xFzh, 0, m, &cDelay_gDx3xFzh_sendMessage);
}

void Heavy_Ambient::cSwitchcase_D9mla5sR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_tdkA5rGg_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_tdkA5rGg_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_gDx3xFzh, 1, m, &cDelay_gDx3xFzh_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YIuwOusW_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_FYlHar1V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_HZI2ybap, 1, m, &cRandom_HZI2ybap_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_vshtwZjn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_pFhFwNCY_sendMessage);
}

void Heavy_Ambient::cSwitchcase_VGhIqxPP_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_FYlHar1V, 0, m, &cSlice_FYlHar1V_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_HZI2ybap, 0, m, &cRandom_HZI2ybap_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_HZI2ybap_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_vshtwZjn_sendMessage);
}

void Heavy_Ambient::cUnop_pFhFwNCY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_2NkgYwuV_sendMessage);
}

void Heavy_Ambient::cBinop_vkqbSUqr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kw06mRuq, 0, m, &cVar_kw06mRuq_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_BJFlW2w1, 1, m, &cPack_BJFlW2w1_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_mzlB6EUB, 1, m, &cPack_mzlB6EUB_sendMessage);
}

void Heavy_Ambient::cReceive_ZI3roaUK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ywhfx62O_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_9K4Wew1r, 0, m, &cVar_9K4Wew1r_sendMessage);
  cMsg_ezzvjYiO_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_yjwBPRgs, 0, m, &cVar_yjwBPRgs_sendMessage);
  cMsg_qz8mMZvx_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_FDtrRm8p, 0, m, &cVar_FDtrRm8p_sendMessage);
  cMsg_e7zOSC0I_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_C05GhlLw, 0, m, &cVar_C05GhlLw_sendMessage);
  cMsg_xgIydbXN_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ncjh9UrI, 0, m, &cVar_ncjh9UrI_sendMessage);
  cMsg_YmhuDFZ8_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ihg8ufbc, 0, m, &cVar_ihg8ufbc_sendMessage);
  cMsg_FZOeKPem_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_T91B30bp, 0, m, &cVar_T91B30bp_sendMessage);
  cMsg_C60zubx1_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_aodDr1rD, 0, m, &cVar_aodDr1rD_sendMessage);
  cMsg_d9qhjJje_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tFE8C5c7, 0, m, &cVar_tFE8C5c7_sendMessage);
  cMsg_VJlbv4vT_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Kpe1d3RP, 0, m, &cVar_Kpe1d3RP_sendMessage);
  cMsg_Euqxi8Ix_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_qonXZqIG, 0, m, &cVar_qonXZqIG_sendMessage);
  cMsg_AphBEfF8_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_14ZABYlW, 0, m, &cVar_14ZABYlW_sendMessage);
  cMsg_JE3WzDfx_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7Lmt9rz8, 0, m, &cVar_7Lmt9rz8_sendMessage);
  cMsg_RB6Dw3eu_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_zNkRrTeH, 0, m, &cVar_zNkRrTeH_sendMessage);
  cMsg_dU1Xmo7F_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_BtqSy0ld, 0, m, &cVar_BtqSy0ld_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_4l1i4Gzh, 0, m, &cVar_4l1i4Gzh_sendMessage);
  cMsg_JbfBQMc3_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_FP2vYYqW, 0, m, &cVar_FP2vYYqW_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ubfBt8GB, 0, m, &cVar_ubfBt8GB_sendMessage);
  cMsg_6hGYSHWL_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_WEL8EFGy, 0, m, &cVar_WEL8EFGy_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_hpBH4K3a, 0, m, &cVar_hpBH4K3a_sendMessage);
  cMsg_CmFRIdgi_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_9B1FzMWN, 0, m, &cVar_9B1FzMWN_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_oXDGHVqF, 0, m, &cVar_oXDGHVqF_sendMessage);
  cMsg_JaIWcZpC_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_eKCnfCg0, 0, m, &cVar_eKCnfCg0_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_WSTsX39g, 0, m, &cVar_WSTsX39g_sendMessage);
  cMsg_w0IE3uPV_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_2yoyAoj2, 0, m, &cVar_2yoyAoj2_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_93uNXWK3, 0, m, &cVar_93uNXWK3_sendMessage);
  cMsg_HEDn0fDv_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Mnu6Cz1b, 0, m, &cVar_Mnu6Cz1b_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_LHw8TH1W, 0, m, &cVar_LHw8TH1W_sendMessage);
  cMsg_OI13rc1q_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_3Tn7ud5o, 0, m, &cVar_3Tn7ud5o_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_NDyAHXxE, 0, m, &cVar_NDyAHXxE_sendMessage);
  cMsg_WkhtxHKP_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tBpgdcHu, 0, m, &cVar_tBpgdcHu_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_x6u3IDyL, 0, m, &cVar_x6u3IDyL_sendMessage);
  cMsg_ZlO6JaCI_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_3I1XZeAP, 0, m, &cVar_3I1XZeAP_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_O8Okp1f6, 0, m, &cVar_O8Okp1f6_sendMessage);
  cMsg_h9N0z0JQ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_FTZ3MPHm, 0, m, &cVar_FTZ3MPHm_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_cTqIkR90, 0, m, &cVar_cTqIkR90_sendMessage);
  cMsg_g7jwIfMc_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_82Q5Ikps, 0, m, &cVar_82Q5Ikps_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_On9CkrTf, 0, m, &cVar_On9CkrTf_sendMessage);
  cMsg_sxU1Goom_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_BdfVzaKQ, 0, m, &cVar_BdfVzaKQ_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_CVW7Gbh4, 0, m, &cVar_CVW7Gbh4_sendMessage);
  cMsg_hVltPEpK_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_NmOnRpgI, 0, m, &cVar_NmOnRpgI_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_BBOrVZAi, 0, m, &cVar_BBOrVZAi_sendMessage);
  cMsg_tPkjmWmO_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_IMr1QnAi, 0, m, &cVar_IMr1QnAi_sendMessage);
  cMsg_o1z5A4BY_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_BxGqebHR, 0, m, &cVar_BxGqebHR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_a0jez7J4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pwjtyqdm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yqQzJdfs_sendMessage);
  cMsg_cSp2lqZG_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_saSqtJlr, 0, m, &cVar_saSqtJlr_sendMessage);
  cMsg_orS62UQf_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_LUbfywVs, 0, m, &cVar_LUbfywVs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_G62myAL6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iSiXpZJE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yHTxr8GB_sendMessage);
  cMsg_zGHJYKnX_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_bklfej2s, 0, m, &cVar_bklfej2s_sendMessage);
  cMsg_vudOiQh7_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7Xl12SgN, 0, m, &cVar_7Xl12SgN_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KzZERP40_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OA75nvQX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_umazng57_sendMessage);
  cMsg_qyXN2n5D_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_fM886FTP, 0, m, &cVar_fM886FTP_sendMessage);
  cMsg_VbygwshU_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_43UzNyBn, 0, m, &cVar_43UzNyBn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZpgEeK7p_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VjZ6TS6c_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_izprWBzK_sendMessage);
  cMsg_VZSInfrf_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_uJ8LvtoD, 0, m, &cVar_uJ8LvtoD_sendMessage);
  cMsg_iAgMtACE_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_txXVXEFK, 0, m, &cVar_txXVXEFK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IQxPPyNR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qVqpXAME_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qLT2DeFo_sendMessage);
  cMsg_XRzgWm8a_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Pe4f85KA, 0, m, &cVar_Pe4f85KA_sendMessage);
  cMsg_xWPyStpk_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_VHu7B7JN, 0, m, &cVar_VHu7B7JN_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fwcCcJGY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KCry9YyA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eWOT6yhI_sendMessage);
  cMsg_2jnmyjNL_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_gp22HpnH, 0, m, &cVar_gp22HpnH_sendMessage);
  cMsg_ovaFIlst_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_HWdNNXMf, 0, m, &cVar_HWdNNXMf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4yVGtRoe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7StEY3HA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QBG4XGoc_sendMessage);
  cMsg_f6AxId0i_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_PTy1WfbC, 0, m, &cVar_PTy1WfbC_sendMessage);
  cMsg_kR8INvWX_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Vi4qxlKC, 0, m, &cVar_Vi4qxlKC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5IKKBrzs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MCRW3XGi_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EXGtoAC9_sendMessage);
  cMsg_cmByDlDN_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_GDWfpRRb, 0, m, &cVar_GDWfpRRb_sendMessage);
  cMsg_2CDD0MqP_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_08CHn3Cp, 0, m, &cVar_08CHn3Cp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TVPOfDMx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3R55aXC2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LmIc93tW_sendMessage);
  cMsg_OgplwNVy_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_sxCCVpPm, 0, m, &cVar_sxCCVpPm_sendMessage);
  cMsg_kV6fkRV9_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_BJTkgrtf, 0, m, &cVar_BJTkgrtf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jfQtmXDG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vJJ7gaIV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EJbYzpE3_sendMessage);
  cMsg_N12SGwAi_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tS1Bi5FP, 0, m, &cVar_tS1Bi5FP_sendMessage);
  cMsg_SwsBIcn2_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_4XLMrTdj, 0, m, &cVar_4XLMrTdj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_L2kyRrvs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D2381iKo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DcLlgumM_sendMessage);
  cMsg_aEbZCXtE_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_RSuToo81, 0, m, &cVar_RSuToo81_sendMessage);
  cMsg_EwMzliFP_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_irwwzLr7, 0, m, &cVar_irwwzLr7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2k4CUcya_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5uSj1NH0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M8Ki7u2O_sendMessage);
  cMsg_7UTI4LjT_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_kw06mRuq, 0, m, &cVar_kw06mRuq_sendMessage);
  cMsg_U7VfQunM_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_CESUsbED, 0, m, &cVar_CESUsbED_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Hkrk5pho_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yFonh7lu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PDYlcTAb_sendMessage);
  cMsg_zZNcAmVE_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_uyroj1UI, 0, m, &cVar_uyroj1UI_sendMessage);
  cMsg_QvQtvpzB_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_lF8gxT1G, 0, m, &cVar_lF8gxT1G_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D2lwtzN6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4v42EJzK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FX5RofAW_sendMessage);
  cSwitchcase_wdfcApVD_onMessage(_c, NULL, 0, m, NULL);
  cMsg_2kw53d1T_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_eUdNOiVL, 0, m, &cVar_eUdNOiVL_sendMessage);
  cMsg_G74CHLho_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_W96uWS2B, 0, m, &cVar_W96uWS2B_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NhPl0b6P_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ROOgU2b8_sendMessage);
}

void Heavy_Ambient::cMsg_Gd8eP3Pt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_InPNGpFA, 0, m, &cVar_InPNGpFA_sendMessage);
}

void Heavy_Ambient::cPack_mR3dDZSR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_IkCYM5gX, 0, m, NULL);
}

void Heavy_Ambient::cMsg_sl6Xcxg4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_t5xeYJGH_sendMessage);
}

void Heavy_Ambient::cMsg_2KKQV88X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_XE5414rj_sendMessage);
}

void Heavy_Ambient::cBinop_jwvpRQj3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_aEq46AjZ, m);
}

void Heavy_Ambient::cMsg_uCvz0Tom_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_72M1CbR9, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_QgPlqAMg, m);
}

void Heavy_Ambient::cVar_4XLMrTdj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_ll75RT1Y_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_PgeP5cy6, 0, m, &cIf_PgeP5cy6_sendMessage);
}

void Heavy_Ambient::cBinop_t5xeYJGH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_72M1CbR9, m);
}

void Heavy_Ambient::cIf_PgeP5cy6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_2KKQV88X_sendMessage(_c, 0, m);
      cMsg_uCvz0Tom_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_sl6Xcxg4_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_XE5414rj_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_QgPlqAMg, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_ll75RT1Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_PgeP5cy6, 1, m, &cIf_PgeP5cy6_sendMessage);
}

void Heavy_Ambient::cMsg_xLp2Hp8i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_jwvpRQj3_sendMessage);
}

void Heavy_Ambient::cBinop_FO0TkiRA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tmsmZX0f_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_hIPVeejX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_FO0TkiRA_sendMessage);
}

void Heavy_Ambient::cMsg_tmsmZX0f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_u671feJV_sendMessage);
}

void Heavy_Ambient::cBinop_u671feJV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vWJ6Kciq, m);
}

void Heavy_Ambient::cSystem_qL0xlV0T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xLp2Hp8i_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_SwsBIcn2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qL0xlV0T_sendMessage);
}

void Heavy_Ambient::cBinop_XE5414rj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hIPVeejX_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_P2D4DIJp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_mR3dDZSR, 0, m, &cPack_mR3dDZSR_sendMessage);
}

void Heavy_Ambient::cCast_ndDlLavU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_KeiXnjOK_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_am3cqNhg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Khl1LbLE, 0, m, &cDelay_Khl1LbLE_sendMessage);
}

void Heavy_Ambient::cMsg_N12SGwAi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ASxYMGB8_sendMessage);
}

void Heavy_Ambient::cSystem_ASxYMGB8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_3pagAjqP_sendMessage);
}

void Heavy_Ambient::cBinop_3pagAjqP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HdGweHMQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_HdGweHMQ_sendMessage);
}

void Heavy_Ambient::cBinop_XFVX1Qej_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Khl1LbLE, 2, m, &cDelay_Khl1LbLE_sendMessage);
}

void Heavy_Ambient::cCast_duE0pgQL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_am3cqNhg_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Khl1LbLE, 0, m, &cDelay_Khl1LbLE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ndDlLavU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VtNo38L7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cA8SPyhv_sendMessage);
}

void Heavy_Ambient::cVar_tS1Bi5FP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HdGweHMQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_HdGweHMQ_sendMessage);
}

void Heavy_Ambient::cDelay_Khl1LbLE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Khl1LbLE, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Khl1LbLE, 0, m, &cDelay_Khl1LbLE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ndDlLavU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VtNo38L7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cA8SPyhv_sendMessage);
}

void Heavy_Ambient::cSwitchcase_hsPoBLkN_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_am3cqNhg_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_am3cqNhg_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_duE0pgQL_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_HdGweHMQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_XFVX1Qej_sendMessage);
}

void Heavy_Ambient::cUnop_ANwwV0lt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1800.0f, 0, m, &cBinop_6nYKqE6S_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_P2D4DIJp_sendMessage);
}

void Heavy_Ambient::cRandom_bILyboQo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_8IhOesPl_sendMessage);
}

void Heavy_Ambient::cSlice_3ZaxqYnV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_bILyboQo, 1, m, &cRandom_bILyboQo_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_x2bwn5pU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_3ZaxqYnV, 0, m, &cSlice_3ZaxqYnV_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_bILyboQo, 0, m, &cRandom_bILyboQo_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_8IhOesPl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_ANwwV0lt_sendMessage);
}

void Heavy_Ambient::cSlice_Q7lCoMb5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_fj3gTz6B, 1, m, &cRandom_fj3gTz6B_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_9BHMly5d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_t6bY0S0d_sendMessage);
}

void Heavy_Ambient::cRandom_fj3gTz6B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_9BHMly5d_sendMessage);
}

void Heavy_Ambient::cUnop_t6bY0S0d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_XshTV6ST_sendMessage);
}

void Heavy_Ambient::cSwitchcase_KeiXnjOK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Q7lCoMb5, 0, m, &cSlice_Q7lCoMb5_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_fj3gTz6B, 0, m, &cRandom_fj3gTz6B_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_XshTV6ST_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tS1Bi5FP, 0, m, &cVar_tS1Bi5FP_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_wVuetUjl, 1, m, &cPack_wVuetUjl_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_mR3dDZSR, 1, m, &cPack_mR3dDZSR_sendMessage);
}

void Heavy_Ambient::cBinop_6nYKqE6S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_wVuetUjl, 0, m, &cPack_wVuetUjl_sendMessage);
}

void Heavy_Ambient::cCast_VtNo38L7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Ambient::cMsg_eDiNtfVg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_E58SXT24, HV_BINOP_SUBTRACT, 0, m, &cBinop_E58SXT24_sendMessage);
}

void Heavy_Ambient::cBinop_2jC6ZygN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ke5z8o8h, 1, m, &cPack_ke5z8o8h_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_E2lEn8OP, 1, m, &cDelay_E2lEn8OP_sendMessage);
}

void Heavy_Ambient::cCast_HIQRcpYv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6dL4pcJf, HV_BINOP_MULTIPLY, 1, m, &cBinop_6dL4pcJf_sendMessage);
}

void Heavy_Ambient::cPack_ke5z8o8h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_nhumOC2R_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_I8JwPPan_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_kv7PpcFH, HV_BINOP_SUBTRACT, 0, m, &cBinop_kv7PpcFH_sendMessage);
}

void Heavy_Ambient::cBinop_WY5Ar4D1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_YwXE32u9, m);
}

void Heavy_Ambient::cCast_DTAG7VBg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6dL4pcJf, HV_BINOP_MULTIPLY, 0, m, &cBinop_6dL4pcJf_sendMessage);
}

void Heavy_Ambient::cCast_dpWDX2dJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lfmwPUwO, HV_BINOP_SUBTRACT, 1, m, &cBinop_lfmwPUwO_sendMessage);
}

void Heavy_Ambient::cBinop_JJgh48H9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dpWDX2dJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kkWjHqkQ_sendMessage);
}

void Heavy_Ambient::cBinop_E58SXT24_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HIQRcpYv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DTAG7VBg_sendMessage);
}

void Heavy_Ambient::cBinop_lfmwPUwO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_GdaTeHgp_sendMessage);
}

void Heavy_Ambient::cCast_EBlu2suR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JJgh48H9, HV_BINOP_MULTIPLY, 1, m, &cBinop_JJgh48H9_sendMessage);
}

void Heavy_Ambient::cCast_Fqo2fIEs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_I8JwPPan_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_GdaTeHgp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_eUS0Xrf2, m);
}

void Heavy_Ambient::cBinop_i6VZstT9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_nfNCtrLD_sendMessage);
}

void Heavy_Ambient::cRandom_SNX1seTx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_i6VZstT9_sendMessage);
}

void Heavy_Ambient::cUnop_nfNCtrLD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_2jC6ZygN_sendMessage);
}

void Heavy_Ambient::cSwitchcase_4Emh7l3Q_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_bez9s1w8, 0, m, &cSlice_bez9s1w8_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_SNX1seTx, 0, m, &cRandom_SNX1seTx_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_bez9s1w8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_SNX1seTx, 1, m, &cRandom_SNX1seTx_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cCast_es052rsT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JJgh48H9, HV_BINOP_MULTIPLY, 0, m, &cBinop_JJgh48H9_sendMessage);
}

void Heavy_Ambient::cBinop_kv7PpcFH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_WY5Ar4D1_sendMessage);
}

void Heavy_Ambient::cCast_yNOfjGk9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EBlu2suR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_es052rsT_sendMessage);
}

void Heavy_Ambient::cCast_3lKiwYYT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_E2lEn8OP, 0, m, &cDelay_E2lEn8OP_sendMessage);
}

void Heavy_Ambient::cDelay_E2lEn8OP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_E2lEn8OP, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_L2kyRrvs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D2381iKo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DcLlgumM_sendMessage);
}

void Heavy_Ambient::cSwitchcase_GbS1Pdcc_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_wie4wMBA_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_wie4wMBA_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_E2lEn8OP, 1, m, &cDelay_E2lEn8OP_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3lKiwYYT_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_wie4wMBA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_E2lEn8OP, 0, m, &cDelay_E2lEn8OP_sendMessage);
}

void Heavy_Ambient::cVar_cTqIkR90_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_b3cR19SA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_fLRU9C8V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FTZ3MPHm, 0, m, &cVar_FTZ3MPHm_sendMessage);
}

void Heavy_Ambient::cVar_qonXZqIG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_flN0PQ9H, HV_BINOP_MULTIPLY, 0, m, &cBinop_flN0PQ9H_sendMessage);
}

void Heavy_Ambient::cMsg_Euqxi8Ix_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_B87I5fK0_sendMessage);
}

void Heavy_Ambient::cSystem_B87I5fK0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_qMiNzm6i_sendMessage);
}

void Heavy_Ambient::cMsg_YBBtjhgE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_bPqmetpq, 0, m, &cDelay_bPqmetpq_sendMessage);
}

void Heavy_Ambient::cDelay_bPqmetpq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_bPqmetpq, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_bPqmetpq, 0, m, &cDelay_bPqmetpq_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_l7cZrKvz, 0, m, &cVar_l7cZrKvz_sendMessage);
}

void Heavy_Ambient::cBinop_qMiNzm6i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_flN0PQ9H, HV_BINOP_MULTIPLY, 1, m, &cBinop_flN0PQ9H_sendMessage);
}

void Heavy_Ambient::cBinop_5TkKGd5n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_bPqmetpq, 2, m, &cDelay_bPqmetpq_sendMessage);
}

void Heavy_Ambient::cCast_sOm8umZG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YBBtjhgE_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_bPqmetpq, 0, m, &cDelay_bPqmetpq_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_l7cZrKvz, 0, m, &cVar_l7cZrKvz_sendMessage);
}

void Heavy_Ambient::cBinop_flN0PQ9H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_5TkKGd5n_sendMessage);
}

void Heavy_Ambient::cSwitchcase_7zfvyGPz_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_YBBtjhgE_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_YBBtjhgE_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sOm8umZG_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_FGcCtXUX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_7zfvyGPz_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_D6zjWViP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EjV0Y6Hv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Wu9MniAS_sendMessage);
}

void Heavy_Ambient::cCast_rbmf8MqL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_omN6apoa, 0, m, &cVar_omN6apoa_sendMessage);
}

void Heavy_Ambient::cSwitchcase_MEmOkqJA_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rbmf8MqL_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D6zjWViP_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cMsg_ObzKVFZ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_N27wstDy, 1, m, &cVar_N27wstDy_sendMessage);
}

void Heavy_Ambient::cCast_OzKlDj8T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eY4EJ5V6_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_EJShhbe7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_omN6apoa, 1, m, &cVar_omN6apoa_sendMessage);
}

void Heavy_Ambient::cVar_omN6apoa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EJShhbe7, HV_BINOP_ADD, 0, m, &cBinop_EJShhbe7_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fLRU9C8V, HV_BINOP_ADD, 0, m, &cBinop_fLRU9C8V_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GnR7nXau_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_I3gWcihI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yNOfjGk9_sendMessage);
}

void Heavy_Ambient::cCast_2JcNUjEr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wYkMcTtk_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_eY4EJ5V6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_7zfvyGPz_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cVar_N27wstDy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_injWK6gR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZN0arb9y_sendMessage);
}

void Heavy_Ambient::cCast_EjV0Y6Hv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wYkMcTtk_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSlice_hR90XjCJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_eY4EJ5V6_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_eY4EJ5V6_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_ZS5sCTKg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OzKlDj8T_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SQxsoLFW_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OzKlDj8T_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SQxsoLFW_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_nhumOC2R_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_hR90XjCJ, 0, m, &cSlice_hR90XjCJ_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZS5sCTKg, 0, m, &cSlice_ZS5sCTKg_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wsT2aEEa_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_fsJxVSWs, 0, m, &cSlice_fsJxVSWs_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_50BB4Q8S, 0, m, &cSlice_50BB4Q8S_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ioXOEsDL_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_u4ROREAp_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_E2kY42Ju_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_l7cZrKvz, 1, m, &cVar_l7cZrKvz_sendMessage);
}

void Heavy_Ambient::cBinop_LQLoyyie_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qbjZS08E, HV_BINOP_SUBTRACT, 1, m, &cBinop_qbjZS08E_sendMessage);
}

void Heavy_Ambient::cCast_u4ROREAp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ObzKVFZ0_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSystem_xynMRkma_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fSfsHE7m, HV_BINOP_MULTIPLY, 1, m, &cBinop_fSfsHE7m_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CA0KPfkQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_CA0KPfkQ_sendMessage);
}

void Heavy_Ambient::cMsg_h9N0z0JQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xynMRkma_sendMessage);
}

void Heavy_Ambient::cBinop_fSfsHE7m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_LQLoyyie_sendMessage);
}

void Heavy_Ambient::cCast_iX9TQv6m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QRC1xjTz_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_b3cR19SA_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iX9TQv6m_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_fSfsHE7m, HV_BINOP_MULTIPLY, 0, m, &cBinop_fSfsHE7m_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_6DzTWTc4, HV_BINOP_DIVIDE, 1, m, &cBinop_6DzTWTc4_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_qonXZqIG, 0, m, &cVar_qonXZqIG_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_ioXOEsDL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FGcCtXUX_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_CA0KPfkQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_E2kY42Ju_sendMessage);
}

void Heavy_Ambient::cBinop_27bwO6wU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HlyGfzpE, HV_BINOP_DIVIDE, 0, m, &cBinop_HlyGfzpE_sendMessage);
}

void Heavy_Ambient::cCast_4DYghzah_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cz8TT4nE, 1, m, &cVar_cz8TT4nE_sendMessage);
}

void Heavy_Ambient::cCast_VbexT27P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_27bwO6wU, HV_BINOP_SUBTRACT, 0, m, &cBinop_27bwO6wU_sendMessage);
}

void Heavy_Ambient::cVar_FTZ3MPHm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_27bwO6wU, HV_BINOP_SUBTRACT, 1, m, &cBinop_27bwO6wU_sendMessage);
}

void Heavy_Ambient::cMsg_wYkMcTtk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_7zfvyGPz_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fLRU9C8V, HV_BINOP_ADD, 1, m, &cBinop_fLRU9C8V_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_EJShhbe7, HV_BINOP_ADD, 1, m, &cBinop_EJShhbe7_sendMessage);
}

void Heavy_Ambient::cCast_ZN0arb9y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6DzTWTc4, HV_BINOP_DIVIDE, 0, m, &cBinop_6DzTWTc4_sendMessage);
}

void Heavy_Ambient::cBinop_T3ahCK0v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_MEmOkqJA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_injWK6gR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CA0KPfkQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_CA0KPfkQ_sendMessage);
}

void Heavy_Ambient::cVar_cz8TT4nE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_omN6apoa, 0, m, &cVar_omN6apoa_sendMessage);
}

void Heavy_Ambient::cCast_Wu9MniAS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cz8TT4nE, 0, m, &cVar_cz8TT4nE_sendMessage);
}

void Heavy_Ambient::cMsg_QRC1xjTz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fSfsHE7m, HV_BINOP_MULTIPLY, 0, m, &cBinop_fSfsHE7m_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_6DzTWTc4, HV_BINOP_DIVIDE, 1, m, &cBinop_6DzTWTc4_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_qonXZqIG, 0, m, &cVar_qonXZqIG_sendMessage);
}

void Heavy_Ambient::cBinop_6DzTWTc4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HlyGfzpE, HV_BINOP_DIVIDE, 1, m, &cBinop_HlyGfzpE_sendMessage);
}

void Heavy_Ambient::cVar_l7cZrKvz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qbjZS08E, HV_BINOP_SUBTRACT, 0, m, &cBinop_qbjZS08E_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_T3ahCK0v_sendMessage);
}

void Heavy_Ambient::cBinop_qbjZS08E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_l7cZrKvz, 1, m, &cVar_l7cZrKvz_sendMessage);
}

void Heavy_Ambient::cCast_SQxsoLFW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2JcNUjEr_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fLRU9C8V, HV_BINOP_ADD, 0, m, &cBinop_fLRU9C8V_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_omN6apoa, 1, m, &cVar_omN6apoa_sendMessage);
}

void Heavy_Ambient::cCast_wsT2aEEa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_N27wstDy, 0, m, &cVar_N27wstDy_sendMessage);
}

void Heavy_Ambient::cBinop_HlyGfzpE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fLRU9C8V, HV_BINOP_ADD, 1, m, &cBinop_fLRU9C8V_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_EJShhbe7, HV_BINOP_ADD, 1, m, &cBinop_EJShhbe7_sendMessage);
}

void Heavy_Ambient::cSlice_fsJxVSWs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_injWK6gR_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZN0arb9y_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_50BB4Q8S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4DYghzah_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VbexT27P_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cCast_I3gWcihI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eDiNtfVg_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_kkWjHqkQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9VbQE5c8_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_Q8sSXiyf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kv7PpcFH, HV_BINOP_SUBTRACT, 1, m, &cBinop_kv7PpcFH_sendMessage);
}

void Heavy_Ambient::cBinop_8s8y22BS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_pC0X4D6n_sendMessage);
}

void Heavy_Ambient::cSwitchcase_luQ98Ii4_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_0yg8sgKa, 0, m, &cSlice_0yg8sgKa_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_ZV9HgagZ, 0, m, &cRandom_ZV9HgagZ_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cUnop_pC0X4D6n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_RDt24Kad_sendMessage);
}

void Heavy_Ambient::cSlice_0yg8sgKa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_ZV9HgagZ, 1, m, &cRandom_ZV9HgagZ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cRandom_ZV9HgagZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_8s8y22BS_sendMessage);
}

void Heavy_Ambient::cCast_D2381iKo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_luQ98Ii4_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_DcLlgumM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_GbS1Pdcc_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_RDt24Kad_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ke5z8o8h, 0, m, &cPack_ke5z8o8h_sendMessage);
}

void Heavy_Ambient::cCast_L2kyRrvs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_4Emh7l3Q_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_9VbQE5c8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_lfmwPUwO, HV_BINOP_SUBTRACT, 0, m, &cBinop_lfmwPUwO_sendMessage);
}

void Heavy_Ambient::cBinop_6dL4pcJf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Q8sSXiyf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Fqo2fIEs_sendMessage);
}

void Heavy_Ambient::cCast_GnR7nXau_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_E58SXT24, HV_BINOP_SUBTRACT, 1, m, &cBinop_E58SXT24_sendMessage);
}

void Heavy_Ambient::cCast_cA8SPyhv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_x2bwn5pU_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cPack_wVuetUjl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_IKs3z4LT, 0, m, NULL);
}

void Heavy_Ambient::cVar_CdY0PsYM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_W96uWS2B, 0, m, &cVar_W96uWS2B_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_eUdNOiVL, 0, m, &cVar_eUdNOiVL_sendMessage);
}

void Heavy_Ambient::cMsg_XQCiLL5Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_cZkIE0Wb_sendMessage);
}

void Heavy_Ambient::cMsg_2kw53d1T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Axx9AwLE_sendMessage);
}

void Heavy_Ambient::cSystem_Axx9AwLE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XQCiLL5Z_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_wHXOPMPc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_x9ORNVhV_sendMessage);
}

void Heavy_Ambient::cBinop_cZkIE0Wb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wHXOPMPc, HV_BINOP_MULTIPLY, 1, m, &cBinop_wHXOPMPc_sendMessage);
}

void Heavy_Ambient::cVar_eUdNOiVL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wHXOPMPc, HV_BINOP_MULTIPLY, 0, m, &cBinop_wHXOPMPc_sendMessage);
}

void Heavy_Ambient::cBinop_BsfrgsMv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_CJZKkqCl, m);
}

void Heavy_Ambient::cBinop_Mzjchcx4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_BsfrgsMv_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_o0qUCsxF, m);
}

void Heavy_Ambient::cBinop_x9ORNVhV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Mzjchcx4_sendMessage);
}

void Heavy_Ambient::cPack_LRjXfsTD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Qy37aPMN, 0, m, NULL);
}

void Heavy_Ambient::cBinop_zWbtbs9H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fM886FTP, 0, m, &cVar_fM886FTP_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_Ll1tVloY, 1, m, &cPack_Ll1tVloY_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_LRjXfsTD, 1, m, &cPack_LRjXfsTD_sendMessage);
}

void Heavy_Ambient::cRandom_8sbYHj8R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_dwz7nkDv_sendMessage);
}

void Heavy_Ambient::cBinop_dwz7nkDv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_YZpU10EU_sendMessage);
}

void Heavy_Ambient::cSlice_K1cIy1vD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_8sbYHj8R, 1, m, &cRandom_8sbYHj8R_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_YZpU10EU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_zWbtbs9H_sendMessage);
}

void Heavy_Ambient::cSwitchcase_qEkKID7b_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_K1cIy1vD, 0, m, &cSlice_K1cIy1vD_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_8sbYHj8R, 0, m, &cRandom_8sbYHj8R_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cDelay_ycrQCA30_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ycrQCA30, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ycrQCA30, 0, m, &cDelay_ycrQCA30_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CRaQJKz4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ak1lmAlW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ap8UwmUx_sendMessage);
}

void Heavy_Ambient::cBinop_2iUoGhyu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FpzsZ404, HV_BINOP_MULTIPLY, 1, m, &cBinop_FpzsZ404_sendMessage);
}

void Heavy_Ambient::cMsg_PgiAtd8Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_ycrQCA30, 0, m, &cDelay_ycrQCA30_sendMessage);
}

void Heavy_Ambient::cBinop_FpzsZ404_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Taprpc4d_sendMessage);
}

void Heavy_Ambient::cSwitchcase_ckYScVWp_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_PgiAtd8Q_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_PgiAtd8Q_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_idb13Uy4_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_qyXN2n5D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_22I0TvPl_sendMessage);
}

void Heavy_Ambient::cSystem_22I0TvPl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_2iUoGhyu_sendMessage);
}

void Heavy_Ambient::cVar_fM886FTP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FpzsZ404, HV_BINOP_MULTIPLY, 0, m, &cBinop_FpzsZ404_sendMessage);
}

void Heavy_Ambient::cBinop_Taprpc4d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_ycrQCA30, 2, m, &cDelay_ycrQCA30_sendMessage);
}

void Heavy_Ambient::cCast_idb13Uy4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PgiAtd8Q_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ycrQCA30, 0, m, &cDelay_ycrQCA30_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CRaQJKz4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ak1lmAlW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ap8UwmUx_sendMessage);
}

void Heavy_Ambient::cCast_CRaQJKz4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qEkKID7b_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_i3PPeD0t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Ccs4XKNW, m);
}

void Heavy_Ambient::cBinop_xekvhvCd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_hk3oyNdX, 1, m, &cIf_hk3oyNdX_sendMessage);
}

void Heavy_Ambient::cIf_hk3oyNdX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_0C0zMyKW_sendMessage(_c, 0, m);
      cMsg_Wky4srxe_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_efLCUoVW_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_1SToTtoq_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_6Sr6loz0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cMsg_kmax4Swz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_gwwx4qF1_sendMessage);
}

void Heavy_Ambient::cMsg_0C0zMyKW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_1SToTtoq_sendMessage);
}

void Heavy_Ambient::cMsg_OtTNxRhG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_NgBmTUIH_sendMessage);
}

void Heavy_Ambient::cBinop_NgBmTUIH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BWaUeyaa_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_efLCUoVW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_ZSFk7j2e_sendMessage);
}

void Heavy_Ambient::cMsg_BWaUeyaa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_i3PPeD0t_sendMessage);
}

void Heavy_Ambient::cBinop_ZSFk7j2e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_OL9p5kSu, m);
}

void Heavy_Ambient::cSystem_hxKct10Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kmax4Swz_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_VbygwshU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_hxKct10Q_sendMessage);
}

void Heavy_Ambient::cBinop_gwwx4qF1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_11IWFZ2O, m);
}

void Heavy_Ambient::cBinop_1SToTtoq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OtTNxRhG_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cVar_43UzNyBn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_xekvhvCd_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_hk3oyNdX, 0, m, &cIf_hk3oyNdX_sendMessage);
}

void Heavy_Ambient::cMsg_Wky4srxe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_OL9p5kSu, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_6Sr6loz0, m);
}

void Heavy_Ambient::cPack_Ll1tVloY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_pSM8ZlIy, 0, m, NULL);
}

void Heavy_Ambient::cCast_ap8UwmUx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_am8vpkze_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_qeg2Lpsq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_PZQP7Gdj_sendMessage);
}

void Heavy_Ambient::cRandom_5Otxhdau_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_qeg2Lpsq_sendMessage);
}

void Heavy_Ambient::cSlice_UX19zmbM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_5Otxhdau, 1, m, &cRandom_5Otxhdau_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_PZQP7Gdj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 800.0f, 0, m, &cBinop_zR3eCAJ6_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_wjKooBUr_sendMessage);
}

void Heavy_Ambient::cSwitchcase_am8vpkze_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UX19zmbM, 0, m, &cSlice_UX19zmbM_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_5Otxhdau, 0, m, &cRandom_5Otxhdau_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_ak1lmAlW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Ambient::cBinop_zR3eCAJ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Ll1tVloY, 0, m, &cPack_Ll1tVloY_sendMessage);
}

void Heavy_Ambient::cMsg_aWuY1SNl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ObBDfC9Z, HV_BINOP_SUBTRACT, 0, m, &cBinop_ObBDfC9Z_sendMessage);
}

void Heavy_Ambient::cBinop_4UhNItc0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_3uSz0hSN, 0, m, &cPack_3uSz0hSN_sendMessage);
}

void Heavy_Ambient::cCast_VjZ6TS6c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_pnSmfJDS_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_QwTuA6PB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pWAMKlBY, HV_BINOP_MULTIPLY, 1, m, &cBinop_pWAMKlBY_sendMessage);
}

void Heavy_Ambient::cMsg_mLBw4huc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_gg0Nx420, HV_BINOP_SUBTRACT, 0, m, &cBinop_gg0Nx420_sendMessage);
}

void Heavy_Ambient::cBinop_073Kir4Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_3uSz0hSN, 1, m, &cPack_3uSz0hSN_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_lu0qJky1, 1, m, &cDelay_lu0qJky1_sendMessage);
}

void Heavy_Ambient::cBinop_9o5NdvUc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_qgR3m3Yw, m);
}

void Heavy_Ambient::cBinop_pWAMKlBY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yRdXjn4a_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TxHb413b_sendMessage);
}

void Heavy_Ambient::cBinop_gg0Nx420_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QwTuA6PB_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vIkz99Oj_sendMessage);
}

void Heavy_Ambient::cBinop_oObZPpNA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_E8qlXFSi, m);
}

void Heavy_Ambient::cCast_rzXiuqtI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D4ULmnZo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Nj7BmbSy_sendMessage);
}

void Heavy_Ambient::cCast_wEkMfxLW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nCaQEmXr, 0, m, &cVar_nCaQEmXr_sendMessage);
}

void Heavy_Ambient::cSwitchcase_BJk0pLQI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wEkMfxLW_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rzXiuqtI_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cMsg_tgb5nbog_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_SN9h8vSD_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_uP7zSofU, HV_BINOP_ADD, 1, m, &cBinop_uP7zSofU_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_eU9vYWjV, HV_BINOP_ADD, 1, m, &cBinop_eU9vYWjV_sendMessage);
}

void Heavy_Ambient::cVar_CbUO3bP9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nCaQEmXr, 0, m, &cVar_nCaQEmXr_sendMessage);
}

void Heavy_Ambient::cCast_fYkHnREj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_It6GazZD, HV_BINOP_DIVIDE, 0, m, &cBinop_It6GazZD_sendMessage);
}

void Heavy_Ambient::cBinop_UpKiIm5J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uP7zSofU, HV_BINOP_ADD, 1, m, &cBinop_uP7zSofU_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_eU9vYWjV, HV_BINOP_ADD, 1, m, &cBinop_eU9vYWjV_sendMessage);
}

void Heavy_Ambient::cSystem_jNMWOhdO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2e1hmIdG, HV_BINOP_MULTIPLY, 1, m, &cBinop_2e1hmIdG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_hkZcitbD, HV_BINOP_MULTIPLY, 1, m, &cBinop_hkZcitbD_sendMessage);
}

void Heavy_Ambient::cMsg_CmFRIdgi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_jNMWOhdO_sendMessage);
}

void Heavy_Ambient::cVar_oXDGHVqF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_mUNd8HOR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_B3Z29jdT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CbUO3bP9, 1, m, &cVar_CbUO3bP9_sendMessage);
}

void Heavy_Ambient::cVar_nCaQEmXr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eU9vYWjV, HV_BINOP_ADD, 0, m, &cBinop_eU9vYWjV_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_uP7zSofU, HV_BINOP_ADD, 0, m, &cBinop_uP7zSofU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nUTa3Eqb_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_y16ycwO1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mbYJuaV0_sendMessage);
}

void Heavy_Ambient::cMsg_PMBlwABB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_SN9h8vSD_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cSlice_ScUohR8s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oJUhdf3p_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fYkHnREj_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_KDO6ivWT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_B3Z29jdT_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_47p3XHD1_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cVar_9B1FzMWN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_s06ihgxU, HV_BINOP_SUBTRACT, 1, m, &cBinop_s06ihgxU_sendMessage);
}

void Heavy_Ambient::cVar_Cm5UiaxW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oJUhdf3p_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fYkHnREj_sendMessage);
}

void Heavy_Ambient::cCast_47p3XHD1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_s06ihgxU, HV_BINOP_SUBTRACT, 0, m, &cBinop_s06ihgxU_sendMessage);
}

void Heavy_Ambient::cCast_r4UgeACy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PMBlwABB_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_LjLZ6X7S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cbT58xqs, 1, m, &cVar_cbT58xqs_sendMessage);
}

void Heavy_Ambient::cCast_D4ULmnZo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tgb5nbog_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_qtaN4FM3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BRN3HEXh, HV_BINOP_SUBTRACT, 1, m, &cBinop_BRN3HEXh_sendMessage);
}

void Heavy_Ambient::cBinop_uP7zSofU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9B1FzMWN, 0, m, &cVar_9B1FzMWN_sendMessage);
}

void Heavy_Ambient::cCast_g7oqS8iT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Cm5UiaxW, 0, m, &cVar_Cm5UiaxW_sendMessage);
}

void Heavy_Ambient::cCast_AwNQHPXM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tgb5nbog_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_5WkMFnVA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Cm5UiaxW, 1, m, &cVar_Cm5UiaxW_sendMessage);
}

void Heavy_Ambient::cCast_1IGmw9rl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FbJ5eKOH_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_It6GazZD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UpKiIm5J, HV_BINOP_DIVIDE, 1, m, &cBinop_UpKiIm5J_sendMessage);
}

void Heavy_Ambient::cBinop_s06ihgxU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UpKiIm5J, HV_BINOP_DIVIDE, 0, m, &cBinop_UpKiIm5J_sendMessage);
}

void Heavy_Ambient::cVar_C05GhlLw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DkPlRMF0, HV_BINOP_MULTIPLY, 0, m, &cBinop_DkPlRMF0_sendMessage);
}

void Heavy_Ambient::cBinop_bbcDRzje_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_NQV3k9TW, 2, m, &cDelay_NQV3k9TW_sendMessage);
}

void Heavy_Ambient::cSwitchcase_SN9h8vSD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_WvALNY9k_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_WvALNY9k_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mKTRkD2M_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_o3ldopOj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DkPlRMF0, HV_BINOP_MULTIPLY, 1, m, &cBinop_DkPlRMF0_sendMessage);
}

void Heavy_Ambient::cBinop_DkPlRMF0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_bbcDRzje_sendMessage);
}

void Heavy_Ambient::cCast_mKTRkD2M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WvALNY9k_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_NQV3k9TW, 0, m, &cDelay_NQV3k9TW_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_cbT58xqs, 0, m, &cVar_cbT58xqs_sendMessage);
}

void Heavy_Ambient::cDelay_NQV3k9TW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_NQV3k9TW, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_NQV3k9TW, 0, m, &cDelay_NQV3k9TW_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_cbT58xqs, 0, m, &cVar_cbT58xqs_sendMessage);
}

void Heavy_Ambient::cMsg_WvALNY9k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_NQV3k9TW, 0, m, &cDelay_NQV3k9TW_sendMessage);
}

void Heavy_Ambient::cSystem_sDhTfsvw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_o3ldopOj_sendMessage);
}

void Heavy_Ambient::cMsg_e7zOSC0I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sDhTfsvw_sendMessage);
}

void Heavy_Ambient::cBinop_eU9vYWjV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nCaQEmXr, 1, m, &cVar_nCaQEmXr_sendMessage);
}

void Heavy_Ambient::cCast_vCB15DTi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_v7Qdog4e_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_mUNd8HOR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vCB15DTi_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_2e1hmIdG, HV_BINOP_MULTIPLY, 0, m, &cBinop_2e1hmIdG_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_It6GazZD, HV_BINOP_DIVIDE, 1, m, &cBinop_It6GazZD_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_C05GhlLw, 0, m, &cVar_C05GhlLw_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_oJUhdf3p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hkZcitbD, HV_BINOP_MULTIPLY, 0, m, &cBinop_hkZcitbD_sendMessage);
}

void Heavy_Ambient::cCast_JW4J6BJx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AwNQHPXM_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_uP7zSofU, HV_BINOP_ADD, 0, m, &cBinop_uP7zSofU_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_nCaQEmXr, 1, m, &cVar_nCaQEmXr_sendMessage);
}

void Heavy_Ambient::cMsg_v7Qdog4e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2e1hmIdG, HV_BINOP_MULTIPLY, 0, m, &cBinop_2e1hmIdG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_It6GazZD, HV_BINOP_DIVIDE, 1, m, &cBinop_It6GazZD_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_C05GhlLw, 0, m, &cVar_C05GhlLw_sendMessage);
}

void Heavy_Ambient::cBinop_TRik1JtI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_BJk0pLQI_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cVar_cbT58xqs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BRN3HEXh, HV_BINOP_SUBTRACT, 0, m, &cBinop_BRN3HEXh_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_TRik1JtI_sendMessage);
}

void Heavy_Ambient::cMsg_FbJ5eKOH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_SN9h8vSD_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_2e1hmIdG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_qtaN4FM3_sendMessage);
}

void Heavy_Ambient::cCast_Nj7BmbSy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CbUO3bP9, 0, m, &cVar_CbUO3bP9_sendMessage);
}

void Heavy_Ambient::cCast_1ksPTMi2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5WkMFnVA_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_BRN3HEXh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cbT58xqs, 1, m, &cVar_cbT58xqs_sendMessage);
}

void Heavy_Ambient::cBinop_hkZcitbD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_LjLZ6X7S_sendMessage);
}

void Heavy_Ambient::cSlice_tRERVano_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_r4UgeACy_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JW4J6BJx_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_r4UgeACy_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JW4J6BJx_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_YqVen8hD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_PMBlwABB_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_PMBlwABB_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_Gr8nqn40_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_YqVen8hD, 0, m, &cSlice_YqVen8hD_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_tRERVano, 0, m, &cSlice_tRERVano_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_g7oqS8iT_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_ScUohR8s, 0, m, &cSlice_ScUohR8s_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_KDO6ivWT, 0, m, &cSlice_KDO6ivWT_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1IGmw9rl_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1ksPTMi2_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_ZpgEeK7p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Rrdi9fzo_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_lAwqHheq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_lu0qJky1, 0, m, &cDelay_lu0qJky1_sendMessage);
}

void Heavy_Ambient::cMsg_vGPa0mdO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_lu0qJky1, 0, m, &cDelay_lu0qJky1_sendMessage);
}

void Heavy_Ambient::cSwitchcase_SYEczLJe_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_vGPa0mdO_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_vGPa0mdO_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_lu0qJky1, 1, m, &cDelay_lu0qJky1_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lAwqHheq_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cDelay_lu0qJky1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_lu0qJky1, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZpgEeK7p_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VjZ6TS6c_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_izprWBzK_sendMessage);
}

void Heavy_Ambient::cCast_yRdXjn4a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ObBDfC9Z, HV_BINOP_SUBTRACT, 1, m, &cBinop_ObBDfC9Z_sendMessage);
}

void Heavy_Ambient::cCast_izprWBzK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_SYEczLJe_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cUnop_yz1Ot8Rm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_073Kir4Y_sendMessage);
}

void Heavy_Ambient::cBinop_7L0B6IAq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_yz1Ot8Rm_sendMessage);
}

void Heavy_Ambient::cSlice_TFbG0FUq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_GZye0rUf, 1, m, &cRandom_GZye0rUf_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_Rrdi9fzo_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_TFbG0FUq, 0, m, &cSlice_TFbG0FUq_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_GZye0rUf, 0, m, &cRandom_GZye0rUf_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_GZye0rUf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_7L0B6IAq_sendMessage);
}

void Heavy_Ambient::cCast_mbYJuaV0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_meJEDVvV_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VYb5Dejn_sendMessage);
}

void Heavy_Ambient::cMsg_Z2tMU3tG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_BAQV7s7S, HV_BINOP_SUBTRACT, 0, m, &cBinop_BAQV7s7S_sendMessage);
}

void Heavy_Ambient::cBinop_ObBDfC9Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_oObZPpNA_sendMessage);
}

void Heavy_Ambient::cCast_TxHb413b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aWuY1SNl_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_y16ycwO1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mLBw4huc_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_meJEDVvV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RZJiZKQJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_RZJiZKQJ_sendMessage);
}

void Heavy_Ambient::cSlice_Ne4ZCH6R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_aCoDvm8I, 1, m, &cRandom_aCoDvm8I_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_b9Fpt8TE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_vmDlHej0_sendMessage);
}

void Heavy_Ambient::cSwitchcase_pnSmfJDS_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Ne4ZCH6R, 0, m, &cSlice_Ne4ZCH6R_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_aCoDvm8I, 0, m, &cRandom_aCoDvm8I_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_aCoDvm8I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_b9Fpt8TE_sendMessage);
}

void Heavy_Ambient::cUnop_vmDlHej0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_4UhNItc0_sendMessage);
}

void Heavy_Ambient::cBinop_RZJiZKQJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_27ZC6wcE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_38pe6NiM_sendMessage);
}

void Heavy_Ambient::cPack_3uSz0hSN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Gr8nqn40_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_BAQV7s7S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_9o5NdvUc_sendMessage);
}

void Heavy_Ambient::cCast_27ZC6wcE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BAQV7s7S, HV_BINOP_SUBTRACT, 1, m, &cBinop_BAQV7s7S_sendMessage);
}

void Heavy_Ambient::cCast_38pe6NiM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Z2tMU3tG_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_VYb5Dejn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RZJiZKQJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_RZJiZKQJ_sendMessage);
}

void Heavy_Ambient::cCast_vIkz99Oj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pWAMKlBY, HV_BINOP_MULTIPLY, 0, m, &cBinop_pWAMKlBY_sendMessage);
}

void Heavy_Ambient::cCast_nUTa3Eqb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gg0Nx420, HV_BINOP_SUBTRACT, 1, m, &cBinop_gg0Nx420_sendMessage);
}

void Heavy_Ambient::cBinop_wjKooBUr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_LRjXfsTD, 0, m, &cPack_LRjXfsTD_sendMessage);
}

void Heavy_Ambient::cMsg_Qjc9a8r9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3000.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_CdY0PsYM, 0, m, &cVar_CdY0PsYM_sendMessage);
}

void Heavy_Ambient::cBinop_BBaLlqEO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Cx9aVgen, m);
}

void Heavy_Ambient::cBinop_kjzZBz1R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_523aqn6i, HV_BINOP_MULTIPLY, 1, m, &cBinop_523aqn6i_sendMessage);
}

void Heavy_Ambient::cBinop_523aqn6i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_DenU6KIU_sendMessage);
}

void Heavy_Ambient::cSystem_YrLXbKMW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_I3QzcbUJ_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_G74CHLho_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_YrLXbKMW_sendMessage);
}

void Heavy_Ambient::cMsg_I3QzcbUJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_kjzZBz1R_sendMessage);
}

void Heavy_Ambient::cBinop_V10f1noU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_BBaLlqEO_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_9aL8c52W, m);
}

void Heavy_Ambient::cBinop_DenU6KIU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_V10f1noU_sendMessage);
}

void Heavy_Ambient::cVar_W96uWS2B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_523aqn6i, HV_BINOP_MULTIPLY, 0, m, &cBinop_523aqn6i_sendMessage);
}

void Heavy_Ambient::cBinop_rnRfCJD7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y3twqWkm, HV_BINOP_MULTIPLY, 1, m, &cBinop_Y3twqWkm_sendMessage);
}

void Heavy_Ambient::cSwitchcase_xN1ReuVl_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_WXETQUNK_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_WXETQUNK_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DP0hHlc4_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cDelay_TEnTkVe2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_TEnTkVe2, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_TEnTkVe2, 0, m, &cDelay_TEnTkVe2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_afkZKoMZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k2z5NuQu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JTx78LZD_sendMessage);
}

void Heavy_Ambient::cBinop_Y3twqWkm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_eqTI5hui_sendMessage);
}

void Heavy_Ambient::cVar_saSqtJlr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y3twqWkm, HV_BINOP_MULTIPLY, 0, m, &cBinop_Y3twqWkm_sendMessage);
}

void Heavy_Ambient::cCast_DP0hHlc4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WXETQUNK_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_TEnTkVe2, 0, m, &cDelay_TEnTkVe2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_afkZKoMZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k2z5NuQu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JTx78LZD_sendMessage);
}

void Heavy_Ambient::cBinop_eqTI5hui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_TEnTkVe2, 2, m, &cDelay_TEnTkVe2_sendMessage);
}

void Heavy_Ambient::cSystem_VS1ux83j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_rnRfCJD7_sendMessage);
}

void Heavy_Ambient::cMsg_cSp2lqZG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_VS1ux83j_sendMessage);
}

void Heavy_Ambient::cMsg_WXETQUNK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_TEnTkVe2, 0, m, &cDelay_TEnTkVe2_sendMessage);
}

void Heavy_Ambient::cRandom_YiYHweCt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_fUU5EgNo_sendMessage);
}

void Heavy_Ambient::cSwitchcase_DLyWmKbD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_dbXQZD1i, 0, m, &cSlice_dbXQZD1i_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_YiYHweCt, 0, m, &cRandom_YiYHweCt_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_fUU5EgNo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_lscfbfgC_sendMessage);
}

void Heavy_Ambient::cUnop_lscfbfgC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_eCsoRPvd_sendMessage);
}

void Heavy_Ambient::cSlice_dbXQZD1i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_YiYHweCt, 1, m, &cRandom_YiYHweCt_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_8H06f10o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_C6avFojE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HPVzsO4R_sendMessage);
}

void Heavy_Ambient::cCast_G62myAL6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_DLyWmKbD_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cUnop_XxioevHF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_c3VZReOW_sendMessage);
}

void Heavy_Ambient::cSwitchcase_UPNdPhgt_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_KA3B72SG, 0, m, &cSlice_KA3B72SG_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_aNp7wtC5, 0, m, &cRandom_aNp7wtC5_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_aNp7wtC5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_SOfz74Ph_sendMessage);
}

void Heavy_Ambient::cBinop_SOfz74Ph_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_XxioevHF_sendMessage);
}

void Heavy_Ambient::cSlice_KA3B72SG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_aNp7wtC5, 1, m, &cRandom_aNp7wtC5_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cCast_y1w06XLy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8H06f10o, HV_BINOP_SUBTRACT, 1, m, &cBinop_8H06f10o_sendMessage);
}

void Heavy_Ambient::cBinop_eCsoRPvd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_S2vUQ5Jl, 1, m, &cPack_S2vUQ5Jl_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ibjaRnil, 1, m, &cDelay_ibjaRnil_sendMessage);
}

void Heavy_Ambient::cMsg_gwXjMbYN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_wLDNsAUC, HV_BINOP_SUBTRACT, 0, m, &cBinop_wLDNsAUC_sendMessage);
}

void Heavy_Ambient::cCast_6buNwbhx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wLDNsAUC, HV_BINOP_SUBTRACT, 1, m, &cBinop_wLDNsAUC_sendMessage);
}

void Heavy_Ambient::cCast_C6avFojE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gtNxpxM7, HV_BINOP_MULTIPLY, 1, m, &cBinop_gtNxpxM7_sendMessage);
}

void Heavy_Ambient::cCast_ksPQv68X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_V8m5ZrXd_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_P76fZqyd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_8H06f10o, HV_BINOP_SUBTRACT, 0, m, &cBinop_8H06f10o_sendMessage);
}

void Heavy_Ambient::cCast_S0Rnjdtc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_P76fZqyd_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cPack_S2vUQ5Jl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_KZhX1c1f_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_Dy30iI8M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_Hr171kdd_sendMessage);
}

void Heavy_Ambient::cBinop_c3VZReOW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_S2vUQ5Jl, 0, m, &cPack_S2vUQ5Jl_sendMessage);
}

void Heavy_Ambient::cBinop_wLDNsAUC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_B5xY1vpw_sendMessage);
}

void Heavy_Ambient::cMsg_V8m5ZrXd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dy30iI8M, HV_BINOP_SUBTRACT, 0, m, &cBinop_Dy30iI8M_sendMessage);
}

void Heavy_Ambient::cBinop_B5xY1vpw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KeXFIfUq, m);
}

void Heavy_Ambient::cCast_HDAFKALK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dy30iI8M, HV_BINOP_SUBTRACT, 1, m, &cBinop_Dy30iI8M_sendMessage);
}

void Heavy_Ambient::cBinop_Hr171kdd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UCo4wApe, m);
}

void Heavy_Ambient::cBinop_TLCqOoyB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HDAFKALK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ksPQv68X_sendMessage);
}

void Heavy_Ambient::cCast_oAkvf6yi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TINgk6Xb_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tlc9GPh4_sendMessage);
}

void Heavy_Ambient::cCast_HPVzsO4R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gtNxpxM7, HV_BINOP_MULTIPLY, 0, m, &cBinop_gtNxpxM7_sendMessage);
}

void Heavy_Ambient::cCast_TINgk6Xb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TLCqOoyB, HV_BINOP_MULTIPLY, 1, m, &cBinop_TLCqOoyB_sendMessage);
}

void Heavy_Ambient::cVar_HsyIegC5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_d2lSUwlG, HV_BINOP_SUBTRACT, 0, m, &cBinop_d2lSUwlG_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_xGCRD7qP_sendMessage);
}

void Heavy_Ambient::cMsg_vmERjOSW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_FJHxtO8z, 1, m, &cVar_FJHxtO8z_sendMessage);
}

void Heavy_Ambient::cBinop_JjNVW8C7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CVFqG9r2, HV_BINOP_ADD, 1, m, &cBinop_CVFqG9r2_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_mdxSzMtI, HV_BINOP_ADD, 1, m, &cBinop_mdxSzMtI_sendMessage);
}

void Heavy_Ambient::cMsg_Jg4X3doP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_y29k62TY, HV_BINOP_MULTIPLY, 0, m, &cBinop_y29k62TY_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_iKsicy2S, HV_BINOP_DIVIDE, 1, m, &cBinop_iKsicy2S_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_yjwBPRgs, 0, m, &cVar_yjwBPRgs_sendMessage);
}

void Heavy_Ambient::cMsg_eHnhyhCD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_ycMG1ZBM_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CVFqG9r2, HV_BINOP_ADD, 1, m, &cBinop_CVFqG9r2_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_mdxSzMtI, HV_BINOP_ADD, 1, m, &cBinop_mdxSzMtI_sendMessage);
}

void Heavy_Ambient::cCast_tyjra1XA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BFybiRXe, HV_BINOP_SUBTRACT, 0, m, &cBinop_BFybiRXe_sendMessage);
}

void Heavy_Ambient::cCast_AyJT7WDN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MSu2zfww_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2K0wnL3d_sendMessage);
}

void Heavy_Ambient::cCast_mW6cqNCt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_DaKK0EMB, 0, m, &cVar_DaKK0EMB_sendMessage);
}

void Heavy_Ambient::cSwitchcase_Wg1225cQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mW6cqNCt_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AyJT7WDN_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cVar_vyKSy1wU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_DaKK0EMB, 0, m, &cVar_DaKK0EMB_sendMessage);
}

void Heavy_Ambient::cMsg_wDVk3VU7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Mr0YkmO3, 0, m, &cDelay_Mr0YkmO3_sendMessage);
}

void Heavy_Ambient::cBinop_WXQVrDyE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EqlSb9et, HV_BINOP_MULTIPLY, 1, m, &cBinop_EqlSb9et_sendMessage);
}

void Heavy_Ambient::cVar_yjwBPRgs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EqlSb9et, HV_BINOP_MULTIPLY, 0, m, &cBinop_EqlSb9et_sendMessage);
}

void Heavy_Ambient::cBinop_g51R2AqO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Mr0YkmO3, 2, m, &cDelay_Mr0YkmO3_sendMessage);
}

void Heavy_Ambient::cSwitchcase_ycMG1ZBM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_wDVk3VU7_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_wDVk3VU7_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_og2ga8ra_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_EqlSb9et_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_g51R2AqO_sendMessage);
}

void Heavy_Ambient::cCast_og2ga8ra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wDVk3VU7_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Mr0YkmO3, 0, m, &cDelay_Mr0YkmO3_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_HsyIegC5, 0, m, &cVar_HsyIegC5_sendMessage);
}

void Heavy_Ambient::cDelay_Mr0YkmO3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Mr0YkmO3, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Mr0YkmO3, 0, m, &cDelay_Mr0YkmO3_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_HsyIegC5, 0, m, &cVar_HsyIegC5_sendMessage);
}

void Heavy_Ambient::cMsg_ezzvjYiO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_69mi2hSE_sendMessage);
}

void Heavy_Ambient::cSystem_69mi2hSE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_WXQVrDyE_sendMessage);
}

void Heavy_Ambient::cBinop_BFybiRXe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JjNVW8C7, HV_BINOP_DIVIDE, 0, m, &cBinop_JjNVW8C7_sendMessage);
}

void Heavy_Ambient::cMsg_bzEUjv2C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_ycMG1ZBM_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_kRgOlAgp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eHnhyhCD_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_MSu2zfww_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eHnhyhCD_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_kGdnT972_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iKsicy2S, HV_BINOP_DIVIDE, 0, m, &cBinop_iKsicy2S_sendMessage);
}

void Heavy_Ambient::cBinop_xGCRD7qP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Wg1225cQ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_uurfeHpj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HsyIegC5, 1, m, &cVar_HsyIegC5_sendMessage);
}

void Heavy_Ambient::cBinop_d2lSUwlG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HsyIegC5, 1, m, &cVar_HsyIegC5_sendMessage);
}

void Heavy_Ambient::cCast_YI8ndkOY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kRgOlAgp_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CVFqG9r2, HV_BINOP_ADD, 0, m, &cBinop_CVFqG9r2_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_DaKK0EMB, 1, m, &cVar_DaKK0EMB_sendMessage);
}

void Heavy_Ambient::cSwitchcase_KZhX1c1f_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_JApQBA9Z, 0, m, &cSlice_JApQBA9Z_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Kl2zT1Lv, 0, m, &cSlice_Kl2zT1Lv_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_j3CwpJAr_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_QuOqMQ0S, 0, m, &cSlice_QuOqMQ0S_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_lyg564h4, 0, m, &cSlice_lyg564h4_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SKtnPkou_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IrBHXmnz_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_JApQBA9Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_bzEUjv2C_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_bzEUjv2C_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_Kl2zT1Lv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_l6jJytqt_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YI8ndkOY_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_l6jJytqt_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YI8ndkOY_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_P0Y728AA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_uurfeHpj_sendMessage);
}

void Heavy_Ambient::cVar_ubfBt8GB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_82lTJdfL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cVar_FP2vYYqW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BFybiRXe, HV_BINOP_SUBTRACT, 1, m, &cBinop_BFybiRXe_sendMessage);
}

void Heavy_Ambient::cCast_j3CwpJAr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FJHxtO8z, 0, m, &cVar_FJHxtO8z_sendMessage);
}

void Heavy_Ambient::cVar_DaKK0EMB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mdxSzMtI, HV_BINOP_ADD, 0, m, &cBinop_mdxSzMtI_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CVFqG9r2, HV_BINOP_ADD, 0, m, &cBinop_CVFqG9r2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_y1w06XLy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_S0Rnjdtc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oAkvf6yi_sendMessage);
}

void Heavy_Ambient::cBinop_y29k62TY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_8ULoxsii_sendMessage);
}

void Heavy_Ambient::cBinop_mdxSzMtI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_DaKK0EMB, 1, m, &cVar_DaKK0EMB_sendMessage);
}

void Heavy_Ambient::cVar_FJHxtO8z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XzUhlU4L_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kGdnT972_sendMessage);
}

void Heavy_Ambient::cCast_NbhOTHEX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Jg4X3doP_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_82lTJdfL_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NbhOTHEX_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_y29k62TY, HV_BINOP_MULTIPLY, 0, m, &cBinop_y29k62TY_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_iKsicy2S, HV_BINOP_DIVIDE, 1, m, &cBinop_iKsicy2S_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_yjwBPRgs, 0, m, &cVar_yjwBPRgs_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_lyg564h4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_leO4fL5P_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tyjra1XA_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_QuOqMQ0S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XzUhlU4L_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kGdnT972_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cCast_IrBHXmnz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vmERjOSW_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_XzUhlU4L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_P0Y728AA, HV_BINOP_MULTIPLY, 0, m, &cBinop_P0Y728AA_sendMessage);
}

void Heavy_Ambient::cMsg_0Ty0CiF6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_ycMG1ZBM_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_iKsicy2S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JjNVW8C7, HV_BINOP_DIVIDE, 1, m, &cBinop_JjNVW8C7_sendMessage);
}

void Heavy_Ambient::cCast_SKtnPkou_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0Ty0CiF6_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_2K0wnL3d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vyKSy1wU, 0, m, &cVar_vyKSy1wU_sendMessage);
}

void Heavy_Ambient::cBinop_8ULoxsii_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_d2lSUwlG, HV_BINOP_SUBTRACT, 1, m, &cBinop_d2lSUwlG_sendMessage);
}

void Heavy_Ambient::cCast_leO4fL5P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vyKSy1wU, 1, m, &cVar_vyKSy1wU_sendMessage);
}

void Heavy_Ambient::cMsg_JbfBQMc3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_L9Bx5JsY_sendMessage);
}

void Heavy_Ambient::cSystem_L9Bx5JsY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_y29k62TY, HV_BINOP_MULTIPLY, 1, m, &cBinop_y29k62TY_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_P0Y728AA, HV_BINOP_MULTIPLY, 1, m, &cBinop_P0Y728AA_sendMessage);
}

void Heavy_Ambient::cCast_l6jJytqt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bzEUjv2C_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_CVFqG9r2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FP2vYYqW, 0, m, &cVar_FP2vYYqW_sendMessage);
}

void Heavy_Ambient::cBinop_gtNxpxM7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6buNwbhx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tRHEQP55_sendMessage);
}

void Heavy_Ambient::cCast_yHTxr8GB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_rhwTl1aw_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_iSiXpZJE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_UPNdPhgt_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_tlc9GPh4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TLCqOoyB, HV_BINOP_MULTIPLY, 0, m, &cBinop_TLCqOoyB_sendMessage);
}

void Heavy_Ambient::cCast_uW6trbeK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_ibjaRnil, 0, m, &cDelay_ibjaRnil_sendMessage);
}

void Heavy_Ambient::cDelay_ibjaRnil_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ibjaRnil, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_G62myAL6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iSiXpZJE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yHTxr8GB_sendMessage);
}

void Heavy_Ambient::cMsg_J9fjGVpM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_ibjaRnil, 0, m, &cDelay_ibjaRnil_sendMessage);
}

void Heavy_Ambient::cSwitchcase_rhwTl1aw_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_J9fjGVpM_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_J9fjGVpM_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_ibjaRnil, 1, m, &cDelay_ibjaRnil_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uW6trbeK_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_tRHEQP55_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gwXjMbYN_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_k2z5NuQu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Ambient::cBinop_qdyRpKFi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_aytatvxo, 0, m, &cPack_aytatvxo_sendMessage);
}

void Heavy_Ambient::cBinop_yA3dZWV5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_nbkWWrl9, 0, m, &cPack_nbkWWrl9_sendMessage);
}

void Heavy_Ambient::cCast_afkZKoMZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_G32CGhnu_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cSwitchcase_G32CGhnu_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_xr3ieCQv, 0, m, &cSlice_xr3ieCQv_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_ZQwdxUFz, 0, m, &cRandom_ZQwdxUFz_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_ZQwdxUFz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_sU7I71cX_sendMessage);
}

void Heavy_Ambient::cBinop_sU7I71cX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_c2ejddiw_sendMessage);
}

void Heavy_Ambient::cUnop_c2ejddiw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_OC3ZbO2t_sendMessage);
}

void Heavy_Ambient::cSlice_xr3ieCQv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_ZQwdxUFz, 1, m, &cRandom_ZQwdxUFz_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cPack_aytatvxo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Ms6wqZEv, 0, m, NULL);
}

void Heavy_Ambient::cBinop_OC3ZbO2t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_saSqtJlr, 0, m, &cVar_saSqtJlr_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_aytatvxo, 1, m, &cPack_aytatvxo_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_nbkWWrl9, 1, m, &cPack_nbkWWrl9_sendMessage);
}

void Heavy_Ambient::cPack_nbkWWrl9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_eoCzZZGe, 0, m, NULL);
}

void Heavy_Ambient::cSwitchcase_fcf2TdPU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_RrlfY4ZS, 0, m, &cSlice_RrlfY4ZS_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_P1VEutAH, 0, m, &cRandom_P1VEutAH_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cUnop_JmhnguxK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 400.0f, 0, m, &cBinop_qdyRpKFi_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_yA3dZWV5_sendMessage);
}

void Heavy_Ambient::cBinop_aKB4fJnk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_JmhnguxK_sendMessage);
}

void Heavy_Ambient::cSlice_RrlfY4ZS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_P1VEutAH, 1, m, &cRandom_P1VEutAH_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cRandom_P1VEutAH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_aKB4fJnk_sendMessage);
}

void Heavy_Ambient::cCast_JTx78LZD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_fcf2TdPU_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_shsKIurY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_NF82E6Qn_sendMessage);
}

void Heavy_Ambient::cBinop_wMhFDuTr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BwFVHhHf_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_oNwc65ZD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_NHc5gAIB_sendMessage);
}

void Heavy_Ambient::cBinop_NHc5gAIB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_hG9zuFJR, m);
}

void Heavy_Ambient::cMsg_uvZY6okv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_kUidlgQs, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_jsT5uniN, m);
}

void Heavy_Ambient::cMsg_orS62UQf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_tN3qHE8B_sendMessage);
}

void Heavy_Ambient::cSystem_tN3qHE8B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tdChdVPI_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_BwFVHhHf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_kYAPbvBL_sendMessage);
}

void Heavy_Ambient::cIf_RR9qjJI6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_UOjHQeaA_sendMessage(_c, 0, m);
      cMsg_uvZY6okv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_shsKIurY_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_wMhFDuTr_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_jsT5uniN, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_8SLRDtNJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_RR9qjJI6, 1, m, &cIf_RR9qjJI6_sendMessage);
}

void Heavy_Ambient::cMsg_UOjHQeaA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_wMhFDuTr_sendMessage);
}

void Heavy_Ambient::cMsg_tdChdVPI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_RtV1qeMV_sendMessage);
}

void Heavy_Ambient::cBinop_kYAPbvBL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oNwc65ZD_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_RtV1qeMV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ymXd167q, m);
}

void Heavy_Ambient::cBinop_NF82E6Qn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kUidlgQs, m);
}

void Heavy_Ambient::cVar_LUbfywVs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_8SLRDtNJ_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_RR9qjJI6, 0, m, &cIf_RR9qjJI6_sendMessage);
}

void Heavy_Ambient::cBinop_5oaVSsPe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uyroj1UI, 0, m, &cVar_uyroj1UI_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_IvhJ77Up, 1, m, &cPack_IvhJ77Up_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_BEfbMuLP, 1, m, &cPack_BEfbMuLP_sendMessage);
}

void Heavy_Ambient::cPack_IvhJ77Up_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_mxv4RPjm, 0, m, NULL);
}

void Heavy_Ambient::cCast_nK3q7siR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_XrM5Dm3S_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_y6vnbK3a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RKJMguGs_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_mS5Ch8RB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QwzLpXlX, HV_BINOP_SUBTRACT, 0, m, &cBinop_QwzLpXlX_sendMessage);
}

void Heavy_Ambient::cCast_vcojSnXh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fraFLG2h, HV_BINOP_MULTIPLY, 1, m, &cBinop_fraFLG2h_sendMessage);
}

void Heavy_Ambient::cBinop_fraFLG2h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3yQUuqEK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_y6vnbK3a_sendMessage);
}

void Heavy_Ambient::cCast_wwGvqHhF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wvmgTZbc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_24uFZMTe_sendMessage);
}

void Heavy_Ambient::cCast_UaxbeJkv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mS5Ch8RB_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_FX5RofAW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_pYbT1eTv_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_RKJMguGs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_P2G5j7Nd, HV_BINOP_SUBTRACT, 0, m, &cBinop_P2G5j7Nd_sendMessage);
}

void Heavy_Ambient::cBinop_o8oZK5a5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_SSg5q8PB_sendMessage);
}

void Heavy_Ambient::cCast_iegG4jnx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CNptOhvH_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_zyzj0m9Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2aU42V5g_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_hxkdGJRU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YO0GMUOg_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_peo4jEge_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SNqBtzlC_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_dxfM5foO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YiCUahqQ, HV_BINOP_SUBTRACT, 0, m, &cBinop_YiCUahqQ_sendMessage);
}

void Heavy_Ambient::cBinop_ArCasLLd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_u2H66eTX, 1, m, &cVar_u2H66eTX_sendMessage);
}

void Heavy_Ambient::cVar_zNkRrTeH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sbTQVEDx, HV_BINOP_MULTIPLY, 0, m, &cBinop_sbTQVEDx_sendMessage);
}

void Heavy_Ambient::cBinop_NmILraFR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sbTQVEDx, HV_BINOP_MULTIPLY, 1, m, &cBinop_sbTQVEDx_sendMessage);
}

void Heavy_Ambient::cBinop_sbTQVEDx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_IlXhGadZ_sendMessage);
}

void Heavy_Ambient::cBinop_IlXhGadZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Z6ee2gYs, 2, m, &cDelay_Z6ee2gYs_sendMessage);
}

void Heavy_Ambient::cSwitchcase_IghJaYvb_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_o6oqJUHB_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_o6oqJUHB_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uaYgRW37_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_RB6Dw3eu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_B1gsgdoU_sendMessage);
}

void Heavy_Ambient::cSystem_B1gsgdoU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_NmILraFR_sendMessage);
}

void Heavy_Ambient::cCast_uaYgRW37_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_o6oqJUHB_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Z6ee2gYs, 0, m, &cDelay_Z6ee2gYs_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ahC5oRgF, 0, m, &cVar_ahC5oRgF_sendMessage);
}

void Heavy_Ambient::cMsg_o6oqJUHB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Z6ee2gYs, 0, m, &cDelay_Z6ee2gYs_sendMessage);
}

void Heavy_Ambient::cDelay_Z6ee2gYs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Z6ee2gYs, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Z6ee2gYs, 0, m, &cDelay_Z6ee2gYs_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ahC5oRgF, 0, m, &cVar_ahC5oRgF_sendMessage);
}

void Heavy_Ambient::cMsg_2aU42V5g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_IghJaYvb_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PDw0kwjG, HV_BINOP_ADD, 1, m, &cBinop_PDw0kwjG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ArCasLLd, HV_BINOP_ADD, 1, m, &cBinop_ArCasLLd_sendMessage);
}

void Heavy_Ambient::cMsg_CNptOhvH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_IghJaYvb_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_b3Sng4df_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_R5pFxclX, HV_BINOP_DIVIDE, 0, m, &cBinop_R5pFxclX_sendMessage);
}

void Heavy_Ambient::cBinop_PDw0kwjG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_NmOnRpgI, 0, m, &cVar_NmOnRpgI_sendMessage);
}

void Heavy_Ambient::cVar_QRiJF90t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_u2H66eTX, 0, m, &cVar_u2H66eTX_sendMessage);
}

void Heavy_Ambient::cBinop_aXhmIAT7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ahC5oRgF, 1, m, &cVar_ahC5oRgF_sendMessage);
}

void Heavy_Ambient::cCast_BlSGGZB1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_QRiJF90t, 0, m, &cVar_QRiJF90t_sendMessage);
}

void Heavy_Ambient::cBinop_QbkuEJkC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_3UkCOphs_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_JkZweAl0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kpkPFGlW_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_ATr0OHzl_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JkZweAl0_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_o8oZK5a5, HV_BINOP_MULTIPLY, 0, m, &cBinop_o8oZK5a5_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_R5pFxclX, HV_BINOP_DIVIDE, 1, m, &cBinop_R5pFxclX_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_zNkRrTeH, 0, m, &cVar_zNkRrTeH_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_feqtEvYe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_YO0GMUOg_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_YO0GMUOg_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_Mm6OaYQS_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_feqtEvYe, 0, m, &cSlice_feqtEvYe_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_7n30xPff, 0, m, &cSlice_7n30xPff_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RUcbE64G_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_qPpCwZUJ, 0, m, &cSlice_qPpCwZUJ_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_W3useXit, 0, m, &cSlice_W3useXit_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iegG4jnx_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_peo4jEge_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_7n30xPff_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hxkdGJRU_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MbQIYPZk_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hxkdGJRU_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MbQIYPZk_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_R5pFxclX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_03nRqzY2, HV_BINOP_DIVIDE, 1, m, &cBinop_03nRqzY2_sendMessage);
}

void Heavy_Ambient::cMsg_YO0GMUOg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_IghJaYvb_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cVar_7EFjRxOb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sKFScOOD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_b3Sng4df_sendMessage);
}

void Heavy_Ambient::cCast_V7grB5kN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_QRiJF90t, 1, m, &cVar_QRiJF90t_sendMessage);
}

void Heavy_Ambient::cMsg_kpkPFGlW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_o8oZK5a5, HV_BINOP_MULTIPLY, 0, m, &cBinop_o8oZK5a5_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_R5pFxclX, HV_BINOP_DIVIDE, 1, m, &cBinop_R5pFxclX_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_zNkRrTeH, 0, m, &cVar_zNkRrTeH_sendMessage);
}

void Heavy_Ambient::cVar_u2H66eTX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ArCasLLd, HV_BINOP_ADD, 0, m, &cBinop_ArCasLLd_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PDw0kwjG, HV_BINOP_ADD, 0, m, &cBinop_PDw0kwjG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_O86yCsdc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UaxbeJkv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wwGvqHhF_sendMessage);
}

void Heavy_Ambient::cCast_sKFScOOD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_osRUct3e, HV_BINOP_MULTIPLY, 0, m, &cBinop_osRUct3e_sendMessage);
}

void Heavy_Ambient::cVar_BBOrVZAi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ATr0OHzl_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_SSg5q8PB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aXhmIAT7, HV_BINOP_SUBTRACT, 1, m, &cBinop_aXhmIAT7_sendMessage);
}

void Heavy_Ambient::cBinop_osRUct3e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_TzsAXzDY_sendMessage);
}

void Heavy_Ambient::cBinop_TzsAXzDY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ahC5oRgF, 1, m, &cVar_ahC5oRgF_sendMessage);
}

void Heavy_Ambient::cCast_RUcbE64G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7EFjRxOb, 0, m, &cVar_7EFjRxOb_sendMessage);
}

void Heavy_Ambient::cMsg_SNqBtzlC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_7EFjRxOb, 1, m, &cVar_7EFjRxOb_sendMessage);
}

void Heavy_Ambient::cBinop_YiCUahqQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_03nRqzY2, HV_BINOP_DIVIDE, 0, m, &cBinop_03nRqzY2_sendMessage);
}

void Heavy_Ambient::cVar_NmOnRpgI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YiCUahqQ, HV_BINOP_SUBTRACT, 1, m, &cBinop_YiCUahqQ_sendMessage);
}

void Heavy_Ambient::cCast_8lwriAya_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2aU42V5g_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_03nRqzY2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PDw0kwjG, HV_BINOP_ADD, 1, m, &cBinop_PDw0kwjG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ArCasLLd, HV_BINOP_ADD, 1, m, &cBinop_ArCasLLd_sendMessage);
}

void Heavy_Ambient::cMsg_hVltPEpK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4cCZ34hN_sendMessage);
}

void Heavy_Ambient::cSystem_4cCZ34hN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_o8oZK5a5, HV_BINOP_MULTIPLY, 1, m, &cBinop_o8oZK5a5_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_osRUct3e, HV_BINOP_MULTIPLY, 1, m, &cBinop_osRUct3e_sendMessage);
}

void Heavy_Ambient::cCast_MbQIYPZk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zyzj0m9Q_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PDw0kwjG, HV_BINOP_ADD, 0, m, &cBinop_PDw0kwjG_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_u2H66eTX, 1, m, &cVar_u2H66eTX_sendMessage);
}

void Heavy_Ambient::cSlice_qPpCwZUJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sKFScOOD_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_b3Sng4df_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_W3useXit_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_V7grB5kN_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dxfM5foO_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cCast_YB1oIbTN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8lwriAya_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BlSGGZB1_sendMessage);
}

void Heavy_Ambient::cCast_vE1jhOoi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_u2H66eTX, 0, m, &cVar_u2H66eTX_sendMessage);
}

void Heavy_Ambient::cSwitchcase_3UkCOphs_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vE1jhOoi_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YB1oIbTN_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cVar_ahC5oRgF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aXhmIAT7, HV_BINOP_SUBTRACT, 0, m, &cBinop_aXhmIAT7_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_QbkuEJkC_sendMessage);
}

void Heavy_Ambient::cCast_rxyXwaFE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vLmM2xht_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_4v42EJzK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_j5gVfgxj_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_vLmM2xht_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_gfAB8oiI, HV_BINOP_SUBTRACT, 0, m, &cBinop_gfAB8oiI_sendMessage);
}

void Heavy_Ambient::cBinop_gfAB8oiI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_K4EJ0FMK_sendMessage);
}

void Heavy_Ambient::cBinop_P2G5j7Nd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_8AOe9Te3_sendMessage);
}

void Heavy_Ambient::cBinop_8AOe9Te3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Uo4XXzwN, m);
}

void Heavy_Ambient::cBinop_Dbv7Oqsf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_PSXvfnyv_sendMessage);
}

void Heavy_Ambient::cSlice_ZQ1Yqqnf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_JG8ex1z6, 1, m, &cRandom_JG8ex1z6_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_PSXvfnyv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_ixmWZFHw_sendMessage);
}

void Heavy_Ambient::cRandom_JG8ex1z6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_Dbv7Oqsf_sendMessage);
}

void Heavy_Ambient::cSwitchcase_n7d93Blk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZQ1Yqqnf, 0, m, &cSlice_ZQ1Yqqnf_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_JG8ex1z6, 0, m, &cRandom_JG8ex1z6_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_wvmgTZbc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0gdzwWDx, HV_BINOP_MULTIPLY, 1, m, &cBinop_0gdzwWDx_sendMessage);
}

void Heavy_Ambient::cCast_HpKx7dcI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fraFLG2h, HV_BINOP_MULTIPLY, 0, m, &cBinop_fraFLG2h_sendMessage);
}

void Heavy_Ambient::cCast_D2lwtzN6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_n7d93Blk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cUnop_D8XpVW5z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_yySOO4QJ_sendMessage);
}

void Heavy_Ambient::cSlice_n9UY2NMq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_JMkjzkMQ, 1, m, &cRandom_JMkjzkMQ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cRandom_JMkjzkMQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_jJ987yrj_sendMessage);
}

void Heavy_Ambient::cSwitchcase_j5gVfgxj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_n9UY2NMq, 0, m, &cSlice_n9UY2NMq_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_JMkjzkMQ, 0, m, &cRandom_JMkjzkMQ_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_jJ987yrj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_D8XpVW5z_sendMessage);
}

void Heavy_Ambient::cCast_D3Jdbo2l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_gWFZcoz4, 0, m, &cDelay_gWFZcoz4_sendMessage);
}

void Heavy_Ambient::cSwitchcase_pYbT1eTv_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_WLpmuzhl_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_WLpmuzhl_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_gWFZcoz4, 1, m, &cDelay_gWFZcoz4_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D3Jdbo2l_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cDelay_gWFZcoz4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_gWFZcoz4, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D2lwtzN6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4v42EJzK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FX5RofAW_sendMessage);
}

void Heavy_Ambient::cMsg_WLpmuzhl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_gWFZcoz4, 0, m, &cDelay_gWFZcoz4_sendMessage);
}

void Heavy_Ambient::cBinop_0gdzwWDx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2dlWnb5w_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rxyXwaFE_sendMessage);
}

void Heavy_Ambient::cCast_3yQUuqEK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_P2G5j7Nd, HV_BINOP_SUBTRACT, 1, m, &cBinop_P2G5j7Nd_sendMessage);
}

void Heavy_Ambient::cCast_24uFZMTe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0gdzwWDx, HV_BINOP_MULTIPLY, 0, m, &cBinop_0gdzwWDx_sendMessage);
}

void Heavy_Ambient::cPack_IqV34U4m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Mm6OaYQS_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_ixmWZFHw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_IqV34U4m, 1, m, &cPack_IqV34U4m_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_gWFZcoz4, 1, m, &cDelay_gWFZcoz4_sendMessage);
}

void Heavy_Ambient::cCast_2dlWnb5w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gfAB8oiI, HV_BINOP_SUBTRACT, 1, m, &cBinop_gfAB8oiI_sendMessage);
}

void Heavy_Ambient::cBinop_yySOO4QJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_IqV34U4m, 0, m, &cPack_IqV34U4m_sendMessage);
}

void Heavy_Ambient::cBinop_K4EJ0FMK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dsBjunz9, m);
}

void Heavy_Ambient::cBinop_QwzLpXlX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vcojSnXh_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HpKx7dcI_sendMessage);
}

void Heavy_Ambient::cCast_O86yCsdc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QwzLpXlX, HV_BINOP_SUBTRACT, 1, m, &cBinop_QwzLpXlX_sendMessage);
}

void Heavy_Ambient::cDelay_ZkIjCMhp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ZkIjCMhp, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZkIjCMhp, 0, m, &cDelay_ZkIjCMhp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZqA5nhEl_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6doLpTJQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nK3q7siR_sendMessage);
}

void Heavy_Ambient::cCast_t90aaaHN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4hLHzpSx_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZkIjCMhp, 0, m, &cDelay_ZkIjCMhp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZqA5nhEl_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6doLpTJQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nK3q7siR_sendMessage);
}

void Heavy_Ambient::cBinop_e9cR95lY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iAokmvwS, HV_BINOP_MULTIPLY, 1, m, &cBinop_iAokmvwS_sendMessage);
}

void Heavy_Ambient::cSystem_W2TZSc0n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_e9cR95lY_sendMessage);
}

void Heavy_Ambient::cMsg_zZNcAmVE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_W2TZSc0n_sendMessage);
}

void Heavy_Ambient::cBinop_8iFsyUmn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZkIjCMhp, 2, m, &cDelay_ZkIjCMhp_sendMessage);
}

void Heavy_Ambient::cVar_uyroj1UI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iAokmvwS, HV_BINOP_MULTIPLY, 0, m, &cBinop_iAokmvwS_sendMessage);
}

void Heavy_Ambient::cMsg_4hLHzpSx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZkIjCMhp, 0, m, &cDelay_ZkIjCMhp_sendMessage);
}

void Heavy_Ambient::cSwitchcase_HeM6lozR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_4hLHzpSx_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_4hLHzpSx_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_t90aaaHN_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_iAokmvwS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_8iFsyUmn_sendMessage);
}

void Heavy_Ambient::cSwitchcase_XrM5Dm3S_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_meRrkw0u, 0, m, &cSlice_meRrkw0u_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_QidceMo8, 0, m, &cRandom_QidceMo8_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_Zll3s1C2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_yMRCqxr0_sendMessage);
}

void Heavy_Ambient::cSlice_meRrkw0u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_QidceMo8, 1, m, &cRandom_QidceMo8_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cRandom_QidceMo8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_Zll3s1C2_sendMessage);
}

void Heavy_Ambient::cUnop_yMRCqxr0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2400.0f, 0, m, &cBinop_nEudOJkk_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_BS2Rtyla_sendMessage);
}

void Heavy_Ambient::cCast_ZqA5nhEl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_c5wxOmCm_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cSlice_57irbJMm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_TYj1h4Ta, 1, m, &cRandom_TYj1h4Ta_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_c5wxOmCm_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_57irbJMm, 0, m, &cSlice_57irbJMm_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_TYj1h4Ta, 0, m, &cRandom_TYj1h4Ta_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cUnop_EVGxEYPq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_5oaVSsPe_sendMessage);
}

void Heavy_Ambient::cRandom_TYj1h4Ta_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_6wCpJTtf_sendMessage);
}

void Heavy_Ambient::cBinop_6wCpJTtf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_EVGxEYPq_sendMessage);
}

void Heavy_Ambient::cBinop_nEudOJkk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_IvhJ77Up, 0, m, &cPack_IvhJ77Up_sendMessage);
}

void Heavy_Ambient::cBinop_BS2Rtyla_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_BEfbMuLP, 0, m, &cPack_BEfbMuLP_sendMessage);
}

void Heavy_Ambient::cPack_BEfbMuLP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_McXK7tec, 0, m, NULL);
}

void Heavy_Ambient::cCast_6doLpTJQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Ambient::cMsg_oSAsFuDl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_UzLpFMla_sendMessage);
}

void Heavy_Ambient::cMsg_StHKngyh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Rcpldy5E_sendMessage);
}

void Heavy_Ambient::cMsg_QvQtvpzB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_vfY5vCuN_sendMessage);
}

void Heavy_Ambient::cSystem_vfY5vCuN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LYG9FpKk_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_X6TZl5FB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_6z4zAJWU_sendMessage);
}

void Heavy_Ambient::cBinop_yW7z0V7X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LPflPWYe, m);
}

void Heavy_Ambient::cBinop_2TYlTGaM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_StHKngyh_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cVar_lF8gxT1G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_PygSoJCW_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_99KpjM9U, 0, m, &cIf_99KpjM9U_sendMessage);
}

void Heavy_Ambient::cMsg_PbVM78Qx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_4EqTbcqV, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_qBWnK3gi, m);
}

void Heavy_Ambient::cMsg_LYG9FpKk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_yW7z0V7X_sendMessage);
}

void Heavy_Ambient::cMsg_jx0pTn5y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_2TYlTGaM_sendMessage);
}

void Heavy_Ambient::cBinop_PygSoJCW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_99KpjM9U, 1, m, &cIf_99KpjM9U_sendMessage);
}

void Heavy_Ambient::cIf_99KpjM9U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_X6TZl5FB_sendMessage(_c, 0, m);
      cMsg_PbVM78Qx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_oSAsFuDl_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_6z4zAJWU_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_qBWnK3gi, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_UzLpFMla_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_4EqTbcqV, m);
}

void Heavy_Ambient::cBinop_Rcpldy5E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5erRNfiL, m);
}

void Heavy_Ambient::cBinop_6z4zAJWU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jx0pTn5y_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cUnop_OaPRzj4d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uIyph1p0_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSlice_6y0XFbpu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_pJcXfVVT, 1, m, &cRandom_pJcXfVVT_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cRandom_pJcXfVVT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8388610.0f, 0, m, &cBinop_LeWaXNnD_sendMessage);
}

void Heavy_Ambient::cBinop_LeWaXNnD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_OaPRzj4d_sendMessage);
}

void Heavy_Ambient::cSwitchcase_wdfcApVD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_6y0XFbpu, 0, m, &cSlice_6y0XFbpu_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_pJcXfVVT, 0, m, &cRandom_pJcXfVVT_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_uIyph1p0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 1.0f);
  sVari_onMessage(_c, &Context(_c)->sVari_pdgLcTuZ, m);
}

void Heavy_Ambient::cSlice_KHtIqElD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_EzGUzv5f, 1, m, &cRandom_EzGUzv5f_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_y7vD8ILq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_vIlNGxrX_sendMessage);
}

void Heavy_Ambient::cSwitchcase_1OsJUrgR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_KHtIqElD, 0, m, &cSlice_KHtIqElD_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_EzGUzv5f, 0, m, &cRandom_EzGUzv5f_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_EzGUzv5f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_0SjInwzP_sendMessage);
}

void Heavy_Ambient::cBinop_0SjInwzP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_y7vD8ILq_sendMessage);
}

void Heavy_Ambient::cBinop_PJs9nlHM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_3wcmYO2p, 0, m, &cPack_3wcmYO2p_sendMessage);
}

void Heavy_Ambient::cMsg_8IClAkUJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_wNUwbReJ_sendMessage);
}

void Heavy_Ambient::cBinop_wNUwbReJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_tLRawH8a, m);
}

void Heavy_Ambient::cBinop_KCRwsXlj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8IClAkUJ_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_tGfMoY7F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_3NIsfoLS_sendMessage);
}

void Heavy_Ambient::cBinop_3NIsfoLS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oP4iklVo, m);
}

void Heavy_Ambient::cMsg_z3eQaFvg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_KCRwsXlj_sendMessage);
}

void Heavy_Ambient::cSystem_9HDWiet1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tGfMoY7F_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_iAgMtACE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_9HDWiet1_sendMessage);
}

void Heavy_Ambient::cMsg_ju4wThHv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_tcogPjjT_sendMessage);
}

void Heavy_Ambient::cMsg_hadXOUte_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_NnRGOxMR, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_BEyxLDqu, m);
}

void Heavy_Ambient::cBinop_jfOnr7JH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_NnRGOxMR, m);
}

void Heavy_Ambient::cBinop_tcogPjjT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z3eQaFvg_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cIf_dKbPzylL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_ju4wThHv_sendMessage(_c, 0, m);
      cMsg_hadXOUte_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_krmdi0Y6_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_tcogPjjT_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_BEyxLDqu, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_F1hMBrJm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_dKbPzylL, 1, m, &cIf_dKbPzylL_sendMessage);
}

void Heavy_Ambient::cMsg_krmdi0Y6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_jfOnr7JH_sendMessage);
}

void Heavy_Ambient::cVar_txXVXEFK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_F1hMBrJm_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_dKbPzylL, 0, m, &cIf_dKbPzylL_sendMessage);
}

void Heavy_Ambient::cCast_45Pxb9ej_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_AmpeiHNM_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_5DrwhaDG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Ambient::cBinop_vIlNGxrX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uJ8LvtoD, 0, m, &cVar_uJ8LvtoD_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_kzItqaIW, 1, m, &cPack_kzItqaIW_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_3wcmYO2p, 1, m, &cPack_3wcmYO2p_sendMessage);
}

void Heavy_Ambient::cPack_kzItqaIW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_VvxpDCIw, 0, m, NULL);
}

void Heavy_Ambient::cPack_3wcmYO2p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_EFxFip1a, 0, m, NULL);
}

void Heavy_Ambient::cCast_povLaA8k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XM8YhLSj, HV_BINOP_SUBTRACT, 1, m, &cBinop_XM8YhLSj_sendMessage);
}

void Heavy_Ambient::cUnop_TcSxCuh6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_EBSopnop_sendMessage);
}

void Heavy_Ambient::cSlice_wgdEVtOD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_3N8NIG0J, 1, m, &cRandom_3N8NIG0J_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_wdg7fwvy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_TcSxCuh6_sendMessage);
}

void Heavy_Ambient::cRandom_3N8NIG0J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_wdg7fwvy_sendMessage);
}

void Heavy_Ambient::cSwitchcase_jdxZ8DOe_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_wgdEVtOD, 0, m, &cSlice_wgdEVtOD_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_3N8NIG0J, 0, m, &cRandom_3N8NIG0J_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_kF6H1GgK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wIdOmTmV_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_ooBOlkpT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0s8w1iLD, HV_BINOP_MULTIPLY, 1, m, &cBinop_0s8w1iLD_sendMessage);
}

void Heavy_Ambient::cBinop_yuqZ8bPI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_srAWdFio, m);
}

void Heavy_Ambient::cBinop_aclVkP77_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ZMGDDOpK, 1, m, &cPack_ZMGDDOpK_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_kgsE8ts7, 1, m, &cDelay_kgsE8ts7_sendMessage);
}

void Heavy_Ambient::cCast_TwcIjZT9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ooBOlkpT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tVYgpznw_sendMessage);
}

void Heavy_Ambient::cCast_23o1ylbx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_kgsE8ts7, 0, m, &cDelay_kgsE8ts7_sendMessage);
}

void Heavy_Ambient::cSwitchcase_xWnoEObm_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_QMHML5Cq_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_QMHML5Cq_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_kgsE8ts7, 1, m, &cDelay_kgsE8ts7_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_23o1ylbx_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_QMHML5Cq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_kgsE8ts7, 0, m, &cDelay_kgsE8ts7_sendMessage);
}

void Heavy_Ambient::cDelay_kgsE8ts7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_kgsE8ts7, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IQxPPyNR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qVqpXAME_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qLT2DeFo_sendMessage);
}

void Heavy_Ambient::cMsg_k3KQg0Co_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_9ZtOTizG, HV_BINOP_SUBTRACT, 0, m, &cBinop_9ZtOTizG_sendMessage);
}

void Heavy_Ambient::cMsg_xHr0cyOG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_XM8YhLSj, HV_BINOP_SUBTRACT, 0, m, &cBinop_XM8YhLSj_sendMessage);
}

void Heavy_Ambient::cCast_qQY5pYSR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cKkRe9Tr, HV_BINOP_SUBTRACT, 1, m, &cBinop_cKkRe9Tr_sendMessage);
}

void Heavy_Ambient::cPack_ZMGDDOpK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Kg5ywfbW_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_QS6PplUR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xHr0cyOG_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_tVYgpznw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0s8w1iLD, HV_BINOP_MULTIPLY, 0, m, &cBinop_0s8w1iLD_sendMessage);
}

void Heavy_Ambient::cCast_PzjjAyj7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9ZtOTizG, HV_BINOP_SUBTRACT, 1, m, &cBinop_9ZtOTizG_sendMessage);
}

void Heavy_Ambient::cRandom_tf7eWNZz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_7IYIosme_sendMessage);
}

void Heavy_Ambient::cSwitchcase_stZlYGmv_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_lpdq9N9q, 0, m, &cSlice_lpdq9N9q_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_tf7eWNZz, 0, m, &cRandom_tf7eWNZz_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_lpdq9N9q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_tf7eWNZz, 1, m, &cRandom_tf7eWNZz_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_NJOoFp3r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_aclVkP77_sendMessage);
}

void Heavy_Ambient::cBinop_7IYIosme_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_NJOoFp3r_sendMessage);
}

void Heavy_Ambient::cBinop_XM8YhLSj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LswA3axD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Ka9kNUJU_sendMessage);
}

void Heavy_Ambient::cBinop_zO63LVR8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PzjjAyj7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FCOlaMBa_sendMessage);
}

void Heavy_Ambient::cBinop_9ZtOTizG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_yuqZ8bPI_sendMessage);
}

void Heavy_Ambient::cCast_IQxPPyNR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_stZlYGmv_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_FCOlaMBa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_k3KQg0Co_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_mRC8PeCb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_difPx9CL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xC1Z64Re_sendMessage);
}

void Heavy_Ambient::cCast_QKNPU3W6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MBZsjnZP, 0, m, &cVar_MBZsjnZP_sendMessage);
}

void Heavy_Ambient::cSwitchcase_QaxRROhk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QKNPU3W6_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mRC8PeCb_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cBinop_1bTLPgZc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_0CRXCmLz_sendMessage);
}

void Heavy_Ambient::cVar_WSTsX39g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_zoUxRKDB_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_xfMhBmKt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_en9tnyqP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_yHEO6PbK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MBZsjnZP, 1, m, &cVar_MBZsjnZP_sendMessage);
}

void Heavy_Ambient::cSystem_rJN6Swmg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_hOsPiptu_sendMessage);
}

void Heavy_Ambient::cMsg_xgIydbXN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_rJN6Swmg_sendMessage);
}

void Heavy_Ambient::cBinop_3OfiA0kN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Z86EgQuf_sendMessage);
}

void Heavy_Ambient::cMsg_qHC7b1Wl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_n47YmbGl, 0, m, &cDelay_n47YmbGl_sendMessage);
}

void Heavy_Ambient::cBinop_hOsPiptu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3OfiA0kN, HV_BINOP_MULTIPLY, 1, m, &cBinop_3OfiA0kN_sendMessage);
}

void Heavy_Ambient::cBinop_Z86EgQuf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_n47YmbGl, 2, m, &cDelay_n47YmbGl_sendMessage);
}

void Heavy_Ambient::cSwitchcase_en9tnyqP_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_qHC7b1Wl_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_qHC7b1Wl_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cSJKZLml_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_cSJKZLml_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qHC7b1Wl_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_n47YmbGl, 0, m, &cDelay_n47YmbGl_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_AxHXT0vV, 0, m, &cVar_AxHXT0vV_sendMessage);
}

void Heavy_Ambient::cDelay_n47YmbGl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_n47YmbGl, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_n47YmbGl, 0, m, &cDelay_n47YmbGl_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_AxHXT0vV, 0, m, &cVar_AxHXT0vV_sendMessage);
}

void Heavy_Ambient::cVar_ncjh9UrI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3OfiA0kN, HV_BINOP_MULTIPLY, 0, m, &cBinop_3OfiA0kN_sendMessage);
}

void Heavy_Ambient::cBinop_96D0S9bU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I54eDKFQ, HV_BINOP_DIVIDE, 1, m, &cBinop_I54eDKFQ_sendMessage);
}

void Heavy_Ambient::cCast_vaEtJ6ZM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_s6wBOWW9_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_zoUxRKDB_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vaEtJ6ZM_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_dEHyPwt3, HV_BINOP_MULTIPLY, 0, m, &cBinop_dEHyPwt3_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_96D0S9bU, HV_BINOP_DIVIDE, 1, m, &cBinop_96D0S9bU_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_ncjh9UrI, 0, m, &cVar_ncjh9UrI_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_x3MSrkJc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_isJ1ZCZP, 1, m, &cVar_isJ1ZCZP_sendMessage);
}

void Heavy_Ambient::cCast_antxbcjS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ARmn8MxW_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_iHh4TZ9O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_0Ijx7B6n, 1, m, &cVar_0Ijx7B6n_sendMessage);
}

void Heavy_Ambient::cCast_bxEUrOUr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_96D0S9bU, HV_BINOP_DIVIDE, 0, m, &cBinop_96D0S9bU_sendMessage);
}

void Heavy_Ambient::cMsg_s6wBOWW9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_dEHyPwt3, HV_BINOP_MULTIPLY, 0, m, &cBinop_dEHyPwt3_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_96D0S9bU, HV_BINOP_DIVIDE, 1, m, &cBinop_96D0S9bU_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ncjh9UrI, 0, m, &cVar_ncjh9UrI_sendMessage);
}

void Heavy_Ambient::cBinop_imj2JX4s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eKCnfCg0, 0, m, &cVar_eKCnfCg0_sendMessage);
}

void Heavy_Ambient::cSlice_tsj1UGE2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3qPu4h9k_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PRStmvpL_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3qPu4h9k_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PRStmvpL_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_sGtgPteN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_xfMhBmKt_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_xfMhBmKt_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_Kg5ywfbW_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_sGtgPteN, 0, m, &cSlice_sGtgPteN_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_tsj1UGE2, 0, m, &cSlice_tsj1UGE2_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZD9NIr4j_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_cGlxWS1i, 0, m, &cSlice_cGlxWS1i_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_HRPtk0Tc, 0, m, &cSlice_HRPtk0Tc_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jOFNxc1K_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pN4hDsuu_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_rJzqffYa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_QaxRROhk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_p9rVTlLN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tsTFmi7M, HV_BINOP_SUBTRACT, 0, m, &cBinop_tsTFmi7M_sendMessage);
}

void Heavy_Ambient::cBinop_I54eDKFQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_imj2JX4s, HV_BINOP_ADD, 1, m, &cBinop_imj2JX4s_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yHEO6PbK, HV_BINOP_ADD, 1, m, &cBinop_yHEO6PbK_sendMessage);
}

void Heavy_Ambient::cCast_jOFNxc1K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FNW1NaWg_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cVar_eKCnfCg0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tsTFmi7M, HV_BINOP_SUBTRACT, 1, m, &cBinop_tsTFmi7M_sendMessage);
}

void Heavy_Ambient::cBinop_0CRXCmLz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AxHXT0vV, 1, m, &cVar_AxHXT0vV_sendMessage);
}

void Heavy_Ambient::cCast_ZD9NIr4j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0Ijx7B6n, 0, m, &cVar_0Ijx7B6n_sendMessage);
}

void Heavy_Ambient::cMsg_ARmn8MxW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_en9tnyqP_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_imj2JX4s, HV_BINOP_ADD, 1, m, &cBinop_imj2JX4s_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yHEO6PbK, HV_BINOP_ADD, 1, m, &cBinop_yHEO6PbK_sendMessage);
}

void Heavy_Ambient::cCast_xC1Z64Re_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_isJ1ZCZP, 0, m, &cVar_isJ1ZCZP_sendMessage);
}

void Heavy_Ambient::cSystem_1JttuzOP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dEHyPwt3, HV_BINOP_MULTIPLY, 1, m, &cBinop_dEHyPwt3_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1bTLPgZc, HV_BINOP_MULTIPLY, 1, m, &cBinop_1bTLPgZc_sendMessage);
}

void Heavy_Ambient::cMsg_JaIWcZpC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_1JttuzOP_sendMessage);
}

void Heavy_Ambient::cVar_0Ijx7B6n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FXT9C8jL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bxEUrOUr_sendMessage);
}

void Heavy_Ambient::cCast_FXT9C8jL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1bTLPgZc, HV_BINOP_MULTIPLY, 0, m, &cBinop_1bTLPgZc_sendMessage);
}

void Heavy_Ambient::cBinop_tsTFmi7M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I54eDKFQ, HV_BINOP_DIVIDE, 0, m, &cBinop_I54eDKFQ_sendMessage);
}

void Heavy_Ambient::cMsg_FNW1NaWg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_en9tnyqP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_eW9DFOA4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AxHXT0vV, 1, m, &cVar_AxHXT0vV_sendMessage);
}

void Heavy_Ambient::cBinop_0kSgauYJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eW9DFOA4, HV_BINOP_SUBTRACT, 1, m, &cBinop_eW9DFOA4_sendMessage);
}

void Heavy_Ambient::cCast_pN4hDsuu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iHh4TZ9O_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_difPx9CL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ARmn8MxW_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cVar_isJ1ZCZP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_MBZsjnZP, 0, m, &cVar_MBZsjnZP_sendMessage);
}

void Heavy_Ambient::cVar_MBZsjnZP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yHEO6PbK, HV_BINOP_ADD, 0, m, &cBinop_yHEO6PbK_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_imj2JX4s, HV_BINOP_ADD, 0, m, &cBinop_imj2JX4s_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_povLaA8k_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QS6PplUR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TwcIjZT9_sendMessage);
}

void Heavy_Ambient::cSlice_cGlxWS1i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FXT9C8jL_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bxEUrOUr_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_HRPtk0Tc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_x3MSrkJc_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_p9rVTlLN_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cVar_AxHXT0vV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eW9DFOA4, HV_BINOP_SUBTRACT, 0, m, &cBinop_eW9DFOA4_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_rJzqffYa_sendMessage);
}

void Heavy_Ambient::cBinop_dEHyPwt3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_0kSgauYJ_sendMessage);
}

void Heavy_Ambient::cCast_3qPu4h9k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xfMhBmKt_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_PRStmvpL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_antxbcjS_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_imj2JX4s, HV_BINOP_ADD, 0, m, &cBinop_imj2JX4s_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_MBZsjnZP, 1, m, &cVar_MBZsjnZP_sendMessage);
}

void Heavy_Ambient::cBinop_0s8w1iLD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qQY5pYSR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kF6H1GgK_sendMessage);
}

void Heavy_Ambient::cMsg_wIdOmTmV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_cKkRe9Tr, HV_BINOP_SUBTRACT, 0, m, &cBinop_cKkRe9Tr_sendMessage);
}

void Heavy_Ambient::cCast_qVqpXAME_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_jdxZ8DOe_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_n14w3jLl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_XcDyVGEr, m);
}

void Heavy_Ambient::cBinop_cKkRe9Tr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_n14w3jLl_sendMessage);
}

void Heavy_Ambient::cCast_qLT2DeFo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_xWnoEObm_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_LswA3axD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zO63LVR8, HV_BINOP_MULTIPLY, 1, m, &cBinop_zO63LVR8_sendMessage);
}

void Heavy_Ambient::cBinop_EBSopnop_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ZMGDDOpK, 0, m, &cPack_ZMGDDOpK_sendMessage);
}

void Heavy_Ambient::cCast_Ka9kNUJU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zO63LVR8, HV_BINOP_MULTIPLY, 0, m, &cBinop_zO63LVR8_sendMessage);
}

void Heavy_Ambient::cCast_hmA0Cdbn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_1OsJUrgR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cSwitchcase_AmpeiHNM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_yvixjA6J, 0, m, &cSlice_yvixjA6J_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_x3repbVc, 0, m, &cRandom_x3repbVc_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_x3repbVc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_RyBrq6y3_sendMessage);
}

void Heavy_Ambient::cBinop_RyBrq6y3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_X0TQS4Kp_sendMessage);
}

void Heavy_Ambient::cSlice_yvixjA6J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_x3repbVc, 1, m, &cRandom_x3repbVc_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_X0TQS4Kp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_C6jlA73O_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_PJs9nlHM_sendMessage);
}

void Heavy_Ambient::cCast_ZIsmA9M6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QmgHQff2_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_mtvZq6xm, 0, m, &cDelay_mtvZq6xm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hmA0Cdbn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5DrwhaDG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_45Pxb9ej_sendMessage);
}

void Heavy_Ambient::cBinop_ROborwAN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_mtvZq6xm, 2, m, &cDelay_mtvZq6xm_sendMessage);
}

void Heavy_Ambient::cSystem_tjyosXKf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_eHSH5d2C_sendMessage);
}

void Heavy_Ambient::cMsg_VZSInfrf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_tjyosXKf_sendMessage);
}

void Heavy_Ambient::cBinop_eHSH5d2C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7ngCQi0F, HV_BINOP_MULTIPLY, 1, m, &cBinop_7ngCQi0F_sendMessage);
}

void Heavy_Ambient::cVar_uJ8LvtoD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7ngCQi0F, HV_BINOP_MULTIPLY, 0, m, &cBinop_7ngCQi0F_sendMessage);
}

void Heavy_Ambient::cDelay_mtvZq6xm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_mtvZq6xm, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_mtvZq6xm, 0, m, &cDelay_mtvZq6xm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hmA0Cdbn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5DrwhaDG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_45Pxb9ej_sendMessage);
}

void Heavy_Ambient::cSwitchcase_Rv9KrJxm_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_QmgHQff2_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_QmgHQff2_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZIsmA9M6_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_7ngCQi0F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_ROborwAN_sendMessage);
}

void Heavy_Ambient::cMsg_QmgHQff2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_mtvZq6xm, 0, m, &cDelay_mtvZq6xm_sendMessage);
}

void Heavy_Ambient::cBinop_C6jlA73O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_kzItqaIW, 0, m, &cPack_kzItqaIW_sendMessage);
}

void Heavy_Ambient::cBinop_SGelLXwT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_InPNGpFA, 1, m, &cVar_InPNGpFA_sendMessage);
}

void Heavy_Ambient::cVar_InPNGpFA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_SGelLXwT_sendMessage);
  cSwitchcase_HeM6lozR_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_MZknGjNI_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_ekS6Xe5m_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_8HyXBsBm_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_m3zAetDM_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_xN1ReuVl_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_0VtP8Lug_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_ckYScVWp_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Rv9KrJxm_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_x2vou0Dt_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Ufjxb0vm_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_fUtDY5zi_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_OrLjH65P_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_hsPoBLkN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_Oy6w9pws_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_KgljkbFA, 0, m, &cPack_KgljkbFA_sendMessage);
}

void Heavy_Ambient::cBinop_QwNS5bhB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_CxigmVbf, 0, m, &cPack_CxigmVbf_sendMessage);
}

void Heavy_Ambient::cCast_MCRW3XGi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_pIIdvXhU_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_udg8X7wX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EPHYpgAT_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_une2TlrT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zXitEq8o, HV_BINOP_MULTIPLY, 1, m, &cBinop_zXitEq8o_sendMessage);
}

void Heavy_Ambient::cCast_0uTTJMMD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pZHruffX_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iYOlSWmq_sendMessage);
}

void Heavy_Ambient::cCast_ZPZ4eGxn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1sEWZKTn, HV_BINOP_SUBTRACT, 1, m, &cBinop_1sEWZKTn_sendMessage);
}

void Heavy_Ambient::cCast_QYLlUs5S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_WznO6zQW, 0, m, &cDelay_WznO6zQW_sendMessage);
}

void Heavy_Ambient::cDelay_WznO6zQW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_WznO6zQW, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5IKKBrzs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MCRW3XGi_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EXGtoAC9_sendMessage);
}

void Heavy_Ambient::cMsg_o5vxj8cP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_WznO6zQW, 0, m, &cDelay_WznO6zQW_sendMessage);
}

void Heavy_Ambient::cSwitchcase_UA4V0DYd_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_o5vxj8cP_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_o5vxj8cP_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_WznO6zQW, 1, m, &cDelay_WznO6zQW_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QYLlUs5S_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_cA7AOxJN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cdw4hi1G_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_udg8X7wX_sendMessage);
}

void Heavy_Ambient::cCast_y6u8RUGs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xKqozTlq_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_xKqozTlq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_llPiv8Gc, HV_BINOP_SUBTRACT, 0, m, &cBinop_llPiv8Gc_sendMessage);
}

void Heavy_Ambient::cCast_6qwZ4kPi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zXitEq8o, HV_BINOP_MULTIPLY, 0, m, &cBinop_zXitEq8o_sendMessage);
}

void Heavy_Ambient::cBinop_1sEWZKTn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_une2TlrT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6qwZ4kPi_sendMessage);
}

void Heavy_Ambient::cBinop_iQIg15rA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_bcfpngPx, m);
}

void Heavy_Ambient::cPack_qTggsyog_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_FRVlyjI0_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_EPHYpgAT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CqomZBn0, HV_BINOP_SUBTRACT, 0, m, &cBinop_CqomZBn0_sendMessage);
}

void Heavy_Ambient::cCast_cdw4hi1G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CqomZBn0, HV_BINOP_SUBTRACT, 1, m, &cBinop_CqomZBn0_sendMessage);
}

void Heavy_Ambient::cCast_EXGtoAC9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_UA4V0DYd_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_TPVd8bWe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yPfbuLJy_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cVar_3Tn7ud5o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vRqSjQBg, HV_BINOP_SUBTRACT, 1, m, &cBinop_vRqSjQBg_sendMessage);
}

void Heavy_Ambient::cSlice_xvf029SD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jxbypDPU_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vhOHa1cB_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jxbypDPU_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vhOHa1cB_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_bpQYS7P1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_E92dAjim_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_E92dAjim_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_FRVlyjI0_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_bpQYS7P1, 0, m, &cSlice_bpQYS7P1_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_xvf029SD, 0, m, &cSlice_xvf029SD_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jsvtMq2v_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_F9fAHCu2, 0, m, &cSlice_F9fAHCu2_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Ro5uKcYl, 0, m, &cSlice_Ro5uKcYl_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TPVd8bWe_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iZhmNlQY_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_NR8rIgkL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iCifdaFX_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_qgkJ395C_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NR8rIgkL_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_PTvLqJQv, HV_BINOP_MULTIPLY, 0, m, &cBinop_PTvLqJQv_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_TOj1uYcT, HV_BINOP_DIVIDE, 1, m, &cBinop_TOj1uYcT_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_aodDr1rD, 0, m, &cVar_aodDr1rD_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_mHH9M1j9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_mFcb1cFV_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_e8J0NL4e, HV_BINOP_ADD, 1, m, &cBinop_e8J0NL4e_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_DarZ27E1, HV_BINOP_ADD, 1, m, &cBinop_DarZ27E1_sendMessage);
}

void Heavy_Ambient::cMsg_iCifdaFX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PTvLqJQv, HV_BINOP_MULTIPLY, 0, m, &cBinop_PTvLqJQv_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TOj1uYcT, HV_BINOP_DIVIDE, 1, m, &cBinop_TOj1uYcT_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_aodDr1rD, 0, m, &cVar_aodDr1rD_sendMessage);
}

void Heavy_Ambient::cBinop_JdVP08JH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bV1AMrSp, 1, m, &cVar_bV1AMrSp_sendMessage);
}

void Heavy_Ambient::cSlice_F9fAHCu2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5Hd2fpwb_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TIIg72Eh_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_Ro5uKcYl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_toZSH95V_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VhlzFKP1_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_fL5BBdCD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_soSvNsyZ_sendMessage);
}

void Heavy_Ambient::cCast_tuG6FO7Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lsrhgSaj, 0, m, &cVar_lsrhgSaj_sendMessage);
}

void Heavy_Ambient::cMsg_E92dAjim_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_mFcb1cFV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_TIIg72Eh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TOj1uYcT, HV_BINOP_DIVIDE, 0, m, &cBinop_TOj1uYcT_sendMessage);
}

void Heavy_Ambient::cVar_iKgC2Y0L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DarZ27E1, HV_BINOP_ADD, 0, m, &cBinop_DarZ27E1_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_e8J0NL4e, HV_BINOP_ADD, 0, m, &cBinop_e8J0NL4e_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZPZ4eGxn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lHlgDmpP_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0uTTJMMD_sendMessage);
}

void Heavy_Ambient::cCast_iZhmNlQY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2XKgrEVx_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_h9bKt2ap_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DRW8nUly_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tuG6FO7Z_sendMessage);
}

void Heavy_Ambient::cCast_9ISoQqBg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iKgC2Y0L, 0, m, &cVar_iKgC2Y0L_sendMessage);
}

void Heavy_Ambient::cSwitchcase_VKVtm6sP_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9ISoQqBg_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_h9bKt2ap_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cVar_lsrhgSaj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iKgC2Y0L, 0, m, &cVar_iKgC2Y0L_sendMessage);
}

void Heavy_Ambient::cCast_DRW8nUly_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mHH9M1j9_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_lpnCIEgv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_VKVtm6sP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_DarZ27E1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iKgC2Y0L, 1, m, &cVar_iKgC2Y0L_sendMessage);
}

void Heavy_Ambient::cMsg_yPfbuLJy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_mFcb1cFV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_C60zubx1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FRiMws8D_sendMessage);
}

void Heavy_Ambient::cSystem_FRiMws8D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_HObrRCrB_sendMessage);
}

void Heavy_Ambient::cSwitchcase_mFcb1cFV_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_R9gV0qEA_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_R9gV0qEA_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OHdtQ9Fr_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_Gowo1RkT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_WxPqB6iC, 2, m, &cDelay_WxPqB6iC_sendMessage);
}

void Heavy_Ambient::cBinop_GifgF9fe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Gowo1RkT_sendMessage);
}

void Heavy_Ambient::cMsg_R9gV0qEA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_WxPqB6iC, 0, m, &cDelay_WxPqB6iC_sendMessage);
}

void Heavy_Ambient::cVar_aodDr1rD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GifgF9fe, HV_BINOP_MULTIPLY, 0, m, &cBinop_GifgF9fe_sendMessage);
}

void Heavy_Ambient::cDelay_WxPqB6iC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_WxPqB6iC, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_WxPqB6iC, 0, m, &cDelay_WxPqB6iC_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_bV1AMrSp, 0, m, &cVar_bV1AMrSp_sendMessage);
}

void Heavy_Ambient::cBinop_HObrRCrB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GifgF9fe, HV_BINOP_MULTIPLY, 1, m, &cBinop_GifgF9fe_sendMessage);
}

void Heavy_Ambient::cCast_OHdtQ9Fr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_R9gV0qEA_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_WxPqB6iC, 0, m, &cDelay_WxPqB6iC_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_bV1AMrSp, 0, m, &cVar_bV1AMrSp_sendMessage);
}

void Heavy_Ambient::cCast_otsen2ih_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mHH9M1j9_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cVar_bV1AMrSp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JdVP08JH, HV_BINOP_SUBTRACT, 0, m, &cBinop_JdVP08JH_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_lpnCIEgv_sendMessage);
}

void Heavy_Ambient::cVar_FfO9MjH8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5Hd2fpwb_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TIIg72Eh_sendMessage);
}

void Heavy_Ambient::cBinop_soSvNsyZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bV1AMrSp, 1, m, &cVar_bV1AMrSp_sendMessage);
}

void Heavy_Ambient::cBinop_qGVlR7hm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e8J0NL4e, HV_BINOP_ADD, 1, m, &cBinop_e8J0NL4e_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_DarZ27E1, HV_BINOP_ADD, 1, m, &cBinop_DarZ27E1_sendMessage);
}

void Heavy_Ambient::cBinop_e8J0NL4e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3Tn7ud5o, 0, m, &cVar_3Tn7ud5o_sendMessage);
}

void Heavy_Ambient::cBinop_TOj1uYcT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qGVlR7hm, HV_BINOP_DIVIDE, 1, m, &cBinop_qGVlR7hm_sendMessage);
}

void Heavy_Ambient::cCast_jxbypDPU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_E92dAjim_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_5Hd2fpwb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fL5BBdCD, HV_BINOP_MULTIPLY, 0, m, &cBinop_fL5BBdCD_sendMessage);
}

void Heavy_Ambient::cBinop_lFthyBzp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JdVP08JH, HV_BINOP_SUBTRACT, 1, m, &cBinop_JdVP08JH_sendMessage);
}

void Heavy_Ambient::cCast_VhlzFKP1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vRqSjQBg, HV_BINOP_SUBTRACT, 0, m, &cBinop_vRqSjQBg_sendMessage);
}

void Heavy_Ambient::cBinop_PTvLqJQv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_lFthyBzp_sendMessage);
}

void Heavy_Ambient::cBinop_vRqSjQBg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qGVlR7hm, HV_BINOP_DIVIDE, 0, m, &cBinop_qGVlR7hm_sendMessage);
}

void Heavy_Ambient::cCast_toZSH95V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lsrhgSaj, 1, m, &cVar_lsrhgSaj_sendMessage);
}

void Heavy_Ambient::cMsg_2XKgrEVx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_FfO9MjH8, 1, m, &cVar_FfO9MjH8_sendMessage);
}

void Heavy_Ambient::cSystem_d3XdYfUf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PTvLqJQv, HV_BINOP_MULTIPLY, 1, m, &cBinop_PTvLqJQv_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fL5BBdCD, HV_BINOP_MULTIPLY, 1, m, &cBinop_fL5BBdCD_sendMessage);
}

void Heavy_Ambient::cMsg_OI13rc1q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_d3XdYfUf_sendMessage);
}

void Heavy_Ambient::cCast_jsvtMq2v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FfO9MjH8, 0, m, &cVar_FfO9MjH8_sendMessage);
}

void Heavy_Ambient::cVar_NDyAHXxE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qgkJ395C_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_vhOHa1cB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_otsen2ih_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_e8J0NL4e, HV_BINOP_ADD, 0, m, &cBinop_e8J0NL4e_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_iKgC2Y0L, 1, m, &cVar_iKgC2Y0L_sendMessage);
}

void Heavy_Ambient::cBinop_zXitEq8o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_a1X5DrSN_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_y6u8RUGs_sendMessage);
}

void Heavy_Ambient::cBinop_NG97xVrV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_q6tKGADZ_sendMessage);
}

void Heavy_Ambient::cSwitchcase_pIIdvXhU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_2V9sVhnD, 0, m, &cSlice_2V9sVhnD_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_EhU1hGXb, 0, m, &cRandom_EhU1hGXb_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_EhU1hGXb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_NG97xVrV_sendMessage);
}

void Heavy_Ambient::cUnop_q6tKGADZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_djcv658U_sendMessage);
}

void Heavy_Ambient::cSlice_2V9sVhnD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_EhU1hGXb, 1, m, &cRandom_EhU1hGXb_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_llPiv8Gc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_a0GPEJVA_sendMessage);
}

void Heavy_Ambient::cRandom_FtH4unM9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_los2z70N_sendMessage);
}

void Heavy_Ambient::cBinop_los2z70N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_BA0R2Cug_sendMessage);
}

void Heavy_Ambient::cSwitchcase_XQ0WauxH_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_geZQKa7Y, 0, m, &cSlice_geZQKa7Y_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_FtH4unM9, 0, m, &cRandom_FtH4unM9_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_geZQKa7Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_FtH4unM9, 1, m, &cRandom_FtH4unM9_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_BA0R2Cug_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_SWEQ3vXq_sendMessage);
}

void Heavy_Ambient::cCast_iYOlSWmq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cA7AOxJN, HV_BINOP_MULTIPLY, 0, m, &cBinop_cA7AOxJN_sendMessage);
}

void Heavy_Ambient::cCast_5IKKBrzs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_XQ0WauxH_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_a1X5DrSN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_llPiv8Gc, HV_BINOP_SUBTRACT, 1, m, &cBinop_llPiv8Gc_sendMessage);
}

void Heavy_Ambient::cBinop_djcv658U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_qTggsyog, 0, m, &cPack_qTggsyog_sendMessage);
}

void Heavy_Ambient::cBinop_CqomZBn0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_iQIg15rA_sendMessage);
}

void Heavy_Ambient::cCast_pZHruffX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cA7AOxJN, HV_BINOP_MULTIPLY, 1, m, &cBinop_cA7AOxJN_sendMessage);
}

void Heavy_Ambient::cBinop_SWEQ3vXq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_qTggsyog, 1, m, &cPack_qTggsyog_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_WznO6zQW, 1, m, &cDelay_WznO6zQW_sendMessage);
}

void Heavy_Ambient::cMsg_IrCxLJma_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1sEWZKTn, HV_BINOP_SUBTRACT, 0, m, &cBinop_1sEWZKTn_sendMessage);
}

void Heavy_Ambient::cBinop_a0GPEJVA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_MEQNpVsQ, m);
}

void Heavy_Ambient::cCast_lHlgDmpP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IrCxLJma_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_XpcICaWV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_zgqE6uaA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_poa9HKJc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_dYoDzmoL, 2, m, &cDelay_dYoDzmoL_sendMessage);
}

void Heavy_Ambient::cMsg_9XKxBx2e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_dYoDzmoL, 0, m, &cDelay_dYoDzmoL_sendMessage);
}

void Heavy_Ambient::cBinop_9Ug47XRX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3i0g8Xci, HV_BINOP_MULTIPLY, 1, m, &cBinop_3i0g8Xci_sendMessage);
}

void Heavy_Ambient::cSystem_i0mz95xO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_9Ug47XRX_sendMessage);
}

void Heavy_Ambient::cMsg_f6AxId0i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_i0mz95xO_sendMessage);
}

void Heavy_Ambient::cDelay_dYoDzmoL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_dYoDzmoL, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_dYoDzmoL, 0, m, &cDelay_dYoDzmoL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_75ohqtKS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SvwQ2CA3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XpcICaWV_sendMessage);
}

void Heavy_Ambient::cCast_QavEdQrC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9XKxBx2e_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_dYoDzmoL, 0, m, &cDelay_dYoDzmoL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_75ohqtKS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SvwQ2CA3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XpcICaWV_sendMessage);
}

void Heavy_Ambient::cBinop_3i0g8Xci_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_poa9HKJc_sendMessage);
}

void Heavy_Ambient::cSwitchcase_x2vou0Dt_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_9XKxBx2e_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_9XKxBx2e_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QavEdQrC_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cVar_PTy1WfbC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3i0g8Xci, HV_BINOP_MULTIPLY, 0, m, &cBinop_3i0g8Xci_sendMessage);
}

void Heavy_Ambient::cBinop_q994RRFB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_PTy1WfbC, 0, m, &cVar_PTy1WfbC_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_KgljkbFA, 1, m, &cPack_KgljkbFA_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_CxigmVbf, 1, m, &cPack_CxigmVbf_sendMessage);
}

void Heavy_Ambient::cCast_75ohqtKS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_FDcFy2bM_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cPack_KgljkbFA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_AmvoMKPV, 0, m, NULL);
}

void Heavy_Ambient::cRandom_u3D17KKT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_ZPB3o2dd_sendMessage);
}

void Heavy_Ambient::cSlice_9HVSoC4i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_u3D17KKT, 1, m, &cRandom_u3D17KKT_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_ms6HfknO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_q994RRFB_sendMessage);
}

void Heavy_Ambient::cBinop_ZPB3o2dd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_ms6HfknO_sendMessage);
}

void Heavy_Ambient::cSwitchcase_FDcFy2bM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_9HVSoC4i, 0, m, &cSlice_9HVSoC4i_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_u3D17KKT, 0, m, &cRandom_u3D17KKT_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSwitchcase_zgqE6uaA_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_dJbpWiMc, 0, m, &cSlice_dJbpWiMc_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_8dbB1zLQ, 0, m, &cRandom_8dbB1zLQ_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_dJbpWiMc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_8dbB1zLQ, 1, m, &cRandom_8dbB1zLQ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_7kE8mRpW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1600.0f, 0, m, &cBinop_Oy6w9pws_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_QwNS5bhB_sendMessage);
}

void Heavy_Ambient::cRandom_8dbB1zLQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_VHua9VrU_sendMessage);
}

void Heavy_Ambient::cBinop_VHua9VrU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_7kE8mRpW_sendMessage);
}

void Heavy_Ambient::cMsg_qy6McVXH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_OZzLSq15_sendMessage);
}

void Heavy_Ambient::cMsg_ZegHDVMp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_5qW5qrDT_sendMessage);
}

void Heavy_Ambient::cMsg_fsSFLjco_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_VxK7Ldz6_sendMessage);
}

void Heavy_Ambient::cBinop_cw2Ht8iB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZegHDVMp_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_AxA7DG6v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_1vMTbiLN_sendMessage);
}

void Heavy_Ambient::cMsg_UHaVeRIO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_cw2Ht8iB_sendMessage);
}

void Heavy_Ambient::cMsg_UJwVLP7u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_k7Gbrzio, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ILlAx9Xz, m);
}

void Heavy_Ambient::cBinop_OZzLSq15_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vo90G0Ob, m);
}

void Heavy_Ambient::cSystem_ooYTOZPr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_AxA7DG6v_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_kR8INvWX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ooYTOZPr_sendMessage);
}

void Heavy_Ambient::cIf_iZFbbADp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_UHaVeRIO_sendMessage(_c, 0, m);
      cMsg_UJwVLP7u_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_fsSFLjco_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_cw2Ht8iB_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_ILlAx9Xz, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_m4TOglCf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_iZFbbADp, 1, m, &cIf_iZFbbADp_sendMessage);
}

void Heavy_Ambient::cBinop_VxK7Ldz6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_k7Gbrzio, m);
}

void Heavy_Ambient::cVar_Vi4qxlKC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_m4TOglCf_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_iZFbbADp, 0, m, &cIf_iZFbbADp_sendMessage);
}

void Heavy_Ambient::cBinop_1vMTbiLN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fgSRPBCr, m);
}

void Heavy_Ambient::cBinop_5qW5qrDT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qy6McVXH_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cPack_CxigmVbf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_tGX77vIy, 0, m, NULL);
}

void Heavy_Ambient::cCast_SvwQ2CA3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Ambient::cPack_D3ZyS2wJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_8q2SriBt, 0, m, NULL);
}

void Heavy_Ambient::cBinop_NAX1NY77_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Zdl1WC0v, HV_BINOP_MULTIPLY, 1, m, &cBinop_Zdl1WC0v_sendMessage);
}

void Heavy_Ambient::cSwitchcase_Ufjxb0vm_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_VCuhy6TL_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_VCuhy6TL_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Oojf4ED3_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSystem_dd4tCFQo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_NAX1NY77_sendMessage);
}

void Heavy_Ambient::cMsg_2jnmyjNL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_dd4tCFQo_sendMessage);
}

void Heavy_Ambient::cMsg_VCuhy6TL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_qH6zuDQc, 0, m, &cDelay_qH6zuDQc_sendMessage);
}

void Heavy_Ambient::cVar_gp22HpnH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Zdl1WC0v, HV_BINOP_MULTIPLY, 0, m, &cBinop_Zdl1WC0v_sendMessage);
}

void Heavy_Ambient::cDelay_qH6zuDQc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_qH6zuDQc, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_qH6zuDQc, 0, m, &cDelay_qH6zuDQc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RMGBUDUX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iE209RzE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RBKe5Ys0_sendMessage);
}

void Heavy_Ambient::cBinop_Zdl1WC0v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_eBlGVswu_sendMessage);
}

void Heavy_Ambient::cBinop_eBlGVswu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_qH6zuDQc, 2, m, &cDelay_qH6zuDQc_sendMessage);
}

void Heavy_Ambient::cCast_Oojf4ED3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VCuhy6TL_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_qH6zuDQc, 0, m, &cDelay_qH6zuDQc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RMGBUDUX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iE209RzE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RBKe5Ys0_sendMessage);
}

void Heavy_Ambient::cCast_Keu7ahOX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_BBwSjp1G_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_plOYF6i1_sendMessage);
}

void Heavy_Ambient::cPack_EbmSK7n2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_mZ6kjV4U_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_fv0MLkhO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rbZkuQnS, HV_BINOP_SUBTRACT, 0, m, &cBinop_rbZkuQnS_sendMessage);
}

void Heavy_Ambient::cCast_fNF4oAoE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fv0MLkhO_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_4yVGtRoe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_GvKlyvHZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_poqjd36c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_b8qAUmMY, HV_BINOP_SUBTRACT, 0, m, &cBinop_b8qAUmMY_sendMessage);
}

void Heavy_Ambient::cBinop_eU4Sn7b5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zuNmSJb5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fNF4oAoE_sendMessage);
}

void Heavy_Ambient::cBinop_b8qAUmMY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4eHhckJG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ldarPhN8_sendMessage);
}

void Heavy_Ambient::cCast_BBwSjp1G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8WonvX9v, HV_BINOP_MULTIPLY, 1, m, &cBinop_8WonvX9v_sendMessage);
}

void Heavy_Ambient::cCast_4eHhckJG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eU4Sn7b5, HV_BINOP_MULTIPLY, 1, m, &cBinop_eU4Sn7b5_sendMessage);
}

void Heavy_Ambient::cBinop_OXJnweGW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UUs2bUN9, m);
}

void Heavy_Ambient::cCast_7StEY3HA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_gH3TbGNy_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_uOPNJXou_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_poqjd36c_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_Cvu1y9rP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_EbmSK7n2, 0, m, &cPack_EbmSK7n2_sendMessage);
}

void Heavy_Ambient::cBinop_rbZkuQnS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_omxpXf9y_sendMessage);
}

void Heavy_Ambient::cCast_ldarPhN8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eU4Sn7b5, HV_BINOP_MULTIPLY, 0, m, &cBinop_eU4Sn7b5_sendMessage);
}

void Heavy_Ambient::cCast_zuNmSJb5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rbZkuQnS, HV_BINOP_SUBTRACT, 1, m, &cBinop_rbZkuQnS_sendMessage);
}

void Heavy_Ambient::cBinop_omxpXf9y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_7KmwE1TY, m);
}

void Heavy_Ambient::cBinop_8WonvX9v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tXCpirEz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NYEUmp8k_sendMessage);
}

void Heavy_Ambient::cUnop_enAz4VXg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_Cvu1y9rP_sendMessage);
}

void Heavy_Ambient::cBinop_BuyHBo29_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_enAz4VXg_sendMessage);
}

void Heavy_Ambient::cRandom_AXLAWuj2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_BuyHBo29_sendMessage);
}

void Heavy_Ambient::cSlice_7QlDJoYx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_AXLAWuj2, 1, m, &cRandom_AXLAWuj2_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_gH3TbGNy_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_7QlDJoYx, 0, m, &cSlice_7QlDJoYx_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_AXLAWuj2, 0, m, &cRandom_AXLAWuj2_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_MDCvjPmp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_dCs8LID5, HV_BINOP_MULTIPLY, 0, m, &cBinop_dCs8LID5_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_vIGADF9U, HV_BINOP_DIVIDE, 1, m, &cBinop_vIGADF9U_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_T91B30bp, 0, m, &cVar_T91B30bp_sendMessage);
}

void Heavy_Ambient::cVar_T91B30bp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_s5KlUziN, HV_BINOP_MULTIPLY, 0, m, &cBinop_s5KlUziN_sendMessage);
}

void Heavy_Ambient::cSwitchcase_XmWlcPWY_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_j9a7jSAq_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_j9a7jSAq_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dHW950z1_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_s5KlUziN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_qEkCzLvl_sendMessage);
}

void Heavy_Ambient::cDelay_0KoxwS3i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_0KoxwS3i, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_0KoxwS3i, 0, m, &cDelay_0KoxwS3i_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ofJi1TAi, 0, m, &cVar_ofJi1TAi_sendMessage);
}

void Heavy_Ambient::cMsg_j9a7jSAq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_0KoxwS3i, 0, m, &cDelay_0KoxwS3i_sendMessage);
}

void Heavy_Ambient::cCast_dHW950z1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_j9a7jSAq_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_0KoxwS3i, 0, m, &cDelay_0KoxwS3i_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ofJi1TAi, 0, m, &cVar_ofJi1TAi_sendMessage);
}

void Heavy_Ambient::cBinop_qEkCzLvl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_0KoxwS3i, 2, m, &cDelay_0KoxwS3i_sendMessage);
}

void Heavy_Ambient::cBinop_oNHPqNd3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_s5KlUziN, HV_BINOP_MULTIPLY, 1, m, &cBinop_s5KlUziN_sendMessage);
}

void Heavy_Ambient::cSystem_BqzRgU6m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_oNHPqNd3_sendMessage);
}

void Heavy_Ambient::cMsg_FZOeKPem_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BqzRgU6m_sendMessage);
}

void Heavy_Ambient::cBinop_1l6Cwok1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p4Hj1DSl, HV_BINOP_DIVIDE, 0, m, &cBinop_p4Hj1DSl_sendMessage);
}

void Heavy_Ambient::cBinop_aQNSSJDn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_3WnBSKT2_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_SCk2nxOr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MDCvjPmp_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_InFEWU7E_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SCk2nxOr_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_dCs8LID5, HV_BINOP_MULTIPLY, 0, m, &cBinop_dCs8LID5_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_vIGADF9U, HV_BINOP_DIVIDE, 1, m, &cBinop_vIGADF9U_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_T91B30bp, 0, m, &cVar_T91B30bp_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_A90FjySj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_XmWlcPWY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cVar_ofJi1TAi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FER1kySj, HV_BINOP_SUBTRACT, 0, m, &cBinop_FER1kySj_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_aQNSSJDn_sendMessage);
}

void Heavy_Ambient::cBinop_GQC5tApv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ofJi1TAi, 1, m, &cVar_ofJi1TAi_sendMessage);
}

void Heavy_Ambient::cCast_D1czQQHV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YxFn8UBV, 0, m, &cVar_YxFn8UBV_sendMessage);
}

void Heavy_Ambient::cCast_HJdTOUhq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_capSdOkt, 1, m, &cVar_capSdOkt_sendMessage);
}

void Heavy_Ambient::cCast_hffzba1x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vN5emIGC_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_MQO15PfX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hGyqaLtI_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_GfWHArT1, HV_BINOP_ADD, 0, m, &cBinop_GfWHArT1_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Ok6vMMNG, 1, m, &cVar_Ok6vMMNG_sendMessage);
}

void Heavy_Ambient::cCast_wMJMBDkg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vhfkECwQ_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_dCs8LID5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_2Q2YshUR_sendMessage);
}

void Heavy_Ambient::cVar_Ok6vMMNG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1rvt49Ic, HV_BINOP_ADD, 0, m, &cBinop_1rvt49Ic_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_GfWHArT1, HV_BINOP_ADD, 0, m, &cBinop_GfWHArT1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ke352KAA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uOPNJXou_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Keu7ahOX_sendMessage);
}

void Heavy_Ambient::cVar_capSdOkt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Ok6vMMNG, 0, m, &cVar_Ok6vMMNG_sendMessage);
}

void Heavy_Ambient::cSlice_fhngpFHq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_A90FjySj_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_A90FjySj_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_iCDxXvWd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_t1Y8bsne_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MQO15PfX_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_t1Y8bsne_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MQO15PfX_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_mZ6kjV4U_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_fhngpFHq, 0, m, &cSlice_fhngpFHq_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_iCDxXvWd, 0, m, &cSlice_iCDxXvWd_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D1czQQHV_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_UO4O9QlR, 0, m, &cSlice_UO4O9QlR_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_ewWHpCsB, 0, m, &cSlice_ewWHpCsB_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hffzba1x_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5NMln3Y2_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_GfWHArT1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Mnu6Cz1b, 0, m, &cVar_Mnu6Cz1b_sendMessage);
}

void Heavy_Ambient::cMsg_zytyatYl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_YxFn8UBV, 1, m, &cVar_YxFn8UBV_sendMessage);
}

void Heavy_Ambient::cCast_bnQybYaV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vIGADF9U, HV_BINOP_DIVIDE, 0, m, &cBinop_vIGADF9U_sendMessage);
}

void Heavy_Ambient::cVar_Mnu6Cz1b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1l6Cwok1, HV_BINOP_SUBTRACT, 1, m, &cBinop_1l6Cwok1_sendMessage);
}

void Heavy_Ambient::cMsg_vN5emIGC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_XmWlcPWY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_FER1kySj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ofJi1TAi, 1, m, &cVar_ofJi1TAi_sendMessage);
}

void Heavy_Ambient::cBinop_2Q2YshUR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FER1kySj, HV_BINOP_SUBTRACT, 1, m, &cBinop_FER1kySj_sendMessage);
}

void Heavy_Ambient::cCast_UGRAKDtf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wMJMBDkg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cXlwEaOa_sendMessage);
}

void Heavy_Ambient::cCast_KpxBhhPA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Ok6vMMNG, 0, m, &cVar_Ok6vMMNG_sendMessage);
}

void Heavy_Ambient::cSwitchcase_3WnBSKT2_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KpxBhhPA_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UGRAKDtf_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cCast_5NMln3Y2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zytyatYl_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_kxyBKXHO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fgxPiNHC, HV_BINOP_MULTIPLY, 0, m, &cBinop_fgxPiNHC_sendMessage);
}

void Heavy_Ambient::cBinop_vIGADF9U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p4Hj1DSl, HV_BINOP_DIVIDE, 1, m, &cBinop_p4Hj1DSl_sendMessage);
}

void Heavy_Ambient::cCast_t1Y8bsne_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_A90FjySj_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_p4Hj1DSl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GfWHArT1, HV_BINOP_ADD, 1, m, &cBinop_GfWHArT1_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1rvt49Ic, HV_BINOP_ADD, 1, m, &cBinop_1rvt49Ic_sendMessage);
}

void Heavy_Ambient::cCast_4td72TC6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1l6Cwok1, HV_BINOP_SUBTRACT, 0, m, &cBinop_1l6Cwok1_sendMessage);
}

void Heavy_Ambient::cCast_hGyqaLtI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vhfkECwQ_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_1rvt49Ic_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Ok6vMMNG, 1, m, &cVar_Ok6vMMNG_sendMessage);
}

void Heavy_Ambient::cMsg_vhfkECwQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_XmWlcPWY_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_GfWHArT1, HV_BINOP_ADD, 1, m, &cBinop_GfWHArT1_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1rvt49Ic, HV_BINOP_ADD, 1, m, &cBinop_1rvt49Ic_sendMessage);
}

void Heavy_Ambient::cCast_cXlwEaOa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_capSdOkt, 0, m, &cVar_capSdOkt_sendMessage);
}

void Heavy_Ambient::cSystem_bTCu0op5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dCs8LID5, HV_BINOP_MULTIPLY, 1, m, &cBinop_dCs8LID5_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fgxPiNHC, HV_BINOP_MULTIPLY, 1, m, &cBinop_fgxPiNHC_sendMessage);
}

void Heavy_Ambient::cMsg_HEDn0fDv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_bTCu0op5_sendMessage);
}

void Heavy_Ambient::cVar_LHw8TH1W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_InFEWU7E_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_fgxPiNHC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_GQC5tApv_sendMessage);
}

void Heavy_Ambient::cVar_YxFn8UBV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kxyBKXHO_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bnQybYaV_sendMessage);
}

void Heavy_Ambient::cSlice_ewWHpCsB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HJdTOUhq_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4td72TC6_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_UO4O9QlR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kxyBKXHO_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bnQybYaV_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cMsg_yNTZZ40l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_KcDhVPoI, HV_BINOP_SUBTRACT, 0, m, &cBinop_KcDhVPoI_sendMessage);
}

void Heavy_Ambient::cSwitchcase_GvKlyvHZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_gXytbuu5, 0, m, &cSlice_gXytbuu5_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_nI2dZsNJ, 0, m, &cRandom_nI2dZsNJ_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_gXytbuu5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_nI2dZsNJ, 1, m, &cRandom_nI2dZsNJ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cRandom_nI2dZsNJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_X94UCjjR_sendMessage);
}

void Heavy_Ambient::cBinop_X94UCjjR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_l3UUAiyf_sendMessage);
}

void Heavy_Ambient::cUnop_l3UUAiyf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_SIZlWbY9_sendMessage);
}

void Heavy_Ambient::cCast_plOYF6i1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8WonvX9v, HV_BINOP_MULTIPLY, 0, m, &cBinop_8WonvX9v_sendMessage);
}

void Heavy_Ambient::cBinop_SIZlWbY9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_EbmSK7n2, 1, m, &cPack_EbmSK7n2_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Ueh1qfgp, 1, m, &cDelay_Ueh1qfgp_sendMessage);
}

void Heavy_Ambient::cCast_NYEUmp8k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yNTZZ40l_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_tXCpirEz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KcDhVPoI, HV_BINOP_SUBTRACT, 1, m, &cBinop_KcDhVPoI_sendMessage);
}

void Heavy_Ambient::cBinop_KcDhVPoI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_OXJnweGW_sendMessage);
}

void Heavy_Ambient::cCast_ke352KAA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_b8qAUmMY, HV_BINOP_SUBTRACT, 1, m, &cBinop_b8qAUmMY_sendMessage);
}

void Heavy_Ambient::cDelay_Ueh1qfgp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Ueh1qfgp, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4yVGtRoe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7StEY3HA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QBG4XGoc_sendMessage);
}

void Heavy_Ambient::cSwitchcase_D59nOpg6_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_6t6ckTs5_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_6t6ckTs5_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_Ueh1qfgp, 1, m, &cDelay_Ueh1qfgp_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_p76fIQ6R_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_6t6ckTs5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Ueh1qfgp, 0, m, &cDelay_Ueh1qfgp_sendMessage);
}

void Heavy_Ambient::cCast_p76fIQ6R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Ueh1qfgp, 0, m, &cDelay_Ueh1qfgp_sendMessage);
}

void Heavy_Ambient::cCast_QBG4XGoc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_D59nOpg6_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_X9vn1ZiC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_D3ZyS2wJ, 0, m, &cPack_D3ZyS2wJ_sendMessage);
}

void Heavy_Ambient::cBinop_b2mwHjWV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gp22HpnH, 0, m, &cVar_gp22HpnH_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_kgSuTnfp, 1, m, &cPack_kgSuTnfp_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_D3ZyS2wJ, 1, m, &cPack_D3ZyS2wJ_sendMessage);
}

void Heavy_Ambient::cCast_RBKe5Ys0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_dBp3NXra_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cSlice_niGcb8VE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_Y7UrYW4T, 1, m, &cRandom_Y7UrYW4T_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cUnop_xJEsUc4b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_b2mwHjWV_sendMessage);
}

void Heavy_Ambient::cBinop_zJ2ZpFnF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_xJEsUc4b_sendMessage);
}

void Heavy_Ambient::cSwitchcase_SYxxX5XX_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_niGcb8VE, 0, m, &cSlice_niGcb8VE_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_Y7UrYW4T, 0, m, &cRandom_Y7UrYW4T_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_Y7UrYW4T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_zJ2ZpFnF_sendMessage);
}

void Heavy_Ambient::cBinop_i9Lgj0pR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_P9kElBub_sendMessage);
}

void Heavy_Ambient::cSlice_8csq1NXn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_x5zUafVC, 1, m, &cRandom_x5zUafVC_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cRandom_x5zUafVC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_i9Lgj0pR_sendMessage);
}

void Heavy_Ambient::cSwitchcase_dBp3NXra_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_8csq1NXn, 0, m, &cSlice_8csq1NXn_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_x5zUafVC, 0, m, &cRandom_x5zUafVC_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cUnop_P9kElBub_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1400.0f, 0, m, &cBinop_heaAIRml_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_X9vn1ZiC_sendMessage);
}

void Heavy_Ambient::cPack_kgSuTnfp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_ALtjE7ve, 0, m, NULL);
}

void Heavy_Ambient::cIf_Oj63g94t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_qEJmEANX_sendMessage(_c, 0, m);
      cMsg_zRDzpZHj_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_xjY6Zc5Z_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_izkuTrhU_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_DWMFOcMb, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_tvR0Mdla_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Oj63g94t, 1, m, &cIf_Oj63g94t_sendMessage);
}

void Heavy_Ambient::cMsg_zRDzpZHj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_lioPV0i8, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_DWMFOcMb, m);
}

void Heavy_Ambient::cBinop_S1UDpo0s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_maQh22E6, m);
}

void Heavy_Ambient::cMsg_NHoNVRE8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Y8Xqw8yw_sendMessage);
}

void Heavy_Ambient::cBinop_Y8Xqw8yw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yqIvIpcT, m);
}

void Heavy_Ambient::cVar_HWdNNXMf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_tvR0Mdla_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_Oj63g94t, 0, m, &cIf_Oj63g94t_sendMessage);
}

void Heavy_Ambient::cBinop_I3kshP4e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lioPV0i8, m);
}

void Heavy_Ambient::cMsg_lihd5GLd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_QIbuqvxN_sendMessage);
}

void Heavy_Ambient::cMsg_wkguBrAQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_S1UDpo0s_sendMessage);
}

void Heavy_Ambient::cMsg_ovaFIlst_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sIzYFxSa_sendMessage);
}

void Heavy_Ambient::cSystem_sIzYFxSa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NHoNVRE8_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_xjY6Zc5Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_I3kshP4e_sendMessage);
}

void Heavy_Ambient::cBinop_izkuTrhU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lihd5GLd_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_QIbuqvxN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wkguBrAQ_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_qEJmEANX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_izkuTrhU_sendMessage);
}

void Heavy_Ambient::cBinop_heaAIRml_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_kgSuTnfp, 0, m, &cPack_kgSuTnfp_sendMessage);
}

void Heavy_Ambient::cCast_iE209RzE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Ambient::cCast_RMGBUDUX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_SYxxX5XX_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_kSuOHTUQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_sYkps2xw, 0, m, &cPack_sYkps2xw_sendMessage);
}

void Heavy_Ambient::cBinop_e9s3KY8R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_W5B63xLd_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cBinop_PGZMgK1n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_THvI1zS0, m);
}

void Heavy_Ambient::cMsg_vudOiQh7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_PSiCjC2S_sendMessage);
}

void Heavy_Ambient::cSystem_PSiCjC2S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VwGvBRpE_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_rU21edPQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_nhh1Hhag, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Pc0gz6r7, m);
}

void Heavy_Ambient::cBinop_K02KriGT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_9hNDWcfq, m);
}

void Heavy_Ambient::cMsg_rNTF2hMp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_e9s3KY8R_sendMessage);
}

void Heavy_Ambient::cBinop_tZr7OUdz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_nhh1Hhag, m);
}

void Heavy_Ambient::cBinop_TIVynVKc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SfCBjzt7_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cVar_7Xl12SgN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_aNOmKJit_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_kZWQtxfb, 0, m, &cIf_kZWQtxfb_sendMessage);
}

void Heavy_Ambient::cMsg_VwGvBRpE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_K02KriGT_sendMessage);
}

void Heavy_Ambient::cBinop_aNOmKJit_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_kZWQtxfb, 1, m, &cIf_kZWQtxfb_sendMessage);
}

void Heavy_Ambient::cIf_kZWQtxfb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_rNTF2hMp_sendMessage(_c, 0, m);
      cMsg_rU21edPQ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_9iE20Qki_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_e9s3KY8R_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_Pc0gz6r7, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cMsg_SfCBjzt7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_PGZMgK1n_sendMessage);
}

void Heavy_Ambient::cMsg_W5B63xLd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_TIVynVKc_sendMessage);
}

void Heavy_Ambient::cMsg_9iE20Qki_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_tZr7OUdz_sendMessage);
}

void Heavy_Ambient::cPack_2soE1jD3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_9sZoa4pp_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cMsg_j52IC2G2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PUGIgKjD, HV_BINOP_SUBTRACT, 0, m, &cBinop_PUGIgKjD_sendMessage);
}

void Heavy_Ambient::cCast_OA75nvQX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_yWyCLohI_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_QUYOKUr4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ndBmMKR6, HV_BINOP_MULTIPLY, 1, m, &cBinop_ndBmMKR6_sendMessage);
}

void Heavy_Ambient::cCast_umazng57_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_kCBEudh9_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_8vsVfL57_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_orBsWiae_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_orBsWiae_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fv4LdLfe, HV_BINOP_SUBTRACT, 0, m, &cBinop_fv4LdLfe_sendMessage);
}

void Heavy_Ambient::cCast_Hf8Dr6ML_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QUYOKUr4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_twmutDc8_sendMessage);
}

void Heavy_Ambient::cCast_9AMHj7cR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PUGIgKjD, HV_BINOP_SUBTRACT, 1, m, &cBinop_PUGIgKjD_sendMessage);
}

void Heavy_Ambient::cCast_twmutDc8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ndBmMKR6, HV_BINOP_MULTIPLY, 0, m, &cBinop_ndBmMKR6_sendMessage);
}

void Heavy_Ambient::cBinop_fv4LdLfe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_9xHAGKQi_sendMessage);
}

void Heavy_Ambient::cMsg_7VqVoHYi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_erIVTdCV, HV_BINOP_SUBTRACT, 0, m, &cBinop_erIVTdCV_sendMessage);
}

void Heavy_Ambient::cBinop_ORFfx8qm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_F7KaR8Lx, m);
}

void Heavy_Ambient::cBinop_9xHAGKQi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_OXDKZDxi, m);
}

void Heavy_Ambient::cBinop_PUGIgKjD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_ORFfx8qm_sendMessage);
}

void Heavy_Ambient::cBinop_erIVTdCV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LvqkiNKv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vBcyQm25_sendMessage);
}

void Heavy_Ambient::cRandom_9stqTU3U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_J9gb7B4x_sendMessage);
}

void Heavy_Ambient::cBinop_J9gb7B4x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_XO0ZzLSK_sendMessage);
}

void Heavy_Ambient::cSlice_E4tiejZg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_9stqTU3U, 1, m, &cRandom_9stqTU3U_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_yWyCLohI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_E4tiejZg, 0, m, &cSlice_E4tiejZg_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_9stqTU3U, 0, m, &cRandom_9stqTU3U_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cUnop_XO0ZzLSK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_hbHmci89_sendMessage);
}

void Heavy_Ambient::cCast_vuNminat_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_rqsbOucf, 0, m, &cDelay_rqsbOucf_sendMessage);
}

void Heavy_Ambient::cMsg_Jf9fWi66_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_rqsbOucf, 0, m, &cDelay_rqsbOucf_sendMessage);
}

void Heavy_Ambient::cDelay_rqsbOucf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_rqsbOucf, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KzZERP40_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OA75nvQX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_umazng57_sendMessage);
}

void Heavy_Ambient::cSwitchcase_kCBEudh9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_Jf9fWi66_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_Jf9fWi66_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_rqsbOucf, 1, m, &cDelay_rqsbOucf_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vuNminat_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_ndBmMKR6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9AMHj7cR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6D5lq9ZH_sendMessage);
}

void Heavy_Ambient::cBinop_hbHmci89_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_2soE1jD3, 0, m, &cPack_2soE1jD3_sendMessage);
}

void Heavy_Ambient::cCast_fKtsAwqE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fv4LdLfe, HV_BINOP_SUBTRACT, 1, m, &cBinop_fv4LdLfe_sendMessage);
}

void Heavy_Ambient::cCast_BFTiZ6NI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_erIVTdCV, HV_BINOP_SUBTRACT, 1, m, &cBinop_erIVTdCV_sendMessage);
}

void Heavy_Ambient::cSwitchcase_kpgLJ1yg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_sBn6wJRJ, 0, m, &cSlice_sBn6wJRJ_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_4XvmSZxs, 0, m, &cRandom_4XvmSZxs_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cUnop_4FsUMecY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_zTBSxtLr_sendMessage);
}

void Heavy_Ambient::cBinop_T05AAsYJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_4FsUMecY_sendMessage);
}

void Heavy_Ambient::cRandom_4XvmSZxs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_T05AAsYJ_sendMessage);
}

void Heavy_Ambient::cSlice_sBn6wJRJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_4XvmSZxs, 1, m, &cRandom_4XvmSZxs_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_gCXPA3X7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fKtsAwqE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8vsVfL57_sendMessage);
}

void Heavy_Ambient::cCast_KzZERP40_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_kpgLJ1yg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cSlice_oMYvRxzW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GrVrtEqk_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_evA1TVvv_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSlice_yZMw4QPU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oGKzXOct_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MudksKmi_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cCast_qWxBrVKK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dKQG8HP0_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cVar_BxJj0RF4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GrVrtEqk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_evA1TVvv_sendMessage);
}

void Heavy_Ambient::cVar_WEL8EFGy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cveVKxmj, HV_BINOP_SUBTRACT, 1, m, &cBinop_cveVKxmj_sendMessage);
}

void Heavy_Ambient::cCast_zdGSO0Ir_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YbuxwvYH_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSlice_Wrs3BQ8F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_1opF5nRu_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_1opF5nRu_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cSwitchcase_9sZoa4pp_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Wrs3BQ8F, 0, m, &cSlice_Wrs3BQ8F_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZVYWtMF9, 0, m, &cSlice_ZVYWtMF9_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_z1HPDtPf_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_oMYvRxzW, 0, m, &cSlice_oMYvRxzW_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_yZMw4QPU, 0, m, &cSlice_yZMw4QPU_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rIKBQwjE_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qWxBrVKK_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cSlice_ZVYWtMF9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yKTK1FYU_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mZA5NfG0_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yKTK1FYU_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mZA5NfG0_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cCast_oGKzXOct_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_exCfWmbR, 1, m, &cVar_exCfWmbR_sendMessage);
}

void Heavy_Ambient::cBinop_SdGGJnqL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jYGutSUD, HV_BINOP_SUBTRACT, 1, m, &cBinop_jYGutSUD_sendMessage);
}

void Heavy_Ambient::cBinop_utKLwXlr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WEL8EFGy, 0, m, &cVar_WEL8EFGy_sendMessage);
}

void Heavy_Ambient::cCast_yKTK1FYU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1opF5nRu_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cMsg_YbuxwvYH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_omxssoCe_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_utKLwXlr, HV_BINOP_ADD, 1, m, &cBinop_utKLwXlr_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_77K5V8yZ, HV_BINOP_ADD, 1, m, &cBinop_77K5V8yZ_sendMessage);
}

void Heavy_Ambient::cVar_hpBH4K3a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_1lNvmiut_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cCast_CaySTD71_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_exCfWmbR, 0, m, &cVar_exCfWmbR_sendMessage);
}

void Heavy_Ambient::cBinop_RIkXDchH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_L2NkZTs3, 1, m, &cVar_L2NkZTs3_sendMessage);
}

void Heavy_Ambient::cCast_bY9PtBq5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PfaBIpRz_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cSwitchcase_1lNvmiut_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bY9PtBq5_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_yxmjp6jB, HV_BINOP_MULTIPLY, 0, m, &cBinop_yxmjp6jB_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_yOTQNGdQ, HV_BINOP_DIVIDE, 1, m, &cBinop_yOTQNGdQ_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_FDtrRm8p, 0, m, &cVar_FDtrRm8p_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cBinop_SlbE6gtj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_mJNLgRje_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cSystem_aCdPtBp1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yxmjp6jB, HV_BINOP_MULTIPLY, 1, m, &cBinop_yxmjp6jB_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_98XLNl4x, HV_BINOP_MULTIPLY, 1, m, &cBinop_98XLNl4x_sendMessage);
}

void Heavy_Ambient::cMsg_6hGYSHWL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_aCdPtBp1_sendMessage);
}

void Heavy_Ambient::cBinop_cveVKxmj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nRWPKx32, HV_BINOP_DIVIDE, 0, m, &cBinop_nRWPKx32_sendMessage);
}

void Heavy_Ambient::cBinop_jYGutSUD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_L2NkZTs3, 1, m, &cVar_L2NkZTs3_sendMessage);
}

void Heavy_Ambient::cDelay_j8PzhiSK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_j8PzhiSK, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_j8PzhiSK, 0, m, &cDelay_j8PzhiSK_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_L2NkZTs3, 0, m, &cVar_L2NkZTs3_sendMessage);
}

void Heavy_Ambient::cCast_0fmRdLfp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jJA8B9YX_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_j8PzhiSK, 0, m, &cDelay_j8PzhiSK_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_L2NkZTs3, 0, m, &cVar_L2NkZTs3_sendMessage);
}

void Heavy_Ambient::cBinop_YNItRmJI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_j8PzhiSK, 2, m, &cDelay_j8PzhiSK_sendMessage);
}

void Heavy_Ambient::cSystem_CX2QqXpM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_62d1iBcE_sendMessage);
}

void Heavy_Ambient::cMsg_qz8mMZvx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_CX2QqXpM_sendMessage);
}

void Heavy_Ambient::cBinop_FhtqPAJe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_YNItRmJI_sendMessage);
}

void Heavy_Ambient::cVar_FDtrRm8p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FhtqPAJe, HV_BINOP_MULTIPLY, 0, m, &cBinop_FhtqPAJe_sendMessage);
}

void Heavy_Ambient::cSwitchcase_omxssoCe_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_jJA8B9YX_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_jJA8B9YX_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0fmRdLfp_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cMsg_jJA8B9YX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_j8PzhiSK, 0, m, &cDelay_j8PzhiSK_sendMessage);
}

void Heavy_Ambient::cBinop_62d1iBcE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FhtqPAJe, HV_BINOP_MULTIPLY, 1, m, &cBinop_FhtqPAJe_sendMessage);
}

void Heavy_Ambient::cCast_mZA5NfG0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_odfMCLDe_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_utKLwXlr, HV_BINOP_ADD, 0, m, &cBinop_utKLwXlr_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_wI7IynAn, 1, m, &cVar_wI7IynAn_sendMessage);
}

void Heavy_Ambient::cVar_exCfWmbR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wI7IynAn, 0, m, &cVar_wI7IynAn_sendMessage);
}

void Heavy_Ambient::cBinop_77K5V8yZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wI7IynAn, 1, m, &cVar_wI7IynAn_sendMessage);
}

void Heavy_Ambient::cMsg_dKQG8HP0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_BxJj0RF4, 1, m, &cVar_BxJj0RF4_sendMessage);
}

void Heavy_Ambient::cMsg_4txzK4dm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_omxssoCe_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cVar_wI7IynAn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_77K5V8yZ, HV_BINOP_ADD, 0, m, &cBinop_77K5V8yZ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_utKLwXlr, HV_BINOP_ADD, 0, m, &cBinop_utKLwXlr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_BFTiZ6NI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZuVMn2cy_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Hf8Dr6ML_sendMessage);
}

void Heavy_Ambient::cMsg_PfaBIpRz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yxmjp6jB, HV_BINOP_MULTIPLY, 0, m, &cBinop_yxmjp6jB_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yOTQNGdQ, HV_BINOP_DIVIDE, 1, m, &cBinop_yOTQNGdQ_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_FDtrRm8p, 0, m, &cVar_FDtrRm8p_sendMessage);
}

void Heavy_Ambient::cCast_odfMCLDe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YbuxwvYH_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_GrVrtEqk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_98XLNl4x, HV_BINOP_MULTIPLY, 0, m, &cBinop_98XLNl4x_sendMessage);
}

void Heavy_Ambient::cBinop_yOTQNGdQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nRWPKx32, HV_BINOP_DIVIDE, 1, m, &cBinop_nRWPKx32_sendMessage);
}

void Heavy_Ambient::cBinop_yxmjp6jB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_SdGGJnqL_sendMessage);
}

void Heavy_Ambient::cMsg_1opF5nRu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_omxssoCe_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cBinop_98XLNl4x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_RIkXDchH_sendMessage);
}

void Heavy_Ambient::cVar_L2NkZTs3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jYGutSUD, HV_BINOP_SUBTRACT, 0, m, &cBinop_jYGutSUD_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_SlbE6gtj_sendMessage);
}

void Heavy_Ambient::cCast_MudksKmi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cveVKxmj, HV_BINOP_SUBTRACT, 0, m, &cBinop_cveVKxmj_sendMessage);
}

void Heavy_Ambient::cCast_evA1TVvv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yOTQNGdQ, HV_BINOP_DIVIDE, 0, m, &cBinop_yOTQNGdQ_sendMessage);
}

void Heavy_Ambient::cBinop_nRWPKx32_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_utKLwXlr, HV_BINOP_ADD, 1, m, &cBinop_utKLwXlr_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_77K5V8yZ, HV_BINOP_ADD, 1, m, &cBinop_77K5V8yZ_sendMessage);
}

void Heavy_Ambient::cCast_z1HPDtPf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BxJj0RF4, 0, m, &cVar_BxJj0RF4_sendMessage);
}

void Heavy_Ambient::cCast_PKafoogr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zdGSO0Ir_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CaySTD71_sendMessage);
}

void Heavy_Ambient::cCast_GAyvzm7W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wI7IynAn, 0, m, &cVar_wI7IynAn_sendMessage);
}

void Heavy_Ambient::cSwitchcase_mJNLgRje_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GAyvzm7W_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PKafoogr_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Ambient::cCast_rIKBQwjE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4txzK4dm_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_LvqkiNKv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gCXPA3X7, HV_BINOP_MULTIPLY, 1, m, &cBinop_gCXPA3X7_sendMessage);
}

void Heavy_Ambient::cBinop_zTBSxtLr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_2soE1jD3, 1, m, &cPack_2soE1jD3_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_rqsbOucf, 1, m, &cDelay_rqsbOucf_sendMessage);
}

void Heavy_Ambient::cCast_ZuVMn2cy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7VqVoHYi_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_6D5lq9ZH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_j52IC2G2_sendMessage(_c, 0, m);
}

void Heavy_Ambient::cCast_vBcyQm25_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gCXPA3X7, HV_BINOP_MULTIPLY, 0, m, &cBinop_gCXPA3X7_sendMessage);
}

void Heavy_Ambient::cCast_bseNTu9s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_GTp35VsX_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cSlice_ONVKjiM2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_fv3n3HFz, 1, m, &cRandom_fv3n3HFz_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_hsUGSCrz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_CEBXJLOk_sendMessage);
}

void Heavy_Ambient::cSwitchcase_DDaJfH5Y_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ONVKjiM2, 0, m, &cSlice_ONVKjiM2_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_fv3n3HFz, 0, m, &cRandom_fv3n3HFz_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cRandom_fv3n3HFz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_hsUGSCrz_sendMessage);
}

void Heavy_Ambient::cUnop_CEBXJLOk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_IiWeK95o_sendMessage);
}

void Heavy_Ambient::cBinop_nsjGkEOx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_aPyuuj7x, 0, m, &cPack_aPyuuj7x_sendMessage);
}

void Heavy_Ambient::cPack_sYkps2xw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_EPLLdhF9, 0, m, NULL);
}

void Heavy_Ambient::cRandom_kiPg7ekA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_RGA3B5Kj_sendMessage);
}

void Heavy_Ambient::cUnop_eCF3FP8Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 600.0f, 0, m, &cBinop_nsjGkEOx_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_kSuOHTUQ_sendMessage);
}

void Heavy_Ambient::cSlice_4Wxej5X4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_kiPg7ekA, 1, m, &cRandom_kiPg7ekA_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Ambient::cBinop_RGA3B5Kj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_eCF3FP8Y_sendMessage);
}

void Heavy_Ambient::cSwitchcase_GTp35VsX_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_4Wxej5X4, 0, m, &cSlice_4Wxej5X4_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_kiPg7ekA, 0, m, &cRandom_kiPg7ekA_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cCast_81MWmeB5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_DDaJfH5Y_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Ambient::cPack_aPyuuj7x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_4PdLiRgN, 0, m, NULL);
}

void Heavy_Ambient::cBinop_IiWeK95o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bklfej2s, 0, m, &cVar_bklfej2s_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_aPyuuj7x, 1, m, &cPack_aPyuuj7x_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_sYkps2xw, 1, m, &cPack_sYkps2xw_sendMessage);
}

void Heavy_Ambient::cCast_qwMbLo9r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OBWn9W4l_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_BSxk2EBZ, 0, m, &cDelay_BSxk2EBZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_81MWmeB5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Yd8BCD2l_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bseNTu9s_sendMessage);
}

void Heavy_Ambient::cMsg_OBWn9W4l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_BSxk2EBZ, 0, m, &cDelay_BSxk2EBZ_sendMessage);
}

void Heavy_Ambient::cSwitchcase_0VtP8Lug_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_OBWn9W4l_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_OBWn9W4l_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qwMbLo9r_sendMessage);
      break;
    }
  }
}

void Heavy_Ambient::cDelay_BSxk2EBZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_BSxk2EBZ, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_BSxk2EBZ, 0, m, &cDelay_BSxk2EBZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_81MWmeB5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Yd8BCD2l_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bseNTu9s_sendMessage);
}

void Heavy_Ambient::cBinop_eR3PpYlm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ICV0aVuB, HV_BINOP_MULTIPLY, 1, m, &cBinop_ICV0aVuB_sendMessage);
}

void Heavy_Ambient::cSystem_03e60tXA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_eR3PpYlm_sendMessage);
}

void Heavy_Ambient::cMsg_zGHJYKnX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_03e60tXA_sendMessage);
}

void Heavy_Ambient::cBinop_ICV0aVuB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_q4DIrWqO_sendMessage);
}

void Heavy_Ambient::cBinop_q4DIrWqO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_BSxk2EBZ, 2, m, &cDelay_BSxk2EBZ_sendMessage);
}

void Heavy_Ambient::cVar_bklfej2s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ICV0aVuB, HV_BINOP_MULTIPLY, 0, m, &cBinop_ICV0aVuB_sendMessage);
}

void Heavy_Ambient::cCast_Yd8BCD2l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}




/*
 * Context Process Implementation
 */

int Heavy_Ambient::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5, Bf6, Bf7, Bf8, Bf9, Bf10, Bf11, Bf12, Bf13, Bf14, Bf15, Bf16, Bf17, Bf18;
  hv_bufferi_t Bi0, Bi1;

  // input and output vars
  hv_bufferf_t O0, O1;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_varread_i(&sVari_pdgLcTuZ, VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 16807, 16807, 16807, 16807, 16807, 16807, 16807, 16807);
    __hv_mul_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_varwrite_i(&sVari_pdgLcTuZ, VIi(Bi1));
    __hv_cast_if(VIi(Bi1), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f);
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_kpkMT8Sb, VOf(Bf0));
    __hv_varread_f(&sVarf_5JtBFaJ0, VOf(Bf2));
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_AQCGwVEX, VOf(Bf2));
    __hv_min_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_d0xlBOb9, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf2));
    __hv_varread_f(&sVarf_tCbwuwsd, VOf(Bf4));
    __hv_mul_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf3), VIf(Bf2), VOf(Bf3));
    __hv_cos_f(VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf5));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf2));
    __hv_gt_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_sqrt_f(VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_cpole_f(&sCPole_04JpBHOA, VIf(Bf4), VIf(ZERO), VIf(Bf5), VIf(Bf0), VOf(Bf0), VOf(Bf5));
    __hv_line_f(&sLine_vxaSioEe, VOf(Bf5));
    __hv_mul_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_0jyibtbV, VOf(Bf0));
    __hv_mul_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_5khhCy0k, VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_Ms6wqZEv, VOf(Bf5));
    __hv_varread_f(&sVarf_ymXd167q, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_jsT5uniN, VOf(Bf3));
    __hv_min_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_kUidlgQs, VOf(Bf2));
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf3));
    __hv_varread_f(&sVarf_hG9zuFJR, VOf(Bf6));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf3), VOf(Bf2));
    __hv_cos_f(VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf7));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf3));
    __hv_gt_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_sqrt_f(VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_cpole_f(&sCPole_ZY1KQizK, VIf(Bf6), VIf(ZERO), VIf(Bf7), VIf(Bf5), VOf(Bf5), VOf(Bf7));
    __hv_line_f(&sLine_eoCzZZGe, VOf(Bf7));
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_UCo4wApe, VOf(Bf5));
    __hv_mul_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_KeXFIfUq, VOf(Bf6));
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_4PdLiRgN, VOf(Bf0));
    __hv_varread_f(&sVarf_9hNDWcfq, VOf(Bf7));
    __hv_mul_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf0), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_Pc0gz6r7, VOf(Bf7));
    __hv_min_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_nhh1Hhag, VOf(Bf2));
    __hv_mul_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf7));
    __hv_varread_f(&sVarf_THvI1zS0, VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf7), VOf(Bf2));
    __hv_cos_f(VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf8));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf7));
    __hv_gt_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_sqrt_f(VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_cpole_f(&sCPole_pIqpythw, VIf(Bf3), VIf(ZERO), VIf(Bf8), VIf(Bf0), VOf(Bf0), VOf(Bf8));
    __hv_line_f(&sLine_EPLLdhF9, VOf(Bf8));
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_F7KaR8Lx, VOf(Bf0));
    __hv_mul_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_OXDKZDxi, VOf(Bf3));
    __hv_mul_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_pSM8ZlIy, VOf(Bf5));
    __hv_varread_f(&sVarf_11IWFZ2O, VOf(Bf8));
    __hv_mul_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_6Sr6loz0, VOf(Bf8));
    __hv_min_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_OL9p5kSu, VOf(Bf2));
    __hv_mul_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf8));
    __hv_varread_f(&sVarf_Ccs4XKNW, VOf(Bf7));
    __hv_mul_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf8), VOf(Bf2));
    __hv_cos_f(VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf9));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf8));
    __hv_gt_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_sqrt_f(VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_cpole_f(&sCPole_HPxrZdPk, VIf(Bf7), VIf(ZERO), VIf(Bf9), VIf(Bf5), VOf(Bf5), VOf(Bf9));
    __hv_line_f(&sLine_Qy37aPMN, VOf(Bf9));
    __hv_mul_f(VIf(Bf5), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_qgR3m3Yw, VOf(Bf5));
    __hv_mul_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_E8qlXFSi, VOf(Bf7));
    __hv_mul_f(VIf(Bf9), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_VvxpDCIw, VOf(Bf0));
    __hv_varread_f(&sVarf_oP4iklVo, VOf(Bf9));
    __hv_mul_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf0), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_BEyxLDqu, VOf(Bf9));
    __hv_min_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_NnRGOxMR, VOf(Bf2));
    __hv_mul_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf9));
    __hv_varread_f(&sVarf_tLRawH8a, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf9), VOf(Bf2));
    __hv_cos_f(VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf10));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf9));
    __hv_gt_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_sqrt_f(VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_cpole_f(&sCPole_mks8Vpmq, VIf(Bf8), VIf(ZERO), VIf(Bf10), VIf(Bf0), VOf(Bf0), VOf(Bf10));
    __hv_line_f(&sLine_EFxFip1a, VOf(Bf10));
    __hv_mul_f(VIf(Bf0), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_XcDyVGEr, VOf(Bf0));
    __hv_mul_f(VIf(Bf10), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_srAWdFio, VOf(Bf8));
    __hv_mul_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_PTCP9CZh, VOf(Bf5));
    __hv_varread_f(&sVarf_WeT7a3eJ, VOf(Bf10));
    __hv_mul_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf5), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_iD87VwlW, VOf(Bf10));
    __hv_min_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_iaq66yxr, VOf(Bf2));
    __hv_mul_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf10));
    __hv_varread_f(&sVarf_Ctxyal7S, VOf(Bf9));
    __hv_mul_f(VIf(Bf10), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf10), VOf(Bf2));
    __hv_cos_f(VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf11));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf10));
    __hv_gt_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_sqrt_f(VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_cpole_f(&sCPole_JVa27YJm, VIf(Bf9), VIf(ZERO), VIf(Bf11), VIf(Bf5), VOf(Bf5), VOf(Bf11));
    __hv_line_f(&sLine_UexAEjF2, VOf(Bf11));
    __hv_mul_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_72C0EA3k, VOf(Bf5));
    __hv_mul_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_uVXCSZzy, VOf(Bf9));
    __hv_mul_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_add_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_ALtjE7ve, VOf(Bf0));
    __hv_varread_f(&sVarf_yqIvIpcT, VOf(Bf11));
    __hv_mul_f(VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf0), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf11), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_DWMFOcMb, VOf(Bf11));
    __hv_min_f(VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_lioPV0i8, VOf(Bf2));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf11));
    __hv_varread_f(&sVarf_maQh22E6, VOf(Bf10));
    __hv_mul_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf11), VOf(Bf2));
    __hv_cos_f(VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf12));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf11), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf11));
    __hv_gt_f(VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_sqrt_f(VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf11), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_cpole_f(&sCPole_RxGRIZb3, VIf(Bf10), VIf(ZERO), VIf(Bf12), VIf(Bf0), VOf(Bf0), VOf(Bf12));
    __hv_line_f(&sLine_8q2SriBt, VOf(Bf12));
    __hv_mul_f(VIf(Bf0), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_7KmwE1TY, VOf(Bf0));
    __hv_mul_f(VIf(Bf12), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_UUs2bUN9, VOf(Bf10));
    __hv_mul_f(VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_line_f(&sLine_AmvoMKPV, VOf(Bf5));
    __hv_varread_f(&sVarf_fgSRPBCr, VOf(Bf12));
    __hv_mul_f(VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf5), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf12), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_ILlAx9Xz, VOf(Bf12));
    __hv_min_f(VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_k7Gbrzio, VOf(Bf2));
    __hv_mul_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf12));
    __hv_varread_f(&sVarf_vo90G0Ob, VOf(Bf11));
    __hv_mul_f(VIf(Bf12), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf12), VOf(Bf2));
    __hv_cos_f(VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf13));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf12), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf12));
    __hv_gt_f(VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_sqrt_f(VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf12), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_cpole_f(&sCPole_uqlbefyD, VIf(Bf11), VIf(ZERO), VIf(Bf13), VIf(Bf5), VOf(Bf5), VOf(Bf13));
    __hv_line_f(&sLine_tGX77vIy, VOf(Bf13));
    __hv_mul_f(VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_MEQNpVsQ, VOf(Bf5));
    __hv_mul_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_bcfpngPx, VOf(Bf11));
    __hv_mul_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_add_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_line_f(&sLine_yjkwNY7W, VOf(Bf10));
    __hv_varread_f(&sVarf_vIaW9ICs, VOf(Bf13));
    __hv_mul_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf10), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf13), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_Dc33QfEN, VOf(Bf13));
    __hv_min_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_TpqYVykL, VOf(Bf2));
    __hv_mul_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf13));
    __hv_varread_f(&sVarf_S2VWjGV9, VOf(Bf12));
    __hv_mul_f(VIf(Bf13), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf13), VOf(Bf2));
    __hv_cos_f(VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf14));
    __hv_mul_f(VIf(Bf10), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf13), VIf(Bf10), VOf(Bf10));
    __hv_zero_f(VOf(Bf13));
    __hv_gt_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_sqrt_f(VIf(Bf10), VOf(Bf10));
    __hv_and_f(VIf(Bf13), VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_cpole_f(&sCPole_pbGo1Buk, VIf(Bf12), VIf(ZERO), VIf(Bf14), VIf(Bf10), VOf(Bf10), VOf(Bf14));
    __hv_line_f(&sLine_94QtbIz7, VOf(Bf14));
    __hv_mul_f(VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_Gqn9v48u, VOf(Bf10));
    __hv_mul_f(VIf(Bf14), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_k89N2j2H, VOf(Bf12));
    __hv_mul_f(VIf(Bf14), VIf(Bf12), VOf(Bf12));
    __hv_add_f(VIf(Bf11), VIf(Bf12), VOf(Bf12));
    __hv_line_f(&sLine_nhTOyfjt, VOf(Bf11));
    __hv_varread_f(&sVarf_5Yx160mC, VOf(Bf14));
    __hv_mul_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf11), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_nXqF4mYY, VOf(Bf14));
    __hv_min_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_lQMsinVE, VOf(Bf2));
    __hv_mul_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf14));
    __hv_varread_f(&sVarf_rZFqwUSH, VOf(Bf13));
    __hv_mul_f(VIf(Bf14), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf14), VOf(Bf2));
    __hv_cos_f(VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf2), VIf(Bf11), VOf(Bf15));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_zero_f(VOf(Bf14));
    __hv_gt_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_sqrt_f(VIf(Bf11), VOf(Bf11));
    __hv_and_f(VIf(Bf14), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_cpole_f(&sCPole_NSF8LKDu, VIf(Bf13), VIf(ZERO), VIf(Bf15), VIf(Bf11), VOf(Bf11), VOf(Bf15));
    __hv_line_f(&sLine_bOHgupoX, VOf(Bf15));
    __hv_mul_f(VIf(Bf11), VIf(Bf15), VOf(Bf15));
    __hv_varread_f(&sVarf_i504brLg, VOf(Bf11));
    __hv_mul_f(VIf(Bf15), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_ihI7vTfK, VOf(Bf13));
    __hv_mul_f(VIf(Bf15), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_line_f(&sLine_IKs3z4LT, VOf(Bf12));
    __hv_varread_f(&sVarf_aEq46AjZ, VOf(Bf15));
    __hv_mul_f(VIf(Bf12), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf12), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf15), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_QgPlqAMg, VOf(Bf15));
    __hv_min_f(VIf(Bf12), VIf(Bf15), VOf(Bf15));
    __hv_varread_f(&sVarf_72M1CbR9, VOf(Bf2));
    __hv_mul_f(VIf(Bf15), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf15));
    __hv_varread_f(&sVarf_vWJ6Kciq, VOf(Bf14));
    __hv_mul_f(VIf(Bf15), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf15), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf15), VOf(Bf2));
    __hv_cos_f(VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf2), VIf(Bf12), VOf(Bf16));
    __hv_mul_f(VIf(Bf12), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf15), VIf(Bf12), VOf(Bf12));
    __hv_zero_f(VOf(Bf15));
    __hv_gt_f(VIf(Bf12), VIf(Bf15), VOf(Bf15));
    __hv_sqrt_f(VIf(Bf12), VOf(Bf12));
    __hv_and_f(VIf(Bf15), VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_cpole_f(&sCPole_MhMeAaX3, VIf(Bf14), VIf(ZERO), VIf(Bf16), VIf(Bf12), VOf(Bf12), VOf(Bf16));
    __hv_line_f(&sLine_IkCYM5gX, VOf(Bf16));
    __hv_mul_f(VIf(Bf12), VIf(Bf16), VOf(Bf16));
    __hv_varread_f(&sVarf_eUS0Xrf2, VOf(Bf12));
    __hv_mul_f(VIf(Bf16), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_YwXE32u9, VOf(Bf14));
    __hv_mul_f(VIf(Bf16), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf13), VIf(Bf12), VOf(Bf12));
    __hv_line_f(&sLine_Db76Xyoq, VOf(Bf13));
    __hv_varread_f(&sVarf_LEW1UPSU, VOf(Bf16));
    __hv_mul_f(VIf(Bf13), VIf(Bf16), VOf(Bf16));
    __hv_var_k_f(VOf(Bf13), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf16), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_0MwW1bp5, VOf(Bf16));
    __hv_min_f(VIf(Bf13), VIf(Bf16), VOf(Bf16));
    __hv_varread_f(&sVarf_rLJkfdV5, VOf(Bf2));
    __hv_mul_f(VIf(Bf16), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf16));
    __hv_varread_f(&sVarf_JCCZhyeK, VOf(Bf15));
    __hv_mul_f(VIf(Bf16), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf16), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf16), VOf(Bf2));
    __hv_cos_f(VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf2), VIf(Bf13), VOf(Bf17));
    __hv_mul_f(VIf(Bf13), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf16), VIf(Bf13), VOf(Bf13));
    __hv_zero_f(VOf(Bf16));
    __hv_gt_f(VIf(Bf13), VIf(Bf16), VOf(Bf16));
    __hv_sqrt_f(VIf(Bf13), VOf(Bf13));
    __hv_and_f(VIf(Bf16), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_cpole_f(&sCPole_sEgDw1l6, VIf(Bf15), VIf(ZERO), VIf(Bf17), VIf(Bf13), VOf(Bf13), VOf(Bf17));
    __hv_line_f(&sLine_2nEjRgnK, VOf(Bf17));
    __hv_mul_f(VIf(Bf13), VIf(Bf17), VOf(Bf17));
    __hv_varread_f(&sVarf_RUGDNAhE, VOf(Bf13));
    __hv_mul_f(VIf(Bf17), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_xiPXVgtF, VOf(Bf15));
    __hv_mul_f(VIf(Bf17), VIf(Bf15), VOf(Bf15));
    __hv_add_f(VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_line_f(&sLine_OgB4HsJQ, VOf(Bf12));
    __hv_varread_f(&sVarf_NCgtUvXu, VOf(Bf17));
    __hv_mul_f(VIf(Bf12), VIf(Bf17), VOf(Bf17));
    __hv_var_k_f(VOf(Bf12), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf17), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_DWp5M0iA, VOf(Bf17));
    __hv_min_f(VIf(Bf12), VIf(Bf17), VOf(Bf17));
    __hv_varread_f(&sVarf_QkhPZiGG, VOf(Bf2));
    __hv_mul_f(VIf(Bf17), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf17));
    __hv_varread_f(&sVarf_VOf1Udl6, VOf(Bf16));
    __hv_mul_f(VIf(Bf17), VIf(Bf16), VOf(Bf16));
    __hv_var_k_f(VOf(Bf17), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf17), VOf(Bf2));
    __hv_cos_f(VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf2), VIf(Bf12), VOf(Bf18));
    __hv_mul_f(VIf(Bf12), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf17), VIf(Bf12), VOf(Bf12));
    __hv_zero_f(VOf(Bf17));
    __hv_gt_f(VIf(Bf12), VIf(Bf17), VOf(Bf17));
    __hv_sqrt_f(VIf(Bf12), VOf(Bf12));
    __hv_and_f(VIf(Bf17), VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_cpole_f(&sCPole_jVrj0Ksk, VIf(Bf16), VIf(ZERO), VIf(Bf18), VIf(Bf12), VOf(Bf12), VOf(Bf18));
    __hv_line_f(&sLine_0JHdmdzQ, VOf(Bf18));
    __hv_mul_f(VIf(Bf12), VIf(Bf18), VOf(Bf18));
    __hv_varread_f(&sVarf_Yy2TGrzA, VOf(Bf12));
    __hv_mul_f(VIf(Bf18), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_7oPUoK92, VOf(Bf16));
    __hv_mul_f(VIf(Bf18), VIf(Bf16), VOf(Bf16));
    __hv_add_f(VIf(Bf13), VIf(Bf12), VOf(Bf12));
    __hv_line_f(&sLine_mxv4RPjm, VOf(Bf13));
    __hv_varread_f(&sVarf_LPflPWYe, VOf(Bf18));
    __hv_mul_f(VIf(Bf13), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf13), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf18), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_qBWnK3gi, VOf(Bf18));
    __hv_min_f(VIf(Bf13), VIf(Bf18), VOf(Bf18));
    __hv_varread_f(&sVarf_4EqTbcqV, VOf(Bf2));
    __hv_mul_f(VIf(Bf18), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf1));
    __hv_varread_f(&sVarf_5erRNfiL, VOf(Bf18));
    __hv_mul_f(VIf(Bf1), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf2));
    __hv_cos_f(VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf2), VIf(Bf13), VOf(Bf17));
    __hv_mul_f(VIf(Bf13), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf1), VIf(Bf13), VOf(Bf13));
    __hv_zero_f(VOf(Bf1));
    __hv_gt_f(VIf(Bf13), VIf(Bf1), VOf(Bf1));
    __hv_sqrt_f(VIf(Bf13), VOf(Bf13));
    __hv_and_f(VIf(Bf1), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_cpole_f(&sCPole_Iw2D21Ek, VIf(Bf18), VIf(ZERO), VIf(Bf17), VIf(Bf13), VOf(Bf13), VOf(Bf17));
    __hv_line_f(&sLine_McXK7tec, VOf(Bf17));
    __hv_mul_f(VIf(Bf13), VIf(Bf17), VOf(Bf17));
    __hv_varread_f(&sVarf_dsBjunz9, VOf(Bf13));
    __hv_mul_f(VIf(Bf17), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_Uo4XXzwN, VOf(Bf18));
    __hv_mul_f(VIf(Bf17), VIf(Bf18), VOf(Bf18));
    __hv_add_f(VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_9aL8c52W, VOf(Bf12));
    __hv_mul_f(VIf(Bf13), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_Cx9aVgen, VOf(Bf13));
    __hv_rpole_f(&sRPole_jLUBGqQ5, VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf13), VIf(O0), VOf(O0));
    __hv_add_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_add_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_add_f(VIf(Bf11), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf14), VIf(Bf15), VOf(Bf15));
    __hv_add_f(VIf(Bf15), VIf(Bf16), VOf(Bf16));
    __hv_add_f(VIf(Bf16), VIf(Bf18), VOf(Bf18));
    __hv_varread_f(&sVarf_o0qUCsxF, VOf(Bf16));
    __hv_mul_f(VIf(Bf18), VIf(Bf16), VOf(Bf16));
    __hv_varread_f(&sVarf_CJZKkqCl, VOf(Bf18));
    __hv_rpole_f(&sRPole_c83NNsWh, VIf(Bf16), VIf(Bf18), VOf(Bf18));
    __hv_add_f(VIf(Bf18), VIf(O1), VOf(O1));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed
}

int Heavy_Ambient::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 0 channel(s)
  float **const bIn = NULL;

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_Ambient::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 0 channel(s), uninterleave
  float *const bIn = NULL;

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
