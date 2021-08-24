/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_g_leg_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[40] = {36, 1, 0, 36, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};
static const casadi_int casadi_s1[17] = {13, 1, 0, 13, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static const casadi_int casadi_s2[32] = {28, 1, 0, 28, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27};

/* eval_g_leg:(w[36],p[13])->(g[28]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][24] : 0;
  a1=arg[0]? arg[0][0] : 0;
  a0=(a0-a1);
  a1=arg[1]? arg[1][0] : 0;
  a0=(a0/a1);
  a2=arg[0]? arg[0][6] : 0;
  a3=arg[0]? arg[0][30] : 0;
  a4=(a2+a3);
  a5=2.;
  a4=(a4/a5);
  a0=(a0-a4);
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0]? arg[0][25] : 0;
  a4=arg[0]? arg[0][1] : 0;
  a0=(a0-a4);
  a0=(a0/a1);
  a4=arg[0]? arg[0][7] : 0;
  a6=arg[0]? arg[0][31] : 0;
  a7=(a4+a6);
  a7=(a7/a5);
  a0=(a0-a7);
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0]? arg[0][26] : 0;
  a7=arg[0]? arg[0][2] : 0;
  a0=(a0-a7);
  a0=(a0/a1);
  a7=arg[0]? arg[0][8] : 0;
  a8=arg[0]? arg[0][32] : 0;
  a9=(a7+a8);
  a9=(a9/a5);
  a0=(a0-a9);
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[0]? arg[0][27] : 0;
  a9=arg[0]? arg[0][3] : 0;
  a10=(a0-a9);
  a10=(a10/a1);
  a11=arg[0]? arg[0][9] : 0;
  a12=arg[0]? arg[0][33] : 0;
  a13=(a11+a12);
  a13=(a13/a5);
  a14=arg[0]? arg[0][4] : 0;
  a15=arg[0]? arg[0][28] : 0;
  a16=(a14+a15);
  a16=(a16/a5);
  a17=cos(a16);
  a18=(a13*a17);
  a19=arg[0]? arg[0][11] : 0;
  a20=arg[0]? arg[0][35] : 0;
  a21=(a19+a20);
  a21=(a21/a5);
  a9=(a9+a0);
  a9=(a9/a5);
  a0=cos(a9);
  a22=(a21*a0);
  a16=sin(a16);
  a22=(a22*a16);
  a18=(a18+a22);
  a22=arg[0]? arg[0][10] : 0;
  a23=arg[0]? arg[0][34] : 0;
  a24=(a22+a23);
  a24=(a24/a5);
  a9=sin(a9);
  a25=(a24*a9);
  a25=(a25*a16);
  a18=(a18+a25);
  a18=(a18/a17);
  a10=(a10-a18);
  if (res[0]!=0) res[0][3]=a10;
  a15=(a15-a14);
  a15=(a15/a1);
  a14=(a24*a0);
  a10=(a21*a9);
  a14=(a14-a10);
  a15=(a15-a14);
  if (res[0]!=0) res[0][4]=a15;
  a15=arg[0]? arg[0][29] : 0;
  a14=arg[0]? arg[0][5] : 0;
  a10=(a15-a14);
  a10=(a10/a1);
  a18=(a21*a0);
  a25=(a24*a9);
  a18=(a18+a25);
  a18=(a18/a17);
  a10=(a10-a18);
  if (res[0]!=0) res[0][5]=a10;
  a10=1.1510000000000000e+001;
  a3=(a3-a2);
  a3=(a10*a3);
  a3=(a3/a1);
  a2=arg[0]? arg[0][12] : 0;
  a18=arg[0]? arg[0][15] : 0;
  a25=(a2+a18);
  a26=arg[0]? arg[0][18] : 0;
  a25=(a25+a26);
  a27=arg[0]? arg[0][21] : 0;
  a25=(a25+a27);
  a3=(a3-a25);
  if (res[0]!=0) res[0][6]=a3;
  a6=(a6-a4);
  a6=(a10*a6);
  a6=(a6/a1);
  a4=arg[0]? arg[0][13] : 0;
  a3=arg[0]? arg[0][16] : 0;
  a25=(a4+a3);
  a28=arg[0]? arg[0][19] : 0;
  a25=(a25+a28);
  a29=arg[0]? arg[0][22] : 0;
  a25=(a25+a29);
  a6=(a6-a25);
  if (res[0]!=0) res[0][7]=a6;
  a8=(a8-a7);
  a10=(a10*a8);
  a10=(a10/a1);
  a8=1.1291310000000000e+002;
  a10=(a10+a8);
  a8=arg[0]? arg[0][14] : 0;
  a7=arg[0]? arg[0][17] : 0;
  a6=(a8+a7);
  a25=arg[0]? arg[0][20] : 0;
  a6=(a6+a25);
  a30=arg[0]? arg[0][23] : 0;
  a6=(a6+a30);
  a10=(a10-a6);
  if (res[0]!=0) res[0][8]=a10;
  a10=1.0531904000000000e-001;
  a12=(a12-a11);
  a10=(a10*a12);
  a10=(a10/a1);
  a11=5.5319039999999993e-002;
  a6=(a24*a21);
  a11=(a11*a6);
  a10=(a10+a11);
  a11=arg[1]? arg[1][1] : 0;
  a6=(a11*a16);
  a31=arg[1]? arg[1][3] : 0;
  a32=(a31*a17);
  a14=(a14+a15);
  a14=(a14/a5);
  a5=cos(a14);
  a32=(a32*a5);
  a6=(a6+a32);
  a6=(a6*a4);
  a32=arg[1]? arg[1][2] : 0;
  a15=(a32*a16);
  a33=(a31*a17);
  a14=sin(a14);
  a33=(a33*a14);
  a15=(a15+a33);
  a15=(a15*a2);
  a6=(a6-a15);
  a15=(a32*a5);
  a33=(a11*a14);
  a15=(a15-a33);
  a15=(a17*a15);
  a15=(a15*a8);
  a6=(a6-a15);
  a15=arg[1]? arg[1][5] : 0;
  a33=(a15*a16);
  a34=arg[1]? arg[1][6] : 0;
  a35=(a34*a17);
  a35=(a35*a14);
  a33=(a33+a35);
  a33=(a33*a18);
  a6=(a6-a33);
  a33=arg[1]? arg[1][4] : 0;
  a35=(a33*a16);
  a36=(a34*a17);
  a36=(a36*a5);
  a35=(a35+a36);
  a35=(a35*a3);
  a6=(a6+a35);
  a35=(a15*a5);
  a36=(a33*a14);
  a35=(a35-a36);
  a35=(a17*a35);
  a35=(a35*a7);
  a6=(a6-a35);
  a35=arg[1]? arg[1][8] : 0;
  a36=(a35*a16);
  a37=arg[1]? arg[1][9] : 0;
  a38=(a37*a17);
  a38=(a38*a14);
  a36=(a36+a38);
  a36=(a36*a26);
  a6=(a6-a36);
  a36=arg[1]? arg[1][7] : 0;
  a38=(a36*a16);
  a39=(a37*a17);
  a39=(a39*a5);
  a38=(a38+a39);
  a38=(a38*a28);
  a6=(a6+a38);
  a38=(a35*a5);
  a39=(a36*a14);
  a38=(a38-a39);
  a38=(a17*a38);
  a38=(a38*a25);
  a6=(a6-a38);
  a38=arg[1]? arg[1][11] : 0;
  a39=(a38*a16);
  a40=arg[1]? arg[1][12] : 0;
  a41=(a40*a17);
  a41=(a41*a14);
  a39=(a39+a41);
  a39=(a39*a27);
  a6=(a6-a39);
  a39=arg[1]? arg[1][10] : 0;
  a41=(a39*a16);
  a42=(a40*a17);
  a42=(a42*a5);
  a41=(a41+a42);
  a41=(a41*a29);
  a6=(a6+a41);
  a41=(a38*a5);
  a42=(a39*a14);
  a41=(a41-a42);
  a41=(a17*a41);
  a41=(a41*a30);
  a6=(a6-a41);
  a10=(a10-a6);
  if (res[0]!=0) res[0][9]=a10;
  a10=3.9497933439999999e-001;
  a6=(a10*a0);
  a23=(a23-a22);
  a6=(a6*a23);
  a22=-4.5029837439999998e-001;
  a22=(a22*a9);
  a20=(a20-a19);
  a22=(a22*a20);
  a6=(a6+a22);
  a6=(a6/a1);
  a22=-2.7755575615628910e-017;
  a19=12429190414834890.;
  a41=(a21*a0);
  a19=(a19*a41);
  a41=10436111951390940.;
  a42=(a24*a9);
  a41=(a41*a42);
  a19=(a19+a41);
  a19=(a13*a19);
  a22=(a22*a19);
  a6=(a6+a22);
  a22=(a11*a5);
  a19=(a32*a14);
  a22=(a22+a19);
  a22=(a22*a8);
  a19=(a31*a5);
  a19=(a19*a2);
  a31=(a31*a14);
  a31=(a31*a4);
  a19=(a19+a31);
  a22=(a22-a19);
  a19=(a34*a5);
  a19=(a19*a18);
  a22=(a22-a19);
  a34=(a34*a14);
  a34=(a34*a3);
  a22=(a22-a34);
  a34=(a33*a5);
  a19=(a15*a14);
  a34=(a34+a19);
  a34=(a34*a7);
  a22=(a22+a34);
  a34=(a37*a5);
  a34=(a34*a26);
  a22=(a22-a34);
  a37=(a37*a14);
  a37=(a37*a28);
  a22=(a22-a37);
  a37=(a36*a5);
  a34=(a35*a14);
  a37=(a37+a34);
  a37=(a37*a25);
  a22=(a22+a37);
  a37=(a40*a5);
  a37=(a37*a27);
  a22=(a22-a37);
  a40=(a40*a14);
  a40=(a40*a29);
  a22=(a22-a40);
  a5=(a39*a5);
  a14=(a38*a14);
  a5=(a5+a14);
  a5=(a5*a30);
  a22=(a22+a5);
  a6=(a6-a22);
  if (res[0]!=0) res[0][10]=a6;
  a6=-1.0531904000000000e-001;
  a6=(a6*a16);
  a6=(a6*a12);
  a12=(a17*a9);
  a10=(a10*a12);
  a10=(a10*a23);
  a6=(a6+a10);
  a10=4.5029837439999998e-001;
  a23=(a0*a17);
  a10=(a10*a23);
  a10=(a10*a20);
  a6=(a6+a10);
  a6=(a6/a1);
  a1=-5.5319039999999993e-002;
  a10=(a24*a21);
  a10=(a10*a16);
  a1=(a1*a10);
  a10=2.8966029440000002e-001;
  a24=(a13*a24);
  a24=(a24*a0);
  a24=(a24*a17);
  a10=(a10*a24);
  a1=(a1+a10);
  a10=3.4497933440000000e-001;
  a13=(a13*a21);
  a13=(a13*a17);
  a13=(a13*a9);
  a10=(a10*a13);
  a1=(a1-a10);
  a6=(a6+a1);
  a32=(a32*a2);
  a11=(a11*a4);
  a32=(a32-a11);
  a15=(a15*a18);
  a32=(a32+a15);
  a33=(a33*a3);
  a32=(a32-a33);
  a35=(a35*a26);
  a32=(a32+a35);
  a36=(a36*a28);
  a32=(a32-a36);
  a38=(a38*a27);
  a32=(a32+a38);
  a39=(a39*a29);
  a32=(a32-a39);
  a6=(a6-a32);
  if (res[0]!=0) res[0][11]=a6;
  a6=-5.0000000000000000e-001;
  a32=(a6*a8);
  a32=(a2+a32);
  if (res[0]!=0) res[0][12]=a32;
  a32=(a6*a8);
  a32=(a32-a2);
  if (res[0]!=0) res[0][13]=a32;
  a32=(a6*a8);
  a32=(a4+a32);
  if (res[0]!=0) res[0][14]=a32;
  a8=(a6*a8);
  a8=(a8-a4);
  if (res[0]!=0) res[0][15]=a8;
  a8=(a6*a7);
  a8=(a18+a8);
  if (res[0]!=0) res[0][16]=a8;
  a8=(a6*a7);
  a8=(a8-a18);
  if (res[0]!=0) res[0][17]=a8;
  a8=(a6*a7);
  a8=(a3+a8);
  if (res[0]!=0) res[0][18]=a8;
  a7=(a6*a7);
  a7=(a7-a3);
  if (res[0]!=0) res[0][19]=a7;
  a7=(a6*a25);
  a7=(a26+a7);
  if (res[0]!=0) res[0][20]=a7;
  a7=(a6*a25);
  a7=(a7-a26);
  if (res[0]!=0) res[0][21]=a7;
  a7=(a6*a25);
  a7=(a28+a7);
  if (res[0]!=0) res[0][22]=a7;
  a25=(a6*a25);
  a25=(a25-a28);
  if (res[0]!=0) res[0][23]=a25;
  a25=(a6*a30);
  a25=(a27+a25);
  if (res[0]!=0) res[0][24]=a25;
  a25=(a6*a30);
  a25=(a25-a27);
  if (res[0]!=0) res[0][25]=a25;
  a25=(a6*a30);
  a25=(a29+a25);
  if (res[0]!=0) res[0][26]=a25;
  a6=(a6*a30);
  a6=(a6-a29);
  if (res[0]!=0) res[0][27]=a6;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_g_leg_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_name_out(casadi_int i){
  switch (i) {
    case 0: return "g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


