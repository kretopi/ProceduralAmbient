/** Piotr Goj, kretopi@gmail.com */

#include "Heavy_heavy.hpp"

#define Context(_c) reinterpret_cast<Heavy_heavy *>(_c)



/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_heavy_new(double sampleRate) {
    return new Heavy_heavy(sampleRate);
  }

  HV_EXPORT HeavyContextInterface *hv_heavy_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    return new Heavy_heavy(sampleRate, poolKb, inQueueKb, outQueueKb);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_heavy::Heavy_heavy(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sLine_init(&sLine_vxDfmjiL);
  numBytes += sCPole_init(&sCPole_GUKmlawJ);
  numBytes += sLine_init(&sLine_qwmLpZev);
  numBytes += sLine_init(&sLine_0B3MOPzB);
  numBytes += sCPole_init(&sCPole_f4kDS064);
  numBytes += sLine_init(&sLine_AnWOv4yQ);
  numBytes += sLine_init(&sLine_AX39aKCk);
  numBytes += sCPole_init(&sCPole_n7cQAPZz);
  numBytes += sLine_init(&sLine_4fGW4Rl4);
  numBytes += sLine_init(&sLine_oEshT29S);
  numBytes += sCPole_init(&sCPole_juTBbSj6);
  numBytes += sLine_init(&sLine_WEN7GM0y);
  numBytes += sLine_init(&sLine_pKrefeJi);
  numBytes += sCPole_init(&sCPole_y7EeGfVt);
  numBytes += sLine_init(&sLine_6zh5HxuE);
  numBytes += sLine_init(&sLine_3mmqNi7X);
  numBytes += sCPole_init(&sCPole_pt8QzB2O);
  numBytes += sLine_init(&sLine_0K2pCB1X);
  numBytes += sLine_init(&sLine_SMMeBA2A);
  numBytes += sCPole_init(&sCPole_cHoH0p2s);
  numBytes += sLine_init(&sLine_YSjfGNsu);
  numBytes += sLine_init(&sLine_kcSVG95E);
  numBytes += sCPole_init(&sCPole_n86J4fnh);
  numBytes += sLine_init(&sLine_5tLEpWSd);
  numBytes += sLine_init(&sLine_Rhge9GwQ);
  numBytes += sCPole_init(&sCPole_cJnpVIJy);
  numBytes += sLine_init(&sLine_2xs1wZui);
  numBytes += sLine_init(&sLine_IwEzDoxB);
  numBytes += sCPole_init(&sCPole_bzWumf6W);
  numBytes += sLine_init(&sLine_qzAqjKPx);
  numBytes += sLine_init(&sLine_6LfLABwQ);
  numBytes += sCPole_init(&sCPole_yumcIxOY);
  numBytes += sLine_init(&sLine_RSndFE1H);
  numBytes += sLine_init(&sLine_kgyXBK2D);
  numBytes += sCPole_init(&sCPole_7II1UahA);
  numBytes += sLine_init(&sLine_Rw8c7dNR);
  numBytes += sLine_init(&sLine_E9WKDnsk);
  numBytes += sCPole_init(&sCPole_D50xhxj1);
  numBytes += sLine_init(&sLine_KEXb0VGf);
  numBytes += sLine_init(&sLine_BN1zJNh8);
  numBytes += sCPole_init(&sCPole_a0kQKkit);
  numBytes += sLine_init(&sLine_IDZqqBZE);
  numBytes += sRPole_init(&sRPole_CGLC79PG);
  numBytes += sRPole_init(&sRPole_ZJRYaauW);
  numBytes += cVar_init_f(&cVar_gih00mYS, 0.0f);
  numBytes += sVarf_init(&sVarf_BWLNRfXp, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_sKBh3qN9, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_qsUFEFeQ, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_w1NqA2zF, 22050.0f);
  numBytes += cDelay_init(this, &cDelay_2KNEbnuW, 0.0f);
  numBytes += cVar_init_f(&cVar_juThJizj, 50.0f);
  numBytes += cBinop_init(&cBinop_bp6Tc7xC, 0.0f); // __mul
  numBytes += cRandom_init(&cRandom_bOrmmHHE, -1300283171);
  numBytes += cSlice_init(&cSlice_Mu9Hsoxg, 1, 1);
  numBytes += sVarf_init(&sVarf_BVzQQ1BJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_C1rLuKdQ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_BVC2D0Fi, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NopE8FZx, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_nEG0E7XF, false);
  numBytes += cVar_init_f(&cVar_wDOCUerd, 250.0f);
  numBytes += cPack_init(&cPack_WA5BBDtx, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_ch1Socny, 2, 0.0f, 0.0f);
  numBytes += cVar_init_f(&cVar_VebJzLmX, 0.0f);
  numBytes += cBinop_init(&cBinop_xlHpULrs, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_6oV4FEFr, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_j1IzKDMn, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_W8QgbbVJ, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_F8klojwE, 0.0f);
  numBytes += cVar_init_f(&cVar_09tVJJTD, 0.0f);
  numBytes += cBinop_init(&cBinop_q5Lh5HdP, 0.0f); // __sub
  numBytes += cDelay_init(this, &cDelay_TkmjWvPT, 0.0f);
  numBytes += cVar_init_f(&cVar_aJimzjZ7, 20.0f);
  numBytes += cBinop_init(&cBinop_oR42LbCA, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_hAxFrpBk, 0.0f);
  numBytes += cBinop_init(&cBinop_NMi1BcXK, 0.0f); // __add
  numBytes += cSlice_init(&cSlice_nTaRmC7u, 1, -1);
  numBytes += cSlice_init(&cSlice_hntULWDq, 1, -1);
  numBytes += cVar_init_f(&cVar_Jx3p32iD, 0.0f);
  numBytes += cVar_init_f(&cVar_IqJMliuY, 20.0f);
  numBytes += cSlice_init(&cSlice_XSc05EZ1, 0, 1);
  numBytes += cSlice_init(&cSlice_CS9jQSlo, 1, 1);
  numBytes += cBinop_init(&cBinop_2TN1hfK0, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8YoxGEit, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_QeTtGNfP, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_DSB1exGO, 1, 1);
  numBytes += cRandom_init(&cRandom_HJ6OLnyB, -1646164160);
  numBytes += sVarf_init(&sVarf_9LKgfK2u, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_LUZvJ5eB, 0.0f); // __sub
  numBytes += cDelay_init(this, &cDelay_TouZjJHQ, 0.0f);
  numBytes += cBinop_init(&cBinop_LVmJCTdg, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_StlAwrxQ, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_ZEiPBvDv, 0.0f); // __sub
  numBytes += cSlice_init(&cSlice_gSTj67sP, 1, 1);
  numBytes += cRandom_init(&cRandom_MZcUEECi, 1413465390);
  numBytes += sVarf_init(&sVarf_qY5ykWXD, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_pnZM9ddr, 2, 0.0f, 0.0f);
  numBytes += cVar_init_f(&cVar_p6jYtLQL, 0.0f);
  numBytes += cSlice_init(&cSlice_PEAktDU9, 1, 1);
  numBytes += cRandom_init(&cRandom_Cjz2my55, -1872977237);
  numBytes += sVarf_init(&sVarf_vxqyti7e, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_GaoUP485, 0.0f);
  numBytes += sVarf_init(&sVarf_gcOCyLEW, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_Fv9S9he1, 0.0f); // __sub
  numBytes += cRandom_init(&cRandom_MKWnsBrL, -1249126414);
  numBytes += cSlice_init(&cSlice_mnD0lykW, 1, 1);
  numBytes += cBinop_init(&cBinop_Y9pd9TSH, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_o3Ljk3xX, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_XErhedUs, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_SuorAx0e, 0.0f);
  numBytes += cVar_init_f(&cVar_iwh5bKpD, 0.0f);
  numBytes += cSlice_init(&cSlice_g3SpGRKR, 1, -1);
  numBytes += cSlice_init(&cSlice_0SarOGL2, 1, -1);
  numBytes += cBinop_init(&cBinop_rYq3sX1l, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_ZsDmhRR9, 20.0f);
  numBytes += cVar_init_f(&cVar_TNQi6Hqk, 0.0f);
  numBytes += cBinop_init(&cBinop_Sqi1U0Hf, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_ZikN2o7H, 0, 1);
  numBytes += cSlice_init(&cSlice_0otIA9Ev, 1, 1);
  numBytes += cBinop_init(&cBinop_j3WhSjVj, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_Q3wjRkNe, 0.0f);
  numBytes += cBinop_init(&cBinop_W3yINB8u, 20.0f); // __div
  numBytes += cVar_init_f(&cVar_htYZonhY, 0.0f);
  numBytes += cBinop_init(&cBinop_C9LPjYEc, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_s4eWvdhc, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_3lpaEbqN, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_fBJAw45H, 20.0f);
  numBytes += cDelay_init(this, &cDelay_tXtQ9ltk, 0.0f);
  numBytes += cBinop_init(&cBinop_P4kfnKAu, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_Ojg63byd, 0.0f); // __sub
  numBytes += cPack_init(&cPack_kibukw5c, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_W1nrOt9V, 1188615337);
  numBytes += cSlice_init(&cSlice_IpNDzZXM, 1, 1);
  numBytes += cBinop_init(&cBinop_7kuuSj4F, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_BxiqYeXL, 1, 1);
  numBytes += cRandom_init(&cRandom_e0zKXRCh, -1398077613);
  numBytes += cDelay_init(this, &cDelay_tY1taPal, 0.0f);
  numBytes += cVar_init_f(&cVar_2v4bJZdI, 50.0f);
  numBytes += cBinop_init(&cBinop_uzNtN0sV, 0.0f); // __mul
  numBytes += cIf_init(&cIf_uYyxy3fy, false);
  numBytes += sVarf_init(&sVarf_L0eLxqJA, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ix3AAsE4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NAE5m0bF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0zxaz0kF, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ueJm0PxM, 250.0f);
  numBytes += cRandom_init(&cRandom_bzq8ngHL, 1858664208);
  numBytes += cSlice_init(&cSlice_Ii1t9uTq, 1, 1);
  numBytes += cVar_init_f(&cVar_1jJhYuEe, 0.0f);
  numBytes += cPack_init(&cPack_TY3k69Fu, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_ygZ1lC6h, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_C5D8CRZk, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_tOQiltmR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TrCd14Ta, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ZYeR0pdJ, 250.0f);
  numBytes += cIf_init(&cIf_oJgfcROz, false);
  numBytes += sVarf_init(&sVarf_eH3joDva, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_keylgRvG, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_Yod2iFR0, 1162954271);
  numBytes += cSlice_init(&cSlice_6QZjat3r, 1, 1);
  numBytes += cSlice_init(&cSlice_kisDrzLI, 1, 1);
  numBytes += cRandom_init(&cRandom_sTmOYWGx, -1568658811);
  numBytes += cPack_init(&cPack_kAhU9N0R, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_5YAojeTB, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_gdueiOU2, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_BsKF74OW, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_jtGuxkJ9, 0.0f);
  numBytes += cSlice_init(&cSlice_PYmk0WRk, 1, -1);
  numBytes += cSlice_init(&cSlice_UFniFl9f, 1, -1);
  numBytes += cVar_init_f(&cVar_LUL5eHrW, 20.0f);
  numBytes += cBinop_init(&cBinop_ORz6E0PQ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ZBQHAAHP, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_8o1WCYh9, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_3rqlyCRS, 0.0f);
  numBytes += cVar_init_f(&cVar_bIpTtQjA, 20.0f);
  numBytes += cVar_init_f(&cVar_V0CumtcB, 0.0f);
  numBytes += cBinop_init(&cBinop_GcOhLTKl, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_ElPMae08, 0.0f);
  numBytes += cVar_init_f(&cVar_FNlnYqLK, 0.0f);
  numBytes += cSlice_init(&cSlice_x4S5AiQh, 0, 1);
  numBytes += cSlice_init(&cSlice_cIWytnoj, 1, 1);
  numBytes += cBinop_init(&cBinop_mOhPJhZP, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_JzbLtFCF, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_BMuelKr4, 0.0f);
  numBytes += cBinop_init(&cBinop_RlTFzIp6, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_5LOzwlSL, 1, 1);
  numBytes += cRandom_init(&cRandom_Y3EJa0kH, -1614117251);
  numBytes += sVarf_init(&sVarf_aHemxl1r, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_BOxzA5dp, 0.0f); // __sub
  numBytes += cRandom_init(&cRandom_ViB4JZS4, -1773937705);
  numBytes += cSlice_init(&cSlice_ZKhS926Y, 1, 1);
  numBytes += cPack_init(&cPack_WjlGm9Rx, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_ibnCoyvZ, 0.0f);
  numBytes += cBinop_init(&cBinop_U4Otck4a, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_NLskUsnD, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_q3WRsYFk, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_sA9sve28, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_oW3h7CW3, 0.0f);
  numBytes += cBinop_init(&cBinop_XrGiiRUK, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_ZEz8RaYe, 0.0f);
  numBytes += cVar_init_f(&cVar_6TcJ2DHk, 50.0f);
  numBytes += cSlice_init(&cSlice_vGC2aguW, 1, 1);
  numBytes += cRandom_init(&cRandom_D8KlX458, 206405820);
  numBytes += sVari_init(&sVari_QIpzESlI, 0, 0, false);
  numBytes += cPack_init(&cPack_AOo1ERhF, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_u3gJ9b0Z, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Gly6QayS, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_7eb2eFv4, false);
  numBytes += sVarf_init(&sVarf_l9CsvHDh, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_qA2FrPzB, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_tyrntw7r, 250.0f);
  numBytes += cVar_init_f(&cVar_Mo1Uu27O, 50.0f);
  numBytes += cDelay_init(this, &cDelay_2YQAj7ho, 0.0f);
  numBytes += cBinop_init(&cBinop_rMCao4aO, 0.0f); // __mul
  numBytes += cPack_init(&cPack_lpXbRZCa, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_r9Or8uRc, -668624083);
  numBytes += cSlice_init(&cSlice_ZNNjHzdX, 1, 1);
  numBytes += cSlice_init(&cSlice_DNjPmuVt, 1, 1);
  numBytes += cRandom_init(&cRandom_zcSXQ5t8, 1044637335);
  numBytes += cBinop_init(&cBinop_GHoDc4ML, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_CZInpdc0, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_zQ0jcWar, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_gINbVd4c, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_c6UQ9NRw, 0.0f);
  numBytes += cSlice_init(&cSlice_GdCMjxiH, 1, 1);
  numBytes += cRandom_init(&cRandom_gJ47CLjE, -1180262464);
  numBytes += cBinop_init(&cBinop_g0dNUC0D, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Z3o06zLu, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_isn22hOs, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_nHbpruPK, 0.0f);
  numBytes += cVar_init_f(&cVar_wTDeKp4R, 0.0f);
  numBytes += cBinop_init(&cBinop_7c2Dh8iO, 0.0f); // __div
  numBytes += cSlice_init(&cSlice_uMnoeakA, 1, 1);
  numBytes += cSlice_init(&cSlice_Q9mv0hXM, 0, 1);
  numBytes += cVar_init_f(&cVar_uuWNfWFE, 0.0f);
  numBytes += cVar_init_f(&cVar_mLYb0TUO, 0.0f);
  numBytes += cVar_init_f(&cVar_yAlTSHDA, 0.0f);
  numBytes += cSlice_init(&cSlice_itYYs6cN, 1, -1);
  numBytes += cSlice_init(&cSlice_tTMJ3spe, 1, -1);
  numBytes += cBinop_init(&cBinop_1HksNi0J, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_XNBOQQrI, 20.0f);
  numBytes += cBinop_init(&cBinop_2XO6qiaQ, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_T5n0UNf5, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_ojtvEUmC, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_XK8XSidg, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_luqGa9ck, 0.0f);
  numBytes += cVar_init_f(&cVar_KPVqSDrx, 20.0f);
  numBytes += cBinop_init(&cBinop_sZ3lR3ZR, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_FQY0y3oh, 0.0f); // __sub
  numBytes += cPack_init(&cPack_93LLaSdV, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_A6b2Sso1, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_mCcDKAlu, 1, 1);
  numBytes += cRandom_init(&cRandom_2YQH1abY, 1264927828);
  numBytes += cVar_init_f(&cVar_3GtumH4L, 0.0f);
  numBytes += cPack_init(&cPack_9vSQJtms, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_iu3xsT4S, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Uh9GcIJe, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_95GzF5Xl, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_QBUsoV8W, false);
  numBytes += cVar_init_f(&cVar_iT2t835o, 250.0f);
  numBytes += sVarf_init(&sVarf_f0B3ReIc, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_BFYENMgk, 1, 1);
  numBytes += cRandom_init(&cRandom_WNnt4qMJ, 1677320358);
  numBytes += cDelay_init(this, &cDelay_L9Czz1eo, 0.0f);
  numBytes += cVar_init_f(&cVar_ToqqvItq, 50.0f);
  numBytes += cBinop_init(&cBinop_luea0Gzz, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_TdpwZeXU, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_qZ7236nD, 0.0f);
  numBytes += cBinop_init(&cBinop_jpWkVBlk, 0.0f); // __sub
  numBytes += cRandom_init(&cRandom_gk01XbfQ, 887489563);
  numBytes += cSlice_init(&cSlice_31NjyB4Y, 1, 1);
  numBytes += cBinop_init(&cBinop_e8Ag5jEg, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_mlcpNwQZ, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_y63waLUL, 0.0f); // __sub
  numBytes += cPack_init(&cPack_IKOvmY36, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_BMnwgAsg, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_92I1hIvb, 1, 1);
  numBytes += cSlice_init(&cSlice_MSuL0ZGU, 0, 1);
  numBytes += cBinop_init(&cBinop_NAHyizkq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_k0grVD3N, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_Gw55y4Fc, 0.0f);
  numBytes += cBinop_init(&cBinop_dMB4FJPP, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_4CacS2Ec, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_uOZE7OrH, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_dtF0jG8K, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_40vZXOpx, 20.0f);
  numBytes += cDelay_init(this, &cDelay_th1k1NBc, 0.0f);
  numBytes += cBinop_init(&cBinop_gXNaSLup, 20.0f); // __div
  numBytes += cSlice_init(&cSlice_Gk6OUz7v, 1, -1);
  numBytes += cSlice_init(&cSlice_XBhR5f50, 1, -1);
  numBytes += cVar_init_f(&cVar_LoT7FDs7, 20.0f);
  numBytes += cBinop_init(&cBinop_YBqDS4Lx, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_W9yZUo8c, 0.0f);
  numBytes += cVar_init_f(&cVar_5teJ7X4Q, 0.0f);
  numBytes += cBinop_init(&cBinop_BXYVgyJV, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_Sx05gSNX, 0.0f);
  numBytes += cVar_init_f(&cVar_hrPk6nyU, 0.0f);
  numBytes += cSlice_init(&cSlice_BnYqOv2A, 1, 1);
  numBytes += cRandom_init(&cRandom_cPwyKfTj, -946047528);
  numBytes += cBinop_init(&cBinop_pJzIYXi9, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_XIokrYh3, 0.0f);
  numBytes += cRandom_init(&cRandom_KHRYXNJl, -505666858);
  numBytes += cSlice_init(&cSlice_UDj0tno5, 1, 1);
  numBytes += cPack_init(&cPack_AOWGcBCC, 2, 0.0f, 0.0f);
  numBytes += cVar_init_f(&cVar_UBUOtI05, 0.0f);
  numBytes += cDelay_init(this, &cDelay_057rEUI6, 0.0f);
  numBytes += cVar_init_f(&cVar_TP3gCcDH, 50.0f);
  numBytes += cBinop_init(&cBinop_hMfKRthP, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_ESxstSQX, 1, 1);
  numBytes += cRandom_init(&cRandom_f16juTgT, 1083043684);
  numBytes += cRandom_init(&cRandom_OWQ4mqXn, 1682111134);
  numBytes += cSlice_init(&cSlice_Jvy9HSef, 1, 1);
  numBytes += cIf_init(&cIf_UxjXABF7, false);
  numBytes += sVarf_init(&sVarf_t7ggMKPE, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0SUSkOQl, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_A990utt2, 250.0f);
  numBytes += sVarf_init(&sVarf_h4talzz4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0m1s7dO5, 0.0f, 0.0f, false);
  numBytes += cRandom_init(&cRandom_y4psLRNl, 1391956857);
  numBytes += cSlice_init(&cSlice_Uy8WX7bn, 1, 1);
  numBytes += sVarf_init(&sVarf_rorfebhF, 0.0f, 0.0f, false);
  numBytes += cRandom_init(&cRandom_9BaPHUBF, -1116497402);
  numBytes += cSlice_init(&cSlice_srbysstH, 1, 1);
  numBytes += cBinop_init(&cBinop_ROZroCVV, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_t8uE8FOw, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Kg2leKrK, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_VQadqmSn, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_GVAXAezU, 0.0f);
  numBytes += cBinop_init(&cBinop_1fAl8WHm, 0.0f); // __mul
  numBytes += cPack_init(&cPack_B0rkmRVG, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_b5iQuNIK, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_ZzlznRXW, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_O4D193EG, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_Nmv7GBnU, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_iYKNH5wS, 20.0f);
  numBytes += cDelay_init(this, &cDelay_tKSdaq5N, 0.0f);
  numBytes += cSlice_init(&cSlice_ELxH4pEv, 1, -1);
  numBytes += cSlice_init(&cSlice_V1dfT6Wh, 1, -1);
  numBytes += cBinop_init(&cBinop_l3TtgmbD, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_2aLjO4nq, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_i7VyKPWk, 0.0f);
  numBytes += cVar_init_f(&cVar_0exPN7QV, 0.0f);
  numBytes += cVar_init_f(&cVar_3tUX1U4J, 20.0f);
  numBytes += cBinop_init(&cBinop_D7JdioQ3, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_v2Q9ExEc, 0.0f);
  numBytes += cVar_init_f(&cVar_FxHr0MEO, 0.0f);
  numBytes += cBinop_init(&cBinop_oxD6yaYU, 0.0f); // __sub
  numBytes += cSlice_init(&cSlice_EexhwUND, 1, 1);
  numBytes += cSlice_init(&cSlice_y0wwrE7u, 0, 1);
  numBytes += cBinop_init(&cBinop_yUNsMAmj, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_sR6x5qo9, 20.0f); // __div
  numBytes += cVar_init_f(&cVar_8dZKI8Gt, 0.0f);
  numBytes += cPack_init(&cPack_ADTUgheK, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_QAuBCPaM, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_qcAvFkPe, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_kitLneyp, 1, 1);
  numBytes += cRandom_init(&cRandom_NN4ReOkQ, 63826456);
  numBytes += sVarf_init(&sVarf_f4vGGg5x, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_yURZWVMK, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_TfWOym0z, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_5SQKJ6l8, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_tHTIEw1n, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_D9EwG3vB, 0.0f);
  numBytes += cVar_init_f(&cVar_vhrmJiUc, 0.0f);
  numBytes += cVar_init_f(&cVar_OO5b4LSF, 0.0f);
  numBytes += cBinop_init(&cBinop_zH2Jbvi8, 20.0f); // __div
  numBytes += cVar_init_f(&cVar_Ya3NQqL3, 0.0f);
  numBytes += cBinop_init(&cBinop_YqqJ2ooY, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_J3MvteW9, 0.0f); // __sub
  numBytes += cDelay_init(this, &cDelay_tN8g3REK, 0.0f);
  numBytes += cBinop_init(&cBinop_lr7iXDcm, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_amzxf86K, 20.0f);
  numBytes += cVar_init_f(&cVar_4PesrvYz, 20.0f);
  numBytes += cSlice_init(&cSlice_TMOeZOYQ, 0, 1);
  numBytes += cSlice_init(&cSlice_G4HtrsWS, 1, 1);
  numBytes += cSlice_init(&cSlice_lInhgNo2, 1, -1);
  numBytes += cSlice_init(&cSlice_hnk9fRPn, 1, -1);
  numBytes += cBinop_init(&cBinop_LHvYMUgs, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_Zy93LhtT, 0.0f);
  numBytes += cBinop_init(&cBinop_dKPcLICG, 0.0f); // __add
  numBytes += cDelay_init(this, &cDelay_iVcF8MUo, 0.0f);
  numBytes += cBinop_init(&cBinop_g5wCpsES, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_RXlMzesw, 0.0f); // __sub
  numBytes += cRandom_init(&cRandom_nGFBlMKh, 1858910006);
  numBytes += cSlice_init(&cSlice_ikv9N71j, 1, 1);
  numBytes += cBinop_init(&cBinop_ubqtmJiQ, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_7Ek5QF06, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_tuA6vVUL, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_4lZpqQ73, 0.0f);
  numBytes += cSlice_init(&cSlice_gQEoqnoB, 1, 1);
  numBytes += cRandom_init(&cRandom_nG8yjCr4, -1901917170);
  numBytes += cPack_init(&cPack_KdgyWQgH, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_lyXFb7qc, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_NAlKA9VC, false);
  numBytes += sVarf_init(&sVarf_tXoplabO, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_DakiSnsO, 250.0f);
  numBytes += sVarf_init(&sVarf_YoGned8v, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NEuKdUEI, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ecwi65FG, 50.0f);
  numBytes += cBinop_init(&cBinop_xwwdmxU4, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_d2D0u6JA, 0.0f);
  numBytes += cPack_init(&cPack_dKHLYSms, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_bu9LkiF5, -1455193972);
  numBytes += cSlice_init(&cSlice_tJFXdJKS, 1, 1);
  numBytes += cVar_init_f(&cVar_oZ9frJes, 0.0f);
  numBytes += cIf_init(&cIf_obr8Ygg7, false);
  numBytes += sVarf_init(&sVarf_zh0VHVEI, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_mYw6UkLU, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_tjN5QAKy, 250.0f);
  numBytes += sVarf_init(&sVarf_xZPoQcQ5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NcN9HxDg, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_XQjzzGUf, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_gJhua2KZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3dpYVgVG, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_0ZC6qD6I, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_gPkGFC06, 0.0f);
  numBytes += cBinop_init(&cBinop_L0PVraGN, 0.0f); // __add
  numBytes += cDelay_init(this, &cDelay_IAUVOJJg, 0.0f);
  numBytes += cBinop_init(&cBinop_DvhdONor, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_FTnV3t4r, 20.0f);
  numBytes += cVar_init_f(&cVar_8Bl9gR6f, 20.0f);
  numBytes += cSlice_init(&cSlice_ERQI0yTB, 1, -1);
  numBytes += cSlice_init(&cSlice_01G4Rtzi, 1, -1);
  numBytes += cBinop_init(&cBinop_9IX8OmFZ, 20.0f); // __div
  numBytes += cVar_init_f(&cVar_8alwnYL7, 0.0f);
  numBytes += cBinop_init(&cBinop_OtHd8MtM, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_HfBvWq3H, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_Mq6VAOjq, 0.0f);
  numBytes += cVar_init_f(&cVar_wYMCepuj, 0.0f);
  numBytes += cSlice_init(&cSlice_CE1Arkqd, 1, 1);
  numBytes += cSlice_init(&cSlice_fDeMJuSM, 0, 1);
  numBytes += cBinop_init(&cBinop_cuqX5JEp, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_jI1l5Psh, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_F2dVutyA, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_YC6yC1ig, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_BAEFLpbx, 0.0f);
  numBytes += cRandom_init(&cRandom_J3X2Kmdb, 1183814745);
  numBytes += cSlice_init(&cSlice_HzHrIae5, 1, 1);
  numBytes += cRandom_init(&cRandom_PpShUtt9, 2127861640);
  numBytes += cSlice_init(&cSlice_sYfaxlqs, 1, 1);
  numBytes += cBinop_init(&cBinop_IkVv6xde, 0.0f); // __sub
  numBytes += cPack_init(&cPack_q4Gg3hjo, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_gPEUOeHY, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_MnRzC0U3, 0.0f);
  numBytes += cBinop_init(&cBinop_g1YtYiVI, 0.0f); // __mul
  numBytes += cPack_init(&cPack_24KSVUfk, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_64kH2RW6, -1171156977);
  numBytes += cSlice_init(&cSlice_X7nhHSqv, 1, 1);
  numBytes += cVar_init_f(&cVar_ouuiTvBc, 50.0f);
  numBytes += cDelay_init(this, &cDelay_nkto4b3I, 0.0f);
  numBytes += cBinop_init(&cBinop_P1H0NL9K, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_hPTUge7J, 1, 1);
  numBytes += cRandom_init(&cRandom_1zJdtVGC, 1135078854);
  numBytes += cPack_init(&cPack_S1MAhq07, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_pbZrZyg3, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_41DHiBEr, 50.0f);
  numBytes += cDelay_init(this, &cDelay_SOhGicYK, 0.0f);
  numBytes += cPack_init(&cPack_zXx7fXnb, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_MY1m4lZP, -1641440516);
  numBytes += cSlice_init(&cSlice_RAWN7h9W, 1, 1);
  numBytes += cBinop_init(&cBinop_3pgn4tT1, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_CvhLjxNh, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_75PKJi3C, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_60y4QERS, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_IUICPiLu, 0.0f); // __add
  numBytes += cSlice_init(&cSlice_6ZRf9Nvs, 1, -1);
  numBytes += cSlice_init(&cSlice_T5AJIeH4, 1, -1);
  numBytes += cVar_init_f(&cVar_bgZDWWOT, 0.0f);
  numBytes += cVar_init_f(&cVar_njkapnji, 0.0f);
  numBytes += cVar_init_f(&cVar_Tq1x9TS3, 0.0f);
  numBytes += cSlice_init(&cSlice_5qbXa5qr, 0, 1);
  numBytes += cSlice_init(&cSlice_kQg0byy8, 1, 1);
  numBytes += cBinop_init(&cBinop_CvXWNfhp, 0.0f); // __add
  numBytes += cDelay_init(this, &cDelay_NbRf5FHy, 0.0f);
  numBytes += cBinop_init(&cBinop_J9fhQEHg, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_HKF97XFp, 20.0f);
  numBytes += cBinop_init(&cBinop_XNTGnPxo, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_x7G0rKFK, 20.0f);
  numBytes += cBinop_init(&cBinop_TZDLeZvI, 20.0f); // __div
  numBytes += cVar_init_f(&cVar_6ZgCzlGX, 0.0f);
  numBytes += cBinop_init(&cBinop_TXt4vfKi, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_N2pe9eWZ, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_izMX6LGd, 0.0f);
  numBytes += sVarf_init(&sVarf_CGUicVyr, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_dnAvmyKM, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_dArZNn9W, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_xzq3PSI2, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_MHU0dgB0, 0.0f); // __sub
  numBytes += cSlice_init(&cSlice_oh4Pk9qd, 1, 1);
  numBytes += cRandom_init(&cRandom_blmRi0Sv, -815030791);
  numBytes += cDelay_init(this, &cDelay_OH7ZN5SZ, 0.0f);
  numBytes += cBinop_init(&cBinop_mPUPZCIX, 0.0f); // __sub
  numBytes += cPack_init(&cPack_UhRx7f0i, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_qzAdA8wF, 1, 1);
  numBytes += cRandom_init(&cRandom_e3lnxPJ1, 1790256951);
  numBytes += cSlice_init(&cSlice_NIwXXv4j, 1, 1);
  numBytes += cRandom_init(&cRandom_FFnyORYI, 1607391870);
  numBytes += cVar_init_f(&cVar_dTgUowq5, 0.0f);
  numBytes += cVar_init_f(&cVar_FbjyMdka, 250.0f);
  numBytes += sVarf_init(&sVarf_4gav6I7Z, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_UQupxKN3, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_UGiApEtn, false);
  numBytes += sVarf_init(&sVarf_csNnFR4v, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_j4Zfg35u, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_n9s3ZPMG, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_i3Aq60pf, 723526818);
  numBytes += cSlice_init(&cSlice_YMJa3EYj, 1, 1);
  numBytes += cVar_init_f(&cVar_JabQ35Ar, 0.0f);
  numBytes += cBinop_init(&cBinop_WvkLAW1P, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_4gGNXjEa, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_TjqcLHml, 0.0f);
  numBytes += cVar_init_f(&cVar_HmSCYE0p, 20.0f);
  numBytes += cVar_init_f(&cVar_wTSTg6nt, 0.0f);
  numBytes += cBinop_init(&cBinop_rwbDieVo, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_frtDLgX1, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_82iVjUca, 0.0f);
  numBytes += cBinop_init(&cBinop_7YCUQBcQ, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_hpdlfvJ2, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_xxR4Jj7S, 20.0f);
  numBytes += cDelay_init(this, &cDelay_XtqKtXZ1, 0.0f);
  numBytes += cSlice_init(&cSlice_4GOJtqL9, 1, -1);
  numBytes += cSlice_init(&cSlice_GyausZ5t, 1, -1);
  numBytes += cSlice_init(&cSlice_0BTZujeT, 1, 1);
  numBytes += cSlice_init(&cSlice_1MhLLDwn, 0, 1);
  numBytes += cBinop_init(&cBinop_fXHeMIp6, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_N5Y8PQ9R, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_2bkvEzBo, 0.0f);
  numBytes += cBinop_init(&cBinop_ueXRym6l, 0.0f); // __add
  numBytes += cRandom_init(&cRandom_Jg87Wusw, 2064045528);
  numBytes += cSlice_init(&cSlice_dBStXpWm, 1, 1);
  numBytes += cBinop_init(&cBinop_mlvp0958, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_NC0EVVeB, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_mX81J8WX, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_w87ge5mq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_yKnEnAiB, 0.0f); // __sub
  numBytes += cDelay_init(this, &cDelay_J0nsWgFk, 0.0f);
  numBytes += cRandom_init(&cRandom_RjR698Pb, -1082356790);
  numBytes += cSlice_init(&cSlice_2ZBaYVqP, 1, 1);
  numBytes += sVarf_init(&sVarf_jmYUSlFq, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_tyVPjQOa, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_GTlKmyWk, 2, 0.0f, 0.0f);
  numBytes += cVar_init_f(&cVar_8Dicyhiv, 0.0f);
  numBytes += cPack_init(&cPack_0p5ijURg, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_sF3IZRqS, 1, 1);
  numBytes += cRandom_init(&cRandom_UB6xcPzO, -1772746851);
  numBytes += cDelay_init(this, &cDelay_rSYht5TY, 0.0f);
  numBytes += cVar_init_f(&cVar_YfccOgfu, 50.0f);
  numBytes += cBinop_init(&cBinop_nRPH26IJ, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_r6gcMkCC, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_pTmLsG9W, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_T4O6AaoU, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_tfWgaDVq, 250.0f);
  numBytes += cIf_init(&cIf_jMiw7nGn, false);
  numBytes += sVarf_init(&sVarf_MXAmaXjk, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_e4nueUZa, 250.0f);
  numBytes += sVarf_init(&sVarf_64JNwA7g, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_PMDBcCpI, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_PL6a22Uu, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_VQm9t5h7, false);
  numBytes += sVarf_init(&sVarf_zk1mAFqi, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_twA3NeGw, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_bR97e1Jf, 0.0f);
  numBytes += cBinop_init(&cBinop_XmVz1kon, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_VujnfuRZ, 1, 1);
  numBytes += cRandom_init(&cRandom_T8Ei8tlS, -745984555);
  numBytes += cBinop_init(&cBinop_FFFZhre2, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_g06e6UV7, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_IaEw6rTx, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_1dPHSBtZ, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_LBPfrXPh, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_8NtnavQU, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_KRiYg5QO, 0.0f);
  numBytes += cBinop_init(&cBinop_vsXf28u0, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_Nu8jPnfn, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_JdXFFt4s, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_IySJM3vd, 20.0f);
  numBytes += cBinop_init(&cBinop_egdYKDYP, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_TABqi10T, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_YbJ6D1hi, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_23fKiXWc, 20.0f);
  numBytes += cDelay_init(this, &cDelay_Kg2WxLMj, 0.0f);
  numBytes += cVar_init_f(&cVar_7d0qsn2O, 0.0f);
  numBytes += cVar_init_f(&cVar_IuS00Q2q, 0.0f);
  numBytes += cSlice_init(&cSlice_a5y9bLao, 1, 1);
  numBytes += cSlice_init(&cSlice_998GxLqY, 0, 1);
  numBytes += cVar_init_f(&cVar_YBkoaovt, 0.0f);
  numBytes += cBinop_init(&cBinop_0ncXR5SJ, 0.0f); // __div
  numBytes += cSlice_init(&cSlice_m6qLXdG0, 1, -1);
  numBytes += cSlice_init(&cSlice_vXb5RfIc, 1, -1);
  numBytes += cVar_init_f(&cVar_obWTlvyO, 0.0f);
  numBytes += cBinop_init(&cBinop_fEjbQsGG, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_I2msTVCd, 1, 1);
  numBytes += cRandom_init(&cRandom_7hPagzq7, 589195188);
  numBytes += cBinop_init(&cBinop_A3092htJ, 0.0f); // __sub
  numBytes += cPack_init(&cPack_ol0TUrlp, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_M0M6CdEJ, 2, 0.0f, 0.0f);
  numBytes += cVar_init_f(&cVar_ERbUh6Uq, 50.0f);
  numBytes += cDelay_init(this, &cDelay_4l2y4H5Z, 0.0f);
  numBytes += cBinop_init(&cBinop_tP5TIeXY, 0.0f); // __mul
  numBytes += cRandom_init(&cRandom_THeTdqe8, -730377926);
  numBytes += cSlice_init(&cSlice_VB8bt1KN, 1, 1);
  numBytes += cVar_init_f(&cVar_Z80PcUyX, 0.0f);
  numBytes += cRandom_init(&cRandom_iDvynKSB, -1340717880);
  numBytes += cSlice_init(&cSlice_ZaWrFkep, 1, 1);
  numBytes += cSlice_init(&cSlice_hhxunlm5, 1, 1);
  numBytes += cRandom_init(&cRandom_NLpnnHHs, 604949181);
  numBytes += sVarf_init(&sVarf_Wv3BZNAe, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0bHchgfX, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_E9ewRqCz, 250.0f);
  numBytes += sVarf_init(&sVarf_iEk0hrXf, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_4chvd7Of, false);
  numBytes += sVarf_init(&sVarf_xAFzs9Yf, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_9mllmOwf, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_BuzcK9mI, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_P5w4B0wR, 0.0f);
  numBytes += cBinop_init(&cBinop_6gpXaUBe, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_9tVHY68K, 50.0f);
  numBytes += cRandom_init(&cRandom_wcJT9wrm, -82174682);
  numBytes += cSlice_init(&cSlice_205ODXnK, 1, 1);
  numBytes += cRandom_init(&cRandom_QCjO0AxH, -2014749694);
  numBytes += cSlice_init(&cSlice_v3t0PWo7, 1, 1);
  numBytes += cBinop_init(&cBinop_hO9ye8Gw, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_kQrkPrSs, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rW592bKb, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_shN53ROV, 0.0f); // __mul
  numBytes += cPack_init(&cPack_h4vD2x5k, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_XEeuU1Wt, 20.0f); // __div
  numBytes += cBinop_init(&cBinop_gIaM9adl, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_O2r8zOzD, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_rfkyHnDY, 0.0f);
  numBytes += cVar_init_f(&cVar_HhmnR1Xe, 20.0f);
  numBytes += cBinop_init(&cBinop_5QsEdP1N, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_6QVKvfIB, 0.0f);
  numBytes += cBinop_init(&cBinop_FXSwFdNo, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_RQKBFnJA, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_VBXAEooS, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_nNqQh30f, 20.0f);
  numBytes += cBinop_init(&cBinop_0Bodbf5E, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_KETMV0UJ, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_IeZ4628n, 0.0f);
  numBytes += cSlice_init(&cSlice_hBqaWdJB, 1, -1);
  numBytes += cSlice_init(&cSlice_oHpRlO0K, 1, -1);
  numBytes += cVar_init_f(&cVar_z1FdusYN, 0.0f);
  numBytes += cSlice_init(&cSlice_G6M8neFe, 1, 1);
  numBytes += cSlice_init(&cSlice_epLCCY2T, 0, 1);
  numBytes += cVar_init_f(&cVar_HWRdaPUs, 0.0f);
  numBytes += cVar_init_f(&cVar_28hprGs3, 0.0f);
  numBytes += cBinop_init(&cBinop_5LBb5flg, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_5WnlaNQ4, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Sa4xJkJC, 0.0f); // __sub
  numBytes += cRandom_init(&cRandom_k7t2XW29, -2076067590);
  numBytes += cSlice_init(&cSlice_gQMSeMgh, 1, 1);
  numBytes += cDelay_init(this, &cDelay_FIV6t440, 0.0f);
  numBytes += cVar_init_f(&cVar_4d6fS4pj, 0.0f);
  numBytes += cVar_init_f(&cVar_TwdazLLj, 1.0f);
  numBytes += cPack_init(&cPack_hV1mYNWY, 2, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_X5PL2wak, 2, 0.0f, 0.0f);
  numBytes += cVar_init_f(&cVar_Mvvwx3V5, 0.0f);
  numBytes += cDelay_init(this, &cDelay_3aXrlECM, 0.0f);
  numBytes += cBinop_init(&cBinop_fJbYhE9i, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_tIVfSkKL, 50.0f);
  numBytes += cIf_init(&cIf_HYZURUKo, false);
  numBytes += cVar_init_f(&cVar_Fl0l3xv1, 250.0f);
  numBytes += sVarf_init(&sVarf_GsNE0agh, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3HWJfBDx, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2yM7bBKM, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GTKGR5Pq, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_FInaqSQv, 1, 1);
  numBytes += cRandom_init(&cRandom_gOVaLOpT, -1631684854);
  numBytes += sVarf_init(&sVarf_b0P7pG6A, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_MIexrRww, 0.0f);
  numBytes += cBinop_init(&cBinop_FenNQKaA, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_GoaqM1Ns, 20.0f);
  numBytes += cBinop_init(&cBinop_fwaeaVnH, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_BEnCDO2P, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_RqoSRkPB, 0.0f);
  numBytes += cBinop_init(&cBinop_Q2ifpWln, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_67LjuLo9, 20.0f);
  numBytes += cBinop_init(&cBinop_7BPHKOZA, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_8dhc4Ovf, 0.0f);
  numBytes += cBinop_init(&cBinop_HhdGicYW, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_7LjfCa6k, 0.0f); // __add
  numBytes += cSlice_init(&cSlice_l5j27xRk, 1, -1);
  numBytes += cSlice_init(&cSlice_UyqEButa, 1, -1);
  numBytes += cSlice_init(&cSlice_yGwtzLsC, 0, 1);
  numBytes += cSlice_init(&cSlice_dAdfPZLF, 1, 1);
  numBytes += cBinop_init(&cBinop_cVxpSTwm, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_qGagBc66, 20.0f); // __div
  numBytes += cVar_init_f(&cVar_CUKB2qKq, 0.0f);
  numBytes += cVar_init_f(&cVar_jddYC33p, 0.0f);
  numBytes += cVar_init_f(&cVar_kqiplAXU, 0.0f);
  numBytes += cRandom_init(&cRandom_ecBbRBZl, 2130001172);
  numBytes += cSlice_init(&cSlice_2UZwrsU0, 1, 1);
  numBytes += cBinop_init(&cBinop_Cc6vN3rn, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_MPjPRDnY, 0.0f); // __sub
  numBytes += cDelay_init(this, &cDelay_JyfCjvjG, 0.0f);
  numBytes += cPack_init(&cPack_7kBDOEuR, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_0CNkPmw6, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_0RUMmoE8, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_DoRJ4pD2, 0.0f); // __sub
  numBytes += cRandom_init(&cRandom_IDcYfOAG, 61984206);
  numBytes += cSlice_init(&cSlice_5VStTkmk, 1, 1);
  numBytes += cBinop_init(&cBinop_RKGaoH2d, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_3JqHJDxR, 1, 1);
  numBytes += cRandom_init(&cRandom_kLkOAlEd, -1189202894);
  numBytes += cBinop_init(&cBinop_kmz8URc5, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_3WePka5C, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_JC3CdxHC, 22050.0f);
  numBytes += sVarf_init(&sVarf_flrrpaiI, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_9XdINrpB, 0.0f);
  numBytes += cPack_init(&cPack_fqOasbKM, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_Ql5mavjT, 0.0f);
  numBytes += cBinop_init(&cBinop_6y5E2YSh, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_sNC2MGZG, 1, 1);
  numBytes += cRandom_init(&cRandom_RwbHz041, -1279245202);
  numBytes += cPack_init(&cPack_pOP4839x, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_J6QclZK3, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_RvxbTGXs, 0.0f, 0.0f, false);
  numBytes += cRandom_init(&cRandom_3ep6Frc9, -731522492);
  numBytes += cSlice_init(&cSlice_h8WjfVSy, 1, 1);
  numBytes += cSlice_init(&cSlice_iyiEN4C9, 1, -1);
  numBytes += cSlice_init(&cSlice_VVA9l0JS, 1, -1);
  numBytes += cBinop_init(&cBinop_sVno7bTi, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_PhgU67dn, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_I9vnfIJd, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_C2GgJrMH, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_ogmu4ON3, 0.0f);
  numBytes += cVar_init_f(&cVar_v1YquXhQ, 0.0f);
  numBytes += cBinop_init(&cBinop_Dvwk92Ia, 20.0f); // __div
  numBytes += cVar_init_f(&cVar_p6MQDhX2, 0.0f);
  numBytes += cVar_init_f(&cVar_yeaZNkVt, 20.0f);
  numBytes += cVar_init_f(&cVar_fGxVf4EQ, 0.0f);
  numBytes += cSlice_init(&cSlice_xtJjgXD1, 1, 1);
  numBytes += cSlice_init(&cSlice_JNsP41Nl, 0, 1);
  numBytes += cBinop_init(&cBinop_1Uy0Byn8, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_UI2lLEWl, 0.0f);
  numBytes += cBinop_init(&cBinop_CPvh7Cnp, 0.0f); // __add
  numBytes += cDelay_init(this, &cDelay_b0r6sWJC, 0.0f);
  numBytes += cBinop_init(&cBinop_AMqUbXhm, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_ghgTvjgd, 20.0f);
  numBytes += cBinop_init(&cBinop_J0o0TKDc, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_lE8Hj1kN, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_QKUDPpfg, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_PVuNPKs7, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_7AYjlf4l, 0.0f); // __mul
  numBytes += cRandom_init(&cRandom_4sRwMSu9, 186980677);
  numBytes += cSlice_init(&cSlice_YsT9cCqe, 1, 1);
  numBytes += cPack_init(&cPack_ccuykocq, 2, 0.0f, 0.0f);
  numBytes += cRandom_init(&cRandom_pm4To8WR, 281606662);
  numBytes += cSlice_init(&cSlice_HVk1kmK2, 1, 1);
  numBytes += sVarf_init(&sVarf_j9LbR2tE, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_oLI7NMzi, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_2p5IwkK5, 250.0f);
  numBytes += sVarf_init(&sVarf_F0mI3PpQ, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_bgEzkSVv, false);
  numBytes += sVarf_init(&sVarf_S86gdGYo, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_sPHvVqh5, 50.0f);
  numBytes += cDelay_init(this, &cDelay_sFzqCGYo, 0.0f);
  numBytes += cBinop_init(&cBinop_kN7Lc5ys, 0.0f); // __mul
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_heavy::~Heavy_heavy() {
  cPack_free(&cPack_WA5BBDtx);
  cPack_free(&cPack_ch1Socny);
  cPack_free(&cPack_pnZM9ddr);
  cPack_free(&cPack_kibukw5c);
  cPack_free(&cPack_TY3k69Fu);
  cPack_free(&cPack_ygZ1lC6h);
  cPack_free(&cPack_keylgRvG);
  cPack_free(&cPack_kAhU9N0R);
  cPack_free(&cPack_WjlGm9Rx);
  cPack_free(&cPack_AOo1ERhF);
  cPack_free(&cPack_lpXbRZCa);
  cPack_free(&cPack_93LLaSdV);
  cPack_free(&cPack_9vSQJtms);
  cPack_free(&cPack_IKOvmY36);
  cPack_free(&cPack_AOWGcBCC);
  cPack_free(&cPack_B0rkmRVG);
  cPack_free(&cPack_ADTUgheK);
  cPack_free(&cPack_QAuBCPaM);
  cPack_free(&cPack_qcAvFkPe);
  cPack_free(&cPack_KdgyWQgH);
  cPack_free(&cPack_dKHLYSms);
  cPack_free(&cPack_q4Gg3hjo);
  cPack_free(&cPack_24KSVUfk);
  cPack_free(&cPack_S1MAhq07);
  cPack_free(&cPack_zXx7fXnb);
  cPack_free(&cPack_dnAvmyKM);
  cPack_free(&cPack_UhRx7f0i);
  cPack_free(&cPack_n9s3ZPMG);
  cPack_free(&cPack_GTlKmyWk);
  cPack_free(&cPack_0p5ijURg);
  cPack_free(&cPack_twA3NeGw);
  cPack_free(&cPack_ol0TUrlp);
  cPack_free(&cPack_M0M6CdEJ);
  cPack_free(&cPack_9mllmOwf);
  cPack_free(&cPack_BuzcK9mI);
  cPack_free(&cPack_h4vD2x5k);
  cPack_free(&cPack_hV1mYNWY);
  cPack_free(&cPack_X5PL2wak);
  cPack_free(&cPack_7kBDOEuR);
  cPack_free(&cPack_fqOasbKM);
  cPack_free(&cPack_pOP4839x);
  cPack_free(&cPack_ccuykocq);
}

HvTable *Heavy_heavy::getTableForHash(hv_uint32_t tableHash) {
  return nullptr;
}

void Heavy_heavy::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_YmZQeJnO_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_heavy::getParameterInfo(int index, HvParameterInfo *info) {
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


void Heavy_heavy::cVar_gih00mYS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_w1NqA2zF, 0, m, &cVar_w1NqA2zF_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_JC3CdxHC, 0, m, &cVar_JC3CdxHC_sendMessage);
}

void Heavy_heavy::cBinop_aiHd7CJE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_BjYYKynx_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_qsUFEFeQ, m);
}

void Heavy_heavy::cBinop_4tXPWJGx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_aiHd7CJE_sendMessage);
}

void Heavy_heavy::cMsg_0Jd0e7lb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_73MkhYXT_sendMessage);
}

void Heavy_heavy::cSystem_73MkhYXT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CSLsVstS_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_0GN64Ea2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sKBh3qN9, HV_BINOP_MULTIPLY, 1, m, &cBinop_sKBh3qN9_sendMessage);
}

void Heavy_heavy::cMsg_CSLsVstS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_0GN64Ea2_sendMessage);
}

void Heavy_heavy::cBinop_sKBh3qN9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_4tXPWJGx_sendMessage);
}

void Heavy_heavy::cBinop_BjYYKynx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_BWLNRfXp, m);
}

void Heavy_heavy::cVar_w1NqA2zF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sKBh3qN9, HV_BINOP_MULTIPLY, 0, m, &cBinop_sKBh3qN9_sendMessage);
}

void Heavy_heavy::cMsg_bMQG5HO9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3000.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_gih00mYS, 0, m, &cVar_gih00mYS_sendMessage);
}

void Heavy_heavy::cBinop_2RzJnUFG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_pnZM9ddr, 0, m, &cPack_pnZM9ddr_sendMessage);
}

void Heavy_heavy::cCast_TaPdNjiS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_0BlYpYDm_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cSwitchcase_AoM1WJLN_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_aFCzFu8e_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_aFCzFu8e_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7lRI8yw8_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_7lRI8yw8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aFCzFu8e_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_2KNEbnuW, 0, m, &cDelay_2KNEbnuW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AptTcbXe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_I6hWV1ca_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TaPdNjiS_sendMessage);
}

void Heavy_heavy::cMsg_7a7cuY07_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_jZQcl7VO_sendMessage);
}

void Heavy_heavy::cSystem_jZQcl7VO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_JsZzvTVr_sendMessage);
}

void Heavy_heavy::cDelay_2KNEbnuW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_2KNEbnuW, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_2KNEbnuW, 0, m, &cDelay_2KNEbnuW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AptTcbXe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_I6hWV1ca_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TaPdNjiS_sendMessage);
}

void Heavy_heavy::cBinop_JsZzvTVr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bp6Tc7xC, HV_BINOP_MULTIPLY, 1, m, &cBinop_bp6Tc7xC_sendMessage);
}

void Heavy_heavy::cMsg_aFCzFu8e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_2KNEbnuW, 0, m, &cDelay_2KNEbnuW_sendMessage);
}

void Heavy_heavy::cBinop_PzGk3Cgi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_2KNEbnuW, 2, m, &cDelay_2KNEbnuW_sendMessage);
}

void Heavy_heavy::cVar_juThJizj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bp6Tc7xC, HV_BINOP_MULTIPLY, 0, m, &cBinop_bp6Tc7xC_sendMessage);
}

void Heavy_heavy::cBinop_bp6Tc7xC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_PzGk3Cgi_sendMessage);
}

void Heavy_heavy::cUnop_G2xBw8mV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1600.0f, 0, m, &cBinop_tGw668VT_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_2RzJnUFG_sendMessage);
}

void Heavy_heavy::cSwitchcase_0BlYpYDm_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Mu9Hsoxg, 0, m, &cSlice_Mu9Hsoxg_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_bOrmmHHE, 0, m, &cRandom_bOrmmHHE_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_dhCB0tWy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_G2xBw8mV_sendMessage);
}

void Heavy_heavy::cRandom_bOrmmHHE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_dhCB0tWy_sendMessage);
}

void Heavy_heavy::cSlice_Mu9Hsoxg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_bOrmmHHE, 1, m, &cRandom_bOrmmHHE_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cMsg_sdTfxhiO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ji1Dbllq_sendMessage);
}

void Heavy_heavy::cMsg_5g4Intde_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_iygk1G9l_sendMessage);
}

void Heavy_heavy::cBinop_GW77dTmE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_C1rLuKdQ, m);
}

void Heavy_heavy::cMsg_QFWdaVvW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_LHnNdQ1m_sendMessage);
}

void Heavy_heavy::cBinop_iygk1G9l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_BVC2D0Fi, m);
}

void Heavy_heavy::cMsg_sZtLnUpt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_j36mFTrB_sendMessage);
}

void Heavy_heavy::cMsg_vOURaqVB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_GW77dTmE_sendMessage);
}

void Heavy_heavy::cBinop_ji1Dbllq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_NopE8FZx, m);
}

void Heavy_heavy::cMsg_PQlT8BKl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_3cYFhcMA_sendMessage);
}

void Heavy_heavy::cSystem_3cYFhcMA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vOURaqVB_sendMessage(_c, 0, m);
}

void Heavy_heavy::cIf_nEG0E7XF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_sZtLnUpt_sendMessage(_c, 0, m);
      cMsg_ZzbuxB48_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_5g4Intde_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_j36mFTrB_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_BVzQQ1BJ, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_VW5H7b3P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_nEG0E7XF, 1, m, &cIf_nEG0E7XF_sendMessage);
}

void Heavy_heavy::cBinop_j36mFTrB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QFWdaVvW_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_wDOCUerd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_VW5H7b3P_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_nEG0E7XF, 0, m, &cIf_nEG0E7XF_sendMessage);
}

void Heavy_heavy::cBinop_LHnNdQ1m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sdTfxhiO_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_ZzbuxB48_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_BVC2D0Fi, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_BVzQQ1BJ, m);
}

void Heavy_heavy::cCast_I6hWV1ca_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cCast_AptTcbXe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_H4ZViCYR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_tGw668VT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_WA5BBDtx, 0, m, &cPack_WA5BBDtx_sendMessage);
}

void Heavy_heavy::cPack_WA5BBDtx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_kcSVG95E, 0, m, NULL);
}

void Heavy_heavy::cCast_5lieB1ft_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LUZvJ5eB, HV_BINOP_SUBTRACT, 1, m, &cBinop_LUZvJ5eB_sendMessage);
}

void Heavy_heavy::cBinop_fo1bSAP1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ch1Socny, 1, m, &cPack_ch1Socny_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_TouZjJHQ, 1, m, &cDelay_TouZjJHQ_sendMessage);
}

void Heavy_heavy::cCast_UGzMNbuq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_RNaHGJga_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_DubMNNLU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_StlAwrxQ, HV_BINOP_SUBTRACT, 0, m, &cBinop_StlAwrxQ_sendMessage);
}

void Heavy_heavy::cCast_MsKQ7meg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_5eH0VYSF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cPack_ch1Socny_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_kKWLNbpE_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_VebJzLmX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8YoxGEit, HV_BINOP_SUBTRACT, 0, m, &cBinop_8YoxGEit_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_bBv7qjUn_sendMessage);
}

void Heavy_heavy::cCast_ECsThBgV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2KRsWfMS_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_j1IzKDMn, HV_BINOP_ADD, 0, m, &cBinop_j1IzKDMn_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_F8klojwE, 1, m, &cVar_F8klojwE_sendMessage);
}

void Heavy_heavy::cBinop_xlHpULrs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6oV4FEFr, HV_BINOP_DIVIDE, 1, m, &cBinop_6oV4FEFr_sendMessage);
}

void Heavy_heavy::cMsg_vI9Tfmj0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_Wb31DNlv_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_6oV4FEFr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_j1IzKDMn, HV_BINOP_ADD, 1, m, &cBinop_j1IzKDMn_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_NMi1BcXK, HV_BINOP_ADD, 1, m, &cBinop_NMi1BcXK_sendMessage);
}

void Heavy_heavy::cBinop_bBv7qjUn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_jhZgHDXK_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_8VQYfnIJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_euZ2CJoi_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_uTikkh57_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8YoxGEit, HV_BINOP_SUBTRACT, 1, m, &cBinop_8YoxGEit_sendMessage);
}

void Heavy_heavy::cCast_bSUHa3ak_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GYQmsh63_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_j1IzKDMn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_09tVJJTD, 0, m, &cVar_09tVJJTD_sendMessage);
}

void Heavy_heavy::cCast_eJwfvtx9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hAxFrpBk, 1, m, &cVar_hAxFrpBk_sendMessage);
}

void Heavy_heavy::cBinop_W8QgbbVJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_uTikkh57_sendMessage);
}

void Heavy_heavy::cVar_F8klojwE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NMi1BcXK, HV_BINOP_ADD, 0, m, &cBinop_NMi1BcXK_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_j1IzKDMn, HV_BINOP_ADD, 0, m, &cBinop_j1IzKDMn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hhFEmaeL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nwETQw6R_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8wsihsHv_sendMessage);
}

void Heavy_heavy::cCast_B16RH9do_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Jx3p32iD, 0, m, &cVar_Jx3p32iD_sendMessage);
}

void Heavy_heavy::cVar_09tVJJTD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_q5Lh5HdP, HV_BINOP_SUBTRACT, 1, m, &cBinop_q5Lh5HdP_sendMessage);
}

void Heavy_heavy::cBinop_2Pe9gPru_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VebJzLmX, 1, m, &cVar_VebJzLmX_sendMessage);
}

void Heavy_heavy::cBinop_q5Lh5HdP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6oV4FEFr, HV_BINOP_DIVIDE, 0, m, &cBinop_6oV4FEFr_sendMessage);
}

void Heavy_heavy::cCast_T3zY5NA5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xlHpULrs, HV_BINOP_DIVIDE, 0, m, &cBinop_xlHpULrs_sendMessage);
}

void Heavy_heavy::cMsg_ya92fX4Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_W8QgbbVJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_W8QgbbVJ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xlHpULrs, HV_BINOP_DIVIDE, 1, m, &cBinop_xlHpULrs_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_aJimzjZ7, 0, m, &cVar_aJimzjZ7_sendMessage);
}

void Heavy_heavy::cCast_BfybCZO6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hAxFrpBk, 0, m, &cVar_hAxFrpBk_sendMessage);
}

void Heavy_heavy::cDelay_TkmjWvPT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_TkmjWvPT, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_TkmjWvPT, 0, m, &cDelay_TkmjWvPT_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_VebJzLmX, 0, m, &cVar_VebJzLmX_sendMessage);
}

void Heavy_heavy::cMsg_c8rfqjBx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_TkmjWvPT, 0, m, &cDelay_TkmjWvPT_sendMessage);
}

void Heavy_heavy::cVar_aJimzjZ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oR42LbCA, HV_BINOP_MULTIPLY, 0, m, &cBinop_oR42LbCA_sendMessage);
}

void Heavy_heavy::cBinop_0ysDq1XI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oR42LbCA, HV_BINOP_MULTIPLY, 1, m, &cBinop_oR42LbCA_sendMessage);
}

void Heavy_heavy::cBinop_oR42LbCA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_boAut47R_sendMessage);
}

void Heavy_heavy::cSystem_uMau1mh9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_0ysDq1XI_sendMessage);
}

void Heavy_heavy::cMsg_cVar5Xko_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_uMau1mh9_sendMessage);
}

void Heavy_heavy::cCast_mZes5r3O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_c8rfqjBx_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_TkmjWvPT, 0, m, &cDelay_TkmjWvPT_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_VebJzLmX, 0, m, &cVar_VebJzLmX_sendMessage);
}

void Heavy_heavy::cBinop_boAut47R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_TkmjWvPT, 2, m, &cDelay_TkmjWvPT_sendMessage);
}

void Heavy_heavy::cSwitchcase_Wb31DNlv_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_c8rfqjBx_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_c8rfqjBx_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mZes5r3O_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_hAxFrpBk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_F8klojwE, 0, m, &cVar_F8klojwE_sendMessage);
}

void Heavy_heavy::cBinop_NMi1BcXK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_F8klojwE, 1, m, &cVar_F8klojwE_sendMessage);
}

void Heavy_heavy::cSlice_nTaRmC7u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_GYQmsh63_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_GYQmsh63_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_hntULWDq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bSUHa3ak_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ECsThBgV_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bSUHa3ak_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ECsThBgV_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_kKWLNbpE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_nTaRmC7u, 0, m, &cSlice_nTaRmC7u_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_hntULWDq, 0, m, &cSlice_hntULWDq_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_B16RH9do_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_CS9jQSlo, 0, m, &cSlice_CS9jQSlo_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_XSc05EZ1, 0, m, &cSlice_XSc05EZ1_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_y4qWhwIL_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SXyTA44X_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_y4qWhwIL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vI9Tfmj0_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSystem_kOCzojWS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_W8QgbbVJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_W8QgbbVJ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2TN1hfK0, HV_BINOP_MULTIPLY, 1, m, &cBinop_2TN1hfK0_sendMessage);
}

void Heavy_heavy::cMsg_sl0xcl0U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_kOCzojWS_sendMessage);
}

void Heavy_heavy::cVar_Jx3p32iD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4M6fcYK0_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_T3zY5NA5_sendMessage);
}

void Heavy_heavy::cVar_IqJMliuY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_l2nQF43F_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_GYQmsh63_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_Wb31DNlv_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_F8NnvHKF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8VQYfnIJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BfybCZO6_sendMessage);
}

void Heavy_heavy::cCast_RFnhS8f7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_F8klojwE, 0, m, &cVar_F8klojwE_sendMessage);
}

void Heavy_heavy::cSwitchcase_jhZgHDXK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RFnhS8f7_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_F8NnvHKF_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cCast_4M6fcYK0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2TN1hfK0, HV_BINOP_MULTIPLY, 0, m, &cBinop_2TN1hfK0_sendMessage);
}

void Heavy_heavy::cCast_2KRsWfMS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_euZ2CJoi_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_2U3QVYTL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Jx3p32iD, 1, m, &cVar_Jx3p32iD_sendMessage);
}

void Heavy_heavy::cSlice_XSc05EZ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eJwfvtx9_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XB6sKiCp_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_CS9jQSlo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4M6fcYK0_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_T3zY5NA5_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cCast_XB6sKiCp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_q5Lh5HdP, HV_BINOP_SUBTRACT, 0, m, &cBinop_q5Lh5HdP_sendMessage);
}

void Heavy_heavy::cCast_SXyTA44X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2U3QVYTL_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_2TN1hfK0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_2Pe9gPru_sendMessage);
}

void Heavy_heavy::cCast_ad3ZLKYN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ya92fX4Y_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_l2nQF43F_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ad3ZLKYN_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_W8QgbbVJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_W8QgbbVJ_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_xlHpULrs, HV_BINOP_DIVIDE, 1, m, &cBinop_xlHpULrs_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_aJimzjZ7, 0, m, &cVar_aJimzjZ7_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_8YoxGEit_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VebJzLmX, 1, m, &cVar_VebJzLmX_sendMessage);
}

void Heavy_heavy::cMsg_euZ2CJoi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_Wb31DNlv_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_j1IzKDMn, HV_BINOP_ADD, 1, m, &cBinop_j1IzKDMn_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_NMi1BcXK, HV_BINOP_ADD, 1, m, &cBinop_NMi1BcXK_sendMessage);
}

void Heavy_heavy::cBinop_QeTtGNfP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LTCAQRk5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wbt5n7t5_sendMessage);
}

void Heavy_heavy::cBinop_kFeS8Wdk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_9LKgfK2u, m);
}

void Heavy_heavy::cMsg_DqGYwTkD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_LUZvJ5eB, HV_BINOP_SUBTRACT, 0, m, &cBinop_LUZvJ5eB_sendMessage);
}

void Heavy_heavy::cBinop_0uXeNtQI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_qY5ykWXD, m);
}

void Heavy_heavy::cCast_WhcfdPI0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DqGYwTkD_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_QDAukUuT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LVmJCTdg, HV_BINOP_MULTIPLY, 0, m, &cBinop_LVmJCTdg_sendMessage);
}

void Heavy_heavy::cSlice_DSB1exGO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_HJ6OLnyB, 1, m, &cRandom_HJ6OLnyB_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cUnop_ayAojRSP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_fo1bSAP1_sendMessage);
}

void Heavy_heavy::cSwitchcase_5eH0VYSF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_DSB1exGO, 0, m, &cSlice_DSB1exGO_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_HJ6OLnyB, 0, m, &cRandom_HJ6OLnyB_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cRandom_HJ6OLnyB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_XeS2svTO_sendMessage);
}

void Heavy_heavy::cBinop_XeS2svTO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_ayAojRSP_sendMessage);
}

void Heavy_heavy::cBinop_z6XMl0oA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ch1Socny, 0, m, &cPack_ch1Socny_sendMessage);
}

void Heavy_heavy::cBinop_LUZvJ5eB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_kFeS8Wdk_sendMessage);
}

void Heavy_heavy::cCast_hhFEmaeL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_StlAwrxQ, HV_BINOP_SUBTRACT, 1, m, &cBinop_StlAwrxQ_sendMessage);
}

void Heavy_heavy::cSwitchcase_RNaHGJga_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_gSDRgZkC_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_gSDRgZkC_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_TouZjJHQ, 1, m, &cDelay_TouZjJHQ_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zfkDMg1F_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cDelay_TouZjJHQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_TouZjJHQ, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MsKQ7meg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KixNo5Ko_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UGzMNbuq_sendMessage);
}

void Heavy_heavy::cCast_zfkDMg1F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_TouZjJHQ, 0, m, &cDelay_TouZjJHQ_sendMessage);
}

void Heavy_heavy::cMsg_gSDRgZkC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_TouZjJHQ, 0, m, &cDelay_TouZjJHQ_sendMessage);
}

void Heavy_heavy::cCast_LTCAQRk5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZEiPBvDv, HV_BINOP_SUBTRACT, 1, m, &cBinop_ZEiPBvDv_sendMessage);
}

void Heavy_heavy::cCast_rUlFIvkH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LVmJCTdg, HV_BINOP_MULTIPLY, 1, m, &cBinop_LVmJCTdg_sendMessage);
}

void Heavy_heavy::cBinop_LVmJCTdg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5lieB1ft_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WhcfdPI0_sendMessage);
}

void Heavy_heavy::cCast_wbt5n7t5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Y6JWmfTi_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_s3tzV8ZN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QeTtGNfP, HV_BINOP_MULTIPLY, 0, m, &cBinop_QeTtGNfP_sendMessage);
}

void Heavy_heavy::cBinop_StlAwrxQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Ci67itYa_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_s3tzV8ZN_sendMessage);
}

void Heavy_heavy::cMsg_Y6JWmfTi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZEiPBvDv, HV_BINOP_SUBTRACT, 0, m, &cBinop_ZEiPBvDv_sendMessage);
}

void Heavy_heavy::cBinop_ZEiPBvDv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_0uXeNtQI_sendMessage);
}

void Heavy_heavy::cSlice_gSTj67sP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_MZcUEECi, 1, m, &cRandom_MZcUEECi_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_NzbWWd1X_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_gSTj67sP, 0, m, &cSlice_gSTj67sP_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_MZcUEECi, 0, m, &cRandom_MZcUEECi_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cUnop_n188tA8M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_z6XMl0oA_sendMessage);
}

void Heavy_heavy::cRandom_MZcUEECi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_X12KcqEq_sendMessage);
}

void Heavy_heavy::cBinop_X12KcqEq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_n188tA8M_sendMessage);
}

void Heavy_heavy::cCast_KixNo5Ko_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_NzbWWd1X_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_8wsihsHv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rUlFIvkH_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QDAukUuT_sendMessage);
}

void Heavy_heavy::cCast_Ci67itYa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QeTtGNfP, HV_BINOP_MULTIPLY, 1, m, &cBinop_QeTtGNfP_sendMessage);
}

void Heavy_heavy::cCast_nwETQw6R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DubMNNLU_sendMessage(_c, 0, m);
}

void Heavy_heavy::cPack_pnZM9ddr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_5tLEpWSd, 0, m, NULL);
}

void Heavy_heavy::cVar_p6jYtLQL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_kcSVG95E, 0, m, NULL);
}

void Heavy_heavy::cCast_3gSulOKL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_H4ZViCYR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_xsohOFOj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_juThJizj, 0, m, &cVar_juThJizj_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_WA5BBDtx, 1, m, &cPack_WA5BBDtx_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_pnZM9ddr, 1, m, &cPack_pnZM9ddr_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_p6jYtLQL, 1, m, &cVar_p6jYtLQL_sendMessage);
}

void Heavy_heavy::cCast_0fqinLK6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_p6jYtLQL, 0, m, &cVar_p6jYtLQL_sendMessage);
}

void Heavy_heavy::cSlice_PEAktDU9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_Cjz2my55, 1, m, &cRandom_Cjz2my55_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cUnop_0q7TETLc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_xsohOFOj_sendMessage);
}

void Heavy_heavy::cRandom_Cjz2my55_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_pqLN5fb9_sendMessage);
}

void Heavy_heavy::cBinop_pqLN5fb9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_0q7TETLc_sendMessage);
}

void Heavy_heavy::cSwitchcase_H4ZViCYR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_PEAktDU9, 0, m, &cSlice_PEAktDU9_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_Cjz2my55, 0, m, &cRandom_Cjz2my55_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_O983N15r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bMQG5HO9_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_n32TNtvs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qvnFo3oZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_UeM2fsii_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_7vixKihf_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_N5rUjj7p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sukTNVHN_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_r2Wx3udD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_kibukw5c, 0, m, &cPack_kibukw5c_sendMessage);
}

void Heavy_heavy::cCast_bnbLizzs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_i3laD8vz_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_qEDrnk9g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_GaoUP485, 0, m, &cDelay_GaoUP485_sendMessage);
}

void Heavy_heavy::cSwitchcase_7vixKihf_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_qEDrnk9g_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_qEDrnk9g_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_GaoUP485, 1, m, &cDelay_GaoUP485_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xtva1zCU_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cDelay_GaoUP485_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_GaoUP485, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_klPcM3V0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bnbLizzs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UeM2fsii_sendMessage);
}

void Heavy_heavy::cCast_xtva1zCU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_GaoUP485, 0, m, &cDelay_GaoUP485_sendMessage);
}

void Heavy_heavy::cCast_klPcM3V0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_NCRHXUmg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_sukTNVHN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ojg63byd, HV_BINOP_SUBTRACT, 0, m, &cBinop_Ojg63byd_sendMessage);
}

void Heavy_heavy::cBinop_Fv9S9he1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zwzpJFLc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Vy1AO6mm_sendMessage);
}

void Heavy_heavy::cUnop_pcRPmvv8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_lMblJ4gt_sendMessage);
}

void Heavy_heavy::cBinop_Q2emydvO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_pcRPmvv8_sendMessage);
}

void Heavy_heavy::cSwitchcase_NCRHXUmg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_mnD0lykW, 0, m, &cSlice_mnD0lykW_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_MKWnsBrL, 0, m, &cRandom_MKWnsBrL_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cRandom_MKWnsBrL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_Q2emydvO_sendMessage);
}

void Heavy_heavy::cSlice_mnD0lykW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_MKWnsBrL, 1, m, &cRandom_MKWnsBrL_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_Y9pd9TSH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_TjqDyxrV_sendMessage);
}

void Heavy_heavy::cBinop_kSkR0Ozp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gcOCyLEW, m);
}

void Heavy_heavy::cCast_ijsAYSBH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7kuuSj4F, HV_BINOP_MULTIPLY, 0, m, &cBinop_7kuuSj4F_sendMessage);
}

void Heavy_heavy::cBinop_o3Ljk3xX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SJHHVCzC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_N5rUjj7p_sendMessage);
}

void Heavy_heavy::cCast_SJHHVCzC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ojg63byd, HV_BINOP_SUBTRACT, 1, m, &cBinop_Ojg63byd_sendMessage);
}

void Heavy_heavy::cBinop_XErhedUs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Q3wjRkNe, 1, m, &cVar_Q3wjRkNe_sendMessage);
}

void Heavy_heavy::cCast_dTen2JBP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_htYZonhY, 1, m, &cVar_htYZonhY_sendMessage);
}

void Heavy_heavy::cCast_C4LrhVN1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cUB6i9aK_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_SuorAx0e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_C9LPjYEc, HV_BINOP_SUBTRACT, 1, m, &cBinop_C9LPjYEc_sendMessage);
}

void Heavy_heavy::cVar_iwh5bKpD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rYq3sX1l, HV_BINOP_ADD, 0, m, &cBinop_rYq3sX1l_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_j3WhSjVj, HV_BINOP_ADD, 0, m, &cBinop_j3WhSjVj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7vJ0Od2I_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DU9GpYd4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gU9Sz7ZT_sendMessage);
}

void Heavy_heavy::cCast_rchW5TlL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_C9LPjYEc, HV_BINOP_SUBTRACT, 0, m, &cBinop_C9LPjYEc_sendMessage);
}

void Heavy_heavy::cCast_jUTnZ7QA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7xFUZROB_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_j3WhSjVj, HV_BINOP_ADD, 0, m, &cBinop_j3WhSjVj_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_iwh5bKpD, 1, m, &cVar_iwh5bKpD_sendMessage);
}

void Heavy_heavy::cCast_7xFUZROB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cUB6i9aK_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_cUB6i9aK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_B4I2H0gU_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_j3WhSjVj, HV_BINOP_ADD, 1, m, &cBinop_j3WhSjVj_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rYq3sX1l, HV_BINOP_ADD, 1, m, &cBinop_rYq3sX1l_sendMessage);
}

void Heavy_heavy::cSlice_g3SpGRKR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fPtT3Bm9_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jUTnZ7QA_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fPtT3Bm9_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jUTnZ7QA_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_u3olkaXx_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_0SarOGL2, 0, m, &cSlice_0SarOGL2_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_g3SpGRKR, 0, m, &cSlice_g3SpGRKR_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WNhxKnLR_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_0otIA9Ev, 0, m, &cSlice_0otIA9Ev_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZikN2o7H, 0, m, &cSlice_ZikN2o7H_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mAiAMJ1Z_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D1ebCEdA_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_0SarOGL2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_VjKvrfVg_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_VjKvrfVg_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_rYq3sX1l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iwh5bKpD, 1, m, &cVar_iwh5bKpD_sendMessage);
}

void Heavy_heavy::cCast_mAiAMJ1Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6Mn4rpbo_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_F1B2lCUZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Q3wjRkNe, 1, m, &cVar_Q3wjRkNe_sendMessage);
}

void Heavy_heavy::cVar_ZsDmhRR9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_irfPk8Xs_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_vVAGZDWt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_TNQi6Hqk, 1, m, &cVar_TNQi6Hqk_sendMessage);
}

void Heavy_heavy::cCast_p4JS5A6X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Sqi1U0Hf, HV_BINOP_MULTIPLY, 0, m, &cBinop_Sqi1U0Hf_sendMessage);
}

void Heavy_heavy::cBinop_sKf0HoYO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XErhedUs, HV_BINOP_SUBTRACT, 1, m, &cBinop_XErhedUs_sendMessage);
}

void Heavy_heavy::cVar_TNQi6Hqk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_p4JS5A6X_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4dE9xLIp_sendMessage);
}

void Heavy_heavy::cMsg_6Mn4rpbo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_B4I2H0gU_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_VjKvrfVg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_B4I2H0gU_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_p2XUknL8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_TDVuhvc7_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_fPtT3Bm9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VjKvrfVg_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_Sqi1U0Hf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_F1B2lCUZ_sendMessage);
}

void Heavy_heavy::cSlice_ZikN2o7H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dTen2JBP_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rchW5TlL_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_0otIA9Ev_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_p4JS5A6X_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4dE9xLIp_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cCast_KMsbsBm5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_C4LrhVN1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BLsaOIW7_sendMessage);
}

void Heavy_heavy::cCast_a1JupNQ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iwh5bKpD, 0, m, &cVar_iwh5bKpD_sendMessage);
}

void Heavy_heavy::cSwitchcase_TDVuhvc7_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_a1JupNQ9_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KMsbsBm5_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cMsg_cSHnFAeo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FOayucfP_sendMessage);
}

void Heavy_heavy::cSystem_FOayucfP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_s4eWvdhc, HV_BINOP_MULTIPLY, 1, m, &cBinop_s4eWvdhc_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Sqi1U0Hf, HV_BINOP_MULTIPLY, 1, m, &cBinop_Sqi1U0Hf_sendMessage);
}

void Heavy_heavy::cBinop_j3WhSjVj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SuorAx0e, 0, m, &cVar_SuorAx0e_sendMessage);
}

void Heavy_heavy::cVar_Q3wjRkNe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XErhedUs, HV_BINOP_SUBTRACT, 0, m, &cBinop_XErhedUs_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_p2XUknL8_sendMessage);
}

void Heavy_heavy::cBinop_W3yINB8u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_P4kfnKAu, HV_BINOP_DIVIDE, 1, m, &cBinop_P4kfnKAu_sendMessage);
}

void Heavy_heavy::cCast_WNhxKnLR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TNQi6Hqk, 0, m, &cVar_TNQi6Hqk_sendMessage);
}

void Heavy_heavy::cVar_htYZonhY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_iwh5bKpD, 0, m, &cVar_iwh5bKpD_sendMessage);
}

void Heavy_heavy::cBinop_C9LPjYEc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_P4kfnKAu, HV_BINOP_DIVIDE, 0, m, &cBinop_P4kfnKAu_sendMessage);
}

void Heavy_heavy::cCast_D1ebCEdA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vVAGZDWt_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_4dE9xLIp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_W3yINB8u, HV_BINOP_DIVIDE, 0, m, &cBinop_W3yINB8u_sendMessage);
}

void Heavy_heavy::cBinop_s4eWvdhc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_sKf0HoYO_sendMessage);
}

void Heavy_heavy::cCast_KR3P0Ehj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_86dQQShv_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_irfPk8Xs_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KR3P0Ehj_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_s4eWvdhc, HV_BINOP_MULTIPLY, 0, m, &cBinop_s4eWvdhc_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_W3yINB8u, HV_BINOP_DIVIDE, 1, m, &cBinop_W3yINB8u_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_fBJAw45H, 0, m, &cVar_fBJAw45H_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_BLsaOIW7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_htYZonhY, 0, m, &cVar_htYZonhY_sendMessage);
}

void Heavy_heavy::cBinop_2fmV0AVZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3lpaEbqN, HV_BINOP_MULTIPLY, 1, m, &cBinop_3lpaEbqN_sendMessage);
}

void Heavy_heavy::cCast_by1PZWH1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SXBg2ove_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tXtQ9ltk, 0, m, &cDelay_tXtQ9ltk_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Q3wjRkNe, 0, m, &cVar_Q3wjRkNe_sendMessage);
}

void Heavy_heavy::cBinop_3lpaEbqN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_aOHgf5F3_sendMessage);
}

void Heavy_heavy::cBinop_aOHgf5F3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_tXtQ9ltk, 2, m, &cDelay_tXtQ9ltk_sendMessage);
}

void Heavy_heavy::cSwitchcase_B4I2H0gU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_SXBg2ove_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_SXBg2ove_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_by1PZWH1_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_SXBg2ove_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_tXtQ9ltk, 0, m, &cDelay_tXtQ9ltk_sendMessage);
}

void Heavy_heavy::cVar_fBJAw45H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3lpaEbqN, HV_BINOP_MULTIPLY, 0, m, &cBinop_3lpaEbqN_sendMessage);
}

void Heavy_heavy::cMsg_45hkMCKx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_YVVNU8d3_sendMessage);
}

void Heavy_heavy::cSystem_YVVNU8d3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_2fmV0AVZ_sendMessage);
}

void Heavy_heavy::cDelay_tXtQ9ltk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_tXtQ9ltk, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tXtQ9ltk, 0, m, &cDelay_tXtQ9ltk_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Q3wjRkNe, 0, m, &cVar_Q3wjRkNe_sendMessage);
}

void Heavy_heavy::cBinop_P4kfnKAu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_j3WhSjVj, HV_BINOP_ADD, 1, m, &cBinop_j3WhSjVj_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rYq3sX1l, HV_BINOP_ADD, 1, m, &cBinop_rYq3sX1l_sendMessage);
}

void Heavy_heavy::cMsg_86dQQShv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_s4eWvdhc, HV_BINOP_MULTIPLY, 0, m, &cBinop_s4eWvdhc_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_W3yINB8u, HV_BINOP_DIVIDE, 1, m, &cBinop_W3yINB8u_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_fBJAw45H, 0, m, &cVar_fBJAw45H_sendMessage);
}

void Heavy_heavy::cCast_8vDZDe4o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7kuuSj4F, HV_BINOP_MULTIPLY, 1, m, &cBinop_7kuuSj4F_sendMessage);
}

void Heavy_heavy::cCast_gU9Sz7ZT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8vDZDe4o_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ijsAYSBH_sendMessage);
}

void Heavy_heavy::cMsg_U36Rsl8E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fv9S9he1, HV_BINOP_SUBTRACT, 0, m, &cBinop_Fv9S9he1_sendMessage);
}

void Heavy_heavy::cCast_7vJ0Od2I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fv9S9he1, HV_BINOP_SUBTRACT, 1, m, &cBinop_Fv9S9he1_sendMessage);
}

void Heavy_heavy::cCast_ZbhoSzpt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9LzghV0s_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_Ojg63byd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_kSkR0Ozp_sendMessage);
}

void Heavy_heavy::cPack_kibukw5c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_u3olkaXx_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_zwzpJFLc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_o3Ljk3xX, HV_BINOP_MULTIPLY, 1, m, &cBinop_o3Ljk3xX_sendMessage);
}

void Heavy_heavy::cCast_DU9GpYd4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_U36Rsl8E_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_lMblJ4gt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_kibukw5c, 1, m, &cPack_kibukw5c_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_GaoUP485, 1, m, &cDelay_GaoUP485_sendMessage);
}

void Heavy_heavy::cBinop_TjqDyxrV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vxqyti7e, m);
}

void Heavy_heavy::cCast_Q0IcBkQ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y9pd9TSH, HV_BINOP_SUBTRACT, 1, m, &cBinop_Y9pd9TSH_sendMessage);
}

void Heavy_heavy::cCast_Vy1AO6mm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_o3Ljk3xX, HV_BINOP_MULTIPLY, 0, m, &cBinop_o3Ljk3xX_sendMessage);
}

void Heavy_heavy::cSwitchcase_i3laD8vz_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_IpNDzZXM, 0, m, &cSlice_IpNDzZXM_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_W1nrOt9V, 0, m, &cRandom_W1nrOt9V_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_yUboMbZ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_et0AXkkz_sendMessage);
}

void Heavy_heavy::cRandom_W1nrOt9V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_yUboMbZ7_sendMessage);
}

void Heavy_heavy::cUnop_et0AXkkz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_r2Wx3udD_sendMessage);
}

void Heavy_heavy::cSlice_IpNDzZXM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_W1nrOt9V, 1, m, &cRandom_W1nrOt9V_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cMsg_9LzghV0s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y9pd9TSH, HV_BINOP_SUBTRACT, 0, m, &cBinop_Y9pd9TSH_sendMessage);
}

void Heavy_heavy::cBinop_7kuuSj4F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Q0IcBkQ6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZbhoSzpt_sendMessage);
}

void Heavy_heavy::cUnop_BDLnkdY9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_LiMxaLFq_sendMessage);
}

void Heavy_heavy::cSwitchcase_qvnFo3oZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_BxiqYeXL, 0, m, &cSlice_BxiqYeXL_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_e0zKXRCh, 0, m, &cRandom_e0zKXRCh_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_BxiqYeXL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_e0zKXRCh, 1, m, &cRandom_e0zKXRCh_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cRandom_e0zKXRCh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_gXRw4wCy_sendMessage);
}

void Heavy_heavy::cBinop_gXRw4wCy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_BDLnkdY9_sendMessage);
}

void Heavy_heavy::cBinop_cyx1y5a1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ygZ1lC6h, 0, m, &cPack_ygZ1lC6h_sendMessage);
}

void Heavy_heavy::cMsg_RMgdTyMl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_tY1taPal, 0, m, &cDelay_tY1taPal_sendMessage);
}

void Heavy_heavy::cSwitchcase_FNl0iXFe_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_RMgdTyMl_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_RMgdTyMl_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uSS1QVu6_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cDelay_tY1taPal_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_tY1taPal, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tY1taPal, 0, m, &cDelay_tY1taPal_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VPBhcks6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RF9NWdr0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nmYonMjk_sendMessage);
}

void Heavy_heavy::cMsg_SNxDmTuN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_LaiayXUv_sendMessage);
}

void Heavy_heavy::cSystem_LaiayXUv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_uUPZHuCl_sendMessage);
}

void Heavy_heavy::cVar_2v4bJZdI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uzNtN0sV, HV_BINOP_MULTIPLY, 0, m, &cBinop_uzNtN0sV_sendMessage);
}

void Heavy_heavy::cCast_uSS1QVu6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RMgdTyMl_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tY1taPal, 0, m, &cDelay_tY1taPal_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VPBhcks6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RF9NWdr0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nmYonMjk_sendMessage);
}

void Heavy_heavy::cBinop_uUPZHuCl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uzNtN0sV, HV_BINOP_MULTIPLY, 1, m, &cBinop_uzNtN0sV_sendMessage);
}

void Heavy_heavy::cBinop_uzNtN0sV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_rQwcpk0a_sendMessage);
}

void Heavy_heavy::cBinop_rQwcpk0a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_tY1taPal, 2, m, &cDelay_tY1taPal_sendMessage);
}

void Heavy_heavy::cCast_mrED7SMC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1jJhYuEe, 0, m, &cVar_1jJhYuEe_sendMessage);
}

void Heavy_heavy::cIf_uYyxy3fy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_phOn9pmA_sendMessage(_c, 0, m);
      cMsg_lgxavMUl_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_5sPnbLkm_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_L9S5fYyu_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_NAE5m0bF, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_r9XBjXG8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_uYyxy3fy, 1, m, &cIf_uYyxy3fy_sendMessage);
}

void Heavy_heavy::cMsg_PcHHcwao_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zbSsF3f4_sendMessage);
}

void Heavy_heavy::cSystem_zbSsF3f4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Xwk2WfqQ_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_0Xl0luL8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ix3AAsE4, m);
}

void Heavy_heavy::cMsg_lgxavMUl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_L0eLxqJA, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_NAE5m0bF, m);
}

void Heavy_heavy::cBinop_L9S5fYyu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NQXPIo9W_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_NQXPIo9W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_ADVIYaM8_sendMessage);
}

void Heavy_heavy::cMsg_SzYVwCfl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_q5d1sliK_sendMessage);
}

void Heavy_heavy::cMsg_5sPnbLkm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_hm1WXmMg_sendMessage);
}

void Heavy_heavy::cMsg_phOn9pmA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_L9S5fYyu_sendMessage);
}

void Heavy_heavy::cBinop_ADVIYaM8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SzYVwCfl_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_q5d1sliK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0zxaz0kF, m);
}

void Heavy_heavy::cMsg_Xwk2WfqQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_0Xl0luL8_sendMessage);
}

void Heavy_heavy::cBinop_hm1WXmMg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_L0eLxqJA, m);
}

void Heavy_heavy::cVar_ueJm0PxM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_r9XBjXG8_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_uYyxy3fy, 0, m, &cIf_uYyxy3fy_sendMessage);
}

void Heavy_heavy::cBinop_AlrY7zYI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_xNXbyy0e_sendMessage);
}

void Heavy_heavy::cRandom_bzq8ngHL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_AlrY7zYI_sendMessage);
}

void Heavy_heavy::cUnop_xNXbyy0e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2200.0f, 0, m, &cBinop_cyx1y5a1_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_phR2ogEe_sendMessage);
}

void Heavy_heavy::cSlice_Ii1t9uTq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_bzq8ngHL, 1, m, &cRandom_bzq8ngHL_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_cJ6uwuwT_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Ii1t9uTq, 0, m, &cSlice_Ii1t9uTq_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_bzq8ngHL, 0, m, &cRandom_bzq8ngHL_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_1jJhYuEe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_E9WKDnsk, 0, m, NULL);
}

void Heavy_heavy::cBinop_LiMxaLFq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2v4bJZdI, 0, m, &cVar_2v4bJZdI_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_ygZ1lC6h, 1, m, &cPack_ygZ1lC6h_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_TY3k69Fu, 1, m, &cPack_TY3k69Fu_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_1jJhYuEe, 1, m, &cVar_1jJhYuEe_sendMessage);
}

void Heavy_heavy::cCast_nmYonMjk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_cJ6uwuwT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_RF9NWdr0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cCast_VPBhcks6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qvnFo3oZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cPack_TY3k69Fu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_KEXb0VGf, 0, m, NULL);
}

void Heavy_heavy::cPack_ygZ1lC6h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_E9WKDnsk, 0, m, NULL);
}

void Heavy_heavy::cBinop_phR2ogEe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_TY3k69Fu, 0, m, &cPack_TY3k69Fu_sendMessage);
}

void Heavy_heavy::cBinop_0TgkLDKx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_eH3joDva, m);
}

void Heavy_heavy::cMsg_AF2c8EBP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_iTnVV5Ll_sendMessage);
}

void Heavy_heavy::cBinop_iTnVV5Ll_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_C5D8CRZk, m);
}

void Heavy_heavy::cMsg_zOugvKsM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_C5D8CRZk, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_tOQiltmR, m);
}

void Heavy_heavy::cMsg_Vlc6aoBa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_0TgkLDKx_sendMessage);
}

void Heavy_heavy::cVar_ZYeR0pdJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_zVZJYiQI_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_oJgfcROz, 0, m, &cIf_oJgfcROz_sendMessage);
}

void Heavy_heavy::cIf_oJgfcROz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_ByaPHL98_sendMessage(_c, 0, m);
      cMsg_zOugvKsM_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_AF2c8EBP_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_4xwuQ14l_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_tOQiltmR, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_zVZJYiQI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_oJgfcROz, 1, m, &cIf_oJgfcROz_sendMessage);
}

void Heavy_heavy::cSystem_4GPB2WMb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7mx86Ash_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_MzH0qMUC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4GPB2WMb_sendMessage);
}

void Heavy_heavy::cBinop_75mSR0OU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Vlc6aoBa_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_4xwuQ14l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_b52y9SwE_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_ByaPHL98_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_4xwuQ14l_sendMessage);
}

void Heavy_heavy::cBinop_hEgewOqt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_TrCd14Ta, m);
}

void Heavy_heavy::cMsg_7mx86Ash_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_hEgewOqt_sendMessage);
}

void Heavy_heavy::cMsg_b52y9SwE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_75mSR0OU_sendMessage);
}

void Heavy_heavy::cPack_keylgRvG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_IwEzDoxB, 0, m, NULL);
}

void Heavy_heavy::cRandom_Yod2iFR0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_wrVqqmby_sendMessage);
}

void Heavy_heavy::cUnop_IsPANxt8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_1QW7TLmh_sendMessage);
}

void Heavy_heavy::cBinop_wrVqqmby_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_IsPANxt8_sendMessage);
}

void Heavy_heavy::cSwitchcase_BC9GLwIb_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_6QZjat3r, 0, m, &cSlice_6QZjat3r_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_Yod2iFR0, 0, m, &cRandom_Yod2iFR0_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_6QZjat3r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_Yod2iFR0, 1, m, &cRandom_Yod2iFR0_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_kisDrzLI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_sTmOYWGx, 1, m, &cRandom_sTmOYWGx_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_WDoFpOYQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_kisDrzLI, 0, m, &cSlice_kisDrzLI_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_sTmOYWGx, 0, m, &cRandom_sTmOYWGx_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cRandom_sTmOYWGx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_hlb4RMrT_sendMessage);
}

void Heavy_heavy::cBinop_hlb4RMrT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_yJEpdpym_sendMessage);
}

void Heavy_heavy::cUnop_yJEpdpym_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 50.0f, 0, m, &cBinop_fU1U26SK_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_RvoMb0gK_sendMessage);
}

void Heavy_heavy::cPack_kAhU9N0R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_qzAqjKPx, 0, m, NULL);
}

void Heavy_heavy::cBinop_RvoMb0gK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_kAhU9N0R, 0, m, &cPack_kAhU9N0R_sendMessage);
}

void Heavy_heavy::cCast_87rWADJE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_WDoFpOYQ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_1QW7TLmh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6TcJ2DHk, 0, m, &cVar_6TcJ2DHk_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_keylgRvG, 1, m, &cPack_keylgRvG_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_kAhU9N0R, 1, m, &cPack_kAhU9N0R_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_oW3h7CW3, 1, m, &cVar_oW3h7CW3_sendMessage);
}

void Heavy_heavy::cCast_fw2AUWam_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_q3WRsYFk, HV_BINOP_SUBTRACT, 1, m, &cBinop_q3WRsYFk_sendMessage);
}

void Heavy_heavy::cCast_SYWaSTsZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_c37KZiu5_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_axrxzeNV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_jibTD7tg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_5YAojeTB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BsKF74OW, HV_BINOP_ADD, 1, m, &cBinop_BsKF74OW_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_GcOhLTKl, HV_BINOP_ADD, 1, m, &cBinop_GcOhLTKl_sendMessage);
}

void Heavy_heavy::cMsg_Wc5N3Dk5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_PdPwX1Pa_sendMessage);
}

void Heavy_heavy::cSystem_PdPwX1Pa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ORz6E0PQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_ORz6E0PQ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_JzbLtFCF, HV_BINOP_MULTIPLY, 1, m, &cBinop_JzbLtFCF_sendMessage);
}

void Heavy_heavy::cCast_LiYJAko8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mOhPJhZP, HV_BINOP_DIVIDE, 0, m, &cBinop_mOhPJhZP_sendMessage);
}

void Heavy_heavy::cBinop_gdueiOU2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FNlnYqLK, 1, m, &cVar_FNlnYqLK_sendMessage);
}

void Heavy_heavy::cBinop_BsKF74OW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ElPMae08, 0, m, &cVar_ElPMae08_sendMessage);
}

void Heavy_heavy::cCast_wCk4O42Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_O6mWsWy1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fWAsLnWu_sendMessage);
}

void Heavy_heavy::cCast_heq6wA8A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BMuelKr4, 0, m, &cVar_BMuelKr4_sendMessage);
}

void Heavy_heavy::cSwitchcase_8mTXLOzw_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_heq6wA8A_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wCk4O42Y_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cCast_sp4uu7tW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9aJa6QL0_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_jtGuxkJ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BMuelKr4, 0, m, &cVar_BMuelKr4_sendMessage);
}

void Heavy_heavy::cCast_APkxPAXh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WpdsMI9f_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_ZkTeHr3E_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_APkxPAXh_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_ORz6E0PQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_ORz6E0PQ_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_mOhPJhZP, HV_BINOP_DIVIDE, 1, m, &cBinop_mOhPJhZP_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_bIpTtQjA, 0, m, &cVar_bIpTtQjA_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_Ps1MfG9Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_jibTD7tg_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_BsKF74OW, HV_BINOP_ADD, 1, m, &cBinop_BsKF74OW_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_GcOhLTKl, HV_BINOP_ADD, 1, m, &cBinop_GcOhLTKl_sendMessage);
}

void Heavy_heavy::cBinop_Ut5Jt6oO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FNlnYqLK, 1, m, &cVar_FNlnYqLK_sendMessage);
}

void Heavy_heavy::cSlice_PYmk0WRk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_jXzuKzku_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_jXzuKzku_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_UFniFl9f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7w2x8YPL_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wnE6Hqwl_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7w2x8YPL_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wnE6Hqwl_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_mMPVgFON_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_PYmk0WRk, 0, m, &cSlice_PYmk0WRk_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UFniFl9f, 0, m, &cSlice_UFniFl9f_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4wpfvrMx_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_cIWytnoj, 0, m, &cSlice_cIWytnoj_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_x4S5AiQh, 0, m, &cSlice_x4S5AiQh_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4UCsMBUB_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sp4uu7tW_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_LUL5eHrW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ZkTeHr3E_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_fWAsLnWu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jtGuxkJ9, 0, m, &cVar_jtGuxkJ9_sendMessage);
}

void Heavy_heavy::cMsg_WpdsMI9f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ORz6E0PQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_ORz6E0PQ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_mOhPJhZP, HV_BINOP_DIVIDE, 1, m, &cBinop_mOhPJhZP_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_bIpTtQjA, 0, m, &cVar_bIpTtQjA_sendMessage);
}

void Heavy_heavy::cCast_O6mWsWy1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ps1MfG9Z_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_4wpfvrMx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_V0CumtcB, 0, m, &cVar_V0CumtcB_sendMessage);
}

void Heavy_heavy::cBinop_ORz6E0PQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_I3D7hXrk_sendMessage);
}

void Heavy_heavy::cCast_wnE6Hqwl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oLEOvMNf_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_BsKF74OW, HV_BINOP_ADD, 0, m, &cBinop_BsKF74OW_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_BMuelKr4, 1, m, &cVar_BMuelKr4_sendMessage);
}

void Heavy_heavy::cBinop_ZBQHAAHP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5YAojeTB, HV_BINOP_DIVIDE, 0, m, &cBinop_5YAojeTB_sendMessage);
}

void Heavy_heavy::cCast_dRM52c3L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_swDxCvOd_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_3rqlyCRS, 0, m, &cDelay_3rqlyCRS_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_FNlnYqLK, 0, m, &cVar_FNlnYqLK_sendMessage);
}

void Heavy_heavy::cBinop_ksKQpBjn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_3rqlyCRS, 2, m, &cDelay_3rqlyCRS_sendMessage);
}

void Heavy_heavy::cBinop_8o1WCYh9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_ksKQpBjn_sendMessage);
}

void Heavy_heavy::cMsg_swDxCvOd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_3rqlyCRS, 0, m, &cDelay_3rqlyCRS_sendMessage);
}

void Heavy_heavy::cDelay_3rqlyCRS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_3rqlyCRS, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_3rqlyCRS, 0, m, &cDelay_3rqlyCRS_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_FNlnYqLK, 0, m, &cVar_FNlnYqLK_sendMessage);
}

void Heavy_heavy::cSwitchcase_jibTD7tg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_swDxCvOd_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_swDxCvOd_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dRM52c3L_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSystem_D22JdSbA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_5r8WWlh5_sendMessage);
}

void Heavy_heavy::cMsg_Qd0XGjYT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_D22JdSbA_sendMessage);
}

void Heavy_heavy::cBinop_5r8WWlh5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8o1WCYh9, HV_BINOP_MULTIPLY, 1, m, &cBinop_8o1WCYh9_sendMessage);
}

void Heavy_heavy::cVar_bIpTtQjA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8o1WCYh9, HV_BINOP_MULTIPLY, 0, m, &cBinop_8o1WCYh9_sendMessage);
}

void Heavy_heavy::cCast_oLEOvMNf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ps1MfG9Z_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_V0CumtcB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_M4BWOAmR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LiYJAko8_sendMessage);
}

void Heavy_heavy::cBinop_GcOhLTKl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BMuelKr4, 1, m, &cVar_BMuelKr4_sendMessage);
}

void Heavy_heavy::cVar_ElPMae08_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZBQHAAHP, HV_BINOP_SUBTRACT, 1, m, &cBinop_ZBQHAAHP_sendMessage);
}

void Heavy_heavy::cCast_4xhKOhrl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jtGuxkJ9, 1, m, &cVar_jtGuxkJ9_sendMessage);
}

void Heavy_heavy::cVar_FNlnYqLK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gdueiOU2, HV_BINOP_SUBTRACT, 0, m, &cBinop_gdueiOU2_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_jZdRIBz8_sendMessage);
}

void Heavy_heavy::cCast_7w2x8YPL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jXzuKzku_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_jXzuKzku_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_jibTD7tg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cSlice_x4S5AiQh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4xhKOhrl_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_L28smmba_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_cIWytnoj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_M4BWOAmR_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LiYJAko8_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_mOhPJhZP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5YAojeTB, HV_BINOP_DIVIDE, 1, m, &cBinop_5YAojeTB_sendMessage);
}

void Heavy_heavy::cCast_L28smmba_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZBQHAAHP, HV_BINOP_SUBTRACT, 0, m, &cBinop_ZBQHAAHP_sendMessage);
}

void Heavy_heavy::cBinop_JzbLtFCF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Ut5Jt6oO_sendMessage);
}

void Heavy_heavy::cVar_BMuelKr4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GcOhLTKl, HV_BINOP_ADD, 0, m, &cBinop_GcOhLTKl_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_BsKF74OW, HV_BINOP_ADD, 0, m, &cBinop_BsKF74OW_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NxCOoRrX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KvHUuuB6_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XEIgObdU_sendMessage);
}

void Heavy_heavy::cMsg_9aJa6QL0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_V0CumtcB, 1, m, &cVar_V0CumtcB_sendMessage);
}

void Heavy_heavy::cCast_M4BWOAmR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JzbLtFCF, HV_BINOP_MULTIPLY, 0, m, &cBinop_JzbLtFCF_sendMessage);
}

void Heavy_heavy::cBinop_jZdRIBz8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_8mTXLOzw_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_I3D7hXrk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gdueiOU2, HV_BINOP_SUBTRACT, 1, m, &cBinop_gdueiOU2_sendMessage);
}

void Heavy_heavy::cCast_4UCsMBUB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_axrxzeNV_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_yubzW2jB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_0ilGu2Vk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_RlTFzIp6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_019hSPxh_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SYWaSTsZ_sendMessage);
}

void Heavy_heavy::cCast_NxCOoRrX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sA9sve28, HV_BINOP_SUBTRACT, 1, m, &cBinop_sA9sve28_sendMessage);
}

void Heavy_heavy::cSlice_5LOzwlSL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_Y3EJa0kH, 1, m, &cRandom_Y3EJa0kH_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_0ilGu2Vk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_5LOzwlSL, 0, m, &cSlice_5LOzwlSL_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_Y3EJa0kH, 0, m, &cRandom_Y3EJa0kH_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cRandom_Y3EJa0kH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_g98SmBnT_sendMessage);
}

void Heavy_heavy::cBinop_g98SmBnT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_wKeVyU0p_sendMessage);
}

void Heavy_heavy::cUnop_wKeVyU0p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_dYrSkG7B_sendMessage);
}

void Heavy_heavy::cCast_019hSPxh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BOxzA5dp, HV_BINOP_SUBTRACT, 1, m, &cBinop_BOxzA5dp_sendMessage);
}

void Heavy_heavy::cBinop_dYrSkG7B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_WjlGm9Rx, 0, m, &cPack_WjlGm9Rx_sendMessage);
}

void Heavy_heavy::cMsg_c37KZiu5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_BOxzA5dp, HV_BINOP_SUBTRACT, 0, m, &cBinop_BOxzA5dp_sendMessage);
}

void Heavy_heavy::cCast_1Si7Bb5X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RlTFzIp6, HV_BINOP_MULTIPLY, 0, m, &cBinop_RlTFzIp6_sendMessage);
}

void Heavy_heavy::cBinop_BOxzA5dp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_cb2cn9de_sendMessage);
}

void Heavy_heavy::cRandom_ViB4JZS4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_dA03WbCn_sendMessage);
}

void Heavy_heavy::cSwitchcase_MV8FmhQ9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZKhS926Y, 0, m, &cSlice_ZKhS926Y_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_ViB4JZS4, 0, m, &cRandom_ViB4JZS4_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cUnop_QWjkUh8R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_FhSjRp1Z_sendMessage);
}

void Heavy_heavy::cBinop_dA03WbCn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_QWjkUh8R_sendMessage);
}

void Heavy_heavy::cSlice_ZKhS926Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_ViB4JZS4, 1, m, &cRandom_ViB4JZS4_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cPack_WjlGm9Rx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_mMPVgFON_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_YVrQz62y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_ibnCoyvZ, 0, m, &cDelay_ibnCoyvZ_sendMessage);
}

void Heavy_heavy::cSwitchcase_p8j0FNTn_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_mFZa60Ha_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_mFZa60Ha_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_ibnCoyvZ, 1, m, &cDelay_ibnCoyvZ_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YVrQz62y_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cDelay_ibnCoyvZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ibnCoyvZ, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fhfN8uo4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yubzW2jB_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4B6PqfA7_sendMessage);
}

void Heavy_heavy::cMsg_mFZa60Ha_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_ibnCoyvZ, 0, m, &cDelay_ibnCoyvZ_sendMessage);
}

void Heavy_heavy::cBinop_FhSjRp1Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_WjlGm9Rx, 1, m, &cPack_WjlGm9Rx_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ibnCoyvZ, 1, m, &cDelay_ibnCoyvZ_sendMessage);
}

void Heavy_heavy::cCast_4B6PqfA7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_p8j0FNTn_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_XEIgObdU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EDokS0Oi_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1Si7Bb5X_sendMessage);
}

void Heavy_heavy::cCast_B1XFdOwW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_smRWD7hr_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_EDokS0Oi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RlTFzIp6, HV_BINOP_MULTIPLY, 1, m, &cBinop_RlTFzIp6_sendMessage);
}

void Heavy_heavy::cBinop_U4Otck4a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fw2AUWam_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_B1XFdOwW_sendMessage);
}

void Heavy_heavy::cBinop_xP9DbTIA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_aHemxl1r, m);
}

void Heavy_heavy::cMsg_smRWD7hr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_q3WRsYFk, HV_BINOP_SUBTRACT, 0, m, &cBinop_q3WRsYFk_sendMessage);
}

void Heavy_heavy::cBinop_cb2cn9de_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_NLskUsnD, m);
}

void Heavy_heavy::cBinop_q3WRsYFk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_xP9DbTIA_sendMessage);
}

void Heavy_heavy::cBinop_sA9sve28_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uEbr11lz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rQKrcRHt_sendMessage);
}

void Heavy_heavy::cMsg_ZcZyQeZ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_sA9sve28, HV_BINOP_SUBTRACT, 0, m, &cBinop_sA9sve28_sendMessage);
}

void Heavy_heavy::cCast_uEbr11lz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_U4Otck4a, HV_BINOP_MULTIPLY, 1, m, &cBinop_U4Otck4a_sendMessage);
}

void Heavy_heavy::cCast_fhfN8uo4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_MV8FmhQ9_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_KvHUuuB6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZcZyQeZ0_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_rQKrcRHt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_U4Otck4a, HV_BINOP_MULTIPLY, 0, m, &cBinop_U4Otck4a_sendMessage);
}

void Heavy_heavy::cBinop_fU1U26SK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_keylgRvG, 0, m, &cPack_keylgRvG_sendMessage);
}

void Heavy_heavy::cCast_dQ0a971v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_BC9GLwIb_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_oW3h7CW3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_IwEzDoxB, 0, m, NULL);
}

void Heavy_heavy::cSwitchcase_PvLQSN2a_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_GYOmcx0g_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_GYOmcx0g_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sC7xDs49_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_pqe65KEG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XrGiiRUK, HV_BINOP_MULTIPLY, 1, m, &cBinop_XrGiiRUK_sendMessage);
}

void Heavy_heavy::cSystem_1eiSRkdu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_pqe65KEG_sendMessage);
}

void Heavy_heavy::cMsg_hGDFTKHL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_1eiSRkdu_sendMessage);
}

void Heavy_heavy::cBinop_t6TVqR6j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZEz8RaYe, 2, m, &cDelay_ZEz8RaYe_sendMessage);
}

void Heavy_heavy::cMsg_GYOmcx0g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZEz8RaYe, 0, m, &cDelay_ZEz8RaYe_sendMessage);
}

void Heavy_heavy::cBinop_XrGiiRUK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_t6TVqR6j_sendMessage);
}

void Heavy_heavy::cDelay_ZEz8RaYe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ZEz8RaYe, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZEz8RaYe, 0, m, &cDelay_ZEz8RaYe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1jVx22Xb_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0UXyQRF5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_87rWADJE_sendMessage);
}

void Heavy_heavy::cVar_6TcJ2DHk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XrGiiRUK, HV_BINOP_MULTIPLY, 0, m, &cBinop_XrGiiRUK_sendMessage);
}

void Heavy_heavy::cCast_sC7xDs49_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GYOmcx0g_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZEz8RaYe, 0, m, &cDelay_ZEz8RaYe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1jVx22Xb_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0UXyQRF5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_87rWADJE_sendMessage);
}

void Heavy_heavy::cCast_9xnvz4w0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oW3h7CW3, 0, m, &cVar_oW3h7CW3_sendMessage);
}

void Heavy_heavy::cCast_0UXyQRF5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cCast_1jVx22Xb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_BC9GLwIb_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cReceive_YmZQeJnO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vV4bVJU3_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_amzxf86K, 0, m, &cVar_amzxf86K_sendMessage);
  cMsg_16o8EXCk_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_FTnV3t4r, 0, m, &cVar_FTnV3t4r_sendMessage);
  cMsg_lF52VHNM_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_23fKiXWc, 0, m, &cVar_23fKiXWc_sendMessage);
  cMsg_Ucx6lPDe_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ghgTvjgd, 0, m, &cVar_ghgTvjgd_sendMessage);
  cMsg_nVD9P2jT_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_iYKNH5wS, 0, m, &cVar_iYKNH5wS_sendMessage);
  cMsg_DpWwCXy2_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_xxR4Jj7S, 0, m, &cVar_xxR4Jj7S_sendMessage);
  cMsg_6KBcQICL_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_GoaqM1Ns, 0, m, &cVar_GoaqM1Ns_sendMessage);
  cMsg_cVar5Xko_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_aJimzjZ7, 0, m, &cVar_aJimzjZ7_sendMessage);
  cMsg_PwetFXb1_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_KPVqSDrx, 0, m, &cVar_KPVqSDrx_sendMessage);
  cMsg_Qd0XGjYT_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_bIpTtQjA, 0, m, &cVar_bIpTtQjA_sendMessage);
  cMsg_FfR3cHM2_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_40vZXOpx, 0, m, &cVar_40vZXOpx_sendMessage);
  cMsg_X4iMmcMq_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_HhmnR1Xe, 0, m, &cVar_HhmnR1Xe_sendMessage);
  cMsg_45hkMCKx_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_fBJAw45H, 0, m, &cVar_fBJAw45H_sendMessage);
  cMsg_dZmavg6x_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_HKF97XFp, 0, m, &cVar_HKF97XFp_sendMessage);
  cMsg_ZrNMMFVf_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_OO5b4LSF, 0, m, &cVar_OO5b4LSF_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_4PesrvYz, 0, m, &cVar_4PesrvYz_sendMessage);
  cMsg_I82UomOM_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_BAEFLpbx, 0, m, &cVar_BAEFLpbx_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_8Bl9gR6f, 0, m, &cVar_8Bl9gR6f_sendMessage);
  cMsg_LbcHfn9A_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_obWTlvyO, 0, m, &cVar_obWTlvyO_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_IySJM3vd, 0, m, &cVar_IySJM3vd_sendMessage);
  cMsg_pxVlWSkJ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_p6MQDhX2, 0, m, &cVar_p6MQDhX2_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_yeaZNkVt, 0, m, &cVar_yeaZNkVt_sendMessage);
  cMsg_vruw1k34_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_8dZKI8Gt, 0, m, &cVar_8dZKI8Gt_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_3tUX1U4J, 0, m, &cVar_3tUX1U4J_sendMessage);
  cMsg_OoIxqR37_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_2bkvEzBo, 0, m, &cVar_2bkvEzBo_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_HmSCYE0p, 0, m, &cVar_HmSCYE0p_sendMessage);
  cMsg_dnPVO198_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_CUKB2qKq, 0, m, &cVar_CUKB2qKq_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_67LjuLo9, 0, m, &cVar_67LjuLo9_sendMessage);
  cMsg_sl0xcl0U_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_09tVJJTD, 0, m, &cVar_09tVJJTD_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_IqJMliuY, 0, m, &cVar_IqJMliuY_sendMessage);
  cMsg_S1h1z2UX_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_nHbpruPK, 0, m, &cVar_nHbpruPK_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_XNBOQQrI, 0, m, &cVar_XNBOQQrI_sendMessage);
  cMsg_Wc5N3Dk5_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ElPMae08, 0, m, &cVar_ElPMae08_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_LUL5eHrW, 0, m, &cVar_LUL5eHrW_sendMessage);
  cMsg_WGCfd8cY_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_W9yZUo8c, 0, m, &cVar_W9yZUo8c_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_LoT7FDs7, 0, m, &cVar_LoT7FDs7_sendMessage);
  cMsg_xSCK0qIT_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_IeZ4628n, 0, m, &cVar_IeZ4628n_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_nNqQh30f, 0, m, &cVar_nNqQh30f_sendMessage);
  cMsg_cSHnFAeo_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_SuorAx0e, 0, m, &cVar_SuorAx0e_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ZsDmhRR9, 0, m, &cVar_ZsDmhRR9_sendMessage);
  cMsg_cuvcajGw_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_6ZgCzlGX, 0, m, &cVar_6ZgCzlGX_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_x7G0rKFK, 0, m, &cVar_x7G0rKFK_sendMessage);
  cMsg_DM2mEMQw_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ecwi65FG, 0, m, &cVar_ecwi65FG_sendMessage);
  cMsg_12Ii3JQg_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_DakiSnsO, 0, m, &cVar_DakiSnsO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ALvPGfT6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FdWbyY7h_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gQ2yxcRS_sendMessage);
  cMsg_93g0hlGG_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ouuiTvBc, 0, m, &cVar_ouuiTvBc_sendMessage);
  cMsg_db3sVi7E_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tjN5QAKy, 0, m, &cVar_tjN5QAKy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iGYWOIOP_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_30eRTSOq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_23FJda46_sendMessage);
  cMsg_n4c94QVB_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ERbUh6Uq, 0, m, &cVar_ERbUh6Uq_sendMessage);
  cMsg_ZtKfVUN9_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_e4nueUZa, 0, m, &cVar_e4nueUZa_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oce36AKy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ujutyXzR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dSyzQVZK_sendMessage);
  cMsg_bnRo9fdi_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_sPHvVqh5, 0, m, &cVar_sPHvVqh5_sendMessage);
  cMsg_ULsZ71T4_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_2p5IwkK5, 0, m, &cVar_2p5IwkK5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZFHBrH1y_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JKdi5iKp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_l50B0HpD_sendMessage);
  cMsg_sYlH769W_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_TP3gCcDH, 0, m, &cVar_TP3gCcDH_sendMessage);
  cMsg_94yreEd4_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_A990utt2, 0, m, &cVar_A990utt2_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_THDP5b3o_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k190PjmS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KRsmvqAM_sendMessage);
  cMsg_gs0NEOjb_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_YfccOgfu, 0, m, &cVar_YfccOgfu_sendMessage);
  cMsg_NYIT2U4l_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tfWgaDVq, 0, m, &cVar_tfWgaDVq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RqAP0suQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lBUl0qsz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_y546vo2m_sendMessage);
  cMsg_dWAmwzTX_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tIVfSkKL, 0, m, &cVar_tIVfSkKL_sendMessage);
  cMsg_jpM5xtSI_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Fl0l3xv1, 0, m, &cVar_Fl0l3xv1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gztVqtVY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rplWzB1O_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_y57nYac1_sendMessage);
  cMsg_7a7cuY07_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_juThJizj, 0, m, &cVar_juThJizj_sendMessage);
  cMsg_PQlT8BKl_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_wDOCUerd, 0, m, &cVar_wDOCUerd_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MsKQ7meg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KixNo5Ko_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UGzMNbuq_sendMessage);
  cMsg_nBeeTH0F_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Mo1Uu27O, 0, m, &cVar_Mo1Uu27O_sendMessage);
  cMsg_HOexn7jp_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tyrntw7r, 0, m, &cVar_tyrntw7r_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vZb1JLfg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jfvasz5V_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zQHakzqE_sendMessage);
  cMsg_hGDFTKHL_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_6TcJ2DHk, 0, m, &cVar_6TcJ2DHk_sendMessage);
  cMsg_MzH0qMUC_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ZYeR0pdJ, 0, m, &cVar_ZYeR0pdJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fhfN8uo4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yubzW2jB_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4B6PqfA7_sendMessage);
  cMsg_Q4MW8b3S_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ToqqvItq, 0, m, &cVar_ToqqvItq_sendMessage);
  cMsg_qJcoaxMn_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_iT2t835o, 0, m, &cVar_iT2t835o_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4RqCWwNl_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3XBx86BH_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_f3aEzIr5_sendMessage);
  cMsg_ANvI1VAF_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_9tVHY68K, 0, m, &cVar_9tVHY68K_sendMessage);
  cMsg_q6LDJgtZ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_E9ewRqCz, 0, m, &cVar_E9ewRqCz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QqsVuP3o_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Qpj0CU5w_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UpB1PbZE_sendMessage);
  cMsg_SNxDmTuN_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_2v4bJZdI, 0, m, &cVar_2v4bJZdI_sendMessage);
  cMsg_PcHHcwao_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ueJm0PxM, 0, m, &cVar_ueJm0PxM_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_klPcM3V0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bnbLizzs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UeM2fsii_sendMessage);
  cMsg_pWsibWbd_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_41DHiBEr, 0, m, &cVar_41DHiBEr_sendMessage);
  cMsg_9gRnD7xS_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_FbjyMdka, 0, m, &cVar_FbjyMdka_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BIbkNlns_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jft6mLpv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DIkIn1iW_sendMessage);
  cSwitchcase_7DOTst4s_onMessage(_c, NULL, 0, m, NULL);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1eHfsKui_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9XVAHL5f_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xQ4gJyOr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_L9yKo0g5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DirP31Nu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mpvWzIHJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DmlvVede_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_I33IS3Ff_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jYWcYx2U_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2dabsVrQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VREJaYcU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_R8yGLP9y_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7tqfjrpp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1SFCzRNe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3gSulOKL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0fqinLK6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GefLQS19_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_j5I1O8KB_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dQ0a971v_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9xnvz4w0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LCdFOZuo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6XidZSA9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_S4YsSkIb_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kLdJvAc5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_n32TNtvs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mrED7SMC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Zmrai8ta_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_b7UJsueB_sendMessage);
  cMsg_kUVMHSIH_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_JC3CdxHC, 0, m, &cVar_JC3CdxHC_sendMessage);
  cMsg_0Jd0e7lb_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_w1NqA2zF, 0, m, &cVar_w1NqA2zF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_O983N15r_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3zVCsAif_sendMessage);
}

void Heavy_heavy::cMsg_mD9pCFrM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_TwdazLLj, 0, m, &cVar_TwdazLLj_sendMessage);
}

void Heavy_heavy::cSwitchcase_7DOTst4s_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_vGC2aguW, 0, m, &cSlice_vGC2aguW_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_D8KlX458, 0, m, &cRandom_D8KlX458_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cUnop_Gj7CcNld_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TkcWWN0a_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSlice_vGC2aguW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_D8KlX458, 1, m, &cRandom_D8KlX458_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_1bis8pgP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_Gj7CcNld_sendMessage);
}

void Heavy_heavy::cRandom_D8KlX458_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8388610.0f, 0, m, &cBinop_1bis8pgP_sendMessage);
}

void Heavy_heavy::cMsg_TkcWWN0a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 1.0f);
  sVari_onMessage(_c, &Context(_c)->sVari_QIpzESlI, m);
}

void Heavy_heavy::cPack_AOo1ERhF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Rhge9GwQ, 0, m, NULL);
}

void Heavy_heavy::cCast_CMt2jeXD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cBinop_tbPGyasl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_lpXbRZCa, 0, m, &cPack_lpXbRZCa_sendMessage);
}

void Heavy_heavy::cMsg_prL5fzMB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_kEi9tOFr_sendMessage);
}

void Heavy_heavy::cIf_7eb2eFv4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_M6ZjW0Kp_sendMessage(_c, 0, m);
      cMsg_KDUGNx1V_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_prL5fzMB_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_V6JXwL0N_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_l9CsvHDh, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_u5elWQZB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_7eb2eFv4, 1, m, &cIf_7eb2eFv4_sendMessage);
}

void Heavy_heavy::cBinop_cCEuxiSJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Gly6QayS, m);
}

void Heavy_heavy::cBinop_vp9zfPpl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_qA2FrPzB, m);
}

void Heavy_heavy::cSystem_1UKiisra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_00RjS4ub_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_HOexn7jp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_1UKiisra_sendMessage);
}

void Heavy_heavy::cMsg_00RjS4ub_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_vp9zfPpl_sendMessage);
}

void Heavy_heavy::cBinop_V6JXwL0N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zUmJxsAz_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_zUmJxsAz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_IX4nOaKE_sendMessage);
}

void Heavy_heavy::cMsg_KDUGNx1V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_u3gJ9b0Z, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_l9CsvHDh, m);
}

void Heavy_heavy::cMsg_M6ZjW0Kp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_V6JXwL0N_sendMessage);
}

void Heavy_heavy::cBinop_IX4nOaKE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_spSuefzs_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_tyrntw7r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_u5elWQZB_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_7eb2eFv4, 0, m, &cIf_7eb2eFv4_sendMessage);
}

void Heavy_heavy::cMsg_spSuefzs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_cCEuxiSJ_sendMessage);
}

void Heavy_heavy::cBinop_kEi9tOFr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_u3gJ9b0Z, m);
}

void Heavy_heavy::cCast_GefLQS19_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_jy6agGlR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_KvIsbEHX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_sFdygKRL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_Mo1Uu27O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rMCao4aO, HV_BINOP_MULTIPLY, 0, m, &cBinop_rMCao4aO_sendMessage);
}

void Heavy_heavy::cMsg_nBeeTH0F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_uDvjrsuF_sendMessage);
}

void Heavy_heavy::cSystem_uDvjrsuF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_z31oPenJ_sendMessage);
}

void Heavy_heavy::cBinop_KMpA9LH5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_2YQAj7ho, 2, m, &cDelay_2YQAj7ho_sendMessage);
}

void Heavy_heavy::cSwitchcase_gvgTed6A_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_2K35d9Gg_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_2K35d9Gg_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_S1WK3qlu_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_S1WK3qlu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2K35d9Gg_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_2YQAj7ho, 0, m, &cDelay_2YQAj7ho_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Q62SQoIB_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CMt2jeXD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KvIsbEHX_sendMessage);
}

void Heavy_heavy::cDelay_2YQAj7ho_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_2YQAj7ho, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_2YQAj7ho, 0, m, &cDelay_2YQAj7ho_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Q62SQoIB_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CMt2jeXD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KvIsbEHX_sendMessage);
}

void Heavy_heavy::cBinop_z31oPenJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rMCao4aO, HV_BINOP_MULTIPLY, 1, m, &cBinop_rMCao4aO_sendMessage);
}

void Heavy_heavy::cBinop_rMCao4aO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_KMpA9LH5_sendMessage);
}

void Heavy_heavy::cMsg_2K35d9Gg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_2YQAj7ho, 0, m, &cDelay_2YQAj7ho_sendMessage);
}

void Heavy_heavy::cCast_j5I1O8KB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3GtumH4L, 0, m, &cVar_3GtumH4L_sendMessage);
}

void Heavy_heavy::cBinop_IByOqXef_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Mo1Uu27O, 0, m, &cVar_Mo1Uu27O_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_AOo1ERhF, 1, m, &cPack_AOo1ERhF_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_lpXbRZCa, 1, m, &cPack_lpXbRZCa_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_3GtumH4L, 1, m, &cVar_3GtumH4L_sendMessage);
}

void Heavy_heavy::cCast_Q62SQoIB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_jy6agGlR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cPack_lpXbRZCa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_2xs1wZui, 0, m, NULL);
}

void Heavy_heavy::cSwitchcase_jy6agGlR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZNNjHzdX, 0, m, &cSlice_ZNNjHzdX_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_r9Or8uRc, 0, m, &cRandom_r9Or8uRc_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cRandom_r9Or8uRc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_SursRW55_sendMessage);
}

void Heavy_heavy::cBinop_SursRW55_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_TvywtOek_sendMessage);
}

void Heavy_heavy::cUnop_TvywtOek_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_IByOqXef_sendMessage);
}

void Heavy_heavy::cSlice_ZNNjHzdX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_r9Or8uRc, 1, m, &cRandom_r9Or8uRc_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cMsg_qwA0kUdA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_GHoDc4ML, HV_BINOP_SUBTRACT, 0, m, &cBinop_GHoDc4ML_sendMessage);
}

void Heavy_heavy::cCast_FBhlHMTi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_g0dNUC0D, HV_BINOP_SUBTRACT, 1, m, &cBinop_g0dNUC0D_sendMessage);
}

void Heavy_heavy::cSlice_DNjPmuVt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_zcSXQ5t8, 1, m, &cRandom_zcSXQ5t8_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_EmWKG8Oo_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_DNjPmuVt, 0, m, &cSlice_DNjPmuVt_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_zcSXQ5t8, 0, m, &cRandom_zcSXQ5t8_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cRandom_zcSXQ5t8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_rTiRv2sJ_sendMessage);
}

void Heavy_heavy::cBinop_rTiRv2sJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_sJyfKxiN_sendMessage);
}

void Heavy_heavy::cUnop_sJyfKxiN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_SrFfgxFR_sendMessage);
}

void Heavy_heavy::cCast_ovrTLuuQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jSGDMzLd_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_qTacrRcF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CZInpdc0, HV_BINOP_SUBTRACT, 1, m, &cBinop_CZInpdc0_sendMessage);
}

void Heavy_heavy::cBinop_GHoDc4ML_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QeYKnCqI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rc2CnS8X_sendMessage);
}

void Heavy_heavy::cMsg_jSGDMzLd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_g0dNUC0D, HV_BINOP_SUBTRACT, 0, m, &cBinop_g0dNUC0D_sendMessage);
}

void Heavy_heavy::cBinop_CZInpdc0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_Yhohw2Ca_sendMessage);
}

void Heavy_heavy::cCast_rc2CnS8X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Z3o06zLu, HV_BINOP_MULTIPLY, 0, m, &cBinop_Z3o06zLu_sendMessage);
}

void Heavy_heavy::cCast_CZDzNfd9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GHoDc4ML, HV_BINOP_SUBTRACT, 1, m, &cBinop_GHoDc4ML_sendMessage);
}

void Heavy_heavy::cBinop_nohT8uK7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_93LLaSdV, 0, m, &cPack_93LLaSdV_sendMessage);
}

void Heavy_heavy::cBinop_LJmNcHa7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gINbVd4c, m);
}

void Heavy_heavy::cCast_QeYKnCqI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Z3o06zLu, HV_BINOP_MULTIPLY, 1, m, &cBinop_Z3o06zLu_sendMessage);
}

void Heavy_heavy::cBinop_SrFfgxFR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_93LLaSdV, 1, m, &cPack_93LLaSdV_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_c6UQ9NRw, 1, m, &cDelay_c6UQ9NRw_sendMessage);
}

void Heavy_heavy::cCast_tH35Ekep_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_INXPXbgt_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_ZVvKXRoj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_A6b2Sso1, HV_BINOP_MULTIPLY, 0, m, &cBinop_A6b2Sso1_sendMessage);
}

void Heavy_heavy::cBinop_Yhohw2Ca_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zQ0jcWar, m);
}

void Heavy_heavy::cCast_Y7bnQjf0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_c6UQ9NRw, 0, m, &cDelay_c6UQ9NRw_sendMessage);
}

void Heavy_heavy::cSwitchcase_osfwk8qu_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_Q837cD9b_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_Q837cD9b_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_c6UQ9NRw, 1, m, &cDelay_c6UQ9NRw_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Y7bnQjf0_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_Q837cD9b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_c6UQ9NRw, 0, m, &cDelay_c6UQ9NRw_sendMessage);
}

void Heavy_heavy::cDelay_c6UQ9NRw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_c6UQ9NRw, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vZb1JLfg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jfvasz5V_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zQHakzqE_sendMessage);
}

void Heavy_heavy::cUnop_FWR5PjUg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_nohT8uK7_sendMessage);
}

void Heavy_heavy::cSlice_GdCMjxiH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_gJ47CLjE, 1, m, &cRandom_gJ47CLjE_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_VLmRUHob_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_GdCMjxiH, 0, m, &cSlice_GdCMjxiH_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_gJ47CLjE, 0, m, &cRandom_gJ47CLjE_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_NyomFej7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_FWR5PjUg_sendMessage);
}

void Heavy_heavy::cRandom_gJ47CLjE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_NyomFej7_sendMessage);
}

void Heavy_heavy::cCast_pEioYfct_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5sF0Ct1A_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZVvKXRoj_sendMessage);
}

void Heavy_heavy::cBinop_g0dNUC0D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_LJmNcHa7_sendMessage);
}

void Heavy_heavy::cBinop_Z3o06zLu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FBhlHMTi_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ovrTLuuQ_sendMessage);
}

void Heavy_heavy::cCast_LDCRhIgh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_n29sPNz7_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_isn22hOs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_jhDSeYc2_sendMessage);
}

void Heavy_heavy::cBinop_Um3Ed7Ed_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uuWNfWFE, 1, m, &cVar_uuWNfWFE_sendMessage);
}

void Heavy_heavy::cVar_nHbpruPK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2XO6qiaQ, HV_BINOP_SUBTRACT, 1, m, &cBinop_2XO6qiaQ_sendMessage);
}

void Heavy_heavy::cMsg_gRdKHU7g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_mLYb0TUO, 1, m, &cVar_mLYb0TUO_sendMessage);
}

void Heavy_heavy::cVar_wTDeKp4R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yAlTSHDA, 0, m, &cVar_yAlTSHDA_sendMessage);
}

void Heavy_heavy::cBinop_7c2Dh8iO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1HksNi0J, HV_BINOP_ADD, 1, m, &cBinop_1HksNi0J_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_T5n0UNf5, HV_BINOP_ADD, 1, m, &cBinop_T5n0UNf5_sendMessage);
}

void Heavy_heavy::cMsg_QGqypik6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_6DwvBS2d_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cSlice_uMnoeakA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GzPgBZp4_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_89Lfu6Om_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_Q9mv0hXM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dtxhYFYi_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EYaAvz7v_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cCast_NwufYW1c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wTDeKp4R, 0, m, &cVar_wTDeKp4R_sendMessage);
}

void Heavy_heavy::cCast_gW3VwjXk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QGqypik6_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_n29sPNz7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_6DwvBS2d_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1HksNi0J, HV_BINOP_ADD, 1, m, &cBinop_1HksNi0J_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_T5n0UNf5, HV_BINOP_ADD, 1, m, &cBinop_T5n0UNf5_sendMessage);
}

void Heavy_heavy::cCast_r5j4O008_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_n29sPNz7_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_ErtTfBlN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gRdKHU7g_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_89Lfu6Om_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sZ3lR3ZR, HV_BINOP_DIVIDE, 0, m, &cBinop_sZ3lR3ZR_sendMessage);
}

void Heavy_heavy::cCast_XbPMMESo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mLYb0TUO, 0, m, &cVar_mLYb0TUO_sendMessage);
}

void Heavy_heavy::cCast_k71fc3dJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jRJiggBy_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_uuWNfWFE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FQY0y3oh, HV_BINOP_SUBTRACT, 0, m, &cBinop_FQY0y3oh_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_QZKMwOx4_sendMessage);
}

void Heavy_heavy::cVar_mLYb0TUO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GzPgBZp4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_89Lfu6Om_sendMessage);
}

void Heavy_heavy::cVar_yAlTSHDA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_T5n0UNf5, HV_BINOP_ADD, 0, m, &cBinop_T5n0UNf5_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1HksNi0J, HV_BINOP_ADD, 0, m, &cBinop_1HksNi0J_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CZDzNfd9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mMYQWmWk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pEioYfct_sendMessage);
}

void Heavy_heavy::cSlice_itYYs6cN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gW3VwjXk_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2O8aDOB6_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gW3VwjXk_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2O8aDOB6_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_tTMJ3spe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_QGqypik6_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_QGqypik6_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_EQDSBjlQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_tTMJ3spe, 0, m, &cSlice_tTMJ3spe_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_itYYs6cN, 0, m, &cSlice_itYYs6cN_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XbPMMESo_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_uMnoeakA, 0, m, &cSlice_uMnoeakA_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Q9mv0hXM, 0, m, &cSlice_Q9mv0hXM_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k71fc3dJ_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ErtTfBlN_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_jRJiggBy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_6DwvBS2d_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_1HksNi0J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nHbpruPK, 0, m, &cVar_nHbpruPK_sendMessage);
}

void Heavy_heavy::cVar_XNBOQQrI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_HSPxLYcH_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_2XO6qiaQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7c2Dh8iO, HV_BINOP_DIVIDE, 0, m, &cBinop_7c2Dh8iO_sendMessage);
}

void Heavy_heavy::cBinop_T5n0UNf5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yAlTSHDA, 1, m, &cVar_yAlTSHDA_sendMessage);
}

void Heavy_heavy::cMsg_S1h1z2UX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_lzW5hIQg_sendMessage);
}

void Heavy_heavy::cSystem_lzW5hIQg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_isn22hOs, HV_BINOP_MULTIPLY, 1, m, &cBinop_isn22hOs_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ojtvEUmC, HV_BINOP_MULTIPLY, 1, m, &cBinop_ojtvEUmC_sendMessage);
}

void Heavy_heavy::cCast_dtxhYFYi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wTDeKp4R, 1, m, &cVar_wTDeKp4R_sendMessage);
}

void Heavy_heavy::cCast_2O8aDOB6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LDCRhIgh_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1HksNi0J, HV_BINOP_ADD, 0, m, &cBinop_1HksNi0J_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_yAlTSHDA, 1, m, &cVar_yAlTSHDA_sendMessage);
}

void Heavy_heavy::cBinop_ojtvEUmC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Um3Ed7Ed_sendMessage);
}

void Heavy_heavy::cBinop_jhDSeYc2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FQY0y3oh, HV_BINOP_SUBTRACT, 1, m, &cBinop_FQY0y3oh_sendMessage);
}

void Heavy_heavy::cMsg_JhBRi4hO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_isn22hOs, HV_BINOP_MULTIPLY, 0, m, &cBinop_isn22hOs_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_sZ3lR3ZR, HV_BINOP_DIVIDE, 1, m, &cBinop_sZ3lR3ZR_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_KPVqSDrx, 0, m, &cVar_KPVqSDrx_sendMessage);
}

void Heavy_heavy::cCast_GzPgBZp4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ojtvEUmC, HV_BINOP_MULTIPLY, 0, m, &cBinop_ojtvEUmC_sendMessage);
}

void Heavy_heavy::cCast_SF7dosbF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_r5j4O008_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NwufYW1c_sendMessage);
}

void Heavy_heavy::cCast_cxniXSQs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yAlTSHDA, 0, m, &cVar_yAlTSHDA_sendMessage);
}

void Heavy_heavy::cSwitchcase_8fLVqTtI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cxniXSQs_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SF7dosbF_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cMsg_PwetFXb1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MzqrNFWg_sendMessage);
}

void Heavy_heavy::cSystem_MzqrNFWg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_DNjE3mSS_sendMessage);
}

void Heavy_heavy::cBinop_XK8XSidg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_1arEEvu2_sendMessage);
}

void Heavy_heavy::cDelay_luqGa9ck_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_luqGa9ck, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_luqGa9ck, 0, m, &cDelay_luqGa9ck_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_uuWNfWFE, 0, m, &cVar_uuWNfWFE_sendMessage);
}

void Heavy_heavy::cBinop_1arEEvu2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_luqGa9ck, 2, m, &cDelay_luqGa9ck_sendMessage);
}

void Heavy_heavy::cBinop_DNjE3mSS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XK8XSidg, HV_BINOP_MULTIPLY, 1, m, &cBinop_XK8XSidg_sendMessage);
}

void Heavy_heavy::cSwitchcase_6DwvBS2d_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_OYxUsALQ_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_OYxUsALQ_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_T8EVk92S_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_KPVqSDrx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XK8XSidg, HV_BINOP_MULTIPLY, 0, m, &cBinop_XK8XSidg_sendMessage);
}

void Heavy_heavy::cCast_T8EVk92S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OYxUsALQ_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_luqGa9ck, 0, m, &cDelay_luqGa9ck_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_uuWNfWFE, 0, m, &cVar_uuWNfWFE_sendMessage);
}

void Heavy_heavy::cMsg_OYxUsALQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_luqGa9ck, 0, m, &cDelay_luqGa9ck_sendMessage);
}

void Heavy_heavy::cBinop_QZKMwOx4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_8fLVqTtI_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_EYaAvz7v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2XO6qiaQ, HV_BINOP_SUBTRACT, 0, m, &cBinop_2XO6qiaQ_sendMessage);
}

void Heavy_heavy::cCast_stb29tmw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JhBRi4hO_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_HSPxLYcH_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_stb29tmw_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_isn22hOs, HV_BINOP_MULTIPLY, 0, m, &cBinop_isn22hOs_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_sZ3lR3ZR, HV_BINOP_DIVIDE, 1, m, &cBinop_sZ3lR3ZR_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_KPVqSDrx, 0, m, &cVar_KPVqSDrx_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_sZ3lR3ZR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7c2Dh8iO, HV_BINOP_DIVIDE, 1, m, &cBinop_7c2Dh8iO_sendMessage);
}

void Heavy_heavy::cBinop_FQY0y3oh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uuWNfWFE, 1, m, &cVar_uuWNfWFE_sendMessage);
}

void Heavy_heavy::cCast_jfvasz5V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_VLmRUHob_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_vZb1JLfg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_EmWKG8Oo_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_mMYQWmWk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qwA0kUdA_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_zQHakzqE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_osfwk8qu_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cPack_93LLaSdV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_EQDSBjlQ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_A6b2Sso1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qTacrRcF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tH35Ekep_sendMessage);
}

void Heavy_heavy::cMsg_INXPXbgt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CZInpdc0, HV_BINOP_SUBTRACT, 0, m, &cBinop_CZInpdc0_sendMessage);
}

void Heavy_heavy::cCast_5sF0Ct1A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_A6b2Sso1, HV_BINOP_MULTIPLY, 1, m, &cBinop_A6b2Sso1_sendMessage);
}

void Heavy_heavy::cBinop_R8AuJ21s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_AOo1ERhF, 0, m, &cPack_AOo1ERhF_sendMessage);
}

void Heavy_heavy::cSlice_mCcDKAlu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_2YQH1abY, 1, m, &cRandom_2YQH1abY_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_rlNwU8fQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_iCCZrXeR_sendMessage);
}

void Heavy_heavy::cRandom_2YQH1abY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_rlNwU8fQ_sendMessage);
}

void Heavy_heavy::cSwitchcase_sFdygKRL_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_mCcDKAlu, 0, m, &cSlice_mCcDKAlu_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_2YQH1abY, 0, m, &cRandom_2YQH1abY_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cUnop_iCCZrXeR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 100.0f, 0, m, &cBinop_R8AuJ21s_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_tbPGyasl_sendMessage);
}

void Heavy_heavy::cVar_3GtumH4L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Rhge9GwQ, 0, m, NULL);
}

void Heavy_heavy::cCast_LCdFOZuo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_RV8sIwFU_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_F6twPRMU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ToqqvItq, 0, m, &cVar_ToqqvItq_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_9vSQJtms, 1, m, &cPack_9vSQJtms_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_AOWGcBCC, 1, m, &cPack_AOWGcBCC_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_XIokrYh3, 1, m, &cVar_XIokrYh3_sendMessage);
}

void Heavy_heavy::cPack_9vSQJtms_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_6LfLABwQ, 0, m, NULL);
}

void Heavy_heavy::cSystem_7K0QCTem_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vRjbbDlX_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_qJcoaxMn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_7K0QCTem_sendMessage);
}

void Heavy_heavy::cMsg_hB7heEkC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_iu3xsT4S, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Uh9GcIJe, m);
}

void Heavy_heavy::cMsg_vRjbbDlX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_do4UcEiI_sendMessage);
}

void Heavy_heavy::cMsg_1yvjD7zX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_mslEPQ7z_sendMessage);
}

void Heavy_heavy::cBinop_jv8mrwAF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZOw9Hr9G_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_m48N0OXr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_ZqNxoC8E_sendMessage);
}

void Heavy_heavy::cMsg_ZOw9Hr9G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_uHIuPAMt_sendMessage);
}

void Heavy_heavy::cBinop_uHIuPAMt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_95GzF5Xl, m);
}

void Heavy_heavy::cBinop_H0YZBKK2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_QBUsoV8W, 1, m, &cIf_QBUsoV8W_sendMessage);
}

void Heavy_heavy::cIf_QBUsoV8W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_m48N0OXr_sendMessage(_c, 0, m);
      cMsg_hB7heEkC_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_1yvjD7zX_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_ZqNxoC8E_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_Uh9GcIJe, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_mslEPQ7z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iu3xsT4S, m);
}

void Heavy_heavy::cBinop_do4UcEiI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_f0B3ReIc, m);
}

void Heavy_heavy::cVar_iT2t835o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_H0YZBKK2_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_QBUsoV8W, 0, m, &cIf_QBUsoV8W_sendMessage);
}

void Heavy_heavy::cMsg_IxNS039T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_jv8mrwAF_sendMessage);
}

void Heavy_heavy::cBinop_ZqNxoC8E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IxNS039T_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSlice_BFYENMgk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_WNnt4qMJ, 1, m, &cRandom_WNnt4qMJ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_HewXfHhS_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_BFYENMgk, 0, m, &cSlice_BFYENMgk_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_WNnt4qMJ, 0, m, &cRandom_WNnt4qMJ_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cUnop_XoXimMc8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1800.0f, 0, m, &cBinop_L4F8gLCX_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_R5dJD4s9_sendMessage);
}

void Heavy_heavy::cRandom_WNnt4qMJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_wZDf34rI_sendMessage);
}

void Heavy_heavy::cBinop_wZDf34rI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_XoXimMc8_sendMessage);
}

void Heavy_heavy::cMsg_MJHZWYDU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_L9Czz1eo, 0, m, &cDelay_L9Czz1eo_sendMessage);
}

void Heavy_heavy::cDelay_L9Czz1eo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_L9Czz1eo, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_L9Czz1eo, 0, m, &cDelay_L9Czz1eo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Xhrhch4o_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_StzJ0ebm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hzP19cPb_sendMessage);
}

void Heavy_heavy::cBinop_lAY7or7R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_luea0Gzz, HV_BINOP_MULTIPLY, 1, m, &cBinop_luea0Gzz_sendMessage);
}

void Heavy_heavy::cMsg_Q4MW8b3S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zuDFl3Ht_sendMessage);
}

void Heavy_heavy::cSystem_zuDFl3Ht_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_lAY7or7R_sendMessage);
}

void Heavy_heavy::cVar_ToqqvItq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_luea0Gzz, HV_BINOP_MULTIPLY, 0, m, &cBinop_luea0Gzz_sendMessage);
}

void Heavy_heavy::cBinop_luea0Gzz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_3xN1U4zj_sendMessage);
}

void Heavy_heavy::cBinop_3xN1U4zj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_L9Czz1eo, 2, m, &cDelay_L9Czz1eo_sendMessage);
}

void Heavy_heavy::cCast_Y6cPvZF3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MJHZWYDU_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_L9Czz1eo, 0, m, &cDelay_L9Czz1eo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Xhrhch4o_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_StzJ0ebm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hzP19cPb_sendMessage);
}

void Heavy_heavy::cSwitchcase_lVin0TlY_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_MJHZWYDU_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_MJHZWYDU_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Y6cPvZF3_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_hzP19cPb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_HewXfHhS_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_Xhrhch4o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_RV8sIwFU_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_StzJ0ebm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cBinop_R5dJD4s9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_AOWGcBCC, 0, m, &cPack_AOWGcBCC_sendMessage);
}

void Heavy_heavy::cBinop_f7Aa6eKf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_mlcpNwQZ, m);
}

void Heavy_heavy::cDelay_qZ7236nD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_qZ7236nD, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4RqCWwNl_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3XBx86BH_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_f3aEzIr5_sendMessage);
}

void Heavy_heavy::cMsg_KzJQ2utw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_qZ7236nD, 0, m, &cDelay_qZ7236nD_sendMessage);
}

void Heavy_heavy::cSwitchcase_7bDm5wgE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_KzJQ2utw_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_KzJQ2utw_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_qZ7236nD, 1, m, &cDelay_qZ7236nD_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RcWVSa20_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_RcWVSa20_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_qZ7236nD, 0, m, &cDelay_qZ7236nD_sendMessage);
}

void Heavy_heavy::cCast_3XBx86BH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_VBNzBeSY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_0GWUmb4j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_O9YeRItI_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_rnTAIyWh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vs6PBuNM_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_jpWkVBlk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_s78yV4y9_sendMessage);
}

void Heavy_heavy::cBinop_Uqy84CAD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_IKOvmY36, 1, m, &cPack_IKOvmY36_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_qZ7236nD, 1, m, &cDelay_qZ7236nD_sendMessage);
}

void Heavy_heavy::cRandom_gk01XbfQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_fPbOK6fs_sendMessage);
}

void Heavy_heavy::cUnop_stK9W2js_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_Uqy84CAD_sendMessage);
}

void Heavy_heavy::cBinop_fPbOK6fs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_stK9W2js_sendMessage);
}

void Heavy_heavy::cSlice_31NjyB4Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_gk01XbfQ, 1, m, &cRandom_gk01XbfQ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_kYR60jAa_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_31NjyB4Y, 0, m, &cSlice_31NjyB4Y_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_gk01XbfQ, 0, m, &cRandom_gk01XbfQ_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_O9YeRItI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_jpWkVBlk, HV_BINOP_SUBTRACT, 0, m, &cBinop_jpWkVBlk_sendMessage);
}

void Heavy_heavy::cBinop_e8Ag5jEg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mDhgPB8W_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_V6tbC6E7_sendMessage);
}

void Heavy_heavy::cCast_1mVb78dk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_phAGUExc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2i4anBLn_sendMessage);
}

void Heavy_heavy::cCast_0ptgqGDy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_y63waLUL, HV_BINOP_SUBTRACT, 1, m, &cBinop_y63waLUL_sendMessage);
}

void Heavy_heavy::cMsg_vs6PBuNM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_e8Ag5jEg, HV_BINOP_SUBTRACT, 0, m, &cBinop_e8Ag5jEg_sendMessage);
}

void Heavy_heavy::cBinop_y63waLUL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_f7Aa6eKf_sendMessage);
}

void Heavy_heavy::cCast_V6tbC6E7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BMnwgAsg, HV_BINOP_MULTIPLY, 0, m, &cBinop_BMnwgAsg_sendMessage);
}

void Heavy_heavy::cBinop_s78yV4y9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_TdpwZeXU, m);
}

void Heavy_heavy::cCast_2i4anBLn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pJzIYXi9, HV_BINOP_MULTIPLY, 0, m, &cBinop_pJzIYXi9_sendMessage);
}

void Heavy_heavy::cPack_IKOvmY36_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_eDnlHPbh_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_phAGUExc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pJzIYXi9, HV_BINOP_MULTIPLY, 1, m, &cBinop_pJzIYXi9_sendMessage);
}

void Heavy_heavy::cCast_RVdg1U6C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e8Ag5jEg, HV_BINOP_SUBTRACT, 1, m, &cBinop_e8Ag5jEg_sendMessage);
}

void Heavy_heavy::cBinop_BMnwgAsg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OcQi8s7r_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0GWUmb4j_sendMessage);
}

void Heavy_heavy::cCast_0N17wlgL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8Y0QT4pn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_C4zacDO3_sendMessage);
}

void Heavy_heavy::cCast_S3N0ETUP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5teJ7X4Q, 0, m, &cVar_5teJ7X4Q_sendMessage);
}

void Heavy_heavy::cSwitchcase_k8kMcOeQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_S3N0ETUP_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0N17wlgL_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cCast_uuTs8Lgw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Sx05gSNX, 0, m, &cVar_Sx05gSNX_sendMessage);
}

void Heavy_heavy::cCast_GGkEThCL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NAHyizkq, HV_BINOP_MULTIPLY, 0, m, &cBinop_NAHyizkq_sendMessage);
}

void Heavy_heavy::cSlice_92I1hIvb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GGkEThCL_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Oo8TsrZ5_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_MSuL0ZGU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jh7tvGUM_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YFixYMmU_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_NAHyizkq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_NwXoous3_sendMessage);
}

void Heavy_heavy::cBinop_k0grVD3N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BXYVgyJV, HV_BINOP_DIVIDE, 0, m, &cBinop_BXYVgyJV_sendMessage);
}

void Heavy_heavy::cVar_Gw55y4Fc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dMB4FJPP, HV_BINOP_SUBTRACT, 0, m, &cBinop_dMB4FJPP_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_7QfEUzPx_sendMessage);
}

void Heavy_heavy::cBinop_dMB4FJPP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gw55y4Fc, 1, m, &cVar_Gw55y4Fc_sendMessage);
}

void Heavy_heavy::cBinop_4CacS2Ec_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_W9yZUo8c, 0, m, &cVar_W9yZUo8c_sendMessage);
}

void Heavy_heavy::cCast_8NMlln8q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LHnzx0of_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_usHl8ORN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xL4Vaqj9_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_jh7tvGUM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hrPk6nyU, 1, m, &cVar_hrPk6nyU_sendMessage);
}

void Heavy_heavy::cCast_C4zacDO3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hrPk6nyU, 0, m, &cVar_hrPk6nyU_sendMessage);
}

void Heavy_heavy::cMsg_LHnzx0of_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_JJy6XAt9_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_NeNrEUvA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xOKb0R9B_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_uOZE7OrH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5teJ7X4Q, 1, m, &cVar_5teJ7X4Q_sendMessage);
}

void Heavy_heavy::cBinop_NwXoous3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gw55y4Fc, 1, m, &cVar_Gw55y4Fc_sendMessage);
}

void Heavy_heavy::cSystem_AUMvagID_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_J499KqCG_sendMessage);
}

void Heavy_heavy::cMsg_FfR3cHM2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_AUMvagID_sendMessage);
}

void Heavy_heavy::cBinop_dtF0jG8K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_X9pEov8f_sendMessage);
}

void Heavy_heavy::cBinop_J499KqCG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dtF0jG8K, HV_BINOP_MULTIPLY, 1, m, &cBinop_dtF0jG8K_sendMessage);
}

void Heavy_heavy::cMsg_8CbuVGFc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_th1k1NBc, 0, m, &cDelay_th1k1NBc_sendMessage);
}

void Heavy_heavy::cVar_40vZXOpx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dtF0jG8K, HV_BINOP_MULTIPLY, 0, m, &cBinop_dtF0jG8K_sendMessage);
}

void Heavy_heavy::cDelay_th1k1NBc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_th1k1NBc, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_th1k1NBc, 0, m, &cDelay_th1k1NBc_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Gw55y4Fc, 0, m, &cVar_Gw55y4Fc_sendMessage);
}

void Heavy_heavy::cSwitchcase_JJy6XAt9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_8CbuVGFc_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_8CbuVGFc_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Ji5EWXdz_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_Ji5EWXdz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8CbuVGFc_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_th1k1NBc, 0, m, &cDelay_th1k1NBc_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Gw55y4Fc, 0, m, &cVar_Gw55y4Fc_sendMessage);
}

void Heavy_heavy::cBinop_X9pEov8f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_th1k1NBc, 2, m, &cDelay_th1k1NBc_sendMessage);
}

void Heavy_heavy::cMsg_uh2VMP38_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_YBqDS4Lx, HV_BINOP_MULTIPLY, 0, m, &cBinop_YBqDS4Lx_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_gXNaSLup, HV_BINOP_DIVIDE, 1, m, &cBinop_gXNaSLup_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_40vZXOpx, 0, m, &cVar_40vZXOpx_sendMessage);
}

void Heavy_heavy::cCast_8Y0QT4pn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VmCPjWXr_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_gXNaSLup_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BXYVgyJV, HV_BINOP_DIVIDE, 1, m, &cBinop_BXYVgyJV_sendMessage);
}

void Heavy_heavy::cSlice_Gk6OUz7v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8NMlln8q_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YTNcGbR3_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8NMlln8q_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YTNcGbR3_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_XBhR5f50_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_LHnzx0of_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_LHnzx0of_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_eDnlHPbh_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_XBhR5f50, 0, m, &cSlice_XBhR5f50_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Gk6OUz7v, 0, m, &cSlice_Gk6OUz7v_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uuTs8Lgw_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_92I1hIvb, 0, m, &cSlice_92I1hIvb_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_MSuL0ZGU, 0, m, &cSlice_MSuL0ZGU_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NeNrEUvA_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_usHl8ORN_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_YoX5gokD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VmCPjWXr_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_4WfapVPH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uh2VMP38_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_gsEEDmJp_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4WfapVPH_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_YBqDS4Lx, HV_BINOP_MULTIPLY, 0, m, &cBinop_YBqDS4Lx_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_gXNaSLup, HV_BINOP_DIVIDE, 1, m, &cBinop_gXNaSLup_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_40vZXOpx, 0, m, &cVar_40vZXOpx_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_VmCPjWXr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_JJy6XAt9_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4CacS2Ec, HV_BINOP_ADD, 1, m, &cBinop_4CacS2Ec_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_uOZE7OrH, HV_BINOP_ADD, 1, m, &cBinop_uOZE7OrH_sendMessage);
}

void Heavy_heavy::cCast_YTNcGbR3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YoX5gokD_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4CacS2Ec, HV_BINOP_ADD, 0, m, &cBinop_4CacS2Ec_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_5teJ7X4Q, 1, m, &cVar_5teJ7X4Q_sendMessage);
}

void Heavy_heavy::cMsg_WGCfd8cY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JOzzNOkx_sendMessage);
}

void Heavy_heavy::cSystem_JOzzNOkx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YBqDS4Lx, HV_BINOP_MULTIPLY, 1, m, &cBinop_YBqDS4Lx_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_NAHyizkq, HV_BINOP_MULTIPLY, 1, m, &cBinop_NAHyizkq_sendMessage);
}

void Heavy_heavy::cCast_Oo8TsrZ5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gXNaSLup, HV_BINOP_DIVIDE, 0, m, &cBinop_gXNaSLup_sendMessage);
}

void Heavy_heavy::cMsg_xL4Vaqj9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Sx05gSNX, 1, m, &cVar_Sx05gSNX_sendMessage);
}

void Heavy_heavy::cVar_LoT7FDs7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_gsEEDmJp_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_YBqDS4Lx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_oR7qoj0V_sendMessage);
}

void Heavy_heavy::cCast_YFixYMmU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k0grVD3N, HV_BINOP_SUBTRACT, 0, m, &cBinop_k0grVD3N_sendMessage);
}

void Heavy_heavy::cMsg_xOKb0R9B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_JJy6XAt9_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_W9yZUo8c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k0grVD3N, HV_BINOP_SUBTRACT, 1, m, &cBinop_k0grVD3N_sendMessage);
}

void Heavy_heavy::cVar_5teJ7X4Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uOZE7OrH, HV_BINOP_ADD, 0, m, &cBinop_uOZE7OrH_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4CacS2Ec, HV_BINOP_ADD, 0, m, &cBinop_4CacS2Ec_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RVdg1U6C_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rnTAIyWh_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1mVb78dk_sendMessage);
}

void Heavy_heavy::cBinop_BXYVgyJV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4CacS2Ec, HV_BINOP_ADD, 1, m, &cBinop_4CacS2Ec_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_uOZE7OrH, HV_BINOP_ADD, 1, m, &cBinop_uOZE7OrH_sendMessage);
}

void Heavy_heavy::cVar_Sx05gSNX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GGkEThCL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Oo8TsrZ5_sendMessage);
}

void Heavy_heavy::cBinop_7QfEUzPx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_k8kMcOeQ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_oR7qoj0V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dMB4FJPP, HV_BINOP_SUBTRACT, 1, m, &cBinop_dMB4FJPP_sendMessage);
}

void Heavy_heavy::cVar_hrPk6nyU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5teJ7X4Q, 0, m, &cVar_5teJ7X4Q_sendMessage);
}

void Heavy_heavy::cCast_Uk6qKEAS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nJWzsXDY_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_f3aEzIr5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_7bDm5wgE_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_OcQi8s7r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jpWkVBlk, HV_BINOP_SUBTRACT, 1, m, &cBinop_jpWkVBlk_sendMessage);
}

void Heavy_heavy::cMsg_nJWzsXDY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_y63waLUL, HV_BINOP_SUBTRACT, 0, m, &cBinop_y63waLUL_sendMessage);
}

void Heavy_heavy::cUnop_UjirX83R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_wGDbjnE6_sendMessage);
}

void Heavy_heavy::cSlice_BnYqOv2A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_cPwyKfTj, 1, m, &cRandom_cPwyKfTj_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_xlQamnNu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_UjirX83R_sendMessage);
}

void Heavy_heavy::cSwitchcase_VBNzBeSY_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_BnYqOv2A, 0, m, &cSlice_BnYqOv2A_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_cPwyKfTj, 0, m, &cRandom_cPwyKfTj_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cRandom_cPwyKfTj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_xlQamnNu_sendMessage);
}

void Heavy_heavy::cBinop_wGDbjnE6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_IKOvmY36, 0, m, &cPack_IKOvmY36_sendMessage);
}

void Heavy_heavy::cCast_mDhgPB8W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BMnwgAsg, HV_BINOP_MULTIPLY, 1, m, &cBinop_BMnwgAsg_sendMessage);
}

void Heavy_heavy::cCast_4RqCWwNl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_kYR60jAa_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_pJzIYXi9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0ptgqGDy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Uk6qKEAS_sendMessage);
}

void Heavy_heavy::cVar_XIokrYh3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_6LfLABwQ, 0, m, NULL);
}

void Heavy_heavy::cBinop_L4F8gLCX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_9vSQJtms, 0, m, &cPack_9vSQJtms_sendMessage);
}

void Heavy_heavy::cRandom_KHRYXNJl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_LXRNHHMM_sendMessage);
}

void Heavy_heavy::cSlice_UDj0tno5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_KHRYXNJl, 1, m, &cRandom_KHRYXNJl_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_RV8sIwFU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UDj0tno5, 0, m, &cSlice_UDj0tno5_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_KHRYXNJl, 0, m, &cRandom_KHRYXNJl_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cUnop_CI1OUaWw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_F6twPRMU_sendMessage);
}

void Heavy_heavy::cBinop_LXRNHHMM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_CI1OUaWw_sendMessage);
}

void Heavy_heavy::cPack_AOWGcBCC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_RSndFE1H, 0, m, NULL);
}

void Heavy_heavy::cCast_6XidZSA9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XIokrYh3, 0, m, &cVar_XIokrYh3_sendMessage);
}

void Heavy_heavy::cCast_2dabsVrQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UBUOtI05, 0, m, &cVar_UBUOtI05_sendMessage);
}

void Heavy_heavy::cCast_jYWcYx2U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_LGeE0T5e_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_UBUOtI05_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_pKrefeJi, 0, m, NULL);
}

void Heavy_heavy::cSwitchcase_PWvTkQo8_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_p487UYqy_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_p487UYqy_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JPY9vTL9_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_p487UYqy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_057rEUI6, 0, m, &cDelay_057rEUI6_sendMessage);
}

void Heavy_heavy::cDelay_057rEUI6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_057rEUI6, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_057rEUI6, 0, m, &cDelay_057rEUI6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Arfo37o3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_idMiDO9r_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XgP80BAo_sendMessage);
}

void Heavy_heavy::cSystem_I9wdI5sI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_RxLMz5yF_sendMessage);
}

void Heavy_heavy::cMsg_sYlH769W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_I9wdI5sI_sendMessage);
}

void Heavy_heavy::cBinop_RxLMz5yF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hMfKRthP, HV_BINOP_MULTIPLY, 1, m, &cBinop_hMfKRthP_sendMessage);
}

void Heavy_heavy::cVar_TP3gCcDH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hMfKRthP, HV_BINOP_MULTIPLY, 0, m, &cBinop_hMfKRthP_sendMessage);
}

void Heavy_heavy::cBinop_hMfKRthP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_KkmTZiNp_sendMessage);
}

void Heavy_heavy::cBinop_KkmTZiNp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_057rEUI6, 2, m, &cDelay_057rEUI6_sendMessage);
}

void Heavy_heavy::cCast_JPY9vTL9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_p487UYqy_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_057rEUI6, 0, m, &cDelay_057rEUI6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Arfo37o3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_idMiDO9r_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XgP80BAo_sendMessage);
}

void Heavy_heavy::cBinop_kAKJPdQ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_mvRuzOe4_sendMessage);
}

void Heavy_heavy::cSwitchcase_LGeE0T5e_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ESxstSQX, 0, m, &cSlice_ESxstSQX_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_f16juTgT, 0, m, &cRandom_f16juTgT_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cUnop_mvRuzOe4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_FArbRlIf_sendMessage);
}

void Heavy_heavy::cSlice_ESxstSQX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_f16juTgT, 1, m, &cRandom_f16juTgT_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cRandom_f16juTgT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_kAKJPdQ7_sendMessage);
}

void Heavy_heavy::cRandom_OWQ4mqXn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_7wZJLLjo_sendMessage);
}

void Heavy_heavy::cSlice_Jvy9HSef_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_OWQ4mqXn, 1, m, &cRandom_OWQ4mqXn_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cUnop_9obWu46e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_kEzrjHMK_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_eyvR08vF_sendMessage);
}

void Heavy_heavy::cSwitchcase_DzmWxQDR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Jvy9HSef, 0, m, &cSlice_Jvy9HSef_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_OWQ4mqXn, 0, m, &cRandom_OWQ4mqXn_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_7wZJLLjo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_9obWu46e_sendMessage);
}

void Heavy_heavy::cBinop_XtRN2X60_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_l3JNP5ep_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_SoCyqXil_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_9eFqqGj4_sendMessage);
}

void Heavy_heavy::cIf_UxjXABF7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_Cs5FSFgn_sendMessage(_c, 0, m);
      cMsg_KcLcew4O_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_RA2nojws_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_XtRN2X60_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_0SUSkOQl, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_DXe2q9wQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_UxjXABF7, 1, m, &cIf_UxjXABF7_sendMessage);
}

void Heavy_heavy::cMsg_nVdDsuk4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_R04uAQOP_sendMessage);
}

void Heavy_heavy::cBinop_QaSqShpj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_h4talzz4, m);
}

void Heavy_heavy::cBinop_9eFqqGj4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_t7ggMKPE, m);
}

void Heavy_heavy::cMsg_Cs5FSFgn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_XtRN2X60_sendMessage);
}

void Heavy_heavy::cSystem_AM8HpQZe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nVdDsuk4_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_94yreEd4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_AM8HpQZe_sendMessage);
}

void Heavy_heavy::cMsg_RA2nojws_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_QaSqShpj_sendMessage);
}

void Heavy_heavy::cBinop_R04uAQOP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0m1s7dO5, m);
}

void Heavy_heavy::cBinop_IM0QP68U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SoCyqXil_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_KcLcew4O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_h4talzz4, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_0SUSkOQl, m);
}

void Heavy_heavy::cVar_A990utt2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_DXe2q9wQ_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_UxjXABF7, 0, m, &cIf_UxjXABF7_sendMessage);
}

void Heavy_heavy::cMsg_l3JNP5ep_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_IM0QP68U_sendMessage);
}

void Heavy_heavy::cCast_Arfo37o3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_LGeE0T5e_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_THDP5b3o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_5GBvhNV5_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_3yZjHrdW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ROZroCVV, HV_BINOP_SUBTRACT, 1, m, &cBinop_ROZroCVV_sendMessage);
}

void Heavy_heavy::cRandom_y4psLRNl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_qCJCHiQg_sendMessage);
}

void Heavy_heavy::cSlice_Uy8WX7bn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_y4psLRNl, 1, m, &cRandom_y4psLRNl_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_5GBvhNV5_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Uy8WX7bn, 0, m, &cSlice_Uy8WX7bn_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_y4psLRNl, 0, m, &cRandom_y4psLRNl_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_qCJCHiQg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_731P7gFy_sendMessage);
}

void Heavy_heavy::cUnop_731P7gFy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_0et0ORI6_sendMessage);
}

void Heavy_heavy::cCast_9kwDhvj2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1fAl8WHm, HV_BINOP_MULTIPLY, 1, m, &cBinop_1fAl8WHm_sendMessage);
}

void Heavy_heavy::cCast_KFwyMwnw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1fAl8WHm, HV_BINOP_MULTIPLY, 0, m, &cBinop_1fAl8WHm_sendMessage);
}

void Heavy_heavy::cMsg_o9kPKE3i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Kg2leKrK, HV_BINOP_SUBTRACT, 0, m, &cBinop_Kg2leKrK_sendMessage);
}

void Heavy_heavy::cBinop_UiVBR8KG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_b5iQuNIK, m);
}

void Heavy_heavy::cMsg_Ne82K7XS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_t8uE8FOw, HV_BINOP_SUBTRACT, 0, m, &cBinop_t8uE8FOw_sendMessage);
}

void Heavy_heavy::cBinop_0et0ORI6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_B0rkmRVG, 1, m, &cPack_B0rkmRVG_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_GVAXAezU, 1, m, &cDelay_GVAXAezU_sendMessage);
}

void Heavy_heavy::cMsg_pW8ndqya_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ROZroCVV, HV_BINOP_SUBTRACT, 0, m, &cBinop_ROZroCVV_sendMessage);
}

void Heavy_heavy::cCast_gU4Xm7f9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VQadqmSn, HV_BINOP_MULTIPLY, 0, m, &cBinop_VQadqmSn_sendMessage);
}

void Heavy_heavy::cCast_zJfAyv4M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_o9kPKE3i_sendMessage(_c, 0, m);
}

void Heavy_heavy::cRandom_9BaPHUBF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_6oJcm2Ws_sendMessage);
}

void Heavy_heavy::cSlice_srbysstH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_9BaPHUBF, 1, m, &cRandom_9BaPHUBF_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_6oJcm2Ws_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_RxmXIrE6_sendMessage);
}

void Heavy_heavy::cUnop_RxmXIrE6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_yrPzqjOQ_sendMessage);
}

void Heavy_heavy::cSwitchcase_OlB6MicS_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_srbysstH, 0, m, &cSlice_srbysstH_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_9BaPHUBF, 0, m, &cRandom_9BaPHUBF_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_ROZroCVV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_UiVBR8KG_sendMessage);
}

void Heavy_heavy::cBinop_yrPzqjOQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_B0rkmRVG, 0, m, &cPack_B0rkmRVG_sendMessage);
}

void Heavy_heavy::cCast_kdpGYpfT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VQadqmSn, HV_BINOP_MULTIPLY, 1, m, &cBinop_VQadqmSn_sendMessage);
}

void Heavy_heavy::cBinop_guADgZk0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rorfebhF, m);
}

void Heavy_heavy::cCast_k190PjmS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_OlB6MicS_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_jnfwgkXp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Kg2leKrK, HV_BINOP_SUBTRACT, 1, m, &cBinop_Kg2leKrK_sendMessage);
}

void Heavy_heavy::cBinop_t8uE8FOw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9kwDhvj2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KFwyMwnw_sendMessage);
}

void Heavy_heavy::cBinop_Kg2leKrK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_guADgZk0_sendMessage);
}

void Heavy_heavy::cBinop_VQadqmSn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jnfwgkXp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zJfAyv4M_sendMessage);
}

void Heavy_heavy::cCast_cyGr1Y79_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kdpGYpfT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gU4Xm7f9_sendMessage);
}

void Heavy_heavy::cDelay_GVAXAezU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_GVAXAezU, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_THDP5b3o_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k190PjmS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KRsmvqAM_sendMessage);
}

void Heavy_heavy::cMsg_eHtf0vRQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_GVAXAezU, 0, m, &cDelay_GVAXAezU_sendMessage);
}

void Heavy_heavy::cCast_9ttxBUt4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_GVAXAezU, 0, m, &cDelay_GVAXAezU_sendMessage);
}

void Heavy_heavy::cSwitchcase_xvPXypLj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_eHtf0vRQ_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_eHtf0vRQ_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_GVAXAezU, 1, m, &cDelay_GVAXAezU_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9ttxBUt4_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_xEOLzQzs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t8uE8FOw, HV_BINOP_SUBTRACT, 1, m, &cBinop_t8uE8FOw_sendMessage);
}

void Heavy_heavy::cBinop_1fAl8WHm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3yZjHrdW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3kIBzqwL_sendMessage);
}

void Heavy_heavy::cPack_B0rkmRVG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_q9GDYnFT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_3kIBzqwL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pW8ndqya_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_KRsmvqAM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_xvPXypLj_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_ZzlznRXW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_D7JdioQ3, HV_BINOP_DIVIDE, 0, m, &cBinop_D7JdioQ3_sendMessage);
}

void Heavy_heavy::cBinop_VKYsxDCy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_i7VyKPWk, 1, m, &cVar_i7VyKPWk_sendMessage);
}

void Heavy_heavy::cBinop_O4D193EG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0exPN7QV, 1, m, &cVar_0exPN7QV_sendMessage);
}

void Heavy_heavy::cBinop_5Klelt9P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oxD6yaYU, HV_BINOP_SUBTRACT, 1, m, &cBinop_oxD6yaYU_sendMessage);
}

void Heavy_heavy::cCast_HWFqs1lI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FxHr0MEO, 0, m, &cVar_FxHr0MEO_sendMessage);
}

void Heavy_heavy::cBinop_Nmv7GBnU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_a85coong_sendMessage);
}

void Heavy_heavy::cBinop_RN4d91QC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Nmv7GBnU, HV_BINOP_MULTIPLY, 1, m, &cBinop_Nmv7GBnU_sendMessage);
}

void Heavy_heavy::cSystem_t8fl2Q4K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_RN4d91QC_sendMessage);
}

void Heavy_heavy::cMsg_nVD9P2jT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_t8fl2Q4K_sendMessage);
}

void Heavy_heavy::cVar_iYKNH5wS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Nmv7GBnU, HV_BINOP_MULTIPLY, 0, m, &cBinop_Nmv7GBnU_sendMessage);
}

void Heavy_heavy::cMsg_vVYE57P1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_tKSdaq5N, 0, m, &cDelay_tKSdaq5N_sendMessage);
}

void Heavy_heavy::cBinop_a85coong_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_tKSdaq5N, 2, m, &cDelay_tKSdaq5N_sendMessage);
}

void Heavy_heavy::cDelay_tKSdaq5N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_tKSdaq5N, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tKSdaq5N, 0, m, &cDelay_tKSdaq5N_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_i7VyKPWk, 0, m, &cVar_i7VyKPWk_sendMessage);
}

void Heavy_heavy::cCast_t1xhZCdt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vVYE57P1_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tKSdaq5N, 0, m, &cDelay_tKSdaq5N_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_i7VyKPWk, 0, m, &cVar_i7VyKPWk_sendMessage);
}

void Heavy_heavy::cSwitchcase_awNcTMtH_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_vVYE57P1_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_vVYE57P1_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_t1xhZCdt_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_ELxH4pEv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_COSlBH4t_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_COSlBH4t_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_q9GDYnFT_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ELxH4pEv, 0, m, &cSlice_ELxH4pEv_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_V1dfT6Wh, 0, m, &cSlice_V1dfT6Wh_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_s5Buy8p4_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_EexhwUND, 0, m, &cSlice_EexhwUND_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_y0wwrE7u, 0, m, &cSlice_y0wwrE7u_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9mkp3aMn_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vkZpABoQ_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_V1dfT6Wh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ktuCzJSy_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9gwTFLH6_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ktuCzJSy_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9gwTFLH6_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cMsg_vaahurOn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_awNcTMtH_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2aLjO4nq, HV_BINOP_ADD, 1, m, &cBinop_2aLjO4nq_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_O4D193EG, HV_BINOP_ADD, 1, m, &cBinop_O4D193EG_sendMessage);
}

void Heavy_heavy::cMsg_COSlBH4t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_awNcTMtH_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_s5Buy8p4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_v2Q9ExEc, 0, m, &cVar_v2Q9ExEc_sendMessage);
}

void Heavy_heavy::cBinop_l3TtgmbD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_5Klelt9P_sendMessage);
}

void Heavy_heavy::cCast_qJf84trc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sR6x5qo9, HV_BINOP_DIVIDE, 0, m, &cBinop_sR6x5qo9_sendMessage);
}

void Heavy_heavy::cCast_Re0Tq82o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vaahurOn_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_NZdgd0rq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_v2Q9ExEc, 1, m, &cVar_v2Q9ExEc_sendMessage);
}

void Heavy_heavy::cCast_cF0HytOg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZzlznRXW, HV_BINOP_SUBTRACT, 0, m, &cBinop_ZzlznRXW_sendMessage);
}

void Heavy_heavy::cBinop_2aLjO4nq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8dZKI8Gt, 0, m, &cVar_8dZKI8Gt_sendMessage);
}

void Heavy_heavy::cVar_i7VyKPWk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oxD6yaYU, HV_BINOP_SUBTRACT, 0, m, &cBinop_oxD6yaYU_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_h75kUbIo_sendMessage);
}

void Heavy_heavy::cCast_c4a9Lrrj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vaahurOn_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_rFJTdBRX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yUNsMAmj, HV_BINOP_MULTIPLY, 0, m, &cBinop_yUNsMAmj_sendMessage);
}

void Heavy_heavy::cCast_rruDmujn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vR9lrVZM_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_5XF9lJk2_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rruDmujn_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_l3TtgmbD, HV_BINOP_MULTIPLY, 0, m, &cBinop_l3TtgmbD_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_sR6x5qo9, HV_BINOP_DIVIDE, 1, m, &cBinop_sR6x5qo9_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_iYKNH5wS, 0, m, &cVar_iYKNH5wS_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_0exPN7QV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_O4D193EG, HV_BINOP_ADD, 0, m, &cBinop_O4D193EG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2aLjO4nq, HV_BINOP_ADD, 0, m, &cBinop_2aLjO4nq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xEOLzQzs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IGTakSvr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cyGr1Y79_sendMessage);
}

void Heavy_heavy::cBinop_h75kUbIo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_JbXwv8MD_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_vR9lrVZM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_l3TtgmbD, HV_BINOP_MULTIPLY, 0, m, &cBinop_l3TtgmbD_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_sR6x5qo9, HV_BINOP_DIVIDE, 1, m, &cBinop_sR6x5qo9_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_iYKNH5wS, 0, m, &cVar_iYKNH5wS_sendMessage);
}

void Heavy_heavy::cCast_vkZpABoQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NZdgd0rq_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_3tUX1U4J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_5XF9lJk2_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_ktuCzJSy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_COSlBH4t_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_9gwTFLH6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_c4a9Lrrj_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2aLjO4nq, HV_BINOP_ADD, 0, m, &cBinop_2aLjO4nq_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_0exPN7QV, 1, m, &cVar_0exPN7QV_sendMessage);
}

void Heavy_heavy::cSystem_ZtVxSsfS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_l3TtgmbD, HV_BINOP_MULTIPLY, 1, m, &cBinop_l3TtgmbD_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yUNsMAmj, HV_BINOP_MULTIPLY, 1, m, &cBinop_yUNsMAmj_sendMessage);
}

void Heavy_heavy::cMsg_vruw1k34_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ZtVxSsfS_sendMessage);
}

void Heavy_heavy::cBinop_D7JdioQ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2aLjO4nq, HV_BINOP_ADD, 1, m, &cBinop_2aLjO4nq_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_O4D193EG, HV_BINOP_ADD, 1, m, &cBinop_O4D193EG_sendMessage);
}

void Heavy_heavy::cVar_v2Q9ExEc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rFJTdBRX_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qJf84trc_sendMessage);
}

void Heavy_heavy::cVar_FxHr0MEO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0exPN7QV, 0, m, &cVar_0exPN7QV_sendMessage);
}

void Heavy_heavy::cCast_bjyBxLzo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FxHr0MEO, 1, m, &cVar_FxHr0MEO_sendMessage);
}

void Heavy_heavy::cBinop_oxD6yaYU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_i7VyKPWk, 1, m, &cVar_i7VyKPWk_sendMessage);
}

void Heavy_heavy::cSlice_EexhwUND_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rFJTdBRX_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qJf84trc_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_y0wwrE7u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bjyBxLzo_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cF0HytOg_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cCast_QuSztkT5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Re0Tq82o_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HWFqs1lI_sendMessage);
}

void Heavy_heavy::cCast_GIAaoKTU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0exPN7QV, 0, m, &cVar_0exPN7QV_sendMessage);
}

void Heavy_heavy::cSwitchcase_JbXwv8MD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GIAaoKTU_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QuSztkT5_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cBinop_yUNsMAmj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_VKYsxDCy_sendMessage);
}

void Heavy_heavy::cCast_9mkp3aMn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rumXad6V_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_sR6x5qo9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_D7JdioQ3, HV_BINOP_DIVIDE, 1, m, &cBinop_D7JdioQ3_sendMessage);
}

void Heavy_heavy::cMsg_rumXad6V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_awNcTMtH_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_8dZKI8Gt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZzlznRXW, HV_BINOP_SUBTRACT, 1, m, &cBinop_ZzlznRXW_sendMessage);
}

void Heavy_heavy::cCast_IGTakSvr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ne82K7XS_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_eyvR08vF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ADTUgheK, 0, m, &cPack_ADTUgheK_sendMessage);
}

void Heavy_heavy::cPack_ADTUgheK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_6zh5HxuE, 0, m, NULL);
}

void Heavy_heavy::cBinop_kEzrjHMK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_QAuBCPaM, 0, m, &cPack_QAuBCPaM_sendMessage);
}

void Heavy_heavy::cPack_QAuBCPaM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_pKrefeJi, 0, m, NULL);
}

void Heavy_heavy::cCast_idMiDO9r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cCast_XgP80BAo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_DzmWxQDR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_FArbRlIf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TP3gCcDH, 0, m, &cVar_TP3gCcDH_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_QAuBCPaM, 1, m, &cPack_QAuBCPaM_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_ADTUgheK, 1, m, &cPack_ADTUgheK_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_UBUOtI05, 1, m, &cVar_UBUOtI05_sendMessage);
}

void Heavy_heavy::cCast_7NTE1MIc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5009Qrwm_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YdjBvL7v_sendMessage);
}

void Heavy_heavy::cCast_ALvPGfT6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qUWlGeJV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cPack_qcAvFkPe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ODNlUzGB_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_1gUjtZoE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_apFFGF0l_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_mBVa2xBO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yURZWVMK, HV_BINOP_SUBTRACT, 0, m, &cBinop_yURZWVMK_sendMessage);
}

void Heavy_heavy::cCast_YdjBvL7v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_g5wCpsES, HV_BINOP_MULTIPLY, 0, m, &cBinop_g5wCpsES_sendMessage);
}

void Heavy_heavy::cCast_FdWbyY7h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_X2vxUG6C_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cUnop_XsLeIFmn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_9fEwuW6Z_sendMessage);
}

void Heavy_heavy::cBinop_askZuPiw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_XsLeIFmn_sendMessage);
}

void Heavy_heavy::cSwitchcase_X2vxUG6C_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_kitLneyp, 0, m, &cSlice_kitLneyp_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_NN4ReOkQ, 0, m, &cRandom_NN4ReOkQ_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_kitLneyp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_NN4ReOkQ, 1, m, &cRandom_NN4ReOkQ_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cRandom_NN4ReOkQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_askZuPiw_sendMessage);
}

void Heavy_heavy::cCast_jjIHcZrf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xrZDToq6_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_n48AWWAu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_qcAvFkPe, 1, m, &cPack_qcAvFkPe_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_iVcF8MUo, 1, m, &cDelay_iVcF8MUo_sendMessage);
}

void Heavy_heavy::cMsg_apFFGF0l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_RXlMzesw, HV_BINOP_SUBTRACT, 0, m, &cBinop_RXlMzesw_sendMessage);
}

void Heavy_heavy::cCast_wk4Kg7au_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mBVa2xBO_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_lXGhGFuY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yURZWVMK, HV_BINOP_SUBTRACT, 1, m, &cBinop_yURZWVMK_sendMessage);
}

void Heavy_heavy::cBinop_yURZWVMK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IIueT4oz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Z2bvUkpd_sendMessage);
}

void Heavy_heavy::cBinop_TfWOym0z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OO5b4LSF, 0, m, &cVar_OO5b4LSF_sendMessage);
}

void Heavy_heavy::cBinop_5SQKJ6l8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TfWOym0z, HV_BINOP_ADD, 1, m, &cBinop_TfWOym0z_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_dKPcLICG, HV_BINOP_ADD, 1, m, &cBinop_dKPcLICG_sendMessage);
}

void Heavy_heavy::cBinop_HS5ezBL2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_nbIVLF4o_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_tHTIEw1n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_icbVPiTY_sendMessage);
}

void Heavy_heavy::cCast_XTgNhT8I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Zy93LhtT, 1, m, &cVar_Zy93LhtT_sendMessage);
}

void Heavy_heavy::cVar_D9EwG3vB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2iE7p8zU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xyZOs31F_sendMessage);
}

void Heavy_heavy::cCast_SKDbwZoF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m9oTYSXo_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_xJEvn21v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_tHTIEw1n, HV_BINOP_MULTIPLY, 0, m, &cBinop_tHTIEw1n_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_zH2Jbvi8, HV_BINOP_DIVIDE, 1, m, &cBinop_zH2Jbvi8_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_amzxf86K, 0, m, &cVar_amzxf86K_sendMessage);
}

void Heavy_heavy::cCast_W50y6eMe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BS4tSbd4_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_vhrmJiUc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J3MvteW9, HV_BINOP_SUBTRACT, 0, m, &cBinop_J3MvteW9_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_HS5ezBL2_sendMessage);
}

void Heavy_heavy::cCast_bySW9u4Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jrb1looN_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_QAaBSgxn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xJEvn21v_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_FEFpElcG_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QAaBSgxn_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_tHTIEw1n, HV_BINOP_MULTIPLY, 0, m, &cBinop_tHTIEw1n_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_zH2Jbvi8, HV_BINOP_DIVIDE, 1, m, &cBinop_zH2Jbvi8_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_amzxf86K, 0, m, &cVar_amzxf86K_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_OO5b4LSF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YqqJ2ooY, HV_BINOP_SUBTRACT, 1, m, &cBinop_YqqJ2ooY_sendMessage);
}

void Heavy_heavy::cCast_7Wy1GQ5F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SKDbwZoF_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TfWOym0z, HV_BINOP_ADD, 0, m, &cBinop_TfWOym0z_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Ya3NQqL3, 1, m, &cVar_Ya3NQqL3_sendMessage);
}

void Heavy_heavy::cMsg_m9oTYSXo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_2RPOW1QG_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TfWOym0z, HV_BINOP_ADD, 1, m, &cBinop_TfWOym0z_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_dKPcLICG, HV_BINOP_ADD, 1, m, &cBinop_dKPcLICG_sendMessage);
}

void Heavy_heavy::cBinop_zH2Jbvi8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5SQKJ6l8, HV_BINOP_DIVIDE, 1, m, &cBinop_5SQKJ6l8_sendMessage);
}

void Heavy_heavy::cVar_Ya3NQqL3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dKPcLICG, HV_BINOP_ADD, 0, m, &cBinop_dKPcLICG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TfWOym0z, HV_BINOP_ADD, 0, m, &cBinop_TfWOym0z_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lXGhGFuY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wk4Kg7au_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7NTE1MIc_sendMessage);
}

void Heavy_heavy::cCast_JosyPpAn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YqqJ2ooY, HV_BINOP_SUBTRACT, 0, m, &cBinop_YqqJ2ooY_sendMessage);
}

void Heavy_heavy::cBinop_YqqJ2ooY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5SQKJ6l8, HV_BINOP_DIVIDE, 0, m, &cBinop_5SQKJ6l8_sendMessage);
}

void Heavy_heavy::cCast_EmavhmID_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Zy93LhtT, 0, m, &cVar_Zy93LhtT_sendMessage);
}

void Heavy_heavy::cCast_2iE7p8zU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LHvYMUgs, HV_BINOP_MULTIPLY, 0, m, &cBinop_LHvYMUgs_sendMessage);
}

void Heavy_heavy::cBinop_J3MvteW9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vhrmJiUc, 1, m, &cVar_vhrmJiUc_sendMessage);
}

void Heavy_heavy::cDelay_tN8g3REK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_tN8g3REK, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tN8g3REK, 0, m, &cDelay_tN8g3REK_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_vhrmJiUc, 0, m, &cVar_vhrmJiUc_sendMessage);
}

void Heavy_heavy::cMsg_3gaq36ms_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_tN8g3REK, 0, m, &cDelay_tN8g3REK_sendMessage);
}

void Heavy_heavy::cBinop_lr7iXDcm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_j3K5fREB_sendMessage);
}

void Heavy_heavy::cBinop_kbtYHJUS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lr7iXDcm, HV_BINOP_MULTIPLY, 1, m, &cBinop_lr7iXDcm_sendMessage);
}

void Heavy_heavy::cBinop_j3K5fREB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_tN8g3REK, 2, m, &cDelay_tN8g3REK_sendMessage);
}

void Heavy_heavy::cVar_amzxf86K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lr7iXDcm, HV_BINOP_MULTIPLY, 0, m, &cBinop_lr7iXDcm_sendMessage);
}

void Heavy_heavy::cSwitchcase_2RPOW1QG_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_3gaq36ms_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_3gaq36ms_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Nu1Bkp8r_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_Nu1Bkp8r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3gaq36ms_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_tN8g3REK, 0, m, &cDelay_tN8g3REK_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_vhrmJiUc, 0, m, &cVar_vhrmJiUc_sendMessage);
}

void Heavy_heavy::cMsg_vV4bVJU3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_s5i9pXRW_sendMessage);
}

void Heavy_heavy::cSystem_s5i9pXRW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_kbtYHJUS_sendMessage);
}

void Heavy_heavy::cVar_4PesrvYz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_FEFpElcG_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_Mrn3fHfj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CrwvGvKd_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EmavhmID_sendMessage);
}

void Heavy_heavy::cCast_WrUy7Vzp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Ya3NQqL3, 0, m, &cVar_Ya3NQqL3_sendMessage);
}

void Heavy_heavy::cSwitchcase_nbIVLF4o_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WrUy7Vzp_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Mrn3fHfj_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cSlice_TMOeZOYQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XTgNhT8I_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JosyPpAn_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_G4HtrsWS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2iE7p8zU_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xyZOs31F_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_KE4S4ez3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vhrmJiUc, 1, m, &cVar_vhrmJiUc_sendMessage);
}

void Heavy_heavy::cCast_VR6eDim3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OEJfqrRP_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_icbVPiTY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J3MvteW9, HV_BINOP_SUBTRACT, 1, m, &cBinop_J3MvteW9_sendMessage);
}

void Heavy_heavy::cCast_CrwvGvKd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m9oTYSXo_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSlice_lInhgNo2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_jrb1looN_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_jrb1looN_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_hnk9fRPn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bySW9u4Z_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7Wy1GQ5F_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bySW9u4Z_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7Wy1GQ5F_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_ODNlUzGB_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_lInhgNo2, 0, m, &cSlice_lInhgNo2_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_hnk9fRPn, 0, m, &cSlice_hnk9fRPn_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8OfbX8ay_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_G4HtrsWS, 0, m, &cSlice_G4HtrsWS_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_TMOeZOYQ, 0, m, &cSlice_TMOeZOYQ_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_W50y6eMe_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VR6eDim3_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_jrb1looN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_2RPOW1QG_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_xyZOs31F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zH2Jbvi8, HV_BINOP_DIVIDE, 0, m, &cBinop_zH2Jbvi8_sendMessage);
}

void Heavy_heavy::cBinop_LHvYMUgs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_KE4S4ez3_sendMessage);
}

void Heavy_heavy::cCast_8OfbX8ay_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_D9EwG3vB, 0, m, &cVar_D9EwG3vB_sendMessage);
}

void Heavy_heavy::cMsg_OEJfqrRP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_D9EwG3vB, 1, m, &cVar_D9EwG3vB_sendMessage);
}

void Heavy_heavy::cVar_Zy93LhtT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Ya3NQqL3, 0, m, &cVar_Ya3NQqL3_sendMessage);
}

void Heavy_heavy::cSystem_RrIUOXGt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tHTIEw1n, HV_BINOP_MULTIPLY, 1, m, &cBinop_tHTIEw1n_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_LHvYMUgs, HV_BINOP_MULTIPLY, 1, m, &cBinop_LHvYMUgs_sendMessage);
}

void Heavy_heavy::cMsg_ZrNMMFVf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_RrIUOXGt_sendMessage);
}

void Heavy_heavy::cMsg_BS4tSbd4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_2RPOW1QG_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_dKPcLICG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Ya3NQqL3, 1, m, &cVar_Ya3NQqL3_sendMessage);
}

void Heavy_heavy::cCast_Z2bvUkpd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ubqtmJiQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_ubqtmJiQ_sendMessage);
}

void Heavy_heavy::cMsg_h6o0ARz9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_iVcF8MUo, 0, m, &cDelay_iVcF8MUo_sendMessage);
}

void Heavy_heavy::cDelay_iVcF8MUo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_iVcF8MUo, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ALvPGfT6_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FdWbyY7h_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gQ2yxcRS_sendMessage);
}

void Heavy_heavy::cCast_ZP00OBkx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_iVcF8MUo, 0, m, &cDelay_iVcF8MUo_sendMessage);
}

void Heavy_heavy::cSwitchcase_7DwwYNzK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_h6o0ARz9_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_h6o0ARz9_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_iVcF8MUo, 1, m, &cDelay_iVcF8MUo_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZP00OBkx_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_zf3MKYno_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tuA6vVUL, HV_BINOP_SUBTRACT, 1, m, &cBinop_tuA6vVUL_sendMessage);
}

void Heavy_heavy::cBinop_g5wCpsES_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZatWjxHa_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1gUjtZoE_sendMessage);
}

void Heavy_heavy::cBinop_RXlMzesw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_aBr29xed_sendMessage);
}

void Heavy_heavy::cBinop_9fEwuW6Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_qcAvFkPe, 0, m, &cPack_qcAvFkPe_sendMessage);
}

void Heavy_heavy::cSwitchcase_qUWlGeJV_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ikv9N71j, 0, m, &cSlice_ikv9N71j_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_nGFBlMKh, 0, m, &cRandom_nGFBlMKh_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cRandom_nGFBlMKh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_mpiwO3CE_sendMessage);
}

void Heavy_heavy::cUnop_D5LeGbUM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_n48AWWAu_sendMessage);
}

void Heavy_heavy::cBinop_mpiwO3CE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_D5LeGbUM_sendMessage);
}

void Heavy_heavy::cSlice_ikv9N71j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_nGFBlMKh, 1, m, &cRandom_nGFBlMKh_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_aBr29xed_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_7Ek5QF06, m);
}

void Heavy_heavy::cCast_IIueT4oz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ubqtmJiQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_ubqtmJiQ_sendMessage);
}

void Heavy_heavy::cBinop_ubqtmJiQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zf3MKYno_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jjIHcZrf_sendMessage);
}

void Heavy_heavy::cMsg_xrZDToq6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_tuA6vVUL, HV_BINOP_SUBTRACT, 0, m, &cBinop_tuA6vVUL_sendMessage);
}

void Heavy_heavy::cCast_5009Qrwm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_g5wCpsES, HV_BINOP_MULTIPLY, 1, m, &cBinop_g5wCpsES_sendMessage);
}

void Heavy_heavy::cCast_ZatWjxHa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RXlMzesw, HV_BINOP_SUBTRACT, 1, m, &cBinop_RXlMzesw_sendMessage);
}

void Heavy_heavy::cBinop_Dhtkpu6I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_f4vGGg5x, m);
}

void Heavy_heavy::cBinop_tuA6vVUL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_Dhtkpu6I_sendMessage);
}

void Heavy_heavy::cCast_gQ2yxcRS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_7DwwYNzK_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_oH4eMmQE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_KdgyWQgH, 0, m, &cPack_KdgyWQgH_sendMessage);
}

void Heavy_heavy::cCast_sfW0FxJp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_3QmjrNjE_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_4lZpqQ73_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_vxDfmjiL, 0, m, NULL);
}

void Heavy_heavy::cBinop_4SXITEOk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_kiCHXT9L_sendMessage);
}

void Heavy_heavy::cSwitchcase_3QmjrNjE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_gQEoqnoB, 0, m, &cSlice_gQEoqnoB_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_nG8yjCr4, 0, m, &cRandom_nG8yjCr4_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_gQEoqnoB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_nG8yjCr4, 1, m, &cRandom_nG8yjCr4_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cUnop_kiCHXT9L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_DIFRTsbJ_sendMessage);
}

void Heavy_heavy::cRandom_nG8yjCr4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_4SXITEOk_sendMessage);
}

void Heavy_heavy::cPack_KdgyWQgH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_qwmLpZev, 0, m, NULL);
}

void Heavy_heavy::cSystem_xu6Bnhld_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_149zNVxP_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_12Ii3JQg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xu6Bnhld_sendMessage);
}

void Heavy_heavy::cIf_NAlKA9VC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_AJPwqsVU_sendMessage(_c, 0, m);
      cMsg_CFMmvAsg_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_7CwwZAoR_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_g5FsdiSg_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_tXoplabO, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_3ZNHlgxX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_NAlKA9VC, 1, m, &cIf_NAlKA9VC_sendMessage);
}

void Heavy_heavy::cBinop_mGESN3xK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_NEuKdUEI, m);
}

void Heavy_heavy::cBinop_g5FsdiSg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7rPKlM1k_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_n62NGYaz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lyXFb7qc, m);
}

void Heavy_heavy::cBinop_dN3l2dct_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_YoGned8v, m);
}

void Heavy_heavy::cMsg_149zNVxP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_mGESN3xK_sendMessage);
}

void Heavy_heavy::cMsg_CFMmvAsg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_YoGned8v, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_tXoplabO, m);
}

void Heavy_heavy::cVar_DakiSnsO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_3ZNHlgxX_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_NAlKA9VC, 0, m, &cIf_NAlKA9VC_sendMessage);
}

void Heavy_heavy::cMsg_7rPKlM1k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_cSv5C6La_sendMessage);
}

void Heavy_heavy::cMsg_aSEhNmxB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_n62NGYaz_sendMessage);
}

void Heavy_heavy::cMsg_7CwwZAoR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_dN3l2dct_sendMessage);
}

void Heavy_heavy::cMsg_AJPwqsVU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_g5FsdiSg_sendMessage);
}

void Heavy_heavy::cBinop_cSv5C6La_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aSEhNmxB_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_bOtGwkYs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_d2D0u6JA, 0, m, &cDelay_d2D0u6JA_sendMessage);
}

void Heavy_heavy::cSystem_QT1sdHui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_c0j6j8xu_sendMessage);
}

void Heavy_heavy::cMsg_DM2mEMQw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_QT1sdHui_sendMessage);
}

void Heavy_heavy::cVar_ecwi65FG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xwwdmxU4, HV_BINOP_MULTIPLY, 0, m, &cBinop_xwwdmxU4_sendMessage);
}

void Heavy_heavy::cBinop_MwPRloqt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_d2D0u6JA, 2, m, &cDelay_d2D0u6JA_sendMessage);
}

void Heavy_heavy::cBinop_xwwdmxU4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_MwPRloqt_sendMessage);
}

void Heavy_heavy::cDelay_d2D0u6JA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_d2D0u6JA, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_d2D0u6JA, 0, m, &cDelay_d2D0u6JA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sfW0FxJp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_02qbP85V_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uJQJcoHf_sendMessage);
}

void Heavy_heavy::cCast_AbDjJDuR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bOtGwkYs_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_d2D0u6JA, 0, m, &cDelay_d2D0u6JA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sfW0FxJp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_02qbP85V_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uJQJcoHf_sendMessage);
}

void Heavy_heavy::cBinop_c0j6j8xu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xwwdmxU4, HV_BINOP_MULTIPLY, 1, m, &cBinop_xwwdmxU4_sendMessage);
}

void Heavy_heavy::cSwitchcase_FvdvVOqX_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_bOtGwkYs_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_bOtGwkYs_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AbDjJDuR_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_9XVAHL5f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4lZpqQ73, 0, m, &cVar_4lZpqQ73_sendMessage);
}

void Heavy_heavy::cBinop_FXFgVC8n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_dKHLYSms, 0, m, &cPack_dKHLYSms_sendMessage);
}

void Heavy_heavy::cCast_02qbP85V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cPack_dKHLYSms_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_vxDfmjiL, 0, m, NULL);
}

void Heavy_heavy::cCast_uJQJcoHf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_bhh30ZiD_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_DIFRTsbJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ecwi65FG, 0, m, &cVar_ecwi65FG_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_dKHLYSms, 1, m, &cPack_dKHLYSms_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_KdgyWQgH, 1, m, &cPack_KdgyWQgH_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_4lZpqQ73, 1, m, &cVar_4lZpqQ73_sendMessage);
}

void Heavy_heavy::cCast_1eHfsKui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_3QmjrNjE_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cRandom_bu9LkiF5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_6aTXued2_sendMessage);
}

void Heavy_heavy::cUnop_x9JFD4zb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_FXFgVC8n_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_oH4eMmQE_sendMessage);
}

void Heavy_heavy::cBinop_6aTXued2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_x9JFD4zb_sendMessage);
}

void Heavy_heavy::cSwitchcase_bhh30ZiD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_tJFXdJKS, 0, m, &cSlice_tJFXdJKS_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_bu9LkiF5, 0, m, &cRandom_bu9LkiF5_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_tJFXdJKS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_bu9LkiF5, 1, m, &cRandom_bu9LkiF5_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_jgCmDAc6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_S1MAhq07, 0, m, &cPack_S1MAhq07_sendMessage);
}

void Heavy_heavy::cVar_oZ9frJes_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_0B3MOPzB, 0, m, NULL);
}

void Heavy_heavy::cMsg_fnM0KyV7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_mYw6UkLU, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_NcN9HxDg, m);
}

void Heavy_heavy::cMsg_uUaiw5E4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_HZbEnXeN_sendMessage);
}

void Heavy_heavy::cBinop_J1ahY39a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_obr8Ygg7, 1, m, &cIf_obr8Ygg7_sendMessage);
}

void Heavy_heavy::cIf_obr8Ygg7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_M9wnWpQS_sendMessage(_c, 0, m);
      cMsg_fnM0KyV7_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_uNZexJ17_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_PdzmZVeo_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_NcN9HxDg, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_Ff4eOUc9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_mYw6UkLU, m);
}

void Heavy_heavy::cMsg_db3sVi7E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Sftj6ecq_sendMessage);
}

void Heavy_heavy::cSystem_Sftj6ecq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JEPHtzsI_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_JEPHtzsI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_BLwttTxM_sendMessage);
}

void Heavy_heavy::cBinop_HZbEnXeN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uwwbKBqx_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_uNZexJ17_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Ff4eOUc9_sendMessage);
}

void Heavy_heavy::cBinop_PdzmZVeo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uUaiw5E4_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_uwwbKBqx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ap4mGODp_sendMessage);
}

void Heavy_heavy::cVar_tjN5QAKy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_J1ahY39a_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_obr8Ygg7, 0, m, &cIf_obr8Ygg7_sendMessage);
}

void Heavy_heavy::cBinop_ap4mGODp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zh0VHVEI, m);
}

void Heavy_heavy::cBinop_BLwttTxM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xZPoQcQ5, m);
}

void Heavy_heavy::cMsg_M9wnWpQS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_PdzmZVeo_sendMessage);
}

void Heavy_heavy::cBinop_zRV3ksoS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ouuiTvBc, 0, m, &cVar_ouuiTvBc_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_S1MAhq07, 1, m, &cPack_S1MAhq07_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_24KSVUfk, 1, m, &cPack_24KSVUfk_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_oZ9frJes, 1, m, &cVar_oZ9frJes_sendMessage);
}

void Heavy_heavy::cCast_xQ4gJyOr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_gZcDsTLz_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_bkI52wEi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XQjzzGUf, HV_BINOP_SUBTRACT, 1, m, &cBinop_XQjzzGUf_sendMessage);
}

void Heavy_heavy::cCast_30eRTSOq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_hRmbgA9W_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_RzekyWh9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_g1YtYiVI, HV_BINOP_MULTIPLY, 0, m, &cBinop_g1YtYiVI_sendMessage);
}

void Heavy_heavy::cCast_QjRXSc2i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fgZE8EoB_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_XQjzzGUf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5CbP7qUf_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RzekyWh9_sendMessage);
}

void Heavy_heavy::cCast_23FJda46_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_DkWLU7gA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_6yC9rGOQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hu2WScyj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3iNpCb0k_sendMessage);
}

void Heavy_heavy::cBinop_0ZC6qD6I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_Xyn2SFcP_sendMessage);
}

void Heavy_heavy::cCast_Qu8Wjy1E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ONxv52rs_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_gPkGFC06_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jI1l5Psh, HV_BINOP_SUBTRACT, 0, m, &cBinop_jI1l5Psh_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_ih1HkLYQ_sendMessage);
}

void Heavy_heavy::cBinop_L0PVraGN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8alwnYL7, 1, m, &cVar_8alwnYL7_sendMessage);
}

void Heavy_heavy::cSwitchcase_H3ia5tzw_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_X0c9NMDA_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_X0c9NMDA_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aaAnXjhT_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cDelay_IAUVOJJg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_IAUVOJJg, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_IAUVOJJg, 0, m, &cDelay_IAUVOJJg_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_gPkGFC06, 0, m, &cVar_gPkGFC06_sendMessage);
}

void Heavy_heavy::cBinop_Fi1Syczw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DvhdONor, HV_BINOP_MULTIPLY, 1, m, &cBinop_DvhdONor_sendMessage);
}

void Heavy_heavy::cBinop_maD0tv7w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_IAUVOJJg, 2, m, &cDelay_IAUVOJJg_sendMessage);
}

void Heavy_heavy::cBinop_DvhdONor_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_maD0tv7w_sendMessage);
}

void Heavy_heavy::cMsg_X0c9NMDA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_IAUVOJJg, 0, m, &cDelay_IAUVOJJg_sendMessage);
}

void Heavy_heavy::cSystem_zfCBw5dh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Fi1Syczw_sendMessage);
}

void Heavy_heavy::cMsg_16o8EXCk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zfCBw5dh_sendMessage);
}

void Heavy_heavy::cVar_FTnV3t4r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DvhdONor, HV_BINOP_MULTIPLY, 0, m, &cBinop_DvhdONor_sendMessage);
}

void Heavy_heavy::cCast_aaAnXjhT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_X0c9NMDA_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_IAUVOJJg, 0, m, &cDelay_IAUVOJJg_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_gPkGFC06, 0, m, &cVar_gPkGFC06_sendMessage);
}

void Heavy_heavy::cCast_zaoGtbeR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m2HM0QD4_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_8Bl9gR6f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_fOKh8kfS_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_vlRsIuhY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_cuqX5JEp, HV_BINOP_MULTIPLY, 0, m, &cBinop_cuqX5JEp_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_9IX8OmFZ, HV_BINOP_DIVIDE, 1, m, &cBinop_9IX8OmFZ_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_FTnV3t4r, 0, m, &cVar_FTnV3t4r_sendMessage);
}

void Heavy_heavy::cSlice_ERQI0yTB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2RVmcc8S_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xdZ7KUch_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2RVmcc8S_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xdZ7KUch_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_h4UsEfiq_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_01G4Rtzi, 0, m, &cSlice_01G4Rtzi_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ERQI0yTB, 0, m, &cSlice_ERQI0yTB_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4UPj5HMv_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_CE1Arkqd, 0, m, &cSlice_CE1Arkqd_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_fDeMJuSM, 0, m, &cSlice_fDeMJuSM_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Qu8Wjy1E_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zaoGtbeR_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_01G4Rtzi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_EfdzpIM8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_EfdzpIM8_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cMsg_EfdzpIM8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_H3ia5tzw_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_9IX8OmFZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OtHd8MtM, HV_BINOP_DIVIDE, 1, m, &cBinop_OtHd8MtM_sendMessage);
}

void Heavy_heavy::cCast_o8Rgk1tl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vlRsIuhY_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_fOKh8kfS_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_o8Rgk1tl_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_cuqX5JEp, HV_BINOP_MULTIPLY, 0, m, &cBinop_cuqX5JEp_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_9IX8OmFZ, HV_BINOP_DIVIDE, 1, m, &cBinop_9IX8OmFZ_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_FTnV3t4r, 0, m, &cVar_FTnV3t4r_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_8alwnYL7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_L0PVraGN, HV_BINOP_ADD, 0, m, &cBinop_L0PVraGN_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_YC6yC1ig, HV_BINOP_ADD, 0, m, &cBinop_YC6yC1ig_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bkI52wEi_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QjRXSc2i_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6yC9rGOQ_sendMessage);
}

void Heavy_heavy::cCast_2dqWAeFN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oMf2mO1F_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_OtHd8MtM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YC6yC1ig, HV_BINOP_ADD, 1, m, &cBinop_YC6yC1ig_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_L0PVraGN, HV_BINOP_ADD, 1, m, &cBinop_L0PVraGN_sendMessage);
}

void Heavy_heavy::cCast_PyeFTe6f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5lFrZ5gZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JIJGMTfJ_sendMessage);
}

void Heavy_heavy::cCast_gusvagUD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8alwnYL7, 0, m, &cVar_8alwnYL7_sendMessage);
}

void Heavy_heavy::cSwitchcase_DzXgDEXX_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gusvagUD_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PyeFTe6f_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cBinop_ih1HkLYQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_DzXgDEXX_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_HfBvWq3H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_SQOwGGKO_sendMessage);
}

void Heavy_heavy::cBinop_LdDEdBy0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jI1l5Psh, HV_BINOP_SUBTRACT, 1, m, &cBinop_jI1l5Psh_sendMessage);
}

void Heavy_heavy::cCast_5lFrZ5gZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oMf2mO1F_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_2CYxKlgj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9IX8OmFZ, HV_BINOP_DIVIDE, 0, m, &cBinop_9IX8OmFZ_sendMessage);
}

void Heavy_heavy::cSystem_qPdloMQk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cuqX5JEp, HV_BINOP_MULTIPLY, 1, m, &cBinop_cuqX5JEp_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_HfBvWq3H, HV_BINOP_MULTIPLY, 1, m, &cBinop_HfBvWq3H_sendMessage);
}

void Heavy_heavy::cMsg_I82UomOM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qPdloMQk_sendMessage);
}

void Heavy_heavy::cVar_Mq6VAOjq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8alwnYL7, 0, m, &cVar_8alwnYL7_sendMessage);
}

void Heavy_heavy::cCast_JIJGMTfJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Mq6VAOjq, 0, m, &cVar_Mq6VAOjq_sendMessage);
}

void Heavy_heavy::cMsg_ONxv52rs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_H3ia5tzw_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_wYMCepuj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dNDA6FJ3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2CYxKlgj_sendMessage);
}

void Heavy_heavy::cSlice_CE1Arkqd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dNDA6FJ3_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2CYxKlgj_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_fDeMJuSM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Iz2jx7SR_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nJt2zELH_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cCast_dNDA6FJ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HfBvWq3H, HV_BINOP_MULTIPLY, 0, m, &cBinop_HfBvWq3H_sendMessage);
}

void Heavy_heavy::cCast_4UPj5HMv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wYMCepuj, 0, m, &cVar_wYMCepuj_sendMessage);
}

void Heavy_heavy::cCast_xdZ7KUch_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2dqWAeFN_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_YC6yC1ig, HV_BINOP_ADD, 0, m, &cBinop_YC6yC1ig_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_8alwnYL7, 1, m, &cVar_8alwnYL7_sendMessage);
}

void Heavy_heavy::cCast_Iz2jx7SR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Mq6VAOjq, 1, m, &cVar_Mq6VAOjq_sendMessage);
}

void Heavy_heavy::cBinop_cuqX5JEp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_LdDEdBy0_sendMessage);
}

void Heavy_heavy::cCast_nJt2zELH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_F2dVutyA, HV_BINOP_SUBTRACT, 0, m, &cBinop_F2dVutyA_sendMessage);
}

void Heavy_heavy::cMsg_m2HM0QD4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_wYMCepuj, 1, m, &cVar_wYMCepuj_sendMessage);
}

void Heavy_heavy::cBinop_SQOwGGKO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gPkGFC06, 1, m, &cVar_gPkGFC06_sendMessage);
}

void Heavy_heavy::cBinop_jI1l5Psh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gPkGFC06, 1, m, &cVar_gPkGFC06_sendMessage);
}

void Heavy_heavy::cBinop_F2dVutyA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OtHd8MtM, HV_BINOP_DIVIDE, 0, m, &cBinop_OtHd8MtM_sendMessage);
}

void Heavy_heavy::cBinop_YC6yC1ig_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BAEFLpbx, 0, m, &cVar_BAEFLpbx_sendMessage);
}

void Heavy_heavy::cMsg_oMf2mO1F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_H3ia5tzw_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_YC6yC1ig, HV_BINOP_ADD, 1, m, &cBinop_YC6yC1ig_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_L0PVraGN, HV_BINOP_ADD, 1, m, &cBinop_L0PVraGN_sendMessage);
}

void Heavy_heavy::cCast_2RVmcc8S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EfdzpIM8_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_BAEFLpbx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_F2dVutyA, HV_BINOP_SUBTRACT, 1, m, &cBinop_F2dVutyA_sendMessage);
}

void Heavy_heavy::cBinop_fq5pYsm6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3dpYVgVG, m);
}

void Heavy_heavy::cCast_5CbP7qUf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_g1YtYiVI, HV_BINOP_MULTIPLY, 1, m, &cBinop_g1YtYiVI_sendMessage);
}

void Heavy_heavy::cBinop_4J18oSQy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_q4Gg3hjo, 1, m, &cPack_q4Gg3hjo_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_MnRzC0U3, 1, m, &cDelay_MnRzC0U3_sendMessage);
}

void Heavy_heavy::cRandom_J3X2Kmdb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_iOE9e75C_sendMessage);
}

void Heavy_heavy::cSwitchcase_Oe7nHoC8_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_HzHrIae5, 0, m, &cSlice_HzHrIae5_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_J3X2Kmdb, 0, m, &cRandom_J3X2Kmdb_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cUnop_Qs94ZHsy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_4J18oSQy_sendMessage);
}

void Heavy_heavy::cSlice_HzHrIae5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_J3X2Kmdb, 1, m, &cRandom_J3X2Kmdb_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_iOE9e75C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_Qs94ZHsy_sendMessage);
}

void Heavy_heavy::cRandom_PpShUtt9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_q3nyIG6x_sendMessage);
}

void Heavy_heavy::cUnop_liHotuIf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_F6ckBV30_sendMessage);
}

void Heavy_heavy::cSlice_sYfaxlqs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_PpShUtt9, 1, m, &cRandom_PpShUtt9_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_hRmbgA9W_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_sYfaxlqs, 0, m, &cSlice_sYfaxlqs_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_PpShUtt9, 0, m, &cRandom_PpShUtt9_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_q3nyIG6x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_liHotuIf_sendMessage);
}

void Heavy_heavy::cBinop_IkVv6xde_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_fq5pYsm6_sendMessage);
}

void Heavy_heavy::cCast_T2Lze6LS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IkVv6xde, HV_BINOP_SUBTRACT, 1, m, &cBinop_IkVv6xde_sendMessage);
}

void Heavy_heavy::cCast_iGYWOIOP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Oe7nHoC8_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_uPYN9tNp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_IkVv6xde, HV_BINOP_SUBTRACT, 0, m, &cBinop_IkVv6xde_sendMessage);
}

void Heavy_heavy::cCast_wvyR92kW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yqOCV1RB_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_3iNpCb0k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gPEUOeHY, HV_BINOP_MULTIPLY, 0, m, &cBinop_gPEUOeHY_sendMessage);
}

void Heavy_heavy::cCast_yWuWrlJV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0ZC6qD6I, HV_BINOP_SUBTRACT, 1, m, &cBinop_0ZC6qD6I_sendMessage);
}

void Heavy_heavy::cBinop_Xyn2SFcP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gJhua2KZ, m);
}

void Heavy_heavy::cPack_q4Gg3hjo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_h4UsEfiq_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_yqOCV1RB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_0ZC6qD6I, HV_BINOP_SUBTRACT, 0, m, &cBinop_0ZC6qD6I_sendMessage);
}

void Heavy_heavy::cCast_3ETFVnkF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uPYN9tNp_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_fgZE8EoB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_XQjzzGUf, HV_BINOP_SUBTRACT, 0, m, &cBinop_XQjzzGUf_sendMessage);
}

void Heavy_heavy::cBinop_gPEUOeHY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yWuWrlJV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wvyR92kW_sendMessage);
}

void Heavy_heavy::cSwitchcase_DkWLU7gA_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_4SI2vGkf_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_4SI2vGkf_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_MnRzC0U3, 1, m, &cDelay_MnRzC0U3_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PVH3eHuh_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_4SI2vGkf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_MnRzC0U3, 0, m, &cDelay_MnRzC0U3_sendMessage);
}

void Heavy_heavy::cCast_PVH3eHuh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_MnRzC0U3, 0, m, &cDelay_MnRzC0U3_sendMessage);
}

void Heavy_heavy::cDelay_MnRzC0U3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_MnRzC0U3, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iGYWOIOP_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_30eRTSOq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_23FJda46_sendMessage);
}

void Heavy_heavy::cBinop_F6ckBV30_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_q4Gg3hjo, 0, m, &cPack_q4Gg3hjo_sendMessage);
}

void Heavy_heavy::cBinop_g1YtYiVI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_T2Lze6LS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3ETFVnkF_sendMessage);
}

void Heavy_heavy::cCast_hu2WScyj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gPEUOeHY, HV_BINOP_MULTIPLY, 1, m, &cBinop_gPEUOeHY_sendMessage);
}

void Heavy_heavy::cCast_BYKCDtXD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_0mR5M6wF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cPack_24KSVUfk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_AnWOv4yQ, 0, m, NULL);
}

void Heavy_heavy::cCast_sJAIAPju_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_gZcDsTLz_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_L9yKo0g5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oZ9frJes, 0, m, &cVar_oZ9frJes_sendMessage);
}

void Heavy_heavy::cBinop_YsngEI8Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_24KSVUfk, 0, m, &cPack_24KSVUfk_sendMessage);
}

void Heavy_heavy::cCast_Tu266uQZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cUnop_3B4oJiY1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 400.0f, 0, m, &cBinop_jgCmDAc6_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_YsngEI8Y_sendMessage);
}

void Heavy_heavy::cBinop_ld9Ne0Pu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_3B4oJiY1_sendMessage);
}

void Heavy_heavy::cRandom_64kH2RW6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_ld9Ne0Pu_sendMessage);
}

void Heavy_heavy::cSlice_X7nhHSqv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_64kH2RW6, 1, m, &cRandom_64kH2RW6_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_0mR5M6wF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_X7nhHSqv, 0, m, &cSlice_X7nhHSqv_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_64kH2RW6, 0, m, &cRandom_64kH2RW6_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_ouuiTvBc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_P1H0NL9K, HV_BINOP_MULTIPLY, 0, m, &cBinop_P1H0NL9K_sendMessage);
}

void Heavy_heavy::cDelay_nkto4b3I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_nkto4b3I, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_nkto4b3I, 0, m, &cDelay_nkto4b3I_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sJAIAPju_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Tu266uQZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BYKCDtXD_sendMessage);
}

void Heavy_heavy::cCast_yo5u9R8i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_j9AroK88_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_nkto4b3I, 0, m, &cDelay_nkto4b3I_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sJAIAPju_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Tu266uQZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BYKCDtXD_sendMessage);
}

void Heavy_heavy::cMsg_j9AroK88_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_nkto4b3I, 0, m, &cDelay_nkto4b3I_sendMessage);
}

void Heavy_heavy::cSystem_67OmrzRJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_7ytlgUjj_sendMessage);
}

void Heavy_heavy::cMsg_93g0hlGG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_67OmrzRJ_sendMessage);
}

void Heavy_heavy::cSwitchcase_suko4eCh_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_j9AroK88_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_j9AroK88_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yo5u9R8i_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_7ytlgUjj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_P1H0NL9K, HV_BINOP_MULTIPLY, 1, m, &cBinop_P1H0NL9K_sendMessage);
}

void Heavy_heavy::cBinop_P1H0NL9K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_YGdt2kiC_sendMessage);
}

void Heavy_heavy::cBinop_YGdt2kiC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_nkto4b3I, 2, m, &cDelay_nkto4b3I_sendMessage);
}

void Heavy_heavy::cSwitchcase_gZcDsTLz_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_hPTUge7J, 0, m, &cSlice_hPTUge7J_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_1zJdtVGC, 0, m, &cRandom_1zJdtVGC_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_hPTUge7J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_1zJdtVGC, 1, m, &cRandom_1zJdtVGC_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cRandom_1zJdtVGC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_FQcj5kaG_sendMessage);
}

void Heavy_heavy::cBinop_FQcj5kaG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_SItedviN_sendMessage);
}

void Heavy_heavy::cUnop_SItedviN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_zRV3ksoS_sendMessage);
}

void Heavy_heavy::cPack_S1MAhq07_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_0B3MOPzB, 0, m, NULL);
}

void Heavy_heavy::cBinop_11JzIFOU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pbZrZyg3, HV_BINOP_MULTIPLY, 1, m, &cBinop_pbZrZyg3_sendMessage);
}

void Heavy_heavy::cBinop_pbZrZyg3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_tTRiTVY4_sendMessage);
}

void Heavy_heavy::cCast_brZDFfKU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OpCUNTWR_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_SOhGicYK, 0, m, &cDelay_SOhGicYK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RpwyeWHK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_S1l67K8T_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TpmzmDwf_sendMessage);
}

void Heavy_heavy::cBinop_tTRiTVY4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_SOhGicYK, 2, m, &cDelay_SOhGicYK_sendMessage);
}

void Heavy_heavy::cSwitchcase_msrkvGCZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_OpCUNTWR_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_OpCUNTWR_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_brZDFfKU_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_OpCUNTWR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_SOhGicYK, 0, m, &cDelay_SOhGicYK_sendMessage);
}

void Heavy_heavy::cVar_41DHiBEr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pbZrZyg3, HV_BINOP_MULTIPLY, 0, m, &cBinop_pbZrZyg3_sendMessage);
}

void Heavy_heavy::cSystem_sSw9rVfD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_11JzIFOU_sendMessage);
}

void Heavy_heavy::cMsg_pWsibWbd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sSw9rVfD_sendMessage);
}

void Heavy_heavy::cDelay_SOhGicYK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_SOhGicYK, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_SOhGicYK, 0, m, &cDelay_SOhGicYK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RpwyeWHK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_S1l67K8T_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TpmzmDwf_sendMessage);
}

void Heavy_heavy::cCast_RpwyeWHK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_VOkyLYAN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_b7UJsueB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dTgUowq5, 0, m, &cVar_dTgUowq5_sendMessage);
}

void Heavy_heavy::cCast_TpmzmDwf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_7Qa4ttrw_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_23H6vEbR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_zXx7fXnb, 0, m, &cPack_zXx7fXnb_sendMessage);
}

void Heavy_heavy::cBinop_Cl7CQ3jr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_UhRx7f0i, 0, m, &cPack_UhRx7f0i_sendMessage);
}

void Heavy_heavy::cPack_zXx7fXnb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_BN1zJNh8, 0, m, NULL);
}

void Heavy_heavy::cCast_S1l67K8T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cBinop_eULJahVE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_41DHiBEr, 0, m, &cVar_41DHiBEr_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_zXx7fXnb, 1, m, &cPack_zXx7fXnb_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_UhRx7f0i, 1, m, &cPack_UhRx7f0i_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_dTgUowq5, 1, m, &cVar_dTgUowq5_sendMessage);
}

void Heavy_heavy::cCast_Zmrai8ta_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_VOkyLYAN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_4CnX2DGe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_CGUicVyr, m);
}

void Heavy_heavy::cBinop_nHbvfMb8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_dnAvmyKM, 0, m, &cPack_dnAvmyKM_sendMessage);
}

void Heavy_heavy::cCast_YDVlQcUp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_S3qlaNWG_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_gIaZAcpd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xzq3PSI2, HV_BINOP_MULTIPLY, 1, m, &cBinop_xzq3PSI2_sendMessage);
}

void Heavy_heavy::cCast_ef20m81j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MHU0dgB0, HV_BINOP_SUBTRACT, 1, m, &cBinop_MHU0dgB0_sendMessage);
}

void Heavy_heavy::cBinop_vSehBol7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_ebyyVOo8_sendMessage);
}

void Heavy_heavy::cRandom_MY1m4lZP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_vSehBol7_sendMessage);
}

void Heavy_heavy::cSlice_RAWN7h9W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_MY1m4lZP, 1, m, &cRandom_MY1m4lZP_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cUnop_ebyyVOo8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_R3972EXh_sendMessage);
}

void Heavy_heavy::cSwitchcase_3C7y54S4_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_RAWN7h9W, 0, m, &cSlice_RAWN7h9W_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_MY1m4lZP, 0, m, &cRandom_MY1m4lZP_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_3pgn4tT1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_B1EK1MPt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fAjR8EPA_sendMessage);
}

void Heavy_heavy::cBinop_R3972EXh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_dnAvmyKM, 1, m, &cPack_dnAvmyKM_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_OH7ZN5SZ, 1, m, &cDelay_OH7ZN5SZ_sendMessage);
}

void Heavy_heavy::cMsg_S3qlaNWG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_MHU0dgB0, HV_BINOP_SUBTRACT, 0, m, &cBinop_MHU0dgB0_sendMessage);
}

void Heavy_heavy::cCast_B1EK1MPt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mPUPZCIX, HV_BINOP_SUBTRACT, 1, m, &cBinop_mPUPZCIX_sendMessage);
}

void Heavy_heavy::cBinop_CvhLjxNh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gIaZAcpd_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xyQfaD18_sendMessage);
}

void Heavy_heavy::cBinop_6Jt71yuJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Tq1x9TS3, 1, m, &cVar_Tq1x9TS3_sendMessage);
}

void Heavy_heavy::cCast_k28UpMYs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KQNhBx5y_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_AnrWvWwo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dB8iZrEw_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_LnGLRaKE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qW2WN6aY_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_IUICPiLu, HV_BINOP_ADD, 0, m, &cBinop_IUICPiLu_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_njkapnji, 1, m, &cVar_njkapnji_sendMessage);
}

void Heavy_heavy::cBinop_75PKJi3C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IUICPiLu, HV_BINOP_ADD, 1, m, &cBinop_IUICPiLu_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CvXWNfhp, HV_BINOP_ADD, 1, m, &cBinop_CvXWNfhp_sendMessage);
}

void Heavy_heavy::cBinop_60y4QERS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_6Jt71yuJ_sendMessage);
}

void Heavy_heavy::cMsg_dB8iZrEw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_fJKLAdYg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_IUICPiLu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6ZgCzlGX, 0, m, &cVar_6ZgCzlGX_sendMessage);
}

void Heavy_heavy::cSlice_6ZRf9Nvs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_klLZjnw6_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LnGLRaKE_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_klLZjnw6_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LnGLRaKE_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_K1Yqu5yZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_T5AJIeH4, 0, m, &cSlice_T5AJIeH4_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_6ZRf9Nvs, 0, m, &cSlice_6ZRf9Nvs_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3J1kgo6z_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_kQg0byy8, 0, m, &cSlice_kQg0byy8_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_5qbXa5qr, 0, m, &cSlice_5qbXa5qr_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AnrWvWwo_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k28UpMYs_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_T5AJIeH4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_SFM4VUUq_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_SFM4VUUq_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cMsg_cuvcajGw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_c3eU8OIX_sendMessage);
}

void Heavy_heavy::cSystem_c3eU8OIX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XNTGnPxo, HV_BINOP_MULTIPLY, 1, m, &cBinop_XNTGnPxo_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_60y4QERS, HV_BINOP_MULTIPLY, 1, m, &cBinop_60y4QERS_sendMessage);
}

void Heavy_heavy::cMsg_KQNhBx5y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_izMX6LGd, 1, m, &cVar_izMX6LGd_sendMessage);
}

void Heavy_heavy::cMsg_nkANjPTa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_XNTGnPxo, HV_BINOP_MULTIPLY, 0, m, &cBinop_XNTGnPxo_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TZDLeZvI, HV_BINOP_DIVIDE, 1, m, &cBinop_TZDLeZvI_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_HKF97XFp, 0, m, &cVar_HKF97XFp_sendMessage);
}

void Heavy_heavy::cCast_klLZjnw6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SFM4VUUq_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_bgZDWWOT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_njkapnji, 0, m, &cVar_njkapnji_sendMessage);
}

void Heavy_heavy::cVar_njkapnji_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CvXWNfhp, HV_BINOP_ADD, 0, m, &cBinop_CvXWNfhp_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_IUICPiLu, HV_BINOP_ADD, 0, m, &cBinop_IUICPiLu_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0jJ6PmB0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GKat8fgU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ACnodVKO_sendMessage);
}

void Heavy_heavy::cCast_3J1kgo6z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_izMX6LGd, 0, m, &cVar_izMX6LGd_sendMessage);
}

void Heavy_heavy::cVar_Tq1x9TS3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_N2pe9eWZ, HV_BINOP_SUBTRACT, 0, m, &cBinop_N2pe9eWZ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_DY4qRAs4_sendMessage);
}

void Heavy_heavy::cCast_odjbnQK8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_60y4QERS, HV_BINOP_MULTIPLY, 0, m, &cBinop_60y4QERS_sendMessage);
}

void Heavy_heavy::cSlice_5qbXa5qr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HcjoYYOo_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZV2YYxPp_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_kQg0byy8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_odjbnQK8_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Xwc6fvsh_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cCast_gKoqMpd3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EfnXzsYe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NLaV9C2Y_sendMessage);
}

void Heavy_heavy::cCast_WFXcy3GY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_njkapnji, 0, m, &cVar_njkapnji_sendMessage);
}

void Heavy_heavy::cSwitchcase_ZNz1SfFL_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WFXcy3GY_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gKoqMpd3_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cMsg_SFM4VUUq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_fJKLAdYg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_CvXWNfhp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_njkapnji, 1, m, &cVar_njkapnji_sendMessage);
}

void Heavy_heavy::cBinop_AQtGCqDl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J9fhQEHg, HV_BINOP_MULTIPLY, 1, m, &cBinop_J9fhQEHg_sendMessage);
}

void Heavy_heavy::cBinop_BBSbnvAO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_NbRf5FHy, 2, m, &cDelay_NbRf5FHy_sendMessage);
}

void Heavy_heavy::cMsg_b8pKUAeF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_NbRf5FHy, 0, m, &cDelay_NbRf5FHy_sendMessage);
}

void Heavy_heavy::cDelay_NbRf5FHy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_NbRf5FHy, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_NbRf5FHy, 0, m, &cDelay_NbRf5FHy_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Tq1x9TS3, 0, m, &cVar_Tq1x9TS3_sendMessage);
}

void Heavy_heavy::cSystem_PW6DCnmQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_AQtGCqDl_sendMessage);
}

void Heavy_heavy::cMsg_dZmavg6x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_PW6DCnmQ_sendMessage);
}

void Heavy_heavy::cBinop_J9fhQEHg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_BBSbnvAO_sendMessage);
}

void Heavy_heavy::cCast_MgGwoXph_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_b8pKUAeF_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_NbRf5FHy, 0, m, &cDelay_NbRf5FHy_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Tq1x9TS3, 0, m, &cVar_Tq1x9TS3_sendMessage);
}

void Heavy_heavy::cSwitchcase_fJKLAdYg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_b8pKUAeF_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_b8pKUAeF_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MgGwoXph_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_HKF97XFp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J9fhQEHg, HV_BINOP_MULTIPLY, 0, m, &cBinop_J9fhQEHg_sendMessage);
}

void Heavy_heavy::cBinop_XNTGnPxo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_q1F3XevN_sendMessage);
}

void Heavy_heavy::cVar_x7G0rKFK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_US71LKXf_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_vnIElyEz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nkANjPTa_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_US71LKXf_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vnIElyEz_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_XNTGnPxo, HV_BINOP_MULTIPLY, 0, m, &cBinop_XNTGnPxo_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_TZDLeZvI, HV_BINOP_DIVIDE, 1, m, &cBinop_TZDLeZvI_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_HKF97XFp, 0, m, &cVar_HKF97XFp_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_TZDLeZvI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_75PKJi3C, HV_BINOP_DIVIDE, 1, m, &cBinop_75PKJi3C_sendMessage);
}

void Heavy_heavy::cCast_ZV2YYxPp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TXt4vfKi, HV_BINOP_SUBTRACT, 0, m, &cBinop_TXt4vfKi_sendMessage);
}

void Heavy_heavy::cVar_6ZgCzlGX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TXt4vfKi, HV_BINOP_SUBTRACT, 1, m, &cBinop_TXt4vfKi_sendMessage);
}

void Heavy_heavy::cCast_HcjoYYOo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bgZDWWOT, 1, m, &cVar_bgZDWWOT_sendMessage);
}

void Heavy_heavy::cCast_NLaV9C2Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bgZDWWOT, 0, m, &cVar_bgZDWWOT_sendMessage);
}

void Heavy_heavy::cBinop_TXt4vfKi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_75PKJi3C, HV_BINOP_DIVIDE, 0, m, &cBinop_75PKJi3C_sendMessage);
}

void Heavy_heavy::cCast_qW2WN6aY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dYfX07H3_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_EfnXzsYe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dYfX07H3_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_q1F3XevN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_N2pe9eWZ, HV_BINOP_SUBTRACT, 1, m, &cBinop_N2pe9eWZ_sendMessage);
}

void Heavy_heavy::cBinop_N2pe9eWZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Tq1x9TS3, 1, m, &cVar_Tq1x9TS3_sendMessage);
}

void Heavy_heavy::cBinop_DY4qRAs4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ZNz1SfFL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_Xwc6fvsh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TZDLeZvI, HV_BINOP_DIVIDE, 0, m, &cBinop_TZDLeZvI_sendMessage);
}

void Heavy_heavy::cMsg_dYfX07H3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_fJKLAdYg_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_IUICPiLu, HV_BINOP_ADD, 1, m, &cBinop_IUICPiLu_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CvXWNfhp, HV_BINOP_ADD, 1, m, &cBinop_CvXWNfhp_sendMessage);
}

void Heavy_heavy::cVar_izMX6LGd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_odjbnQK8_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Xwc6fvsh_sendMessage);
}

void Heavy_heavy::cCast_lzUI7rTq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3pgn4tT1, HV_BINOP_MULTIPLY, 1, m, &cBinop_3pgn4tT1_sendMessage);
}

void Heavy_heavy::cCast_BIbkNlns_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_3C7y54S4_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cPack_dnAvmyKM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_K1Yqu5yZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_xyQfaD18_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xzq3PSI2, HV_BINOP_MULTIPLY, 0, m, &cBinop_xzq3PSI2_sendMessage);
}

void Heavy_heavy::cMsg_WE3jdxR3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_mPUPZCIX, HV_BINOP_SUBTRACT, 0, m, &cBinop_mPUPZCIX_sendMessage);
}

void Heavy_heavy::cCast_0jJ6PmB0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CvhLjxNh, HV_BINOP_SUBTRACT, 1, m, &cBinop_CvhLjxNh_sendMessage);
}

void Heavy_heavy::cCast_iFt3ybuF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3pgn4tT1, HV_BINOP_MULTIPLY, 0, m, &cBinop_3pgn4tT1_sendMessage);
}

void Heavy_heavy::cCast_ACnodVKO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lzUI7rTq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iFt3ybuF_sendMessage);
}

void Heavy_heavy::cBinop_xzq3PSI2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ef20m81j_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YDVlQcUp_sendMessage);
}

void Heavy_heavy::cBinop_4kFSCoOy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dArZNn9W, m);
}

void Heavy_heavy::cCast_GKat8fgU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lhKjq3jG_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_MHU0dgB0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_4kFSCoOy_sendMessage);
}

void Heavy_heavy::cCast_DIkIn1iW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_3x729IvX_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_fAjR8EPA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WE3jdxR3_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_lhKjq3jG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CvhLjxNh, HV_BINOP_SUBTRACT, 0, m, &cBinop_CvhLjxNh_sendMessage);
}

void Heavy_heavy::cSwitchcase_pPCvd0WN_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_oh4Pk9qd, 0, m, &cSlice_oh4Pk9qd_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_blmRi0Sv, 0, m, &cRandom_blmRi0Sv_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_oZzCgBdk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_bCpf1JKN_sendMessage);
}

void Heavy_heavy::cUnop_bCpf1JKN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_nHbvfMb8_sendMessage);
}

void Heavy_heavy::cSlice_oh4Pk9qd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_blmRi0Sv, 1, m, &cRandom_blmRi0Sv_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cRandom_blmRi0Sv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_oZzCgBdk_sendMessage);
}

void Heavy_heavy::cSwitchcase_3x729IvX_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_bmvo13np_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_bmvo13np_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_OH7ZN5SZ, 1, m, &cDelay_OH7ZN5SZ_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LqBFDN15_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_LqBFDN15_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_OH7ZN5SZ, 0, m, &cDelay_OH7ZN5SZ_sendMessage);
}

void Heavy_heavy::cMsg_bmvo13np_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_OH7ZN5SZ, 0, m, &cDelay_OH7ZN5SZ_sendMessage);
}

void Heavy_heavy::cDelay_OH7ZN5SZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_OH7ZN5SZ, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BIbkNlns_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jft6mLpv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DIkIn1iW_sendMessage);
}

void Heavy_heavy::cBinop_mPUPZCIX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_4CnX2DGe_sendMessage);
}

void Heavy_heavy::cCast_jft6mLpv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_pPCvd0WN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cPack_UhRx7f0i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_IDZqqBZE, 0, m, NULL);
}

void Heavy_heavy::cSlice_qzAdA8wF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_e3lnxPJ1, 1, m, &cRandom_e3lnxPJ1_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cUnop_OTCDGl4J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_eULJahVE_sendMessage);
}

void Heavy_heavy::cSwitchcase_VOkyLYAN_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_qzAdA8wF, 0, m, &cSlice_qzAdA8wF_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_e3lnxPJ1, 0, m, &cRandom_e3lnxPJ1_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cRandom_e3lnxPJ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_3kZCIbo6_sendMessage);
}

void Heavy_heavy::cBinop_3kZCIbo6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_OTCDGl4J_sendMessage);
}

void Heavy_heavy::cUnop_8RXeuzEk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2400.0f, 0, m, &cBinop_23H6vEbR_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_Cl7CQ3jr_sendMessage);
}

void Heavy_heavy::cSlice_NIwXXv4j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_FFnyORYI, 1, m, &cRandom_FFnyORYI_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cRandom_FFnyORYI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_ciP0hmst_sendMessage);
}

void Heavy_heavy::cBinop_ciP0hmst_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_8RXeuzEk_sendMessage);
}

void Heavy_heavy::cSwitchcase_7Qa4ttrw_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_NIwXXv4j, 0, m, &cSlice_NIwXXv4j_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_FFnyORYI, 0, m, &cRandom_FFnyORYI_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_dTgUowq5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_BN1zJNh8, 0, m, NULL);
}

void Heavy_heavy::cVar_FbjyMdka_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_2ThjU4YU_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_UGiApEtn, 0, m, &cIf_UGiApEtn_sendMessage);
}

void Heavy_heavy::cMsg_9gRnD7xS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_HMECZyZQ_sendMessage);
}

void Heavy_heavy::cSystem_HMECZyZQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dpWoRvQE_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_7qaVmduz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_0GxxRK0g_sendMessage);
}

void Heavy_heavy::cMsg_jljj3v3L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_OoecR73u_sendMessage);
}

void Heavy_heavy::cBinop_OoecR73u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UQupxKN3, m);
}

void Heavy_heavy::cMsg_kK1S8bjY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_nWjudenv_sendMessage);
}

void Heavy_heavy::cMsg_dPOrgRQv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_4gav6I7Z, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_j4Zfg35u, m);
}

void Heavy_heavy::cBinop_RSQfrqiP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_csNnFR4v, m);
}

void Heavy_heavy::cIf_UGiApEtn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_7qaVmduz_sendMessage(_c, 0, m);
      cMsg_dPOrgRQv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_kK1S8bjY_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_0GxxRK0g_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_j4Zfg35u, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_2ThjU4YU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_UGiApEtn, 1, m, &cIf_UGiApEtn_sendMessage);
}

void Heavy_heavy::cMsg_4e2jthTy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Zn3pI2w6_sendMessage);
}

void Heavy_heavy::cBinop_nWjudenv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_4gav6I7Z, m);
}

void Heavy_heavy::cBinop_0GxxRK0g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4e2jthTy_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_Zn3pI2w6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jljj3v3L_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_dpWoRvQE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_RSQfrqiP_sendMessage);
}

void Heavy_heavy::cPack_n9s3ZPMG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_3mmqNi7X, 0, m, NULL);
}

void Heavy_heavy::cRandom_i3Aq60pf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_RIsRKfhT_sendMessage);
}

void Heavy_heavy::cUnop_q74j5thb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1200.0f, 0, m, &cBinop_lESdl3vd_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_jPqysBgh_sendMessage);
}

void Heavy_heavy::cSlice_YMJa3EYj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_i3Aq60pf, 1, m, &cRandom_i3Aq60pf_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_RIsRKfhT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_q74j5thb_sendMessage);
}

void Heavy_heavy::cSwitchcase_wAIG4CJV_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_YMJa3EYj, 0, m, &cSlice_YMJa3EYj_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_i3Aq60pf, 0, m, &cRandom_i3Aq60pf_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_lESdl3vd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_n9s3ZPMG, 0, m, &cPack_n9s3ZPMG_sendMessage);
}

void Heavy_heavy::cCast_Y4c4OUJf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cCast_VREJaYcU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_OvODfxEV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_jPqysBgh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_0p5ijURg, 0, m, &cPack_0p5ijURg_sendMessage);
}

void Heavy_heavy::cCast_4DkWGnra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TqsyDMya_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_SDR1ha7Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_tyVPjQOa, m);
}

void Heavy_heavy::cBinop_ZawZI182_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_GTlKmyWk, 0, m, &cPack_GTlKmyWk_sendMessage);
}

void Heavy_heavy::cCast_XQYNwjee_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Bo427ZTJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_s0oj611G_sendMessage);
}

void Heavy_heavy::cVar_JabQ35Ar_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TjqcLHml, 0, m, &cVar_TjqcLHml_sendMessage);
}

void Heavy_heavy::cBinop_WvkLAW1P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wTSTg6nt, 1, m, &cVar_wTSTg6nt_sendMessage);
}

void Heavy_heavy::cBinop_4gGNXjEa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_KHtyNgMp_sendMessage);
}

void Heavy_heavy::cMsg_5PfTJh32_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_INxoivqX_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_TjqcLHml_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ueXRym6l, HV_BINOP_ADD, 0, m, &cBinop_ueXRym6l_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rwbDieVo, HV_BINOP_ADD, 0, m, &cBinop_rwbDieVo_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AP1CPGlo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_apdyBHvH_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XQYNwjee_sendMessage);
}

void Heavy_heavy::cBinop_KHtyNgMp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wTSTg6nt, 1, m, &cVar_wTSTg6nt_sendMessage);
}

void Heavy_heavy::cCast_tvZYXTQx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_82iVjUca, 0, m, &cVar_82iVjUca_sendMessage);
}

void Heavy_heavy::cBinop_8z8FGEiI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_fIEY2cFg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_u8yHjOxG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JabQ35Ar, 0, m, &cVar_JabQ35Ar_sendMessage);
}

void Heavy_heavy::cCast_GProSVuR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PF8wSwqe_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_SSYSDS5A_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GProSVuR_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_frtDLgX1, HV_BINOP_MULTIPLY, 0, m, &cBinop_frtDLgX1_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_fXHeMIp6, HV_BINOP_DIVIDE, 1, m, &cBinop_fXHeMIp6_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_xxR4Jj7S, 0, m, &cVar_xxR4Jj7S_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_HmSCYE0p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_SSYSDS5A_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_Si78YB8v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WvkLAW1P, HV_BINOP_SUBTRACT, 1, m, &cBinop_WvkLAW1P_sendMessage);
}

void Heavy_heavy::cVar_wTSTg6nt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WvkLAW1P, HV_BINOP_SUBTRACT, 0, m, &cBinop_WvkLAW1P_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_8z8FGEiI_sendMessage);
}

void Heavy_heavy::cBinop_rwbDieVo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2bkvEzBo, 0, m, &cVar_2bkvEzBo_sendMessage);
}

void Heavy_heavy::cBinop_frtDLgX1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Si78YB8v_sendMessage);
}

void Heavy_heavy::cCast_IkUGh9C7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jGr0xxfY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_u8yHjOxG_sendMessage);
}

void Heavy_heavy::cCast_S3rFZGg5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TjqcLHml, 0, m, &cVar_TjqcLHml_sendMessage);
}

void Heavy_heavy::cSwitchcase_fIEY2cFg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_S3rFZGg5_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IkUGh9C7_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cVar_82iVjUca_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4A3LvCEi_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VaPnAvjN_sendMessage);
}

void Heavy_heavy::cBinop_7YCUQBcQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_N5Y8PQ9R, HV_BINOP_DIVIDE, 0, m, &cBinop_N5Y8PQ9R_sendMessage);
}

void Heavy_heavy::cCast_jGr0xxfY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3mVOTMr1_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_uveOJoJ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_INxoivqX_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_hpdlfvJ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_wJgrBtjC_sendMessage);
}

void Heavy_heavy::cVar_xxR4Jj7S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hpdlfvJ2, HV_BINOP_MULTIPLY, 0, m, &cBinop_hpdlfvJ2_sendMessage);
}

void Heavy_heavy::cMsg_H2hMLgoV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_XtqKtXZ1, 0, m, &cDelay_XtqKtXZ1_sendMessage);
}

void Heavy_heavy::cBinop_wJgrBtjC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_XtqKtXZ1, 2, m, &cDelay_XtqKtXZ1_sendMessage);
}

void Heavy_heavy::cDelay_XtqKtXZ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_XtqKtXZ1, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_XtqKtXZ1, 0, m, &cDelay_XtqKtXZ1_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_wTSTg6nt, 0, m, &cVar_wTSTg6nt_sendMessage);
}

void Heavy_heavy::cSystem_AsUJc1mZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_l2KS2LFL_sendMessage);
}

void Heavy_heavy::cMsg_DpWwCXy2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_AsUJc1mZ_sendMessage);
}

void Heavy_heavy::cBinop_l2KS2LFL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hpdlfvJ2, HV_BINOP_MULTIPLY, 1, m, &cBinop_hpdlfvJ2_sendMessage);
}

void Heavy_heavy::cCast_jA9jhFoR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_H2hMLgoV_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_XtqKtXZ1, 0, m, &cDelay_XtqKtXZ1_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_wTSTg6nt, 0, m, &cVar_wTSTg6nt_sendMessage);
}

void Heavy_heavy::cSwitchcase_INxoivqX_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_H2hMLgoV_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_H2hMLgoV_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jA9jhFoR_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_4GOJtqL9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M899H6W6_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Khd9HKd3_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M899H6W6_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Khd9HKd3_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_D1OdWcYr_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_GyausZ5t, 0, m, &cSlice_GyausZ5t_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_4GOJtqL9, 0, m, &cSlice_4GOJtqL9_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tvZYXTQx_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_0BTZujeT, 0, m, &cSlice_0BTZujeT_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_1MhLLDwn, 0, m, &cSlice_1MhLLDwn_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZD2SBUzr_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ByOaDg6n_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_GyausZ5t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_uveOJoJ8_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_uveOJoJ8_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cCast_ByOaDg6n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jyFaTItM_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_3mVOTMr1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_INxoivqX_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rwbDieVo, HV_BINOP_ADD, 1, m, &cBinop_rwbDieVo_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ueXRym6l, HV_BINOP_ADD, 1, m, &cBinop_ueXRym6l_sendMessage);
}

void Heavy_heavy::cCast_M899H6W6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uveOJoJ8_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSlice_0BTZujeT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4A3LvCEi_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VaPnAvjN_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_1MhLLDwn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Bqpqadbu_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7kvqdWks_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cCast_ZD2SBUzr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5PfTJh32_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_PF8wSwqe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_frtDLgX1, HV_BINOP_MULTIPLY, 0, m, &cBinop_frtDLgX1_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fXHeMIp6, HV_BINOP_DIVIDE, 1, m, &cBinop_fXHeMIp6_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_xxR4Jj7S, 0, m, &cVar_xxR4Jj7S_sendMessage);
}

void Heavy_heavy::cCast_Bqpqadbu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JabQ35Ar, 1, m, &cVar_JabQ35Ar_sendMessage);
}

void Heavy_heavy::cCast_7kvqdWks_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7YCUQBcQ, HV_BINOP_SUBTRACT, 0, m, &cBinop_7YCUQBcQ_sendMessage);
}

void Heavy_heavy::cCast_4A3LvCEi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4gGNXjEa, HV_BINOP_MULTIPLY, 0, m, &cBinop_4gGNXjEa_sendMessage);
}

void Heavy_heavy::cCast_5vPDgnjV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3mVOTMr1_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_fXHeMIp6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_N5Y8PQ9R, HV_BINOP_DIVIDE, 1, m, &cBinop_N5Y8PQ9R_sendMessage);
}

void Heavy_heavy::cBinop_N5Y8PQ9R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rwbDieVo, HV_BINOP_ADD, 1, m, &cBinop_rwbDieVo_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ueXRym6l, HV_BINOP_ADD, 1, m, &cBinop_ueXRym6l_sendMessage);
}

void Heavy_heavy::cCast_VaPnAvjN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fXHeMIp6, HV_BINOP_DIVIDE, 0, m, &cBinop_fXHeMIp6_sendMessage);
}

void Heavy_heavy::cMsg_jyFaTItM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_82iVjUca, 1, m, &cVar_82iVjUca_sendMessage);
}

void Heavy_heavy::cCast_Khd9HKd3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5vPDgnjV_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rwbDieVo, HV_BINOP_ADD, 0, m, &cBinop_rwbDieVo_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_TjqcLHml, 1, m, &cVar_TjqcLHml_sendMessage);
}

void Heavy_heavy::cSystem_xTwlsHnD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_frtDLgX1, HV_BINOP_MULTIPLY, 1, m, &cBinop_frtDLgX1_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4gGNXjEa, HV_BINOP_MULTIPLY, 1, m, &cBinop_4gGNXjEa_sendMessage);
}

void Heavy_heavy::cMsg_OoIxqR37_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xTwlsHnD_sendMessage);
}

void Heavy_heavy::cVar_2bkvEzBo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7YCUQBcQ, HV_BINOP_SUBTRACT, 1, m, &cBinop_7YCUQBcQ_sendMessage);
}

void Heavy_heavy::cBinop_ueXRym6l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TjqcLHml, 1, m, &cVar_TjqcLHml_sendMessage);
}

void Heavy_heavy::cBinop_rFtKJQSq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_jmYUSlFq, m);
}

void Heavy_heavy::cMsg_TqsyDMya_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yKnEnAiB, HV_BINOP_SUBTRACT, 0, m, &cBinop_yKnEnAiB_sendMessage);
}

void Heavy_heavy::cRandom_Jg87Wusw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_mC92waJK_sendMessage);
}

void Heavy_heavy::cUnop_wN7zIHcH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_2vkHoJpI_sendMessage);
}

void Heavy_heavy::cBinop_mC92waJK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_wN7zIHcH_sendMessage);
}

void Heavy_heavy::cSwitchcase_arZyy3YK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_dBStXpWm, 0, m, &cSlice_dBStXpWm_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_Jg87Wusw, 0, m, &cRandom_Jg87Wusw_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_dBStXpWm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_Jg87Wusw, 1, m, &cRandom_Jg87Wusw_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cMsg_qkrN8DMw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_mX81J8WX, HV_BINOP_SUBTRACT, 0, m, &cBinop_mX81J8WX_sendMessage);
}

void Heavy_heavy::cCast_Bo427ZTJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NC0EVVeB, HV_BINOP_MULTIPLY, 1, m, &cBinop_NC0EVVeB_sendMessage);
}

void Heavy_heavy::cBinop_mlvp0958_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3S8hRVs3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DpB46AtS_sendMessage);
}

void Heavy_heavy::cBinop_NC0EVVeB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_H6TtuJHb_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kDm5WuFr_sendMessage);
}

void Heavy_heavy::cCast_AP1CPGlo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mlvp0958, HV_BINOP_SUBTRACT, 1, m, &cBinop_mlvp0958_sendMessage);
}

void Heavy_heavy::cCast_s0oj611G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NC0EVVeB, HV_BINOP_MULTIPLY, 0, m, &cBinop_NC0EVVeB_sendMessage);
}

void Heavy_heavy::cBinop_mX81J8WX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_rFtKJQSq_sendMessage);
}

void Heavy_heavy::cBinop_w87ge5mq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JYzHYHsf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4DkWGnra_sendMessage);
}

void Heavy_heavy::cCast_kDm5WuFr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qkrN8DMw_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_lBUl0qsz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_lfEncVy3_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_2vkHoJpI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_GTlKmyWk, 1, m, &cPack_GTlKmyWk_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_J0nsWgFk, 1, m, &cDelay_J0nsWgFk_sendMessage);
}

void Heavy_heavy::cCast_apdyBHvH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VVW9Ikfn_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_yKnEnAiB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_SDR1ha7Z_sendMessage);
}

void Heavy_heavy::cCast_3S8hRVs3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_w87ge5mq, HV_BINOP_MULTIPLY, 1, m, &cBinop_w87ge5mq_sendMessage);
}

void Heavy_heavy::cMsg_VVW9Ikfn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_mlvp0958, HV_BINOP_SUBTRACT, 0, m, &cBinop_mlvp0958_sendMessage);
}

void Heavy_heavy::cDelay_J0nsWgFk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_J0nsWgFk, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RqAP0suQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lBUl0qsz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_y546vo2m_sendMessage);
}

void Heavy_heavy::cCast_MUAHeX1B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_J0nsWgFk, 0, m, &cDelay_J0nsWgFk_sendMessage);
}

void Heavy_heavy::cSwitchcase_5vuvHDKe_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_wSqot0EK_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_wSqot0EK_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_J0nsWgFk, 1, m, &cDelay_J0nsWgFk_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MUAHeX1B_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_wSqot0EK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_J0nsWgFk, 0, m, &cDelay_J0nsWgFk_sendMessage);
}

void Heavy_heavy::cSwitchcase_lfEncVy3_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_2ZBaYVqP, 0, m, &cSlice_2ZBaYVqP_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_RjR698Pb, 0, m, &cRandom_RjR698Pb_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cRandom_RjR698Pb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_KeouxnVC_sendMessage);
}

void Heavy_heavy::cSlice_2ZBaYVqP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_RjR698Pb, 1, m, &cRandom_RjR698Pb_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_KeouxnVC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_GyHobAFO_sendMessage);
}

void Heavy_heavy::cUnop_GyHobAFO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_ZawZI182_sendMessage);
}

void Heavy_heavy::cCast_H6TtuJHb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mX81J8WX, HV_BINOP_SUBTRACT, 1, m, &cBinop_mX81J8WX_sendMessage);
}

void Heavy_heavy::cCast_RqAP0suQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_arZyy3YK_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_DpB46AtS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_w87ge5mq, HV_BINOP_MULTIPLY, 0, m, &cBinop_w87ge5mq_sendMessage);
}

void Heavy_heavy::cCast_JYzHYHsf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yKnEnAiB, HV_BINOP_SUBTRACT, 1, m, &cBinop_yKnEnAiB_sendMessage);
}

void Heavy_heavy::cPack_GTlKmyWk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_D1OdWcYr_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_y546vo2m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_5vuvHDKe_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_8Dicyhiv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_3mmqNi7X, 0, m, NULL);
}

void Heavy_heavy::cPack_0p5ijURg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_0K2pCB1X, 0, m, NULL);
}

void Heavy_heavy::cCast_R8yGLP9y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8Dicyhiv, 0, m, &cVar_8Dicyhiv_sendMessage);
}

void Heavy_heavy::cSwitchcase_OvODfxEV_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_sF3IZRqS, 0, m, &cSlice_sF3IZRqS_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_UB6xcPzO, 0, m, &cRandom_UB6xcPzO_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_sF3IZRqS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_UB6xcPzO, 1, m, &cRandom_UB6xcPzO_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cUnop_52sthVFf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_UirupA74_sendMessage);
}

void Heavy_heavy::cBinop_eZv1F0HV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_52sthVFf_sendMessage);
}

void Heavy_heavy::cRandom_UB6xcPzO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_eZv1F0HV_sendMessage);
}

void Heavy_heavy::cBinop_F85JDFVM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nRPH26IJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_nRPH26IJ_sendMessage);
}

void Heavy_heavy::cMsg_9fki4ejt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_rSYht5TY, 0, m, &cDelay_rSYht5TY_sendMessage);
}

void Heavy_heavy::cDelay_rSYht5TY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_rSYht5TY, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_rSYht5TY, 0, m, &cDelay_rSYht5TY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pqR2X2CJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Y4c4OUJf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_axoSrkhv_sendMessage);
}

void Heavy_heavy::cCast_BYUkjZUy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9fki4ejt_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_rSYht5TY, 0, m, &cDelay_rSYht5TY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pqR2X2CJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Y4c4OUJf_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_axoSrkhv_sendMessage);
}

void Heavy_heavy::cBinop_WPGPgmjh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_rSYht5TY, 2, m, &cDelay_rSYht5TY_sendMessage);
}

void Heavy_heavy::cVar_YfccOgfu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nRPH26IJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_nRPH26IJ_sendMessage);
}

void Heavy_heavy::cMsg_gs0NEOjb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_plDLElar_sendMessage);
}

void Heavy_heavy::cSystem_plDLElar_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_F85JDFVM_sendMessage);
}

void Heavy_heavy::cSwitchcase_ZQZsz23Q_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_9fki4ejt_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_9fki4ejt_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BYUkjZUy_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_nRPH26IJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_WPGPgmjh_sendMessage);
}

void Heavy_heavy::cBinop_UirupA74_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YfccOgfu, 0, m, &cVar_YfccOgfu_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_n9s3ZPMG, 1, m, &cPack_n9s3ZPMG_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_0p5ijURg, 1, m, &cPack_0p5ijURg_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_8Dicyhiv, 1, m, &cVar_8Dicyhiv_sendMessage);
}

void Heavy_heavy::cCast_axoSrkhv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_wAIG4CJV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_pqR2X2CJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_OvODfxEV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_9J0KGFaq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_T4O6AaoU, m);
}

void Heavy_heavy::cMsg_5h2nvCjI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_9J0KGFaq_sendMessage);
}

void Heavy_heavy::cMsg_i2LRovaS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_pTmLsG9W, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_MXAmaXjk, m);
}

void Heavy_heavy::cBinop_ZHi5YtG0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Q0QNyJpH_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_QuVz79JO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_jyuHSSeR_sendMessage);
}

void Heavy_heavy::cBinop_jyuHSSeR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_pTmLsG9W, m);
}

void Heavy_heavy::cVar_tfWgaDVq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_a9TJQgo5_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_jMiw7nGn, 0, m, &cIf_jMiw7nGn_sendMessage);
}

void Heavy_heavy::cMsg_s5rR2cXU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_ZHi5YtG0_sendMessage);
}

void Heavy_heavy::cBinop_q9rA9KPv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_La0ODyPN_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_a9TJQgo5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_jMiw7nGn, 1, m, &cIf_jMiw7nGn_sendMessage);
}

void Heavy_heavy::cIf_jMiw7nGn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_s5rR2cXU_sendMessage(_c, 0, m);
      cMsg_i2LRovaS_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_QuVz79JO_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_ZHi5YtG0_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_MXAmaXjk, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSystem_Ty2yqYzk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5h2nvCjI_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_NYIT2U4l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Ty2yqYzk_sendMessage);
}

void Heavy_heavy::cMsg_La0ODyPN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_q7pAiIy9_sendMessage);
}

void Heavy_heavy::cMsg_Q0QNyJpH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_q9rA9KPv_sendMessage);
}

void Heavy_heavy::cBinop_q7pAiIy9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_r6gcMkCC, m);
}

void Heavy_heavy::cCast_3zVCsAif_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mD9pCFrM_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_mpvWzIHJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Z80PcUyX, 0, m, &cVar_Z80PcUyX_sendMessage);
}

void Heavy_heavy::cBinop_Dww1598l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eqsqcfhG_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_e4nueUZa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_RijzLkq1_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_VQm9t5h7, 0, m, &cIf_VQm9t5h7_sendMessage);
}

void Heavy_heavy::cMsg_tBeVkHbe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_Dww1598l_sendMessage);
}

void Heavy_heavy::cBinop_LDsZka0w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_64JNwA7g, m);
}

void Heavy_heavy::cMsg_eqsqcfhG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_4Gd43WUA_sendMessage);
}

void Heavy_heavy::cMsg_Lg989Dkw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_mVCGpz3w_sendMessage);
}

void Heavy_heavy::cMsg_xyTDH6uO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_G20DlKj2_sendMessage);
}

void Heavy_heavy::cBinop_4Gd43WUA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vFO9EwtS_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_ZtKfVUN9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_QGMW8Rql_sendMessage);
}

void Heavy_heavy::cSystem_QGMW8Rql_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Lg989Dkw_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_0xUSHy3d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_PMDBcCpI, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_PL6a22Uu, m);
}

void Heavy_heavy::cBinop_RijzLkq1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_VQm9t5h7, 1, m, &cIf_VQm9t5h7_sendMessage);
}

void Heavy_heavy::cIf_VQm9t5h7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_tBeVkHbe_sendMessage(_c, 0, m);
      cMsg_0xUSHy3d_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_xyTDH6uO_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_Dww1598l_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_PL6a22Uu, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_mVCGpz3w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zk1mAFqi, m);
}

void Heavy_heavy::cBinop_G20DlKj2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_PMDBcCpI, m);
}

void Heavy_heavy::cMsg_vFO9EwtS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_LDsZka0w_sendMessage);
}

void Heavy_heavy::cBinop_o8qfHqL3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ol0TUrlp, 0, m, &cPack_ol0TUrlp_sendMessage);
}

void Heavy_heavy::cCast_DirP31Nu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_tN7fLRwL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cPack_twA3NeGw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_xNTTloJv_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_ODTBWcaR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_LBPfrXPh, HV_BINOP_SUBTRACT, 0, m, &cBinop_LBPfrXPh_sendMessage);
}

void Heavy_heavy::cCast_G2YYVwoX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ODTBWcaR_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_7spX0PKj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XmVz1kon, HV_BINOP_MULTIPLY, 1, m, &cBinop_XmVz1kon_sendMessage);
}

void Heavy_heavy::cSwitchcase_Ff4UEEEt_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_6MXx3X7T_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_6MXx3X7T_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_bR97e1Jf, 1, m, &cDelay_bR97e1Jf_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LRRH666p_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_6MXx3X7T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_bR97e1Jf, 0, m, &cDelay_bR97e1Jf_sendMessage);
}

void Heavy_heavy::cCast_LRRH666p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_bR97e1Jf, 0, m, &cDelay_bR97e1Jf_sendMessage);
}

void Heavy_heavy::cDelay_bR97e1Jf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_bR97e1Jf, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oce36AKy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ujutyXzR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dSyzQVZK_sendMessage);
}

void Heavy_heavy::cCast_O9HQaotr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FFFZhre2, HV_BINOP_SUBTRACT, 1, m, &cBinop_FFFZhre2_sendMessage);
}

void Heavy_heavy::cBinop_6eN3thQp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_twA3NeGw, 0, m, &cPack_twA3NeGw_sendMessage);
}

void Heavy_heavy::cBinop_XmVz1kon_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ybKEVQOF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_G2YYVwoX_sendMessage);
}

void Heavy_heavy::cSwitchcase_8LIY8xEO_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_VujnfuRZ, 0, m, &cSlice_VujnfuRZ_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_T8Ei8tlS, 0, m, &cRandom_T8Ei8tlS_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_tuIIUHIJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_VZrfllH6_sendMessage);
}

void Heavy_heavy::cSlice_VujnfuRZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_T8Ei8tlS, 1, m, &cRandom_T8Ei8tlS_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cUnop_VZrfllH6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_6eN3thQp_sendMessage);
}

void Heavy_heavy::cRandom_T8Ei8tlS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_tuIIUHIJ_sendMessage);
}

void Heavy_heavy::cCast_cI4JRaVe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yGxhWCYi_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OMKG8mHT_sendMessage);
}

void Heavy_heavy::cCast_q2gus2Am_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_k7WTxwOu_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_0DKtUQ91_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_FFFZhre2, HV_BINOP_SUBTRACT, 0, m, &cBinop_FFFZhre2_sendMessage);
}

void Heavy_heavy::cCast_L71kT99f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0DKtUQ91_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_FFFZhre2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_91cAfQ24_sendMessage);
}

void Heavy_heavy::cBinop_91cAfQ24_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_1dPHSBtZ, m);
}

void Heavy_heavy::cBinop_2plr1hBQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_twA3NeGw, 1, m, &cPack_twA3NeGw_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_bR97e1Jf, 1, m, &cDelay_bR97e1Jf_sendMessage);
}

void Heavy_heavy::cBinop_pAFl7FTo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_g06e6UV7, m);
}

void Heavy_heavy::cBinop_IaEw6rTx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_O9HQaotr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_L71kT99f_sendMessage);
}

void Heavy_heavy::cCast_yGxhWCYi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IaEw6rTx, HV_BINOP_MULTIPLY, 1, m, &cBinop_IaEw6rTx_sendMessage);
}

void Heavy_heavy::cMsg_k7WTxwOu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_A3092htJ, HV_BINOP_SUBTRACT, 0, m, &cBinop_A3092htJ_sendMessage);
}

void Heavy_heavy::cCast_vg0DmD1B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_A3092htJ, HV_BINOP_SUBTRACT, 1, m, &cBinop_A3092htJ_sendMessage);
}

void Heavy_heavy::cBinop_LBPfrXPh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_pAFl7FTo_sendMessage);
}

void Heavy_heavy::cCast_N7GEeJ62_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XmVz1kon, HV_BINOP_MULTIPLY, 0, m, &cBinop_XmVz1kon_sendMessage);
}

void Heavy_heavy::cCast_OMKG8mHT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IaEw6rTx, HV_BINOP_MULTIPLY, 0, m, &cBinop_IaEw6rTx_sendMessage);
}

void Heavy_heavy::cCast_oce36AKy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_U8WQudw4_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_8NtnavQU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0ncXR5SJ, HV_BINOP_DIVIDE, 0, m, &cBinop_0ncXR5SJ_sendMessage);
}

void Heavy_heavy::cVar_KRiYg5QO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vsXf28u0, HV_BINOP_SUBTRACT, 0, m, &cBinop_vsXf28u0_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_YEraftnA_sendMessage);
}

void Heavy_heavy::cBinop_2m2dVo26_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KRiYg5QO, 1, m, &cVar_KRiYg5QO_sendMessage);
}

void Heavy_heavy::cBinop_vsXf28u0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KRiYg5QO, 1, m, &cVar_KRiYg5QO_sendMessage);
}

void Heavy_heavy::cMsg_3xEUHb8Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_HFNbxTet_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_Nu8jPnfn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_obWTlvyO, 0, m, &cVar_obWTlvyO_sendMessage);
}

void Heavy_heavy::cCast_FVqxVT0Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_IuS00Q2q, 1, m, &cVar_IuS00Q2q_sendMessage);
}

void Heavy_heavy::cBinop_JdXFFt4s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YBkoaovt, 1, m, &cVar_YBkoaovt_sendMessage);
}

void Heavy_heavy::cCast_91W6KbIK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zpXAibog_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Nu8jPnfn, HV_BINOP_ADD, 0, m, &cBinop_Nu8jPnfn_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_YBkoaovt, 1, m, &cVar_YBkoaovt_sendMessage);
}

void Heavy_heavy::cBinop_wQSpLNMK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vsXf28u0, HV_BINOP_SUBTRACT, 1, m, &cBinop_vsXf28u0_sendMessage);
}

void Heavy_heavy::cCast_zpXAibog_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vpeA2t2z_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_YEraftnA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Ji1q77lV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_kyzFObz7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_IuS00Q2q, 0, m, &cVar_IuS00Q2q_sendMessage);
}

void Heavy_heavy::cVar_IySJM3vd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_w9cqXAgZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_egdYKDYP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_2m2dVo26_sendMessage);
}

void Heavy_heavy::cCast_d0YgaZZo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TABqi10T, HV_BINOP_DIVIDE, 0, m, &cBinop_TABqi10T_sendMessage);
}

void Heavy_heavy::cMsg_LbcHfn9A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_khgFusYZ_sendMessage);
}

void Heavy_heavy::cSystem_khgFusYZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fEjbQsGG, HV_BINOP_MULTIPLY, 1, m, &cBinop_fEjbQsGG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_egdYKDYP, HV_BINOP_MULTIPLY, 1, m, &cBinop_egdYKDYP_sendMessage);
}

void Heavy_heavy::cCast_HnfxwLcx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3xEUHb8Y_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_TABqi10T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0ncXR5SJ, HV_BINOP_DIVIDE, 1, m, &cBinop_0ncXR5SJ_sendMessage);
}

void Heavy_heavy::cCast_9wYVjxGm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CzZOjEHR_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_Weorc3kx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2JAWXqTq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kyzFObz7_sendMessage);
}

void Heavy_heavy::cCast_NXv1YDK9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YBkoaovt, 0, m, &cVar_YBkoaovt_sendMessage);
}

void Heavy_heavy::cSwitchcase_Ji1q77lV_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NXv1YDK9_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Weorc3kx_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cCast_qUtMnswV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vMBvwFna_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_YbJ6D1hi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_jIhaoLTO_sendMessage);
}

void Heavy_heavy::cSystem_7d1n5lT5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_fwL0Cn3L_sendMessage);
}

void Heavy_heavy::cMsg_lF52VHNM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_7d1n5lT5_sendMessage);
}

void Heavy_heavy::cBinop_jIhaoLTO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Kg2WxLMj, 2, m, &cDelay_Kg2WxLMj_sendMessage);
}

void Heavy_heavy::cMsg_OPCB75Ri_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Kg2WxLMj, 0, m, &cDelay_Kg2WxLMj_sendMessage);
}

void Heavy_heavy::cVar_23fKiXWc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YbJ6D1hi, HV_BINOP_MULTIPLY, 0, m, &cBinop_YbJ6D1hi_sendMessage);
}

void Heavy_heavy::cBinop_fwL0Cn3L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YbJ6D1hi, HV_BINOP_MULTIPLY, 1, m, &cBinop_YbJ6D1hi_sendMessage);
}

void Heavy_heavy::cDelay_Kg2WxLMj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Kg2WxLMj, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Kg2WxLMj, 0, m, &cDelay_Kg2WxLMj_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_KRiYg5QO, 0, m, &cVar_KRiYg5QO_sendMessage);
}

void Heavy_heavy::cSwitchcase_HFNbxTet_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_OPCB75Ri_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_OPCB75Ri_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zOoTi9S5_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_zOoTi9S5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OPCB75Ri_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Kg2WxLMj, 0, m, &cDelay_Kg2WxLMj_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_KRiYg5QO, 0, m, &cVar_KRiYg5QO_sendMessage);
}

void Heavy_heavy::cMsg_sLgXYBZX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fEjbQsGG, HV_BINOP_MULTIPLY, 0, m, &cBinop_fEjbQsGG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TABqi10T, HV_BINOP_DIVIDE, 1, m, &cBinop_TABqi10T_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_23fKiXWc, 0, m, &cVar_23fKiXWc_sendMessage);
}

void Heavy_heavy::cCast_SGJ3eSDo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_egdYKDYP, HV_BINOP_MULTIPLY, 0, m, &cBinop_egdYKDYP_sendMessage);
}

void Heavy_heavy::cVar_7d0qsn2O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SGJ3eSDo_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_d0YgaZZo_sendMessage);
}

void Heavy_heavy::cCast_2JAWXqTq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vpeA2t2z_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_CzZOjEHR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_HFNbxTet_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_IuS00Q2q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YBkoaovt, 0, m, &cVar_YBkoaovt_sendMessage);
}

void Heavy_heavy::cCast_ztp4xfh6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8NtnavQU, HV_BINOP_SUBTRACT, 0, m, &cBinop_8NtnavQU_sendMessage);
}

void Heavy_heavy::cSlice_a5y9bLao_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SGJ3eSDo_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_d0YgaZZo_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_998GxLqY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FVqxVT0Z_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ztp4xfh6_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cMsg_vpeA2t2z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_HFNbxTet_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Nu8jPnfn, HV_BINOP_ADD, 1, m, &cBinop_Nu8jPnfn_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_JdXFFt4s, HV_BINOP_ADD, 1, m, &cBinop_JdXFFt4s_sendMessage);
}

void Heavy_heavy::cVar_YBkoaovt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JdXFFt4s, HV_BINOP_ADD, 0, m, &cBinop_JdXFFt4s_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Nu8jPnfn, HV_BINOP_ADD, 0, m, &cBinop_Nu8jPnfn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vg0DmD1B_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_q2gus2Am_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cI4JRaVe_sendMessage);
}

void Heavy_heavy::cBinop_0ncXR5SJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Nu8jPnfn, HV_BINOP_ADD, 1, m, &cBinop_Nu8jPnfn_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_JdXFFt4s, HV_BINOP_ADD, 1, m, &cBinop_JdXFFt4s_sendMessage);
}

void Heavy_heavy::cSlice_m6qLXdG0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_3xEUHb8Y_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_3xEUHb8Y_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_vXb5RfIc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HnfxwLcx_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_91W6KbIK_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HnfxwLcx_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_91W6KbIK_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_xNTTloJv_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_m6qLXdG0, 0, m, &cSlice_m6qLXdG0_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_vXb5RfIc, 0, m, &cSlice_vXb5RfIc_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CgTyo8i8_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_a5y9bLao, 0, m, &cSlice_a5y9bLao_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_998GxLqY, 0, m, &cSlice_998GxLqY_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9wYVjxGm_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qUtMnswV_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_UYO5G19n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sLgXYBZX_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_w9cqXAgZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UYO5G19n_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_fEjbQsGG, HV_BINOP_MULTIPLY, 0, m, &cBinop_fEjbQsGG_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_TABqi10T, HV_BINOP_DIVIDE, 1, m, &cBinop_TABqi10T_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_23fKiXWc, 0, m, &cVar_23fKiXWc_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_CgTyo8i8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7d0qsn2O, 0, m, &cVar_7d0qsn2O_sendMessage);
}

void Heavy_heavy::cVar_obWTlvyO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8NtnavQU, HV_BINOP_SUBTRACT, 1, m, &cBinop_8NtnavQU_sendMessage);
}

void Heavy_heavy::cBinop_fEjbQsGG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_wQSpLNMK_sendMessage);
}

void Heavy_heavy::cMsg_vMBvwFna_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_7d0qsn2O, 1, m, &cVar_7d0qsn2O_sendMessage);
}

void Heavy_heavy::cCast_dSyzQVZK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Ff4UEEEt_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_ujutyXzR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_8LIY8xEO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cSlice_I2msTVCd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_7hPagzq7, 1, m, &cRandom_7hPagzq7_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_U8WQudw4_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_I2msTVCd, 0, m, &cSlice_I2msTVCd_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_7hPagzq7, 0, m, &cRandom_7hPagzq7_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cUnop_vfhET1ON_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_2plr1hBQ_sendMessage);
}

void Heavy_heavy::cBinop_TSdldCCZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_vfhET1ON_sendMessage);
}

void Heavy_heavy::cRandom_7hPagzq7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_TSdldCCZ_sendMessage);
}

void Heavy_heavy::cBinop_A3092htJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7spX0PKj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_N7GEeJ62_sendMessage);
}

void Heavy_heavy::cCast_ybKEVQOF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LBPfrXPh, HV_BINOP_SUBTRACT, 1, m, &cBinop_LBPfrXPh_sendMessage);
}

void Heavy_heavy::cBinop_zMGMnbDF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ERbUh6Uq, 0, m, &cVar_ERbUh6Uq_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_M0M6CdEJ, 1, m, &cPack_M0M6CdEJ_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_ol0TUrlp, 1, m, &cPack_ol0TUrlp_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Z80PcUyX, 1, m, &cVar_Z80PcUyX_sendMessage);
}

void Heavy_heavy::cCast_kWAUVIcQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_r6MNf3MW_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cPack_ol0TUrlp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_4fGW4Rl4, 0, m, NULL);
}

void Heavy_heavy::cBinop_RaZ27teA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_M0M6CdEJ, 0, m, &cPack_M0M6CdEJ_sendMessage);
}

void Heavy_heavy::cCast_BcuKvrCL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_tN7fLRwL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cPack_M0M6CdEJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_AX39aKCk, 0, m, NULL);
}

void Heavy_heavy::cVar_ERbUh6Uq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tP5TIeXY, HV_BINOP_MULTIPLY, 0, m, &cBinop_tP5TIeXY_sendMessage);
}

void Heavy_heavy::cBinop_Mx8Csxn9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tP5TIeXY, HV_BINOP_MULTIPLY, 1, m, &cBinop_tP5TIeXY_sendMessage);
}

void Heavy_heavy::cDelay_4l2y4H5Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_4l2y4H5Z, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_4l2y4H5Z, 0, m, &cDelay_4l2y4H5Z_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BcuKvrCL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6n1Y0bQE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kWAUVIcQ_sendMessage);
}

void Heavy_heavy::cBinop_8JxT8Icr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_4l2y4H5Z, 2, m, &cDelay_4l2y4H5Z_sendMessage);
}

void Heavy_heavy::cCast_pzd3Ik2i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nQsLQhRO_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_4l2y4H5Z, 0, m, &cDelay_4l2y4H5Z_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BcuKvrCL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6n1Y0bQE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kWAUVIcQ_sendMessage);
}

void Heavy_heavy::cBinop_tP5TIeXY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_8JxT8Icr_sendMessage);
}

void Heavy_heavy::cSystem_lcYKlFiZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Mx8Csxn9_sendMessage);
}

void Heavy_heavy::cMsg_n4c94QVB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_lcYKlFiZ_sendMessage);
}

void Heavy_heavy::cSwitchcase_Os3xDAut_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_nQsLQhRO_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_nQsLQhRO_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pzd3Ik2i_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_nQsLQhRO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_4l2y4H5Z, 0, m, &cDelay_4l2y4H5Z_sendMessage);
}

void Heavy_heavy::cRandom_THeTdqe8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_wpO8UCSm_sendMessage);
}

void Heavy_heavy::cSwitchcase_tN7fLRwL_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_VB8bt1KN, 0, m, &cSlice_VB8bt1KN_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_THeTdqe8, 0, m, &cRandom_THeTdqe8_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_wpO8UCSm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_sX9XYyFm_sendMessage);
}

void Heavy_heavy::cSlice_VB8bt1KN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_THeTdqe8, 1, m, &cRandom_THeTdqe8_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cUnop_sX9XYyFm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_zMGMnbDF_sendMessage);
}

void Heavy_heavy::cVar_Z80PcUyX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_AX39aKCk, 0, m, NULL);
}

void Heavy_heavy::cCast_6n1Y0bQE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cRandom_iDvynKSB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_iBjPFSD0_sendMessage);
}

void Heavy_heavy::cSlice_ZaWrFkep_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_iDvynKSB, 1, m, &cRandom_iDvynKSB_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_iBjPFSD0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_jtOrRH3J_sendMessage);
}

void Heavy_heavy::cSwitchcase_r6MNf3MW_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZaWrFkep, 0, m, &cSlice_ZaWrFkep_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_iDvynKSB, 0, m, &cRandom_iDvynKSB_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cUnop_jtOrRH3J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 600.0f, 0, m, &cBinop_RaZ27teA_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_o8qfHqL3_sendMessage);
}

void Heavy_heavy::cCast_MMRbSXTO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_angAlkBk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_lYxYqYs8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_9mllmOwf, 0, m, &cPack_9mllmOwf_sendMessage);
}

void Heavy_heavy::cBinop_EJ2o1qoD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9tVHY68K, 0, m, &cVar_9tVHY68K_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_9mllmOwf, 1, m, &cPack_9mllmOwf_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_BuzcK9mI, 1, m, &cPack_BuzcK9mI_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_4d6fS4pj, 1, m, &cVar_4d6fS4pj_sendMessage);
}

void Heavy_heavy::cBinop_5vEWSD27_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_BuzcK9mI, 0, m, &cPack_BuzcK9mI_sendMessage);
}

void Heavy_heavy::cCast_DKQ4BtI8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cCast_kLdJvAc5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4d6fS4pj, 0, m, &cVar_4d6fS4pj_sendMessage);
}

void Heavy_heavy::cSwitchcase_NbIDBwvH_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_hhxunlm5, 0, m, &cSlice_hhxunlm5_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_NLpnnHHs, 0, m, &cRandom_NLpnnHHs_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cUnop_yagLHG2M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_EJ2o1qoD_sendMessage);
}

void Heavy_heavy::cSlice_hhxunlm5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_NLpnnHHs, 1, m, &cRandom_NLpnnHHs_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_ZLTPME3W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_yagLHG2M_sendMessage);
}

void Heavy_heavy::cRandom_NLpnnHHs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_ZLTPME3W_sendMessage);
}

void Heavy_heavy::cBinop_qbmaqvDF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0bHchgfX, m);
}

void Heavy_heavy::cVar_E9ewRqCz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_sMEsgFYp_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_4chvd7Of, 0, m, &cIf_4chvd7Of_sendMessage);
}

void Heavy_heavy::cMsg_No3VyA6u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_qbmaqvDF_sendMessage);
}

void Heavy_heavy::cMsg_7AZbEc3F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_J8rQzADP_sendMessage);
}

void Heavy_heavy::cBinop_oFVDPLtG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xAFzs9Yf, m);
}

void Heavy_heavy::cBinop_2IGi7Nnb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_73TRruXf_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_J8rQzADP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iEk0hrXf, m);
}

void Heavy_heavy::cBinop_sMEsgFYp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_4chvd7Of, 1, m, &cIf_4chvd7Of_sendMessage);
}

void Heavy_heavy::cIf_4chvd7Of_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_RuCHwwnT_sendMessage(_c, 0, m);
      cMsg_xyh3e2vx_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_FExu15VL_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_2IGi7Nnb_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_Wv3BZNAe, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cMsg_RuCHwwnT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_2IGi7Nnb_sendMessage);
}

void Heavy_heavy::cMsg_xyh3e2vx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_xAFzs9Yf, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Wv3BZNAe, m);
}

void Heavy_heavy::cBinop_EEfIHqoS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_No3VyA6u_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSystem_TQTqjFsZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7AZbEc3F_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_q6LDJgtZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_TQTqjFsZ_sendMessage);
}

void Heavy_heavy::cMsg_73TRruXf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_EEfIHqoS_sendMessage);
}

void Heavy_heavy::cMsg_FExu15VL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_oFVDPLtG_sendMessage);
}

void Heavy_heavy::cPack_9mllmOwf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_kgyXBK2D, 0, m, NULL);
}

void Heavy_heavy::cPack_BuzcK9mI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Rw8c7dNR, 0, m, NULL);
}

void Heavy_heavy::cCast_S4YsSkIb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_NbIDBwvH_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_HqJzxh0A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_P5w4B0wR, 2, m, &cDelay_P5w4B0wR_sendMessage);
}

void Heavy_heavy::cSystem_n46o7lBZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_bVlMBKQ9_sendMessage);
}

void Heavy_heavy::cMsg_ANvI1VAF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_n46o7lBZ_sendMessage);
}

void Heavy_heavy::cDelay_P5w4B0wR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_P5w4B0wR, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_P5w4B0wR, 0, m, &cDelay_P5w4B0wR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qC21dtCe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DKQ4BtI8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MMRbSXTO_sendMessage);
}

void Heavy_heavy::cBinop_6gpXaUBe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_HqJzxh0A_sendMessage);
}

void Heavy_heavy::cBinop_bVlMBKQ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6gpXaUBe, HV_BINOP_MULTIPLY, 1, m, &cBinop_6gpXaUBe_sendMessage);
}

void Heavy_heavy::cCast_LtX9wqXn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_v9py61qQ_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_P5w4B0wR, 0, m, &cDelay_P5w4B0wR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qC21dtCe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DKQ4BtI8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MMRbSXTO_sendMessage);
}

void Heavy_heavy::cMsg_v9py61qQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_P5w4B0wR, 0, m, &cDelay_P5w4B0wR_sendMessage);
}

void Heavy_heavy::cSwitchcase_d2OVGGRB_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_v9py61qQ_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_v9py61qQ_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LtX9wqXn_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_9tVHY68K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6gpXaUBe, HV_BINOP_MULTIPLY, 0, m, &cBinop_6gpXaUBe_sendMessage);
}

void Heavy_heavy::cCast_qC21dtCe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_NbIDBwvH_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cRandom_wcJT9wrm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_lr5h9SpZ_sendMessage);
}

void Heavy_heavy::cUnop_EjbS3FXz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2000.0f, 0, m, &cBinop_lYxYqYs8_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_5vEWSD27_sendMessage);
}

void Heavy_heavy::cSlice_205ODXnK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_wcJT9wrm, 1, m, &cRandom_wcJT9wrm_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_angAlkBk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_205ODXnK, 0, m, &cSlice_205ODXnK_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_wcJT9wrm, 0, m, &cRandom_wcJT9wrm_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_lr5h9SpZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_EjbS3FXz_sendMessage);
}

void Heavy_heavy::cCast_P8TXOWL0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_shN53ROV, HV_BINOP_MULTIPLY, 1, m, &cBinop_shN53ROV_sendMessage);
}

void Heavy_heavy::cCast_P9r37awR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Sa4xJkJC, HV_BINOP_SUBTRACT, 1, m, &cBinop_Sa4xJkJC_sendMessage);
}

void Heavy_heavy::cRandom_QCjO0AxH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_Z1fBYELE_sendMessage);
}

void Heavy_heavy::cBinop_Z1fBYELE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_pnyrhusy_sendMessage);
}

void Heavy_heavy::cSlice_v3t0PWo7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_QCjO0AxH, 1, m, &cRandom_QCjO0AxH_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cUnop_pnyrhusy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_oLqlNBhS_sendMessage);
}

void Heavy_heavy::cSwitchcase_rfILuu79_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_v3t0PWo7, 0, m, &cSlice_v3t0PWo7_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_QCjO0AxH, 0, m, &cRandom_QCjO0AxH_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_qaY87TQP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1Nf6sms2_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_J46HmpI3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Sa4xJkJC, HV_BINOP_SUBTRACT, 0, m, &cBinop_Sa4xJkJC_sendMessage);
}

void Heavy_heavy::cBinop_2wHdUeo2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kQrkPrSs, m);
}

void Heavy_heavy::cCast_QqsVuP3o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_6OfU7PGA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_oLqlNBhS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_h4vD2x5k, 0, m, &cPack_h4vD2x5k_sendMessage);
}

void Heavy_heavy::cBinop_hO9ye8Gw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_vslehnP8_sendMessage);
}

void Heavy_heavy::cCast_gPSNkyxl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5WnlaNQ4, HV_BINOP_MULTIPLY, 1, m, &cBinop_5WnlaNQ4_sendMessage);
}

void Heavy_heavy::cBinop_10lN0wgd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_h4vD2x5k, 1, m, &cPack_h4vD2x5k_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_FIV6t440, 1, m, &cDelay_FIV6t440_sendMessage);
}

void Heavy_heavy::cCast_5GKJaCtk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gPSNkyxl_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bxqpZUe2_sendMessage);
}

void Heavy_heavy::cCast_yHRFe32x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hO9ye8Gw, HV_BINOP_SUBTRACT, 1, m, &cBinop_hO9ye8Gw_sendMessage);
}

void Heavy_heavy::cMsg_1Nf6sms2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_hO9ye8Gw, HV_BINOP_SUBTRACT, 0, m, &cBinop_hO9ye8Gw_sendMessage);
}

void Heavy_heavy::cBinop_vslehnP8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rW592bKb, m);
}

void Heavy_heavy::cMsg_IoBsC3YQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_5LBb5flg, HV_BINOP_SUBTRACT, 0, m, &cBinop_5LBb5flg_sendMessage);
}

void Heavy_heavy::cBinop_shN53ROV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yHRFe32x_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qaY87TQP_sendMessage);
}

void Heavy_heavy::cPack_h4vD2x5k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_wXna7ZNQ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_Qpj0CU5w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_rfILuu79_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_raCgc9pZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_J46HmpI3_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_XbxeJY5S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_OWW7num9_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_wkqLCoth_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zG97jp6h_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_SmZ47MG2_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wkqLCoth_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_0Bodbf5E, HV_BINOP_MULTIPLY, 0, m, &cBinop_0Bodbf5E_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_XEeuU1Wt, HV_BINOP_DIVIDE, 1, m, &cBinop_XEeuU1Wt_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_HhmnR1Xe, 0, m, &cVar_HhmnR1Xe_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_XEeuU1Wt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KETMV0UJ, HV_BINOP_DIVIDE, 1, m, &cBinop_KETMV0UJ_sendMessage);
}

void Heavy_heavy::cCast_40RePl0P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_z1FdusYN, 1, m, &cVar_z1FdusYN_sendMessage);
}

void Heavy_heavy::cSystem_QP66ih84_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0Bodbf5E, HV_BINOP_MULTIPLY, 1, m, &cBinop_0Bodbf5E_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VBXAEooS, HV_BINOP_MULTIPLY, 1, m, &cBinop_VBXAEooS_sendMessage);
}

void Heavy_heavy::cMsg_xSCK0qIT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_QP66ih84_sendMessage);
}

void Heavy_heavy::cBinop_bXJJGBh9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Ezmy4rdM_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_DEcxrp6l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XbxeJY5S_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_gIaM9adl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_IeZ4628n, 0, m, &cVar_IeZ4628n_sendMessage);
}

void Heavy_heavy::cCast_RslxdIVD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HWRdaPUs, 0, m, &cVar_HWRdaPUs_sendMessage);
}

void Heavy_heavy::cMsg_X4iMmcMq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_aXpKtvik_sendMessage);
}

void Heavy_heavy::cSystem_aXpKtvik_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_9GDgAAec_sendMessage);
}

void Heavy_heavy::cBinop_O2r8zOzD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_UdixQgtQ_sendMessage);
}

void Heavy_heavy::cBinop_9GDgAAec_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_O2r8zOzD, HV_BINOP_MULTIPLY, 1, m, &cBinop_O2r8zOzD_sendMessage);
}

void Heavy_heavy::cSwitchcase_OWW7num9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_GyMHnhBI_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_GyMHnhBI_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DmI9KhmO_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_UdixQgtQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_rfkyHnDY, 2, m, &cDelay_rfkyHnDY_sendMessage);
}

void Heavy_heavy::cMsg_GyMHnhBI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_rfkyHnDY, 0, m, &cDelay_rfkyHnDY_sendMessage);
}

void Heavy_heavy::cDelay_rfkyHnDY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_rfkyHnDY, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_rfkyHnDY, 0, m, &cDelay_rfkyHnDY_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_28hprGs3, 0, m, &cVar_28hprGs3_sendMessage);
}

void Heavy_heavy::cVar_HhmnR1Xe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_O2r8zOzD, HV_BINOP_MULTIPLY, 0, m, &cBinop_O2r8zOzD_sendMessage);
}

void Heavy_heavy::cCast_DmI9KhmO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GyMHnhBI_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_rfkyHnDY, 0, m, &cDelay_rfkyHnDY_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_28hprGs3, 0, m, &cVar_28hprGs3_sendMessage);
}

void Heavy_heavy::cCast_E9wWxaSB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RYbocrBz_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_gIaM9adl, HV_BINOP_ADD, 0, m, &cBinop_gIaM9adl_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_6QVKvfIB, 1, m, &cVar_6QVKvfIB_sendMessage);
}

void Heavy_heavy::cMsg_xKlfvFy6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_OWW7num9_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_gIaM9adl, HV_BINOP_ADD, 1, m, &cBinop_gIaM9adl_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_FXSwFdNo, HV_BINOP_ADD, 1, m, &cBinop_FXSwFdNo_sendMessage);
}

void Heavy_heavy::cBinop_5QsEdP1N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KETMV0UJ, HV_BINOP_DIVIDE, 0, m, &cBinop_KETMV0UJ_sendMessage);
}

void Heavy_heavy::cVar_6QVKvfIB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FXSwFdNo, HV_BINOP_ADD, 0, m, &cBinop_FXSwFdNo_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_gIaM9adl, HV_BINOP_ADD, 0, m, &cBinop_gIaM9adl_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_P9r37awR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_raCgc9pZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5GKJaCtk_sendMessage);
}

void Heavy_heavy::cCast_K6OnPgRV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5QsEdP1N, HV_BINOP_SUBTRACT, 0, m, &cBinop_5QsEdP1N_sendMessage);
}

void Heavy_heavy::cCast_RYbocrBz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xKlfvFy6_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_FXSwFdNo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6QVKvfIB, 1, m, &cVar_6QVKvfIB_sendMessage);
}

void Heavy_heavy::cCast_Bc2BfbXW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_z1FdusYN, 0, m, &cVar_z1FdusYN_sendMessage);
}

void Heavy_heavy::cBinop_n1ZgbgyK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_28hprGs3, 1, m, &cVar_28hprGs3_sendMessage);
}

void Heavy_heavy::cMsg_zPsyYLeU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_HWRdaPUs, 1, m, &cVar_HWRdaPUs_sendMessage);
}

void Heavy_heavy::cBinop_RQKBFnJA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_28hprGs3, 1, m, &cVar_28hprGs3_sendMessage);
}

void Heavy_heavy::cCast_lGpjWTun_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ERrovgxT_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_zG97jp6h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_0Bodbf5E, HV_BINOP_MULTIPLY, 0, m, &cBinop_0Bodbf5E_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_XEeuU1Wt, HV_BINOP_DIVIDE, 1, m, &cBinop_XEeuU1Wt_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_HhmnR1Xe, 0, m, &cVar_HhmnR1Xe_sendMessage);
}

void Heavy_heavy::cBinop_VBXAEooS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_n1ZgbgyK_sendMessage);
}

void Heavy_heavy::cVar_nNqQh30f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_SmZ47MG2_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_0Bodbf5E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_l7FBz8Jt_sendMessage);
}

void Heavy_heavy::cCast_2OND5jNx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VBXAEooS, HV_BINOP_MULTIPLY, 0, m, &cBinop_VBXAEooS_sendMessage);
}

void Heavy_heavy::cBinop_KETMV0UJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gIaM9adl, HV_BINOP_ADD, 1, m, &cBinop_gIaM9adl_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_FXSwFdNo, HV_BINOP_ADD, 1, m, &cBinop_FXSwFdNo_sendMessage);
}

void Heavy_heavy::cVar_IeZ4628n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5QsEdP1N, HV_BINOP_SUBTRACT, 1, m, &cBinop_5QsEdP1N_sendMessage);
}

void Heavy_heavy::cMsg_ERrovgxT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_OWW7num9_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_MqvsdlN3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xKlfvFy6_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_BNqXM8jE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XEeuU1Wt, HV_BINOP_DIVIDE, 0, m, &cBinop_XEeuU1Wt_sendMessage);
}

void Heavy_heavy::cBinop_l7FBz8Jt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RQKBFnJA, HV_BINOP_SUBTRACT, 1, m, &cBinop_RQKBFnJA_sendMessage);
}

void Heavy_heavy::cSlice_hBqaWdJB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lGpjWTun_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_E9wWxaSB_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lGpjWTun_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_E9wWxaSB_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_wXna7ZNQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_oHpRlO0K, 0, m, &cSlice_oHpRlO0K_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_hBqaWdJB, 0, m, &cSlice_hBqaWdJB_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RslxdIVD_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_G6M8neFe, 0, m, &cSlice_G6M8neFe_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_epLCCY2T, 0, m, &cSlice_epLCCY2T_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DEcxrp6l_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tv8YBFxj_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_oHpRlO0K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_ERrovgxT_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_ERrovgxT_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cVar_z1FdusYN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6QVKvfIB, 0, m, &cVar_6QVKvfIB_sendMessage);
}

void Heavy_heavy::cSlice_G6M8neFe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2OND5jNx_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_BNqXM8jE_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_epLCCY2T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_40RePl0P_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_K6OnPgRV_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cVar_HWRdaPUs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2OND5jNx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_BNqXM8jE_sendMessage);
}

void Heavy_heavy::cCast_o7idyvDA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MqvsdlN3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Bc2BfbXW_sendMessage);
}

void Heavy_heavy::cCast_OJ8wyiPv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6QVKvfIB, 0, m, &cVar_6QVKvfIB_sendMessage);
}

void Heavy_heavy::cSwitchcase_Ezmy4rdM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OJ8wyiPv_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_o7idyvDA_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cCast_tv8YBFxj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zPsyYLeU_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_28hprGs3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RQKBFnJA, HV_BINOP_SUBTRACT, 0, m, &cBinop_RQKBFnJA_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_bXJJGBh9_sendMessage);
}

void Heavy_heavy::cBinop_5LBb5flg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_2wHdUeo2_sendMessage);
}

void Heavy_heavy::cCast_mhJS3rnI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IoBsC3YQ_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_bxqpZUe2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5WnlaNQ4, HV_BINOP_MULTIPLY, 0, m, &cBinop_5WnlaNQ4_sendMessage);
}

void Heavy_heavy::cCast_UpB1PbZE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_DTMBzUmI_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_5WnlaNQ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kS3hfDgM_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mhJS3rnI_sendMessage);
}

void Heavy_heavy::cCast_FfRQ90H1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_shN53ROV, HV_BINOP_MULTIPLY, 0, m, &cBinop_shN53ROV_sendMessage);
}

void Heavy_heavy::cBinop_Sa4xJkJC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_P8TXOWL0_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FfRQ90H1_sendMessage);
}

void Heavy_heavy::cBinop_jLolL1GR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_YOnaIJ4y_sendMessage);
}

void Heavy_heavy::cRandom_k7t2XW29_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_jLolL1GR_sendMessage);
}

void Heavy_heavy::cSlice_gQMSeMgh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_k7t2XW29, 1, m, &cRandom_k7t2XW29_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cUnop_YOnaIJ4y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_10lN0wgd_sendMessage);
}

void Heavy_heavy::cSwitchcase_6OfU7PGA_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_gQMSeMgh, 0, m, &cSlice_gQMSeMgh_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_k7t2XW29, 0, m, &cRandom_k7t2XW29_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cCast_kS3hfDgM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5LBb5flg, HV_BINOP_SUBTRACT, 1, m, &cBinop_5LBb5flg_sendMessage);
}

void Heavy_heavy::cCast_B9cpRd3u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_FIV6t440, 0, m, &cDelay_FIV6t440_sendMessage);
}

void Heavy_heavy::cMsg_c42QRQ2u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_FIV6t440, 0, m, &cDelay_FIV6t440_sendMessage);
}

void Heavy_heavy::cDelay_FIV6t440_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_FIV6t440, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QqsVuP3o_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Qpj0CU5w_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UpB1PbZE_sendMessage);
}

void Heavy_heavy::cSwitchcase_DTMBzUmI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_c42QRQ2u_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_c42QRQ2u_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_FIV6t440, 1, m, &cDelay_FIV6t440_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_B9cpRd3u_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_4d6fS4pj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_kgyXBK2D, 0, m, NULL);
}

void Heavy_heavy::cVar_TwdazLLj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_9JnAdspv_sendMessage);
  cSwitchcase_msrkvGCZ_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_FNl0iXFe_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_PvLQSN2a_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_d2OVGGRB_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_FvdvVOqX_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_suko4eCh_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_Os3xDAut_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_dlxW4CDM_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_PWvTkQo8_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_AoM1WJLN_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_3u1v8eWt_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_ZQZsz23Q_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_gvgTed6A_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_lVin0TlY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_9JnAdspv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TwdazLLj, 1, m, &cVar_TwdazLLj_sendMessage);
}

void Heavy_heavy::cBinop_5PB2EmYI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_hV1mYNWY, 0, m, &cPack_hV1mYNWY_sendMessage);
}

void Heavy_heavy::cCast_1SFCzRNe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Mvvwx3V5, 0, m, &cVar_Mvvwx3V5_sendMessage);
}

void Heavy_heavy::cPack_hV1mYNWY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_SMMeBA2A, 0, m, NULL);
}

void Heavy_heavy::cCast_7tqfjrpp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_KEXZUn4O_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_1v4XhJ16_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_X5PL2wak, 0, m, &cPack_X5PL2wak_sendMessage);
}

void Heavy_heavy::cPack_X5PL2wak_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_YSjfGNsu, 0, m, NULL);
}

void Heavy_heavy::cVar_Mvvwx3V5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_SMMeBA2A, 0, m, NULL);
}

void Heavy_heavy::cCast_WLzSBbDT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LPRafgpo_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_3aXrlECM, 0, m, &cDelay_3aXrlECM_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9c5TIiWG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1gIXIU0D_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sZA0buX1_sendMessage);
}

void Heavy_heavy::cSystem_lcTQbbdT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_P6bIIl0q_sendMessage);
}

void Heavy_heavy::cMsg_dWAmwzTX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_lcTQbbdT_sendMessage);
}

void Heavy_heavy::cDelay_3aXrlECM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_3aXrlECM, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_3aXrlECM, 0, m, &cDelay_3aXrlECM_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9c5TIiWG_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1gIXIU0D_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sZA0buX1_sendMessage);
}

void Heavy_heavy::cBinop_AcCTHxHY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_3aXrlECM, 2, m, &cDelay_3aXrlECM_sendMessage);
}

void Heavy_heavy::cBinop_P6bIIl0q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fJbYhE9i, HV_BINOP_MULTIPLY, 1, m, &cBinop_fJbYhE9i_sendMessage);
}

void Heavy_heavy::cBinop_fJbYhE9i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_AcCTHxHY_sendMessage);
}

void Heavy_heavy::cVar_tIVfSkKL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fJbYhE9i, HV_BINOP_MULTIPLY, 0, m, &cBinop_fJbYhE9i_sendMessage);
}

void Heavy_heavy::cSwitchcase_3u1v8eWt_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_LPRafgpo_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_LPRafgpo_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WLzSBbDT_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_LPRafgpo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_3aXrlECM, 0, m, &cDelay_3aXrlECM_sendMessage);
}

void Heavy_heavy::cCast_9c5TIiWG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_KEXZUn4O_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_sZA0buX1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_sHpI4L4Z_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_jpM5xtSI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_J1Ic4zZj_sendMessage);
}

void Heavy_heavy::cSystem_J1Ic4zZj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dlGBRI3f_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_xbrHUXTd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_HYZURUKo, 1, m, &cIf_HYZURUKo_sendMessage);
}

void Heavy_heavy::cIf_HYZURUKo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_gaB3VUC0_sendMessage(_c, 0, m);
      cMsg_T04p86Rb_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_MaPr7lNW_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_ndOrq1IX_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_2yM7bBKM, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cMsg_BNbbHvnm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_pQu9doEZ_sendMessage);
}

void Heavy_heavy::cVar_Fl0l3xv1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_xbrHUXTd_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_HYZURUKo, 0, m, &cIf_HYZURUKo_sendMessage);
}

void Heavy_heavy::cMsg_cs5hG2g7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_z6oLe8T4_sendMessage);
}

void Heavy_heavy::cBinop_lE9hNRry_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GTKGR5Pq, m);
}

void Heavy_heavy::cBinop_ndOrq1IX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BNbbHvnm_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_pQu9doEZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cs5hG2g7_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_MaPr7lNW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_lE9hNRry_sendMessage);
}

void Heavy_heavy::cMsg_gaB3VUC0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_ndOrq1IX_sendMessage);
}

void Heavy_heavy::cBinop_z6oLe8T4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3HWJfBDx, m);
}

void Heavy_heavy::cBinop_snCWmf3R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GsNE0agh, m);
}

void Heavy_heavy::cMsg_dlGBRI3f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_snCWmf3R_sendMessage);
}

void Heavy_heavy::cMsg_T04p86Rb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_GTKGR5Pq, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_2yM7bBKM, m);
}

void Heavy_heavy::cBinop_DoVLXHKH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tIVfSkKL, 0, m, &cVar_tIVfSkKL_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_hV1mYNWY, 1, m, &cPack_hV1mYNWY_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_X5PL2wak, 1, m, &cPack_X5PL2wak_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Mvvwx3V5, 1, m, &cVar_Mvvwx3V5_sendMessage);
}

void Heavy_heavy::cSwitchcase_KEXZUn4O_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_FInaqSQv, 0, m, &cSlice_FInaqSQv_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_gOVaLOpT, 0, m, &cRandom_gOVaLOpT_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_FInaqSQv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_gOVaLOpT, 1, m, &cRandom_gOVaLOpT_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cUnop_btvhvcDA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_DoVLXHKH_sendMessage);
}

void Heavy_heavy::cRandom_gOVaLOpT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_NHroVai7_sendMessage);
}

void Heavy_heavy::cBinop_NHroVai7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_btvhvcDA_sendMessage);
}

void Heavy_heavy::cCast_veCOt75s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jNyrcvLw_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_MIexrRww, 0, m, &cDelay_MIexrRww_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_RqoSRkPB, 0, m, &cVar_RqoSRkPB_sendMessage);
}

void Heavy_heavy::cBinop_TAfxcdYQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FenNQKaA, HV_BINOP_MULTIPLY, 1, m, &cBinop_FenNQKaA_sendMessage);
}

void Heavy_heavy::cMsg_jNyrcvLw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_MIexrRww, 0, m, &cDelay_MIexrRww_sendMessage);
}

void Heavy_heavy::cSwitchcase_A5PWVu4m_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_jNyrcvLw_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_jNyrcvLw_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_veCOt75s_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cDelay_MIexrRww_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_MIexrRww, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_MIexrRww, 0, m, &cDelay_MIexrRww_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_RqoSRkPB, 0, m, &cVar_RqoSRkPB_sendMessage);
}

void Heavy_heavy::cBinop_FenNQKaA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_jOMk2C63_sendMessage);
}

void Heavy_heavy::cSystem_wNMNq1xz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_TAfxcdYQ_sendMessage);
}

void Heavy_heavy::cMsg_6KBcQICL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_wNMNq1xz_sendMessage);
}

void Heavy_heavy::cBinop_jOMk2C63_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_MIexrRww, 2, m, &cDelay_MIexrRww_sendMessage);
}

void Heavy_heavy::cVar_GoaqM1Ns_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FenNQKaA, HV_BINOP_MULTIPLY, 0, m, &cBinop_FenNQKaA_sendMessage);
}

void Heavy_heavy::cBinop_fwaeaVnH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RqoSRkPB, 1, m, &cVar_RqoSRkPB_sendMessage);
}

void Heavy_heavy::cCast_4stRRYEx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cVxpSTwm, HV_BINOP_SUBTRACT, 0, m, &cBinop_cVxpSTwm_sendMessage);
}

void Heavy_heavy::cBinop_BEnCDO2P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_VIBqDGFK_sendMessage);
}

void Heavy_heavy::cVar_RqoSRkPB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fwaeaVnH, HV_BINOP_SUBTRACT, 0, m, &cBinop_fwaeaVnH_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_orWVu4SJ_sendMessage);
}

void Heavy_heavy::cBinop_VIBqDGFK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RqoSRkPB, 1, m, &cVar_RqoSRkPB_sendMessage);
}

void Heavy_heavy::cMsg_BERbnwei_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_7BPHKOZA, HV_BINOP_MULTIPLY, 0, m, &cBinop_7BPHKOZA_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_qGagBc66, HV_BINOP_DIVIDE, 1, m, &cBinop_qGagBc66_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_GoaqM1Ns, 0, m, &cVar_GoaqM1Ns_sendMessage);
}

void Heavy_heavy::cBinop_Q2ifpWln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HhdGicYW, HV_BINOP_ADD, 1, m, &cBinop_HhdGicYW_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_7LjfCa6k, HV_BINOP_ADD, 1, m, &cBinop_7LjfCa6k_sendMessage);
}

void Heavy_heavy::cCast_a4V5oyEy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2mNMjppm_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_67LjuLo9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_4BeLLgVs_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cMsg_2z5pga1O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_A5PWVu4m_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_vawKkJj0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8XZP4v9g_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_7BPHKOZA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_mvj9tjmK_sendMessage);
}

void Heavy_heavy::cCast_9QMb8n3O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BERbnwei_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_4BeLLgVs_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9QMb8n3O_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_7BPHKOZA, HV_BINOP_MULTIPLY, 0, m, &cBinop_7BPHKOZA_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_qGagBc66, HV_BINOP_DIVIDE, 1, m, &cBinop_qGagBc66_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_GoaqM1Ns, 0, m, &cVar_GoaqM1Ns_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_mvj9tjmK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fwaeaVnH, HV_BINOP_SUBTRACT, 1, m, &cBinop_fwaeaVnH_sendMessage);
}

void Heavy_heavy::cMsg_dnPVO198_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2BG714cK_sendMessage);
}

void Heavy_heavy::cSystem_2BG714cK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7BPHKOZA, HV_BINOP_MULTIPLY, 1, m, &cBinop_7BPHKOZA_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_BEnCDO2P, HV_BINOP_MULTIPLY, 1, m, &cBinop_BEnCDO2P_sendMessage);
}

void Heavy_heavy::cBinop_orWVu4SJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_mDjoLzH8_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_AAZhdaXt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EsmSWtLH_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_HhdGicYW, HV_BINOP_ADD, 0, m, &cBinop_HhdGicYW_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_8dhc4Ovf, 1, m, &cVar_8dhc4Ovf_sendMessage);
}

void Heavy_heavy::cVar_8dhc4Ovf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7LjfCa6k, HV_BINOP_ADD, 0, m, &cBinop_7LjfCa6k_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_HhdGicYW, HV_BINOP_ADD, 0, m, &cBinop_HhdGicYW_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5pYRtlK7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_86zRRdWA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MP6hr7tI_sendMessage);
}

void Heavy_heavy::cCast_q7BuzVM1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2z5pga1O_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_qNz6GoQ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_A5PWVu4m_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_HhdGicYW, HV_BINOP_ADD, 1, m, &cBinop_HhdGicYW_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_7LjfCa6k, HV_BINOP_ADD, 1, m, &cBinop_7LjfCa6k_sendMessage);
}

void Heavy_heavy::cCast_Wgh4xOMe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kqiplAXU, 1, m, &cVar_kqiplAXU_sendMessage);
}

void Heavy_heavy::cBinop_HhdGicYW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CUKB2qKq, 0, m, &cVar_CUKB2qKq_sendMessage);
}

void Heavy_heavy::cCast_ZxfDfSZe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jddYC33p, 0, m, &cVar_jddYC33p_sendMessage);
}

void Heavy_heavy::cBinop_7LjfCa6k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8dhc4Ovf, 1, m, &cVar_8dhc4Ovf_sendMessage);
}

void Heavy_heavy::cCast_jA92iT3F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BEnCDO2P, HV_BINOP_MULTIPLY, 0, m, &cBinop_BEnCDO2P_sendMessage);
}

void Heavy_heavy::cSlice_l5j27xRk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_q7BuzVM1_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AAZhdaXt_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_q7BuzVM1_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AAZhdaXt_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_7djsueUD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_UyqEButa, 0, m, &cSlice_UyqEButa_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_l5j27xRk, 0, m, &cSlice_l5j27xRk_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZxfDfSZe_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_dAdfPZLF, 0, m, &cSlice_dAdfPZLF_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_yGwtzLsC, 0, m, &cSlice_yGwtzLsC_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_a4V5oyEy_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vawKkJj0_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_UyqEButa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_2z5pga1O_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_2z5pga1O_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cMsg_8XZP4v9g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_jddYC33p, 1, m, &cVar_jddYC33p_sendMessage);
}

void Heavy_heavy::cCast_Fq85yNq8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kqiplAXU, 0, m, &cVar_kqiplAXU_sendMessage);
}

void Heavy_heavy::cCast_OV0ceqpz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8JxEIuqR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Fq85yNq8_sendMessage);
}

void Heavy_heavy::cCast_IIqngktC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8dhc4Ovf, 0, m, &cVar_8dhc4Ovf_sendMessage);
}

void Heavy_heavy::cSwitchcase_mDjoLzH8_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IIqngktC_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OV0ceqpz_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cMsg_2mNMjppm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_A5PWVu4m_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cSlice_yGwtzLsC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Wgh4xOMe_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4stRRYEx_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_dAdfPZLF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jA92iT3F_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xUIc50UW_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_cVxpSTwm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Q2ifpWln, HV_BINOP_DIVIDE, 0, m, &cBinop_Q2ifpWln_sendMessage);
}

void Heavy_heavy::cCast_8JxEIuqR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qNz6GoQ1_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_qGagBc66_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Q2ifpWln, HV_BINOP_DIVIDE, 1, m, &cBinop_Q2ifpWln_sendMessage);
}

void Heavy_heavy::cCast_EsmSWtLH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qNz6GoQ1_sendMessage(_c, 0, m);
}

void Heavy_heavy::cVar_CUKB2qKq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cVxpSTwm, HV_BINOP_SUBTRACT, 1, m, &cBinop_cVxpSTwm_sendMessage);
}

void Heavy_heavy::cVar_jddYC33p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jA92iT3F_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xUIc50UW_sendMessage);
}

void Heavy_heavy::cCast_xUIc50UW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qGagBc66, HV_BINOP_DIVIDE, 0, m, &cBinop_qGagBc66_sendMessage);
}

void Heavy_heavy::cVar_kqiplAXU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8dhc4Ovf, 0, m, &cVar_8dhc4Ovf_sendMessage);
}

void Heavy_heavy::cCast_OZEQqbyQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Cc6vN3rn, HV_BINOP_SUBTRACT, 1, m, &cBinop_Cc6vN3rn_sendMessage);
}

void Heavy_heavy::cUnop_Cuyc4GER_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_gQSV0utk_sendMessage);
}

void Heavy_heavy::cRandom_ecBbRBZl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_vANE1BhC_sendMessage);
}

void Heavy_heavy::cBinop_vANE1BhC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_Cuyc4GER_sendMessage);
}

void Heavy_heavy::cSwitchcase_7oeoyFsH_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_2UZwrsU0, 0, m, &cSlice_2UZwrsU0_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_ecBbRBZl, 0, m, &cRandom_ecBbRBZl_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_2UZwrsU0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_ecBbRBZl, 1, m, &cRandom_ecBbRBZl_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_Cc6vN3rn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_PWR6I2LI_sendMessage);
}

void Heavy_heavy::cBinop_B7s3aHJD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_7kBDOEuR, 1, m, &cPack_7kBDOEuR_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_JyfCjvjG, 1, m, &cDelay_JyfCjvjG_sendMessage);
}

void Heavy_heavy::cCast_ddxGz9Uj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fjuy7RN4_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_86zRRdWA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Rf0l8HPH_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_y57nYac1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_O5D6v1xU_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_MPjPRDnY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_verx7Tsj_sendMessage);
}

void Heavy_heavy::cCast_gztVqtVY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_KSMOGFXA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_MyXUDTyq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0RUMmoE8, HV_BINOP_MULTIPLY, 1, m, &cBinop_0RUMmoE8_sendMessage);
}

void Heavy_heavy::cCast_5pYRtlK7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DoRJ4pD2, HV_BINOP_SUBTRACT, 1, m, &cBinop_DoRJ4pD2_sendMessage);
}

void Heavy_heavy::cCast_Qslf4OJZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZpxqOiTr_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_O5D6v1xU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_SUK1eGc6_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_SUK1eGc6_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_JyfCjvjG, 1, m, &cDelay_JyfCjvjG_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_54tSOStP_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cDelay_JyfCjvjG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_JyfCjvjG, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gztVqtVY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rplWzB1O_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_y57nYac1_sendMessage);
}

void Heavy_heavy::cMsg_SUK1eGc6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_JyfCjvjG, 0, m, &cDelay_JyfCjvjG_sendMessage);
}

void Heavy_heavy::cCast_54tSOStP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_JyfCjvjG, 0, m, &cDelay_JyfCjvjG_sendMessage);
}

void Heavy_heavy::cBinop_gQSV0utk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_7kBDOEuR, 0, m, &cPack_7kBDOEuR_sendMessage);
}

void Heavy_heavy::cMsg_ZpxqOiTr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_MPjPRDnY, HV_BINOP_SUBTRACT, 0, m, &cBinop_MPjPRDnY_sendMessage);
}

void Heavy_heavy::cBinop_verx7Tsj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0CNkPmw6, m);
}

void Heavy_heavy::cPack_7kBDOEuR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_7djsueUD_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_Fddkjm2A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MPjPRDnY, HV_BINOP_SUBTRACT, 1, m, &cBinop_MPjPRDnY_sendMessage);
}

void Heavy_heavy::cCast_ZlCOzW7o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RKGaoH2d, HV_BINOP_MULTIPLY, 0, m, &cBinop_RKGaoH2d_sendMessage);
}

void Heavy_heavy::cCast_MP6hr7tI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MyXUDTyq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fKyUUD1r_sendMessage);
}

void Heavy_heavy::cCast_fKyUUD1r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0RUMmoE8, HV_BINOP_MULTIPLY, 0, m, &cBinop_0RUMmoE8_sendMessage);
}

void Heavy_heavy::cCast_CpUG5QDQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RKGaoH2d, HV_BINOP_MULTIPLY, 1, m, &cBinop_RKGaoH2d_sendMessage);
}

void Heavy_heavy::cBinop_PWR6I2LI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_b0P7pG6A, m);
}

void Heavy_heavy::cBinop_0RUMmoE8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Fddkjm2A_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Qslf4OJZ_sendMessage);
}

void Heavy_heavy::cBinop_DoRJ4pD2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CpUG5QDQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZlCOzW7o_sendMessage);
}

void Heavy_heavy::cMsg_Rf0l8HPH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_DoRJ4pD2, HV_BINOP_SUBTRACT, 0, m, &cBinop_DoRJ4pD2_sendMessage);
}

void Heavy_heavy::cCast_rplWzB1O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_7oeoyFsH_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cRandom_IDcYfOAG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_Mwkzj5DL_sendMessage);
}

void Heavy_heavy::cSlice_5VStTkmk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_IDcYfOAG, 1, m, &cRandom_IDcYfOAG_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_Mwkzj5DL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_RxqIzxUH_sendMessage);
}

void Heavy_heavy::cSwitchcase_KSMOGFXA_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_5VStTkmk, 0, m, &cSlice_5VStTkmk_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_IDcYfOAG, 0, m, &cRandom_IDcYfOAG_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cUnop_RxqIzxUH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_B7s3aHJD_sendMessage);
}

void Heavy_heavy::cBinop_RKGaoH2d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OZEQqbyQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ddxGz9Uj_sendMessage);
}

void Heavy_heavy::cMsg_fjuy7RN4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Cc6vN3rn, HV_BINOP_SUBTRACT, 0, m, &cBinop_Cc6vN3rn_sendMessage);
}

void Heavy_heavy::cCast_1gIXIU0D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cBinop_JDvdQ54R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_OEM2Qtwo_sendMessage);
}

void Heavy_heavy::cSlice_3JqHJDxR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_kLkOAlEd, 1, m, &cRandom_kLkOAlEd_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cRandom_kLkOAlEd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_JDvdQ54R_sendMessage);
}

void Heavy_heavy::cUnop_OEM2Qtwo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1400.0f, 0, m, &cBinop_5PB2EmYI_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_1v4XhJ16_sendMessage);
}

void Heavy_heavy::cSwitchcase_sHpI4L4Z_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_3JqHJDxR, 0, m, &cSlice_3JqHJDxR_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_kLkOAlEd, 0, m, &cRandom_kLkOAlEd_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_vYJ6zu5J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_FpCJ0Wai_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_3WePka5C, m);
}

void Heavy_heavy::cBinop_EKVCGcP6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_vYJ6zu5J_sendMessage);
}

void Heavy_heavy::cBinop_kmz8URc5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_EKVCGcP6_sendMessage);
}

void Heavy_heavy::cSystem_oMjcsa4q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mtL9Zp5t_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_kUVMHSIH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_oMjcsa4q_sendMessage);
}

void Heavy_heavy::cMsg_mtL9Zp5t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_3vLlFIda_sendMessage);
}

void Heavy_heavy::cBinop_3vLlFIda_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kmz8URc5, HV_BINOP_MULTIPLY, 1, m, &cBinop_kmz8URc5_sendMessage);
}

void Heavy_heavy::cBinop_FpCJ0Wai_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_flrrpaiI, m);
}

void Heavy_heavy::cVar_JC3CdxHC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kmz8URc5, HV_BINOP_MULTIPLY, 0, m, &cBinop_kmz8URc5_sendMessage);
}

void Heavy_heavy::cVar_9XdINrpB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_oEshT29S, 0, m, NULL);
}

void Heavy_heavy::cBinop_vHluYQsq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_ccuykocq, 0, m, &cPack_ccuykocq_sendMessage);
}

void Heavy_heavy::cBinop_2cDhntZX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sPHvVqh5, 0, m, &cVar_sPHvVqh5_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_fqOasbKM, 1, m, &cPack_fqOasbKM_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_ccuykocq, 1, m, &cPack_ccuykocq_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_9XdINrpB, 1, m, &cVar_9XdINrpB_sendMessage);
}

void Heavy_heavy::cCast_I33IS3Ff_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9XdINrpB, 0, m, &cVar_9XdINrpB_sendMessage);
}

void Heavy_heavy::cCast_aSCvFL82_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_UrwTzyn7_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_DmlvVede_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_AKhotWqT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cPack_fqOasbKM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_oEshT29S, 0, m, NULL);
}

void Heavy_heavy::cBinop_6JbS3fmA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_pOP4839x, 0, m, &cPack_pOP4839x_sendMessage);
}

void Heavy_heavy::cCast_O3F9sUlx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ceMBU64a_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_B2u6xWXj_sendMessage);
}

void Heavy_heavy::cCast_WT45u9Ej_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Ql5mavjT, 0, m, &cDelay_Ql5mavjT_sendMessage);
}

void Heavy_heavy::cSwitchcase_mqxELaQP_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_W8UF0QM7_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_W8UF0QM7_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_Ql5mavjT, 1, m, &cDelay_Ql5mavjT_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WT45u9Ej_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cDelay_Ql5mavjT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Ql5mavjT, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZFHBrH1y_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JKdi5iKp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_l50B0HpD_sendMessage);
}

void Heavy_heavy::cMsg_W8UF0QM7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Ql5mavjT, 0, m, &cDelay_Ql5mavjT_sendMessage);
}

void Heavy_heavy::cBinop_skn4xvKE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_RvxbTGXs, m);
}

void Heavy_heavy::cBinop_6y5E2YSh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9L5Dq3x9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BqJigEsa_sendMessage);
}

void Heavy_heavy::cCast_B2u6xWXj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7AYjlf4l, HV_BINOP_MULTIPLY, 0, m, &cBinop_7AYjlf4l_sendMessage);
}

void Heavy_heavy::cSlice_sNC2MGZG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_RwbHz041, 1, m, &cRandom_RwbHz041_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cUnop_Fj2Qgr38_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1000.0f, 0, m, &cBinop_N8nqmiCr_sendMessage);
}

void Heavy_heavy::cBinop_Kboq8uJo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_Fj2Qgr38_sendMessage);
}

void Heavy_heavy::cSwitchcase_86PyNqSG_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_sNC2MGZG, 0, m, &cSlice_sNC2MGZG_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_RwbHz041, 0, m, &cRandom_RwbHz041_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cRandom_RwbHz041_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 20000.0f, 0, m, &cBinop_Kboq8uJo_sendMessage);
}

void Heavy_heavy::cCast_ZFHBrH1y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_86PyNqSG_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cPack_pOP4839x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_HQIQ2GS9_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cBinop_N8nqmiCr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_pOP4839x, 1, m, &cPack_pOP4839x_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Ql5mavjT, 1, m, &cDelay_Ql5mavjT_sendMessage);
}

void Heavy_heavy::cCast_9L5Dq3x9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J6QclZK3, HV_BINOP_SUBTRACT, 1, m, &cBinop_J6QclZK3_sendMessage);
}

void Heavy_heavy::cMsg_KopmompA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PVuNPKs7, HV_BINOP_SUBTRACT, 0, m, &cBinop_PVuNPKs7_sendMessage);
}

void Heavy_heavy::cCast_l50B0HpD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_mqxELaQP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_waqIBHKz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PVuNPKs7, HV_BINOP_SUBTRACT, 1, m, &cBinop_PVuNPKs7_sendMessage);
}

void Heavy_heavy::cBinop_J6QclZK3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_pxfqEuMR_sendMessage);
}

void Heavy_heavy::cMsg_3VdnqERr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_lE8Hj1kN, HV_BINOP_SUBTRACT, 0, m, &cBinop_lE8Hj1kN_sendMessage);
}

void Heavy_heavy::cCast_qnjfLIDj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lE8Hj1kN, HV_BINOP_SUBTRACT, 1, m, &cBinop_lE8Hj1kN_sendMessage);
}

void Heavy_heavy::cCast_jEBck40g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6y5E2YSh, HV_BINOP_MULTIPLY, 0, m, &cBinop_6y5E2YSh_sendMessage);
}

void Heavy_heavy::cCast_ceMBU64a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7AYjlf4l, HV_BINOP_MULTIPLY, 1, m, &cBinop_7AYjlf4l_sendMessage);
}

void Heavy_heavy::cRandom_3ep6Frc9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 101.0f, 0, m, &cBinop_RXIwgVrB_sendMessage);
}

void Heavy_heavy::cSlice_h8WjfVSy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_3ep6Frc9, 1, m, &cRandom_3ep6Frc9_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_zZqZfNkk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_h8WjfVSy, 0, m, &cSlice_h8WjfVSy_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_3ep6Frc9, 0, m, &cRandom_3ep6Frc9_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_RXIwgVrB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_7aEDmP0c_sendMessage);
}

void Heavy_heavy::cUnop_7aEDmP0c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 10.0f, 0, m, &cBinop_6JbS3fmA_sendMessage);
}

void Heavy_heavy::cCast_J6tU9lZm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3VdnqERr_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_pxfqEuMR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QKUDPpfg, m);
}

void Heavy_heavy::cCast_JKdi5iKp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_zZqZfNkk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_WTCiqR9O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fGxVf4EQ, 1, m, &cVar_fGxVf4EQ_sendMessage);
}

void Heavy_heavy::cSystem_ZCL7bell_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_C2GgJrMH, HV_BINOP_MULTIPLY, 1, m, &cBinop_C2GgJrMH_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_J0o0TKDc, HV_BINOP_MULTIPLY, 1, m, &cBinop_J0o0TKDc_sendMessage);
}

void Heavy_heavy::cMsg_pxVlWSkJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ZCL7bell_sendMessage);
}

void Heavy_heavy::cSlice_iyiEN4C9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_JWsqpYkC_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_JWsqpYkC_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSwitchcase_HQIQ2GS9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_iyiEN4C9, 0, m, &cSlice_iyiEN4C9_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_VVA9l0JS, 0, m, &cSlice_VVA9l0JS_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PdwYF810_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_xtJjgXD1, 0, m, &cSlice_xtJjgXD1_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_JNsP41Nl, 0, m, &cSlice_JNsP41Nl_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LdWIXT9n_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9teu3z1z_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cSlice_VVA9l0JS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_08LoiIDB_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iy1RKeJM_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_08LoiIDB_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iy1RKeJM_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cCast_PdwYF810_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UI2lLEWl, 0, m, &cVar_UI2lLEWl_sendMessage);
}

void Heavy_heavy::cCast_LdWIXT9n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4ZgiOXe4_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_bmvwWZn4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_UI2lLEWl, 1, m, &cVar_UI2lLEWl_sendMessage);
}

void Heavy_heavy::cMsg_4ZgiOXe4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_eqER0veG_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_em9Qq1Du_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dvwk92Ia, HV_BINOP_DIVIDE, 0, m, &cBinop_Dvwk92Ia_sendMessage);
}

void Heavy_heavy::cBinop_sVno7bTi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PhgU67dn, HV_BINOP_ADD, 1, m, &cBinop_PhgU67dn_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CPvh7Cnp, HV_BINOP_ADD, 1, m, &cBinop_CPvh7Cnp_sendMessage);
}

void Heavy_heavy::cBinop_PhgU67dn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_p6MQDhX2, 0, m, &cVar_p6MQDhX2_sendMessage);
}

void Heavy_heavy::cCast_qjnO9uVq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J0o0TKDc, HV_BINOP_MULTIPLY, 0, m, &cBinop_J0o0TKDc_sendMessage);
}

void Heavy_heavy::cBinop_I9vnfIJd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_v1YquXhQ, 1, m, &cVar_v1YquXhQ_sendMessage);
}

void Heavy_heavy::cBinop_Pw7qCVJN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_v1YquXhQ, 1, m, &cVar_v1YquXhQ_sendMessage);
}

void Heavy_heavy::cMsg_PER6OtYk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_C2GgJrMH, HV_BINOP_MULTIPLY, 0, m, &cBinop_C2GgJrMH_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dvwk92Ia, HV_BINOP_DIVIDE, 1, m, &cBinop_Dvwk92Ia_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ghgTvjgd, 0, m, &cVar_ghgTvjgd_sendMessage);
}

void Heavy_heavy::cBinop_C2GgJrMH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_YLwhkpsl_sendMessage);
}

void Heavy_heavy::cBinop_YLwhkpsl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I9vnfIJd, HV_BINOP_SUBTRACT, 1, m, &cBinop_I9vnfIJd_sendMessage);
}

void Heavy_heavy::cCast_aYJb1xkK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sdTdr59B_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_gSNn3wUi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_BovP26nG_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_ogmu4ON3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CPvh7Cnp, HV_BINOP_ADD, 0, m, &cBinop_CPvh7Cnp_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PhgU67dn, HV_BINOP_ADD, 0, m, &cBinop_PhgU67dn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_waqIBHKz_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SbinsR4C_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_O3F9sUlx_sendMessage);
}

void Heavy_heavy::cCast_5InnX9Jo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PER6OtYk_sendMessage(_c, 0, m);
}

void Heavy_heavy::cSwitchcase_bPZw4Tyx_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5InnX9Jo_sendMessage);
      break;
    }
    default: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_C2GgJrMH, HV_BINOP_MULTIPLY, 0, m, &cBinop_C2GgJrMH_sendMessage);
      cBinop_onMessage(_c, &Context(_c)->cBinop_Dvwk92Ia, HV_BINOP_DIVIDE, 1, m, &cBinop_Dvwk92Ia_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_ghgTvjgd, 0, m, &cVar_ghgTvjgd_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cVar_v1YquXhQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I9vnfIJd, HV_BINOP_SUBTRACT, 0, m, &cBinop_I9vnfIJd_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.0f, 0, m, &cBinop_gSNn3wUi_sendMessage);
}

void Heavy_heavy::cBinop_Dvwk92Ia_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sVno7bTi, HV_BINOP_DIVIDE, 1, m, &cBinop_sVno7bTi_sendMessage);
}

void Heavy_heavy::cCast_iy1RKeJM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_llh4w6Dn_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PhgU67dn, HV_BINOP_ADD, 0, m, &cBinop_PhgU67dn_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ogmu4ON3, 1, m, &cVar_ogmu4ON3_sendMessage);
}

void Heavy_heavy::cCast_lP1qPlj6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aYJb1xkK_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JFBzIMMi_sendMessage);
}

void Heavy_heavy::cCast_a3TOLAy4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ogmu4ON3, 0, m, &cVar_ogmu4ON3_sendMessage);
}

void Heavy_heavy::cSwitchcase_BovP26nG_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_a3TOLAy4_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lP1qPlj6_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_heavy::cVar_p6MQDhX2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1Uy0Byn8, HV_BINOP_SUBTRACT, 1, m, &cBinop_1Uy0Byn8_sendMessage);
}

void Heavy_heavy::cVar_yeaZNkVt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_bPZw4Tyx_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_fGxVf4EQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ogmu4ON3, 0, m, &cVar_ogmu4ON3_sendMessage);
}

void Heavy_heavy::cCast_1sXpq9Kf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1Uy0Byn8, HV_BINOP_SUBTRACT, 0, m, &cBinop_1Uy0Byn8_sendMessage);
}

void Heavy_heavy::cSlice_xtJjgXD1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qjnO9uVq_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_em9Qq1Du_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cSlice_JNsP41Nl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WTCiqR9O_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1sXpq9Kf_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_1Uy0Byn8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sVno7bTi, HV_BINOP_DIVIDE, 0, m, &cBinop_sVno7bTi_sendMessage);
}

void Heavy_heavy::cMsg_JWsqpYkC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_eqER0veG_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cVar_UI2lLEWl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qjnO9uVq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_em9Qq1Du_sendMessage);
}

void Heavy_heavy::cCast_08LoiIDB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JWsqpYkC_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_JFBzIMMi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fGxVf4EQ, 0, m, &cVar_fGxVf4EQ_sendMessage);
}

void Heavy_heavy::cCast_9teu3z1z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bmvwWZn4_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_CPvh7Cnp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ogmu4ON3, 1, m, &cVar_ogmu4ON3_sendMessage);
}

void Heavy_heavy::cCast_Rnbw24fZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ao8jSiGk_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_b0r6sWJC, 0, m, &cDelay_b0r6sWJC_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_v1YquXhQ, 0, m, &cVar_v1YquXhQ_sendMessage);
}

void Heavy_heavy::cDelay_b0r6sWJC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_b0r6sWJC, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_b0r6sWJC, 0, m, &cDelay_b0r6sWJC_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_v1YquXhQ, 0, m, &cVar_v1YquXhQ_sendMessage);
}

void Heavy_heavy::cBinop_AMqUbXhm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_f45vSYYE_sendMessage);
}

void Heavy_heavy::cMsg_Ao8jSiGk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_b0r6sWJC, 0, m, &cDelay_b0r6sWJC_sendMessage);
}

void Heavy_heavy::cVar_ghgTvjgd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AMqUbXhm, HV_BINOP_MULTIPLY, 0, m, &cBinop_AMqUbXhm_sendMessage);
}

void Heavy_heavy::cMsg_Ucx6lPDe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_1r5dibqJ_sendMessage);
}

void Heavy_heavy::cSystem_1r5dibqJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_geGI3isP_sendMessage);
}

void Heavy_heavy::cBinop_f45vSYYE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_b0r6sWJC, 2, m, &cDelay_b0r6sWJC_sendMessage);
}

void Heavy_heavy::cSwitchcase_eqER0veG_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_Ao8jSiGk_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_Ao8jSiGk_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Rnbw24fZ_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cBinop_geGI3isP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AMqUbXhm, HV_BINOP_MULTIPLY, 1, m, &cBinop_AMqUbXhm_sendMessage);
}

void Heavy_heavy::cBinop_J0o0TKDc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Pw7qCVJN_sendMessage);
}

void Heavy_heavy::cMsg_sdTdr59B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_eqER0veG_onMessage(_c, NULL, 0, m, NULL);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PhgU67dn, HV_BINOP_ADD, 1, m, &cBinop_PhgU67dn_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CPvh7Cnp, HV_BINOP_ADD, 1, m, &cBinop_CPvh7Cnp_sendMessage);
}

void Heavy_heavy::cCast_llh4w6Dn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sdTdr59B_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_LeClRG4I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 100.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_J6QclZK3, HV_BINOP_SUBTRACT, 0, m, &cBinop_J6QclZK3_sendMessage);
}

void Heavy_heavy::cBinop_lE8Hj1kN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_skn4xvKE_sendMessage);
}

void Heavy_heavy::cCast_BqJigEsa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LeClRG4I_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_SbinsR4C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KopmompA_sendMessage(_c, 0, m);
}

void Heavy_heavy::cCast_SuVhxgQg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6y5E2YSh, HV_BINOP_MULTIPLY, 1, m, &cBinop_6y5E2YSh_sendMessage);
}

void Heavy_heavy::cBinop_PVuNPKs7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SuVhxgQg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jEBck40g_sendMessage);
}

void Heavy_heavy::cBinop_7AYjlf4l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qnjfLIDj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_J6tU9lZm_sendMessage);
}

void Heavy_heavy::cRandom_4sRwMSu9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 80.0f, 0, m, &cBinop_OYUqTX1f_sendMessage);
}

void Heavy_heavy::cSwitchcase_UrwTzyn7_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_YsT9cCqe, 0, m, &cSlice_YsT9cCqe_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_4sRwMSu9, 0, m, &cRandom_4sRwMSu9_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cUnop_U38zq1ro_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 800.0f, 0, m, &cBinop_6vzj3nmM_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_vHluYQsq_sendMessage);
}

void Heavy_heavy::cSlice_YsT9cCqe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_4sRwMSu9, 1, m, &cRandom_4sRwMSu9_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_OYUqTX1f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_U38zq1ro_sendMessage);
}

void Heavy_heavy::cPack_ccuykocq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_WEN7GM0y, 0, m, NULL);
}

void Heavy_heavy::cSwitchcase_AKhotWqT_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_HVk1kmK2, 0, m, &cSlice_HVk1kmK2_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_pm4To8WR, 0, m, &cRandom_pm4To8WR_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cRandom_pm4To8WR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_i2kUx28O_sendMessage);
}

void Heavy_heavy::cBinop_i2kUx28O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_0NmlvcKE_sendMessage);
}

void Heavy_heavy::cUnop_0NmlvcKE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 200.0f, 0, m, &cBinop_2cDhntZX_sendMessage);
}

void Heavy_heavy::cSlice_HVk1kmK2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_pm4To8WR, 1, m, &cRandom_pm4To8WR_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cCast_w1yh0OWt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_AKhotWqT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_heavy::cCast_183kbF53_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_heavy::cMsg_dWg8SpCa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_3LT18QOI_sendMessage);
}

void Heavy_heavy::cVar_2p5IwkK5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1e-05f, 0, m, &cBinop_dCUiKCfv_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_bgEzkSVv, 0, m, &cIf_bgEzkSVv_sendMessage);
}

void Heavy_heavy::cMsg_ULsZ71T4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_klNTYNwN_sendMessage);
}

void Heavy_heavy::cSystem_klNTYNwN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dvV8SAO8_sendMessage(_c, 0, m);
}

void Heavy_heavy::cMsg_SpEtRFH9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_F0mI3PpQ, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_S86gdGYo, m);
}

void Heavy_heavy::cMsg_j9Su7SI0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_acbcIoD4_sendMessage);
}

void Heavy_heavy::cMsg_FcjRssBw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_ei4mYJ1X_sendMessage);
}

void Heavy_heavy::cBinop_mxs4waX4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_j9LbR2tE, m);
}

void Heavy_heavy::cIf_bgEzkSVv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_dWg8SpCa_sendMessage(_c, 0, m);
      cMsg_SpEtRFH9_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cMsg_FcjRssBw_sendMessage(_c, 0, m);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 2.0f, 0, m, &cBinop_3LT18QOI_sendMessage);
      sVarf_onMessage(_c, &Context(_c)->sVarf_S86gdGYo, m);
      break;
    }
    default: return;
  }
}

void Heavy_heavy::cBinop_dCUiKCfv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_bgEzkSVv, 1, m, &cIf_bgEzkSVv_sendMessage);
}

void Heavy_heavy::cMsg_dvV8SAO8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_aSPFxGRA_sendMessage);
}

void Heavy_heavy::cMsg_ASs7yR66_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_mxs4waX4_sendMessage);
}

void Heavy_heavy::cBinop_aSPFxGRA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oLI7NMzi, m);
}

void Heavy_heavy::cBinop_3LT18QOI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_j9Su7SI0_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_acbcIoD4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ASs7yR66_sendMessage(_c, 0, m);
}

void Heavy_heavy::cBinop_ei4mYJ1X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_F0mI3PpQ, m);
}

void Heavy_heavy::cBinop_6vzj3nmM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_fqOasbKM, 0, m, &cPack_fqOasbKM_sendMessage);
}

void Heavy_heavy::cCast_oGVZBnFP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5a9cy9Fk_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_sFzqCGYo, 0, m, &cDelay_sFzqCGYo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_w1yh0OWt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_183kbF53_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aSCvFL82_sendMessage);
}

void Heavy_heavy::cBinop_Bc2Dm7Ho_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_sFzqCGYo, 2, m, &cDelay_sFzqCGYo_sendMessage);
}

void Heavy_heavy::cMsg_5a9cy9Fk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_sFzqCGYo, 0, m, &cDelay_sFzqCGYo_sendMessage);
}

void Heavy_heavy::cVar_sPHvVqh5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kN7Lc5ys, HV_BINOP_MULTIPLY, 0, m, &cBinop_kN7Lc5ys_sendMessage);
}

void Heavy_heavy::cDelay_sFzqCGYo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_sFzqCGYo, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_sFzqCGYo, 0, m, &cDelay_sFzqCGYo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_w1yh0OWt_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_183kbF53_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aSCvFL82_sendMessage);
}

void Heavy_heavy::cSwitchcase_dlxW4CDM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_5a9cy9Fk_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_5a9cy9Fk_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oGVZBnFP_sendMessage);
      break;
    }
  }
}

void Heavy_heavy::cMsg_bnRo9fdi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_hPRwMs7N_sendMessage);
}

void Heavy_heavy::cSystem_hPRwMs7N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_XN8R8EHA_sendMessage);
}

void Heavy_heavy::cBinop_XN8R8EHA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kN7Lc5ys, HV_BINOP_MULTIPLY, 1, m, &cBinop_kN7Lc5ys_sendMessage);
}

void Heavy_heavy::cBinop_kN7Lc5ys_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Bc2Dm7Ho_sendMessage);
}




/*
 * Context Process Implementation
 */

int Heavy_heavy::process(float **inputBuffers, float **outputBuffers, int n) {
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
    __hv_varread_i(&sVari_QIpzESlI, VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 16807, 16807, 16807, 16807, 16807, 16807, 16807, 16807);
    __hv_mul_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_cast_if(VIi(Bi1), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f);
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varwrite_i(&sVari_QIpzESlI, VIi(Bi1));
    __hv_line_f(&sLine_vxDfmjiL, VOf(Bf0));
    __hv_varread_f(&sVarf_NEuKdUEI, VOf(Bf2));
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_tXoplabO, VOf(Bf2));
    __hv_min_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_YoGned8v, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf2));
    __hv_varread_f(&sVarf_lyXFb7qc, VOf(Bf4));
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
    __hv_cpole_f(&sCPole_GUKmlawJ, VIf(Bf4), VIf(ZERO), VIf(Bf5), VIf(Bf0), VOf(Bf0), VOf(Bf5));
    __hv_line_f(&sLine_qwmLpZev, VOf(Bf5));
    __hv_mul_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_7Ek5QF06, VOf(Bf0));
    __hv_mul_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_f4vGGg5x, VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_0B3MOPzB, VOf(Bf5));
    __hv_varread_f(&sVarf_xZPoQcQ5, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_NcN9HxDg, VOf(Bf3));
    __hv_min_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_mYw6UkLU, VOf(Bf2));
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf3));
    __hv_varread_f(&sVarf_zh0VHVEI, VOf(Bf6));
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
    __hv_cpole_f(&sCPole_f4kDS064, VIf(Bf6), VIf(ZERO), VIf(Bf7), VIf(Bf5), VOf(Bf5), VOf(Bf7));
    __hv_line_f(&sLine_AnWOv4yQ, VOf(Bf7));
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_3dpYVgVG, VOf(Bf5));
    __hv_mul_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_gJhua2KZ, VOf(Bf6));
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_AX39aKCk, VOf(Bf0));
    __hv_varread_f(&sVarf_zk1mAFqi, VOf(Bf7));
    __hv_mul_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf0), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_PL6a22Uu, VOf(Bf7));
    __hv_min_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_PMDBcCpI, VOf(Bf2));
    __hv_mul_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf7));
    __hv_varread_f(&sVarf_64JNwA7g, VOf(Bf3));
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
    __hv_cpole_f(&sCPole_n7cQAPZz, VIf(Bf3), VIf(ZERO), VIf(Bf8), VIf(Bf0), VOf(Bf0), VOf(Bf8));
    __hv_line_f(&sLine_4fGW4Rl4, VOf(Bf8));
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_g06e6UV7, VOf(Bf0));
    __hv_mul_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_1dPHSBtZ, VOf(Bf3));
    __hv_mul_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_oEshT29S, VOf(Bf6));
    __hv_varread_f(&sVarf_oLI7NMzi, VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_S86gdGYo, VOf(Bf8));
    __hv_min_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_F0mI3PpQ, VOf(Bf2));
    __hv_mul_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf8));
    __hv_varread_f(&sVarf_j9LbR2tE, VOf(Bf7));
    __hv_mul_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf8), VOf(Bf2));
    __hv_cos_f(VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf9));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_zero_f(VOf(Bf8));
    __hv_gt_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_sqrt_f(VIf(Bf6), VOf(Bf6));
    __hv_and_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_cpole_f(&sCPole_juTBbSj6, VIf(Bf7), VIf(ZERO), VIf(Bf9), VIf(Bf6), VOf(Bf6), VOf(Bf9));
    __hv_line_f(&sLine_WEN7GM0y, VOf(Bf9));
    __hv_mul_f(VIf(Bf6), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_QKUDPpfg, VOf(Bf6));
    __hv_mul_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_RvxbTGXs, VOf(Bf7));
    __hv_mul_f(VIf(Bf9), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_pKrefeJi, VOf(Bf3));
    __hv_varread_f(&sVarf_0m1s7dO5, VOf(Bf9));
    __hv_mul_f(VIf(Bf3), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf3), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf9), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_0SUSkOQl, VOf(Bf9));
    __hv_min_f(VIf(Bf3), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_h4talzz4, VOf(Bf2));
    __hv_mul_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf9));
    __hv_varread_f(&sVarf_t7ggMKPE, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf9), VOf(Bf2));
    __hv_cos_f(VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf10));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf9), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf9));
    __hv_gt_f(VIf(Bf3), VIf(Bf9), VOf(Bf9));
    __hv_sqrt_f(VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf9), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_cpole_f(&sCPole_y7EeGfVt, VIf(Bf8), VIf(ZERO), VIf(Bf10), VIf(Bf3), VOf(Bf3), VOf(Bf10));
    __hv_line_f(&sLine_6zh5HxuE, VOf(Bf10));
    __hv_mul_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_rorfebhF, VOf(Bf3));
    __hv_mul_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_b5iQuNIK, VOf(Bf8));
    __hv_mul_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_3mmqNi7X, VOf(Bf7));
    __hv_varread_f(&sVarf_T4O6AaoU, VOf(Bf10));
    __hv_mul_f(VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf7), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_MXAmaXjk, VOf(Bf10));
    __hv_min_f(VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_pTmLsG9W, VOf(Bf2));
    __hv_mul_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf10));
    __hv_varread_f(&sVarf_r6gcMkCC, VOf(Bf9));
    __hv_mul_f(VIf(Bf10), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf10), VOf(Bf2));
    __hv_cos_f(VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf2), VIf(Bf7), VOf(Bf11));
    __hv_mul_f(VIf(Bf7), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_zero_f(VOf(Bf10));
    __hv_gt_f(VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_sqrt_f(VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_cpole_f(&sCPole_pt8QzB2O, VIf(Bf9), VIf(ZERO), VIf(Bf11), VIf(Bf7), VOf(Bf7), VOf(Bf11));
    __hv_line_f(&sLine_0K2pCB1X, VOf(Bf11));
    __hv_mul_f(VIf(Bf7), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_jmYUSlFq, VOf(Bf7));
    __hv_mul_f(VIf(Bf11), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_tyVPjQOa, VOf(Bf9));
    __hv_mul_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_add_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_SMMeBA2A, VOf(Bf3));
    __hv_varread_f(&sVarf_GsNE0agh, VOf(Bf11));
    __hv_mul_f(VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf3), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_2yM7bBKM, VOf(Bf11));
    __hv_min_f(VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_GTKGR5Pq, VOf(Bf2));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf11));
    __hv_varread_f(&sVarf_3HWJfBDx, VOf(Bf10));
    __hv_mul_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf11), VOf(Bf2));
    __hv_cos_f(VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf12));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf11));
    __hv_gt_f(VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_sqrt_f(VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_cpole_f(&sCPole_cHoH0p2s, VIf(Bf10), VIf(ZERO), VIf(Bf12), VIf(Bf3), VOf(Bf3), VOf(Bf12));
    __hv_line_f(&sLine_YSjfGNsu, VOf(Bf12));
    __hv_mul_f(VIf(Bf3), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_b0P7pG6A, VOf(Bf3));
    __hv_mul_f(VIf(Bf12), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_0CNkPmw6, VOf(Bf10));
    __hv_mul_f(VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_line_f(&sLine_kcSVG95E, VOf(Bf7));
    __hv_varread_f(&sVarf_C1rLuKdQ, VOf(Bf12));
    __hv_mul_f(VIf(Bf7), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf7), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf12), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_BVzQQ1BJ, VOf(Bf12));
    __hv_min_f(VIf(Bf7), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_BVC2D0Fi, VOf(Bf2));
    __hv_mul_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf12));
    __hv_varread_f(&sVarf_NopE8FZx, VOf(Bf11));
    __hv_mul_f(VIf(Bf12), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf12), VOf(Bf2));
    __hv_cos_f(VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf2), VIf(Bf7), VOf(Bf13));
    __hv_mul_f(VIf(Bf7), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf12), VIf(Bf7), VOf(Bf7));
    __hv_zero_f(VOf(Bf12));
    __hv_gt_f(VIf(Bf7), VIf(Bf12), VOf(Bf12));
    __hv_sqrt_f(VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf12), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_cpole_f(&sCPole_n86J4fnh, VIf(Bf11), VIf(ZERO), VIf(Bf13), VIf(Bf7), VOf(Bf7), VOf(Bf13));
    __hv_line_f(&sLine_5tLEpWSd, VOf(Bf13));
    __hv_mul_f(VIf(Bf7), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_9LKgfK2u, VOf(Bf7));
    __hv_mul_f(VIf(Bf13), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_qY5ykWXD, VOf(Bf11));
    __hv_mul_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_add_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_Rhge9GwQ, VOf(Bf10));
    __hv_varread_f(&sVarf_qA2FrPzB, VOf(Bf13));
    __hv_mul_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf10), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf13), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_l9CsvHDh, VOf(Bf13));
    __hv_min_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_u3gJ9b0Z, VOf(Bf2));
    __hv_mul_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf13));
    __hv_varread_f(&sVarf_Gly6QayS, VOf(Bf12));
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
    __hv_cpole_f(&sCPole_cJnpVIJy, VIf(Bf12), VIf(ZERO), VIf(Bf14), VIf(Bf10), VOf(Bf10), VOf(Bf14));
    __hv_line_f(&sLine_2xs1wZui, VOf(Bf14));
    __hv_mul_f(VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_zQ0jcWar, VOf(Bf10));
    __hv_mul_f(VIf(Bf14), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_gINbVd4c, VOf(Bf12));
    __hv_mul_f(VIf(Bf14), VIf(Bf12), VOf(Bf12));
    __hv_add_f(VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_line_f(&sLine_IwEzDoxB, VOf(Bf7));
    __hv_varread_f(&sVarf_TrCd14Ta, VOf(Bf14));
    __hv_mul_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf7), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_tOQiltmR, VOf(Bf14));
    __hv_min_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_varread_f(&sVarf_C5D8CRZk, VOf(Bf2));
    __hv_mul_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf14));
    __hv_varread_f(&sVarf_eH3joDva, VOf(Bf13));
    __hv_mul_f(VIf(Bf14), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf14), VOf(Bf2));
    __hv_cos_f(VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf2), VIf(Bf7), VOf(Bf15));
    __hv_mul_f(VIf(Bf7), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_zero_f(VOf(Bf14));
    __hv_gt_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_sqrt_f(VIf(Bf7), VOf(Bf7));
    __hv_and_f(VIf(Bf14), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_cpole_f(&sCPole_bzWumf6W, VIf(Bf13), VIf(ZERO), VIf(Bf15), VIf(Bf7), VOf(Bf7), VOf(Bf15));
    __hv_line_f(&sLine_qzAqjKPx, VOf(Bf15));
    __hv_mul_f(VIf(Bf7), VIf(Bf15), VOf(Bf15));
    __hv_varread_f(&sVarf_aHemxl1r, VOf(Bf7));
    __hv_mul_f(VIf(Bf15), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_NLskUsnD, VOf(Bf13));
    __hv_mul_f(VIf(Bf15), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_line_f(&sLine_6LfLABwQ, VOf(Bf10));
    __hv_varread_f(&sVarf_f0B3ReIc, VOf(Bf15));
    __hv_mul_f(VIf(Bf10), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf10), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf15), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_Uh9GcIJe, VOf(Bf15));
    __hv_min_f(VIf(Bf10), VIf(Bf15), VOf(Bf15));
    __hv_varread_f(&sVarf_iu3xsT4S, VOf(Bf2));
    __hv_mul_f(VIf(Bf15), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf15));
    __hv_varread_f(&sVarf_95GzF5Xl, VOf(Bf14));
    __hv_mul_f(VIf(Bf15), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf15), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf15), VOf(Bf2));
    __hv_cos_f(VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf16));
    __hv_mul_f(VIf(Bf10), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf15), VIf(Bf10), VOf(Bf10));
    __hv_zero_f(VOf(Bf15));
    __hv_gt_f(VIf(Bf10), VIf(Bf15), VOf(Bf15));
    __hv_sqrt_f(VIf(Bf10), VOf(Bf10));
    __hv_and_f(VIf(Bf15), VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_cpole_f(&sCPole_yumcIxOY, VIf(Bf14), VIf(ZERO), VIf(Bf16), VIf(Bf10), VOf(Bf10), VOf(Bf16));
    __hv_line_f(&sLine_RSndFE1H, VOf(Bf16));
    __hv_mul_f(VIf(Bf10), VIf(Bf16), VOf(Bf16));
    __hv_varread_f(&sVarf_mlcpNwQZ, VOf(Bf10));
    __hv_mul_f(VIf(Bf16), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_TdpwZeXU, VOf(Bf14));
    __hv_mul_f(VIf(Bf16), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf13), VIf(Bf10), VOf(Bf10));
    __hv_line_f(&sLine_kgyXBK2D, VOf(Bf13));
    __hv_varread_f(&sVarf_iEk0hrXf, VOf(Bf16));
    __hv_mul_f(VIf(Bf13), VIf(Bf16), VOf(Bf16));
    __hv_var_k_f(VOf(Bf13), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf16), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_Wv3BZNAe, VOf(Bf16));
    __hv_min_f(VIf(Bf13), VIf(Bf16), VOf(Bf16));
    __hv_varread_f(&sVarf_xAFzs9Yf, VOf(Bf2));
    __hv_mul_f(VIf(Bf16), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf16));
    __hv_varread_f(&sVarf_0bHchgfX, VOf(Bf15));
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
    __hv_cpole_f(&sCPole_7II1UahA, VIf(Bf15), VIf(ZERO), VIf(Bf17), VIf(Bf13), VOf(Bf13), VOf(Bf17));
    __hv_line_f(&sLine_Rw8c7dNR, VOf(Bf17));
    __hv_mul_f(VIf(Bf13), VIf(Bf17), VOf(Bf17));
    __hv_varread_f(&sVarf_rW592bKb, VOf(Bf13));
    __hv_mul_f(VIf(Bf17), VIf(Bf13), VOf(Bf13));
    __hv_varread_f(&sVarf_kQrkPrSs, VOf(Bf15));
    __hv_mul_f(VIf(Bf17), VIf(Bf15), VOf(Bf15));
    __hv_add_f(VIf(Bf10), VIf(Bf15), VOf(Bf15));
    __hv_line_f(&sLine_E9WKDnsk, VOf(Bf10));
    __hv_varread_f(&sVarf_ix3AAsE4, VOf(Bf17));
    __hv_mul_f(VIf(Bf10), VIf(Bf17), VOf(Bf17));
    __hv_var_k_f(VOf(Bf10), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf17), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_NAE5m0bF, VOf(Bf17));
    __hv_min_f(VIf(Bf10), VIf(Bf17), VOf(Bf17));
    __hv_varread_f(&sVarf_L0eLxqJA, VOf(Bf2));
    __hv_mul_f(VIf(Bf17), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf17));
    __hv_varread_f(&sVarf_0zxaz0kF, VOf(Bf16));
    __hv_mul_f(VIf(Bf17), VIf(Bf16), VOf(Bf16));
    __hv_var_k_f(VOf(Bf17), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf17), VOf(Bf2));
    __hv_cos_f(VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf18));
    __hv_mul_f(VIf(Bf10), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf17), VIf(Bf10), VOf(Bf10));
    __hv_zero_f(VOf(Bf17));
    __hv_gt_f(VIf(Bf10), VIf(Bf17), VOf(Bf17));
    __hv_sqrt_f(VIf(Bf10), VOf(Bf10));
    __hv_and_f(VIf(Bf17), VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_cpole_f(&sCPole_D50xhxj1, VIf(Bf16), VIf(ZERO), VIf(Bf18), VIf(Bf10), VOf(Bf10), VOf(Bf18));
    __hv_line_f(&sLine_KEXb0VGf, VOf(Bf18));
    __hv_mul_f(VIf(Bf10), VIf(Bf18), VOf(Bf18));
    __hv_varread_f(&sVarf_gcOCyLEW, VOf(Bf10));
    __hv_mul_f(VIf(Bf18), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_vxqyti7e, VOf(Bf16));
    __hv_mul_f(VIf(Bf18), VIf(Bf16), VOf(Bf16));
    __hv_add_f(VIf(Bf15), VIf(Bf16), VOf(Bf16));
    __hv_line_f(&sLine_BN1zJNh8, VOf(Bf15));
    __hv_varread_f(&sVarf_csNnFR4v, VOf(Bf18));
    __hv_mul_f(VIf(Bf15), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf15), 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f, 1e-05f);
    __hv_max_f(VIf(Bf18), VIf(Bf15), VOf(Bf15));
    __hv_varread_f(&sVarf_j4Zfg35u, VOf(Bf18));
    __hv_min_f(VIf(Bf15), VIf(Bf18), VOf(Bf18));
    __hv_varread_f(&sVarf_4gav6I7Z, VOf(Bf2));
    __hv_mul_f(VIf(Bf18), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf1));
    __hv_varread_f(&sVarf_UQupxKN3, VOf(Bf18));
    __hv_mul_f(VIf(Bf1), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf2));
    __hv_cos_f(VIf(Bf15), VOf(Bf15));
    __hv_mul_f(VIf(Bf2), VIf(Bf15), VOf(Bf17));
    __hv_mul_f(VIf(Bf15), VIf(Bf15), VOf(Bf15));
    __hv_sub_f(VIf(Bf1), VIf(Bf15), VOf(Bf15));
    __hv_zero_f(VOf(Bf1));
    __hv_gt_f(VIf(Bf15), VIf(Bf1), VOf(Bf1));
    __hv_sqrt_f(VIf(Bf15), VOf(Bf15));
    __hv_and_f(VIf(Bf1), VIf(Bf15), VOf(Bf15));
    __hv_mul_f(VIf(Bf2), VIf(Bf15), VOf(Bf15));
    __hv_cpole_f(&sCPole_a0kQKkit, VIf(Bf18), VIf(ZERO), VIf(Bf17), VIf(Bf15), VOf(Bf15), VOf(Bf17));
    __hv_line_f(&sLine_IDZqqBZE, VOf(Bf17));
    __hv_mul_f(VIf(Bf15), VIf(Bf17), VOf(Bf17));
    __hv_varread_f(&sVarf_CGUicVyr, VOf(Bf15));
    __hv_mul_f(VIf(Bf17), VIf(Bf15), VOf(Bf15));
    __hv_varread_f(&sVarf_dArZNn9W, VOf(Bf18));
    __hv_mul_f(VIf(Bf17), VIf(Bf18), VOf(Bf18));
    __hv_add_f(VIf(Bf16), VIf(Bf15), VOf(Bf15));
    __hv_varread_f(&sVarf_qsUFEFeQ, VOf(Bf16));
    __hv_mul_f(VIf(Bf15), VIf(Bf16), VOf(Bf16));
    __hv_varread_f(&sVarf_BWLNRfXp, VOf(Bf15));
    __hv_rpole_f(&sRPole_CGLC79PG, VIf(Bf16), VIf(Bf15), VOf(Bf15));
    __hv_add_f(VIf(Bf15), VIf(O0), VOf(O0));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_add_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_add_f(VIf(Bf9), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_add_f(VIf(Bf11), VIf(Bf12), VOf(Bf12));
    __hv_add_f(VIf(Bf12), VIf(Bf7), VOf(Bf7));
    __hv_add_f(VIf(Bf7), VIf(Bf14), VOf(Bf14));
    __hv_add_f(VIf(Bf14), VIf(Bf13), VOf(Bf13));
    __hv_add_f(VIf(Bf13), VIf(Bf10), VOf(Bf10));
    __hv_add_f(VIf(Bf10), VIf(Bf18), VOf(Bf18));
    __hv_varread_f(&sVarf_3WePka5C, VOf(Bf10));
    __hv_mul_f(VIf(Bf18), VIf(Bf10), VOf(Bf10));
    __hv_varread_f(&sVarf_flrrpaiI, VOf(Bf18));
    __hv_rpole_f(&sRPole_ZJRYaauW, VIf(Bf10), VIf(Bf18), VOf(Bf18));
    __hv_add_f(VIf(Bf18), VIf(O1), VOf(O1));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed
}

int Heavy_heavy::processInline(float *inputBuffers, float *outputBuffers, int n4) {
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

int Heavy_heavy::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
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
