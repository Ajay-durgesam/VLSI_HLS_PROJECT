/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;
/* Structure forward decls */
typedef struct l_struct_OC_k2c_tensor l_struct_OC_k2c_tensor;

/* Structure contents */
struct l_struct_OC_k2c_tensor {
  float field0[26000];
  unsigned long long field1;
  unsigned long long field2;
  signed long long field3[5];
};


/* External Global Variable Declarations */
extern float test1_dense_69_input_input_array[399];
extern float keras_dense_71_test1_array[1];
extern float c_dense_71_test1_array[1];
extern float test2_dense_69_input_input_array[399];
extern float keras_dense_71_test2_array[1];
extern float c_dense_71_test2_array[1];
extern float test3_dense_69_input_input_array[399];
extern float keras_dense_71_test3_array[1];
extern float c_dense_71_test3_array[1];
extern float test4_dense_69_input_input_array[399];
extern float keras_dense_71_test4_array[1];
extern float c_dense_71_test4_array[1];
extern float test5_dense_69_input_input_array[399];
extern float keras_dense_71_test5_array[1];
extern float c_dense_71_test5_array[1];
extern float test6_dense_69_input_input_array[399];
extern float keras_dense_71_test6_array[1];
extern float c_dense_71_test6_array[1];
extern float test7_dense_69_input_input_array[399];
extern float keras_dense_71_test7_array[1];
extern float c_dense_71_test7_array[1];
extern float test8_dense_69_input_input_array[399];
extern float keras_dense_71_test8_array[1];
extern float c_dense_71_test8_array[1];
extern float test9_dense_69_input_input_array[399];
extern float keras_dense_71_test9_array[1];
extern float c_dense_71_test9_array[1];
extern float test10_dense_69_input_input_array[399];
extern float keras_dense_71_test10_array[1];
extern float c_dense_71_test10_array[1];
extern l_struct_OC_k2c_tensor test1_dense_69_input_input;
extern l_struct_OC_k2c_tensor keras_dense_71_test1;
extern l_struct_OC_k2c_tensor c_dense_71_test1;
extern l_struct_OC_k2c_tensor test2_dense_69_input_input;
extern l_struct_OC_k2c_tensor keras_dense_71_test2;
extern l_struct_OC_k2c_tensor c_dense_71_test2;
extern l_struct_OC_k2c_tensor test3_dense_69_input_input;
extern l_struct_OC_k2c_tensor keras_dense_71_test3;
extern l_struct_OC_k2c_tensor c_dense_71_test3;
extern l_struct_OC_k2c_tensor test4_dense_69_input_input;
extern l_struct_OC_k2c_tensor keras_dense_71_test4;
extern l_struct_OC_k2c_tensor c_dense_71_test4;
extern l_struct_OC_k2c_tensor test5_dense_69_input_input;
extern l_struct_OC_k2c_tensor keras_dense_71_test5;
extern l_struct_OC_k2c_tensor c_dense_71_test5;
extern l_struct_OC_k2c_tensor test6_dense_69_input_input;
extern l_struct_OC_k2c_tensor keras_dense_71_test6;
extern l_struct_OC_k2c_tensor c_dense_71_test6;
extern l_struct_OC_k2c_tensor test7_dense_69_input_input;
extern l_struct_OC_k2c_tensor keras_dense_71_test7;
extern l_struct_OC_k2c_tensor c_dense_71_test7;
extern l_struct_OC_k2c_tensor test8_dense_69_input_input;
extern l_struct_OC_k2c_tensor keras_dense_71_test8;
extern l_struct_OC_k2c_tensor c_dense_71_test8;
extern l_struct_OC_k2c_tensor test9_dense_69_input_input;
extern l_struct_OC_k2c_tensor keras_dense_71_test9;
extern l_struct_OC_k2c_tensor c_dense_71_test9;
extern l_struct_OC_k2c_tensor test10_dense_69_input_input;
extern l_struct_OC_k2c_tensor keras_dense_71_test10;
extern l_struct_OC_k2c_tensor c_dense_71_test10;

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void test_array_initialize(void);
signed int main(void);
void WebModel(l_struct_OC_k2c_tensor *, l_struct_OC_k2c_tensor *);
float maxabs(l_struct_OC_k2c_tensor *llvm_cbe_tensor1, l_struct_OC_k2c_tensor *llvm_cbe_tensor2);
float fabsf(float );


/* Global Variable Definitions and Initialization */
float c_dense_71_test1_array[1];
float test2_dense_69_input_input_array[399] = { 0x1.a51a1p-1, 0x1.a716a6p0, 0x1.825a08p0, 0x1.1c5dacp-1, 0x1.3744acp0, 0x1.63e2dep0, 0x1.df9f98p0, -0x1.4acfdp-1, 0x1.8b787ep0, 0x1.e30ecap0, -0x1.cc9606p0, -0x1.2b466ap0, -0x1.9f7738p-1, 0x1.e165a6p0, 0x1.2652e4p-2, 0x1.3be41ep0, 0x1.8c36p0, -0x1.97382p0, -0x1.6f693p-1, -0x1.d0c9a4p0, -0x1.6ab45ep-1, -0x1.b8e02cp0, 0x1.a7d1c8p0, 0x1.0b5f46p0, 0x1.38154ep0, 0x1.ece608p-2, 0x1.ccdcaap0, -0x1.ebb60ap0, 0x1.33d86ep-2, -0x1.7740fap0, 0x1.717c92p0, 0x1.576eacp0, 0x1.38d57p0, 0x1.384c8cp-4, 0x1.331c6ap-1, 0x1.a9d9fap-2, -0x1.dd58dep-1, -0x1.b6cca4p-3, -0x1.bbbd54p0, -0x1.907702p0, 0x1.95dd48p0, 0x1.91653ep-5, 0x1.b2347cp-1, -0x1.5e3c2p-2, 0x1.d152a2p-2, -0x1.00ff4p-1, 0x1.9ebc4ep-2, -0x1.df40a2p-2, -0x1.c5d2e8p0, 0x1.3b504cp0, 0x1.53c302p-5, -0x1.1f780cp0, -0x1.7b1d8ap-3, -0x1.419e3ep-1, 0x1.00e964p0, 0x1.ee0c12p-3, 0x1.c7e6c2p-1, -0x1.b86474p0, 0x1.a85c4cp-1, -0x1.f1fda6p-1, 0x1.6d094p-2, -0x1.cf4e2ep-1, 0x1.b52e34p0, 0x1.3d9d7ep0, 0x1.9745b8p-1, 0x1.150bf6p0, -0x1.a85b7ep0, -0x1.24e512p-1, 0x1.f2c4dcp0, -0x1.8064f6p0, 0x1.835912p0, -0x1.3b435p0, -0x1.0db432p-2, -0x1.7959eep-1, 0x1.67c8dp-3, -0x1.3f6822p0, 0x1.712d24p-1, 0x1.a4c6a6p-1, -0x1.48c588p-1, 0x1.c5ac62p0, 0x1.d5ecc6p0, -0x1.b578ccp0, -0x1.012c7ep0, 0x1.384912p-1, -0x1.77c7a8p0, -0x1.6ad668p0, -0x1.632284p-1, -0x1.a0d39ep0, -0x1.ade40cp0, 0x1.5f6d0ep-1, 0x1.996784p-1, -0x1.66c386p0, 0x1.3c599ap-1, -0x1.a140cap0, -0x1.abf2eap0, -0x1.1d9434p-4, -0x1.308378p-1, -0x1.ad1d14p0, 0x1.8a050ep0, 0x1.0ff82ep-1, 0x1.2026f6p-2, -0x1.4cfabep-2, -0x1.9a12fap-6, 0x1.baa33p0, 0x1.029782p0, 0x1.dc555p-1, 0x1.e77602p-1, 0x1.35db66p0, -0x1.0cb6eap0, 0x1.87fe7p-5, 0x1.567c0ep0, 0x1.15c42p-1, 0x1.33e8ep-1, 0x1.4498aap0, -0x1.0bbd6p0, -0x1.82df7ap-1, 0x1.8747a2p0, 0x1.d7adp0, -0x1.3c2f44p0, 0x1.549e3cp-2, -0x1.44fed2p-2, -0x1.281518p-5, -0x1.05f126p-2, 0x1.66ac04p0, -0x1.7b3584p0, 0x1.9408c2p0, 0x1.e6ed38p-1, -0x1.10df88p-2, 0x1.ee6f74p-1, -0x1.cc299ep-1, 0x1.659444p-3, -0x1.dc9378p0, 0x1.fee8aap-5, 0x1.2819cep-1, 0x1.1b7c1p0, 0x1.212994p0, 0x1.caf718p-1, 0x1.191e8ep-1, -0x1.ae9584p0, -0x1.8a153ap-1, -0x1.975a9ap0, 0x1.f6f53ep0, -0x1.541ef8p-2, -0x1.1e4b0ap-1, 0x1.4ab47ep0, -0x1.7992acp-1, 0x1.c7328ep0, 0x1.66adeep-2, -0x1.45489ap0, 0x1.2354dp0, -0x1.537918p-1, -0x1.904c7ep-2, -0x1.f88326p-1, -0x1.743742p-2, 0x1.f59006p-2, -0x1.fbeaf4p-2, 0x1.a0fce8p0, 0x1.1730f2p-1, -0x1.8e790ep0, -0x1.7a4d6p-3, -0x1.010868p-3, -0x1.4f5e8p0, 0x1.a5772ap-2, 0x1.3d6c26p0, -0x1.4551e4p-1, 0x1.f5e024p-3, -0x1.4928d6p-1, 0x1.49b1fcp0, -0x1.3b7a6cp-1, 0x1.3de534p0, 0x1.c8bfe6p0, 0x1.2f9ab6p0, 0x1.9143dap-2, -0x1.faacccp-2, -0x1.2b6e46p-5, 0x1.0e7b8cp-2, 0x1.30901p-1, -0x1.5c86e8p0, -0x1.e8996p-1, -0x1.d1f616p0, -0x1.217a7p-3, -0x1.58edcap0, -0x1.d9110ap-1, -0x1.b0e4bap-3, -0x1.674d84p-1, -0x1.fd618ap-1, 0x1.e3ee24p-3, 0x1.bd09e2p0, -0x1.e19eacp-2, -0x1.df0308p0, 0x1.8498c2p0, -0x1.dbf3b2p-1, -0x1.3f26b6p-3, 0x1.056184p-1, 0x1.3dc3fp0, 0x1.e98562p-2, -0x1.cb767p-4, -0x1.e9fca4p-2, -0x1.de9b82p0, -0x1.acc062p-3, -0x1.0f4d6p-1, 0x1.a876a8p-1, -0x1.607606p0, 0x1.7bedfep0, -0x1.66ec68p0, -0x1.b7f2b8p0, -0x1.4832p-2, -0x1.97b086p0, 0x1.23d9eep0, -0x1.da24b4p-1, -0x1.67b6bp-2, -0x1.dd71acp-2, 0x1.31e854p0, 0x1.05121ap-1, 0x1.641784p0, -0x1.02a578p-1, -0x1.aa13d8p-5, -0x1.7a6466p-1, 0x1.7bfb92p0, 0x1.c9bb8ap-3, 0x1.83cde8p-4, -0x1.2c3e8cp0, -0x1.e2de6p0, 0x1.97f836p-5, 0x1.007b4ap-2, 0x1.57b154p0, -0x1.8e6574p-3, -0x1.a381cep0, 0x1.4c82eap-1, -0x1.06510cp-2, -0x1.985d52p-5, 0x1.4ef83ap0, 0x1.a6f1f6p0, -0x1.3541b2p-1, 0x1.1b1e3cp0, 0x1.55aecp0, -0x1.5a43acp0, -0x1.31efd4p0, -0x1.97e796p0, 0x1.9d53d6p0, 0x1.a7ca7ap-1, -0x1.152c52p-3, 0x1.151e6ep0, -0x1.cb0646p0, -0x1.c15424p-1, 0x1.62aecap0, -0x1.f041fp-1, 0x1.1c7bf2p0, -0x1.90f408p-1, -0x1.3e09dcp0, 0x1.81c5e8p-4, -0x1.d1f3f2p0, -0x1.c8b89p-1, 0x1.3c69b6p0, 0x1.a1cc1cp0, -0x1.b8807cp-2, -0x1.cf19f6p-1, -0x1.30874p-1, 0x1.f6aa06p0, 0x1.dc03cep0, -0x1.b501e2p-3, 0x1.e85f46p0, 0x1.a22b5p0, -0x1.9d6732p-2, -0x1.ce789cp0, 0x1.1978e2p-2, -0x1.905062p-1, -0x1.b7edb2p-1, 0x1.17c8d4p-4, -0x1.4efeap-1, 0x1.d9c052p-2, 0x1.5cbcfcp0, -0x1.815ffcp0, 0x1.0740d8p0, -0x1.8766ep-1, -0x1.f8dbe8p-2, 0x1.fb295ep-1, -0x1.f2d27p0, 0x1.c49c52p-1, 0x1.79a83ap-2, -0x1.3e6bc8p0, -0x1.93eee8p-1, -0x1.04f39ep-3, 0x1.c24beep-4, 0x1.1e5acap-1, 0x1.43415cp0, 0x1.a2234cp0, 0x1.ee1b28p0, -0x1.b3ea2ep-2, -0x1.17b182p-1, 0x1.94ac9cp-4, 0x1.4fb3dep-1, 0x1.e1c85cp0, 0x1.81352ep0, -0x1.821edep0, -0x1.293918p-1, -0x1.e95584p-1, -0x1.ed6796p-1, -0x1.1c6e16p0, -0x1.467aaep-2, -0x1.acbf02p-2, -0x1.b265ep0, -0x1.18fd66p-1, -0x1.3b542ap0, 0x1.b2c35ep0, -0x1.e2e8b2p0, 0x1.075e7ep0, -0x1.2607d6p0, 0x1.9ef428p0, 0x1.639026p0, -0x1.1292a4p-1, -0x1.a0681cp-1, -0x1.63d202p-1, 0x1.051adep0, -0x1.5bd8d2p-1, -0x1.5aa8b8p0, -0x1.c601c2p-1, 0x1.e2b0b2p-2, -0x1.a8c5p-1, 0x1.17921ep-3, -0x1.cbdddcp0, 0x1.310b5ap0, -0x1.99692ap-2, -0x1.f5b6f6p-1, -0x1.aeb8c6p-3, 0x1.416a42p-2, -0x1.0c6638p0, 0x1.62e29cp-6, 0x1.63b5aep0, -0x1.c160cap-5, -0x1.ea3064p-4, 0x1.d96858p0, 0x1.679fe8p0, -0x1.79ac24p0, -0x1.0a747p0, -0x1.c67cp-1, 0x1.ffa824p0, -0x1.10fc5ep-1, -0x1.cda762p0, 0x1.1a2288p-1, -0x1.a151f2p0, 0x1.d8ddc4p-3, 0x1.05d88cp0, -0x1.4abd0cp0, 0x1.f085a6p-3, 0x1.bc59c2p0, 0x1.5291a6p-4, 0x1.0bcc68p0, -0x1.04751cp-1, -0x1.f9d78p0, 0x1.0714bap0, 0x1.81ceeap-1, 0x1.74fb48p-1, -0x1.2af116p-1, 0x1.eb7188p0, 0x1.0b6042p0, -0x1.0a67aap-1, -0x1.1406f8p0, -0x1.d821acp-1, 0x1.10793cp0, 0x1.77c8b6p-2, -0x1.bfb55ap0, -0x1.7f1c52p-1, -0x1.3f05c4p0, -0x1.35db3ep-1, 0x1.6acbdp0, 0x1.c9cc2ep-3, 0x1.167754p0, 0x1.685d1cp-1, -0x1.f1e0aep0, 0x1.626baap0, 0x1.02c574p0, -0x1.7f7e4cp0, 0x1.87135ep0, -0x1.130268p0, -0x1.6d5bc2p-1, -0x1.047084p-2, -0x1.2160d6p0, -0x1.6dcc8ap0, -0x1.d96958p-3, 0x1.282dbcp-5, 0x1.25d05ep-7, -0x1.536c4p0, 0x1.fa8a6cp-2, -0x1.b5f1b4p0, -0x1.3e458ap-1, -0x1.f0f1f4p-2, 0x1.4e6362p-1, 0x1.febf14p0, 0x1.962048p0, 0x1.a1825p-2, 0x1.9c0018p0, -0x1.c47fc6p0, 0x1.d22b82p0, -0x1.5fe8dap-1, -0x1.29b2a8p-1, 0x1.549fdp-1, -0x1.3ee742p0, -0x1.5733e6p0 };
float keras_dense_71_test2_array[1] = { 0x1p0 };
float keras_dense_71_test4_array[1] = { 0x1.046488p-36 };
float c_dense_71_test2_array[1];
float test3_dense_69_input_input_array[399] = { 0x1.fa2e2ap-4, -0x1.48c752p-1, 0x1.cb8dd6p0, 0x1.6eaad8p0, -0x1.a01c3p0, -0x1.1b3534p-1, -0x1.2db19ep0, -0x1.e0c84ep-1, 0x1.638892p-2, 0x1.94beaap0, 0x1.972a68p-1, 0x1.8b50d6p0, 0x1.06ed8ep-1, -0x1.3f68fcp0, -0x1.057f8p-2, -0x1.d517cep0, -0x1.a40426p0, 0x1.579482p0, 0x1.8e819ep0, 0x1.95056cp-7, 0x1.11ba3cp-2, 0x1.bf41f4p0, -0x1.82eb18p0, 0x1.178442p0, -0x1.6e850ap0, 0x1.bb6a5ap-4, 0x1.516e7ap0, 0x1.f38562p0, 0x1.89977ep0, 0x1.3afa5cp-2, 0x1.0dec0ep0, -0x1.f76618p-3, 0x1.002716p0, -0x1.b335ccp0, -0x1.2356d6p-4, -0x1.3e951ap0, 0x1.270244p0, -0x1.0157a2p-3, -0x1.f6f4ep-5, 0x1.cbc196p0, -0x1.984bb6p0, 0x1.b36df4p0, 0x1.32b33ap-1, 0x1.c018a8p0, -0x1.898dd8p0, 0x1.0506acp-3, -0x1.6db59ep-1, -0x1.86f64ap-2, -0x1.135f3ap0, 0x1.ede49p0, -0x1.24393ep-2, -0x1.3ea8d6p-1, 0x1.7fc12ep0, -0x1.21dd4cp-5, -0x1.b49134p0, -0x1.2a7a72p-3, -0x1.3afaep-1, -0x1.917ebp0, 0x1.683514p-1, -0x1.c70a22p0, 0x1.be926cp-1, 0x1.db2a44p0, 0x1.3e0428p0, -0x1.bbd266p-2, 0x1.007198p0, -0x1.700c7ep0, 0x1.050194p-2, 0x1.83d526p0, 0x1.26029cp0, -0x1.7ee6ccp0, -0x1.32b098p-1, -0x1.8f9e2ep-2, 0x1.69e562p0, -0x1.b3d5a2p0, -0x1.feb952p0, 0x1.39acfcp0, 0x1.b7ac46p0, 0x1.f7fcf2p-1, 0x1.b9f95p-1, 0x1.4c4518p0, -0x1.dfd2aap-1, 0x1.766976p-2, -0x1.9d7b0cp0, -0x1.b071f4p-1, -0x1.b93248p-1, -0x1.ab0828p0, -0x1.1740cap0, 0x1.9374p0, -0x1.034c3p0, -0x1.24b9b8p-4, -0x1.7b390cp0, 0x1.3fea4cp-2, 0x1.56a3c6p-4, -0x1.9c958ep-1, 0x1.558bd8p-1, 0x1.e82816p-3, 0x1.fa09b4p0, 0x1.4d716ap0, 0x1.4a6114p-2, 0x1.34345p-1, 0x1.44455ep0, 0x1.21346p0, 0x1.72b2c2p0, 0x1.13053p-1, -0x1.6688c8p-1, 0x1.cbfe5p0, -0x1.c56e0cp0, 0x1.a40642p0, -0x1.058d78p-1, 0x1.b13d24p-1, 0x1.35ab4ap-1, 0x1.0ae076p-1, 0x1.ecef7cp-1, 0x1.c30082p0, -0x1.f7c71ap0, 0x1.80794ap0, -0x1.dff6b2p0, 0x1.b881ep0, 0x1.90ce84p0, -0x1.2ef36cp-3, -0x1.e0114ep0, 0x1.aa24cap-1, -0x1.3776aep0, -0x1.f94b98p-3, 0x1.86e0d6p0, -0x1.6b53fcp-3, -0x1.10f2e2p0, -0x1.c5d1fap-4, -0x1.089634p0, -0x1.69eef6p-3, -0x1.b4b8a4p-3, 0x1.4829a8p-1, 0x1.a3d60ap0, -0x1.31357ep0, -0x1.c5a4cap0, 0x1.b90482p0, -0x1.bb3ef8p0, 0x1.c844ecp-2, -0x1.6d9ce8p-1, -0x1.256728p-1, -0x1.962782p-6, -0x1.dbe85ap0, 0x1.6f4f6cp0, 0x1.8ed026p-2, -0x1.0ecd18p-4, 0x1.c37286p0, 0x1.826deep-3, -0x1.d7d634p0, 0x1.d73358p0, 0x1.99f57ap0, -0x1.3a9788p-4, 0x1.160f58p-1, 0x1.8c7d74p0, -0x1.f39f7cp0, 0x1.77722cp0, 0x1.b077e6p0, -0x1.86905cp-4, 0x1.24fe26p0, 0x1.4b5feep-1, -0x1.7bde78p-1, -0x1.cd3f22p-3, -0x1.9552a2p0, -0x1.aaddb8p-2, -0x1.c9aa9ap-1, 0x1.04eec8p0, -0x1.d079d4p0, 0x1.da6e02p-2, 0x1.69d81ep-1, -0x1.94136ep0, -0x1.1efcb8p-1, 0x1.1f7a3ap0, -0x1.ee6b46p0, 0x1.3b70e6p0, 0x1.7216c4p0, -0x1.462404p0, -0x1.4d6ca8p-1, 0x1.43a4f4p0, -0x1.29c84p-3, -0x1.40a11p0, -0x1.901392p0, -0x1.9f3f02p-3, 0x1.f231fp0, -0x1.c4fb1ep-2, 0x1.ee682ep-2, -0x1.d68f52p-1, -0x1.c286f4p0, 0x1.a64cb2p-1, -0x1.288ae4p-1, 0x1.67e2b8p-1, -0x1.44adp0, -0x1.adda6ep0, 0x1.4ac03ap0, 0x1.095618p-1, -0x1.834c32p0, 0x1.079264p0, 0x1.e7115p0, -0x1.a4ac6ap0, -0x1.52019cp-2, -0x1.6f9e44p-1, 0x1.1c911cp-2, -0x1.92159ap-2, -0x1.749136p0, 0x1.273882p0, -0x1.e9c9d8p0, 0x1.72a0c8p-2, -0x1.42a052p-1, 0x1.6faae4p0, 0x1.d9a7e4p0, 0x1.3b44c2p0, -0x1.0b7274p-2, 0x1.8e6b2ep0, 0x1.ea7d3ep-3, -0x1.b0ae9cp0, 0x1.847418p0, 0x1.a64ecep-3, -0x1.013254p0, 0x1.5579d2p-1, -0x1.d40046p0, -0x1.2ae92ep0, -0x1.9967d4p-3, 0x1.21a1f4p0, 0x1.38c6dep-9, 0x1.e19cb2p-1, -0x1.8f86b6p0, 0x1.72b1a8p0, -0x1.df50bcp0, 0x1.1d9036p-3, -0x1.ba84eap-2, -0x1.9516f6p0, -0x1.4d3228p0, -0x1.c13a28p0, -0x1.cd6c0ap0, 0x1.c7293p-1, -0x1.d6484ap-3, 0x1.3bce28p0, -0x1.6cca3cp0, 0x1.b4faa2p0, -0x1.d9627ep0, 0x1.8cd3d6p0, -0x1.9bffdcp-1, 0x1.843a4p-2, 0x1.43c534p0, 0x1.020956p0, -0x1.9c76bcp0, -0x1.1cb798p0, 0x1.6dd034p0, 0x1.74371p0, 0x1.dfe108p0, -0x1.6260fap0, 0x1.5a6e94p-1, -0x1.96441cp0, 0x1.982186p-2, -0x1.fa635p-3, 0x1.d107d8p-2, 0x1.45dc58p0, -0x1.77efe2p0, -0x1.e2bb76p-1, -0x1.e0ab08p-3, -0x1.679862p-2, -0x1.ae7d1ap-1, -0x1.cfe122p0, 0x1.da7dap-1, 0x1.4c33d2p-1, -0x1.2b9b3p0, -0x1.4dbac8p0, -0x1.93bf76p0, -0x1.5fdbd6p-3, -0x1.39e9bep0, 0x1.8d9e14p-2, -0x1.7936aap-3, -0x1.a29adap-3, 0x1.16421ap0, -0x1.7f319ap0, 0x1.a00b54p-1, -0x1.3a3954p0, 0x1.2757c2p0, -0x1.af8aep0, -0x1.616276p0, -0x1.739818p0, 0x1.cf7472p-2, 0x1.19a42p-1, -0x1.594ebp0, 0x1.bfa1ecp0, -0x1.65f434p-4, 0x1.30a12ap0, -0x1.e017p0, -0x1.45f46ep-3, -0x1.ca7514p0, 0x1.a6919ep-1, -0x1.1b8afap-2, -0x1.79e09ap0, -0x1.af06c6p0, 0x1.4d3274p0, -0x1.1dfd9cp-1, 0x1.9d3deap-2, 0x1.7e779cp0, -0x1.87c63ep0, -0x1.8ce586p0, 0x1.747ap0, 0x1.b05edep-2, -0x1.e42c0ep0, 0x1.6daf92p-1, -0x1.d375ap0, 0x1.61fa4p0, -0x1.2f2574p-2, 0x1.5d0478p-2, -0x1.a825f4p-1, -0x1.507f08p0, 0x1.109b12p-3, -0x1.727c6cp-2, -0x1.ccae42p-1, 0x1.f2a614p-1, 0x1.97f5a6p-1, -0x1.5a3d3ap0, 0x1.8f0b0ep-2, 0x1.f3d656p0, -0x1.d415fp0, 0x1.d965f8p-1, -0x1.b2b12cp-6, -0x1.3637f8p-1, 0x1.82662p0, -0x1.a575p-1, 0x1.2c602ep-2, 0x1.3ee1f2p0, -0x1.610906p-3, -0x1.f05c5ap-1, -0x1.5e72a4p0, -0x1.a16148p-1, 0x1.ced2e4p-2, 0x1.9a1c2p0, 0x1.2c9a4p0, 0x1.b5392p-1, 0x1.403888p-2, 0x1.a28f6ep-2, -0x1.c4591p0, 0x1.ab944ep-2, -0x1.33bafp0, 0x1.4c6ba6p0, 0x1.73eb56p-1, 0x1.3cd8ap0, 0x1.3bb308p0, -0x1.7d2d52p-2, 0x1.909d1p-7, 0x1.0bc62p0, -0x1.0923c6p0, 0x1.5c8c7ap0, 0x1.9da492p-3, -0x1.8c9a16p-1, 0x1.391558p-5, -0x1.b036e6p0, -0x1.d99488p0, 0x1.6a6aa8p0, -0x1.e0ec26p-3, -0x1.4be546p0, -0x1.1cc4eep0, -0x1.69f50cp0, -0x1.9b717cp0, -0x1.7eb482p-2, -0x1.83f2c4p0, -0x1.8a3f6ep0, 0x1.ab72f8p0, -0x1.c148ecp-1, 0x1.402468p-1, -0x1.fa4726p-2, -0x1.1d740ep0, -0x1.fc166cp0, 0x1.9479eap0, -0x1.e49d64p0, -0x1.3f0444p0, -0x1.bb55d2p0, 0x1.4fce9p-3, -0x1.424e14p-1, -0x1.023ec8p-1, 0x1.f4edbap-1, -0x1.0ed3a6p0, -0x1.d16b7cp0, -0x1.d4c7e6p0, 0x1.2ceb3cp-1, -0x1.a25aa6p0, 0x1.bdd89cp-2, -0x1.f496dep-1, -0x1.955578p0, 0x1.76b82p-1, 0x1.24e6a8p-2, -0x1.173b7p-2, 0x1.d380acp0, 0x1.111e6ap-1, 0x1.59f6d8p0, -0x1.a81b1cp0, -0x1.05e218p0, 0x1.3b45fp0, -0x1.f911d4p0, -0x1.85530ap0, -0x1.34a7fcp0, -0x1.c0feap0, -0x1.c2aadap0, 0x1.90f26p0, -0x1.dbdccep-1, 0x1.e1835p-3 };
float c_dense_71_test5_array[1];
float keras_dense_71_test3_array[1] = { 0x1p0 };
float c_dense_71_test3_array[1];
float test4_dense_69_input_input_array[399] = { -0x1.d72122p0, 0x1.b8771p-1, -0x1.1b9216p-1, -0x1.df9118p-5, 0x1.70cbb2p0, -0x1.0e7c9p-1, 0x1.1fe6bap-2, -0x1.3232e6p-1, -0x1.64a62ap0, -0x1.370d9ap0, -0x1.836d58p0, -0x1.b6e49p-1, -0x1.f2bba2p0, -0x1.12cccap0, 0x1.428502p-2, 0x1.04f9f8p-2, -0x1.04cebcp-2, -0x1.85ce74p0, 0x1.80f97cp0, 0x1.c13944p-1, 0x1.4b1a38p0, 0x1.eacb7ap0, 0x1.b6a702p0, 0x1.665822p-1, 0x1.c980a8p0, 0x1.d29408p-1, -0x1.b0f32ep-1, 0x1.1dfd5ap0, -0x1.7d1482p-1, -0x1.625b12p-2, -0x1.e722fcp-10, 0x1.d9d512p0, -0x1.d11aeep0, -0x1.ae458p0, -0x1.0d7284p0, -0x1.7f2824p0, -0x1.ee9d4p0, 0x1.cddab6p0, -0x1.d368d6p-3, -0x1.97aceep-2, 0x1.1d40bp0, -0x1.5e442ep-3, 0x1.9395eep0, 0x1.b6fef8p0, -0x1.99bacap-1, 0x1.c0120cp0, 0x1.c4c5f4p-4, -0x1.6b1996p0, -0x1.436406p0, 0x1.85cfacp-2, -0x1.a2763cp0, 0x1.6bc56cp-2, 0x1.364b6ap-6, 0x1.12389cp0, 0x1.7568a8p0, -0x1.1a7ac6p-1, -0x1.d30cfp-4, 0x1.723a08p0, 0x1.fb9e5cp-2, 0x1.1a54b8p0, 0x1.f12694p-1, 0x1.02f804p0, 0x1.ca4f16p0, -0x1.374608p-1, -0x1.2bb074p0, -0x1.b7011ep-2, 0x1.c81376p0, 0x1.6742ap-1, 0x1.076914p-4, -0x1.ea1a22p0, -0x1.133bbep0, -0x1.738e3ap0, 0x1.42c3bcp-3, -0x1.6a3066p-3, 0x1.0c0beep0, -0x1.a63248p0, -0x1.10a8b6p0, 0x1.fc1feap-3, 0x1.5074c2p-1, -0x1.d72006p-2, 0x1.8f6188p0, -0x1.4d893ap0, -0x1.e00914p0, -0x1.517c9p-1, 0x1.75052ap0, 0x1.da8496p0, 0x1.60c1d6p0, 0x1.6726fp-1, 0x1.c286d8p0, -0x1.7a3d68p0, -0x1.bc845cp0, -0x1.76ee4cp-7, -0x1.d94b5ap-2, -0x1.3d765ap0, -0x1.ebc572p-2, 0x1.2d61fep-1, 0x1.1585d2p0, 0x1.a793e2p0, 0x1.c12524p-2, 0x1.98f604p-1, -0x1.c0a3e4p0, -0x1.4bd2fap0, 0x1.5fe78p0, 0x1.fe0f02p0, -0x1.0808d8p-3, -0x1.88c61cp0, -0x1.219ecap-1, -0x1.621464p-1, -0x1.611316p0, -0x1.e8438ep0, -0x1.c9a74ep-3, -0x1.23ecaap-3, -0x1.0111bep0, 0x1.7649ap0, -0x1.f73ab8p-1, -0x1.5c0d12p-3, 0x1.e6be16p-5, 0x1.b8577p-1, -0x1.fe229p-2, -0x1.8776bap0, -0x1.32fca6p0, 0x1.399df8p0, 0x1.003b68p0, -0x1.96e104p-1, -0x1.53353p0, -0x1.c38c88p0, -0x1.3b6d6cp0, -0x1.437be2p0, -0x1.154be6p-1, 0x1.90fc72p-2, -0x1.6705dap-2, 0x1.943ffep-1, -0x1.b67222p0, -0x1.06b07ap0, -0x1.e264d6p0, -0x1.8476bcp-2, 0x1.3a8b3cp-1, -0x1.9953fp-1, -0x1.2ab7aap-3, 0x1.1a908ep0, 0x1.7a4304p0, 0x1.8031b8p-1, 0x1.264aecp0, -0x1.635354p0, -0x1.73df68p0, 0x1.b92474p0, -0x1.fc362ep-1, -0x1.68289ep0, -0x1.65a824p-2, 0x1.a1235cp0, -0x1.5b2cb6p-3, -0x1.d0852ap-3, 0x1.01d9aep0, -0x1.00b106p-3, -0x1.4f2c8ep0, 0x1.f8bcc2p0, -0x1.2ae4fp0, -0x1.60d0b4p0, 0x1.71e706p-1, -0x1.a0a8f4p-3, 0x1.72264p-3, 0x1.53ebdp-1, -0x1.52641cp0, 0x1.cae882p-1, -0x1.3e7a56p-2, -0x1.f8273p0, -0x1.3225ap-5, 0x1.9d261ep-2, -0x1.dbeaf2p-4, 0x1.584a18p0, -0x1.b1b048p-1, -0x1.6c3efap-1, 0x1.d13a94p-4, -0x1.bd42c6p-1, 0x1.25c14cp-1, -0x1.495392p-3, 0x1.334476p0, -0x1.8f3bfap0, -0x1.377456p-1, 0x1.def6dap0, -0x1.167c8ap0, 0x1.e53818p0, 0x1.c4e9b2p-1, -0x1.8c0f7p-1, -0x1.cfda48p0, -0x1.d7b1ecp-1, 0x1.0e5678p0, 0x1.cf381ap0, -0x1.806cd8p-2, 0x1.b9998ep-1, -0x1.358412p-3, 0x1.9855fep0, 0x1.8d9d9ep-1, 0x1.fe5de4p0, -0x1.cf5442p0, -0x1.b408acp0, 0x1.648402p0, -0x1.b89bd6p0, 0x1.d24dc4p-2, 0x1.a50a4p-1, 0x1.b733ecp-2, -0x1.339036p-1, 0x1.9d7486p-1, 0x1.8d8ed4p0, -0x1.a5246ep-1, 0x1.98e32ep-1, 0x1.7f9c36p-1, -0x1.da5ad8p0, -0x1.35539ep0, 0x1.fbda3ap-8, 0x1.d90974p0, 0x1.dc7c0ap0, 0x1.245772p-5, 0x1.eb1294p-1, 0x1.76b652p0, -0x1.17ce4ep-2, -0x1.8a209cp-1, -0x1.47246cp-2, 0x1.b8be66p0, 0x1.1e7c44p0, 0x1.bef646p-2, -0x1.38b50cp-2, 0x1.389e1ep-2, -0x1.57777cp-1, 0x1.c6ba8cp-4, -0x1.4db45cp-1, -0x1.8f9598p-7, -0x1.4032bap0, -0x1.736948p0, 0x1.c26a1ep0, -0x1.40892ep0, -0x1.2ac9a2p-3, -0x1.0a437ap-1, -0x1.4bc266p-1, 0x1.d3e52cp0, 0x1.af1842p-1, -0x1.b57212p0, 0x1.438e92p0, -0x1.6a4108p-6, 0x1.4c76e4p0, -0x1.78b02cp0, -0x1.5e2a7ap0, 0x1.491ce8p-1, 0x1.bf7774p0, 0x1.7c51c8p-1, -0x1.376a2cp0, 0x1.9ba3fp-1, -0x1.e99762p-4, 0x1.dc68f2p0, -0x1.b4b5b2p-1, -0x1.4af19p0, -0x1.1cbf5ap-3, -0x1.ec9d06p-5, -0x1.1ba21ep-1, -0x1.ff7cf4p-1, 0x1.ff4ef8p0, -0x1.63e32ap0, 0x1.8ad0ep-1, 0x1.27f1ccp0, 0x1.bad09ap-1, 0x1.f8c3cap0, 0x1.045b46p-2, 0x1.6084f6p-2, -0x1.98463p-1, 0x1.fc9dp0, -0x1.42775cp0, -0x1.93eeb6p-1, 0x1.141768p-1, -0x1.849f36p0, 0x1.3e7788p-2, 0x1.c7db22p-1, -0x1.8a6a48p-7, 0x1.034c1ap-2, 0x1.2b81fep-4, 0x1.8abf8ep0, -0x1.d71c94p-4, -0x1.bfed8cp0, 0x1.ec3c52p-2, 0x1.6615c8p0, 0x1.3eee0cp0, 0x1.b2e258p0, -0x1.05168p0, -0x1.bc5e5p-3, 0x1.7f8f4p-1, 0x1.db1df4p-2, 0x1.6c57d2p-4, -0x1.0ccbfp0, -0x1.2027cp-2, -0x1.a3965cp-1, -0x1.1d0392p-1, -0x1.8568c2p-5, 0x1.54b14cp0, -0x1.d5cacep-2, -0x1.3cae58p-10, -0x1.48635ep-1, 0x1.450fc4p0, -0x1.3486e6p-1, 0x1.03413cp-12, 0x1.0b9f1p-1, -0x1.d7de9cp-1, 0x1.661c7ep-1, 0x1.20d212p-1, -0x1.134c12p-1, -0x1.1d2cbp0, -0x1.3628p0, -0x1.9470f4p0, 0x1.dbc952p-2, 0x1.05f074p-2, 0x1.05b882p0, 0x1.4ce916p-4, 0x1.5a929cp0, 0x1.805a92p-1, 0x1.d7f80ep0, -0x1.a1908ep0, 0x1.d7fa88p-2, 0x1.fde238p0, 0x1.be8604p-2, -0x1.6fa968p0, -0x1.9424ep0, -0x1.97e23cp-2, 0x1.594218p0, 0x1.03446ep-1, 0x1.39f092p0, -0x1.51c75ep0, -0x1.1a40f8p0, -0x1.e33cc8p-2, -0x1.19424ap-2, -0x1.d5e1p0, -0x1.25f0cp-2, -0x1.945166p-1, 0x1.91cd64p0, 0x1.2dd4c2p0, -0x1.97a06cp-1, 0x1.5b95fep0, 0x1.80195ap0, -0x1.36e01cp0, 0x1.01fe7p0, 0x1.7ffdc4p-1, -0x1.a86af6p0, -0x1.a5c53cp-3, 0x1.194918p-1, -0x1.94b24cp0, -0x1.8e8504p0, -0x1.f6eb04p-2, 0x1.2d582p-1, -0x1.460e6p0, 0x1.22a258p-2, 0x1.250074p-2, -0x1.5b87e6p-1, -0x1.0bcc8p0, -0x1.d53eep0, -0x1.cf0f7ap-1, 0x1.9cec82p0, -0x1.7809b4p0, -0x1.1899b6p0, 0x1.103e74p-6, -0x1.da03acp0, 0x1.63eccap0, -0x1.87336ep-3, -0x1.e3bb1ep0, -0x1.e24038p0, -0x1.dd1bb4p0, 0x1.987fbp0, 0x1.9ef0b8p0, 0x1.d8dc1ap0, 0x1.41a544p0, -0x1.909628p0, -0x1.802828p0, 0x1.b6240ep0, 0x1.657abap-3, 0x1.1fbe6cp0, -0x1.787c72p0, -0x1.9f64p-1, 0x1.5b8956p-3, -0x1.1d546cp-1, -0x1.2947f4p0, -0x1.ace06cp0, -0x1.9a6bacp-1, -0x1.413886p-3, -0x1.42fe6ap-1, 0x1.cd98aep0, -0x1.9a9c7p0, -0x1.a24c04p-1, 0x1.3a4b1ep-1, -0x1.9173c4p0, -0x1.2b7618p-3, -0x1.578726p0, 0x1.1b063cp0, 0x1.54bd12p0, 0x1.1d1c9p-4, 0x1.2aed96p0, 0x1.adad18p-3, 0x1.f3851cp0, -0x1.284d26p0, -0x1.7a6f42p0, 0x1.fbb914p-1, 0x1.6fb81p0, -0x1.a2ff5cp-2, 0x1.3ab7e2p-3 };
float c_dense_71_test4_array[1];
float test5_dense_69_input_input_array[399] = { -0x1.87d718p-3, 0x1.700c4ap-2, 0x1.fd8a36p-1, -0x1.ca06d2p0, 0x1.f1d692p-1, 0x1.c247f2p0, 0x1.18d96ep0, -0x1.025efap-2, -0x1.22e23ap-1, -0x1.fcac74p-2, -0x1.89b9c8p0, 0x1.ec0f4ap0, 0x1.1acf5cp-1, -0x1.b28884p0, -0x1.faadfcp-1, -0x1.61a0ap-4, -0x1.aaf838p-2, -0x1.794178p-4, 0x1.6db616p0, 0x1.7b28e2p-1, -0x1.0604eap-3, -0x1.e0d33ep0, -0x1.d3a282p0, -0x1.9dbd0ep-1, -0x1.08de2cp0, 0x1.69cd3ap0, 0x1.943f14p-1, -0x1.df2b44p0, -0x1.34b4bep-2, -0x1.339468p0, 0x1.9db2ccp-2, -0x1.ec564cp0, -0x1.d4636ap-2, 0x1.0ff2ecp0, -0x1.8232c8p-2, -0x1.0fa42cp0, 0x1.1c397ap-2, -0x1.10e9f8p-1, -0x1.2b1e1ep0, -0x1.cd46ecp-1, 0x1.3c27fp0, -0x1.441a3ep0, 0x1.f328f8p0, -0x1.65e96ap0, 0x1.bc995cp-4, -0x1.f640f6p-1, 0x1.87636ap-4, -0x1.c4b4cap0, -0x1.e4240cp-3, 0x1.6f7736p0, -0x1.5bb2c8p-1, 0x1.cabc48p-2, -0x1.973734p0, 0x1.9e3648p0, -0x1.303572p0, 0x1.9c8594p0, 0x1.ceb1acp0, -0x1.80bf6ap0, -0x1.665326p-1, -0x1.38d2a8p-2, 0x1.f1b464p-3, -0x1.984ebep0, -0x1.1cc64cp0, -0x1.e35fc2p-1, 0x1.36fc26p0, -0x1.cd0166p0, 0x1.94a88cp-5, -0x1.bdf16cp-5, -0x1.39195ap0, -0x1.ecb722p0, -0x1.d8517p0, 0x1.cdc3dp-2, 0x1.c135c4p0, -0x1.7e4f78p-1, 0x1.9201c4p-3, 0x1.d0b1bp-1, -0x1.78c6cep-7, -0x1.1b0a72p-1, 0x1.2591bep0, 0x1.5bf2cap0, -0x1.4cbeb8p0, 0x1.521bbp-1, -0x1.1297a2p-2, 0x1.2612aep0, -0x1.b0e55p0, -0x1.a5c55ep-1, 0x1.dafd02p0, -0x1.5eb812p0, 0x1.d31bdcp-1, 0x1.0e6af6p0, -0x1.0a2892p-1, 0x1.e9ea6ep-3, -0x1.6cf472p-1, -0x1.b96d76p-3, -0x1.7bd24ep-1, 0x1.90e096p0, -0x1.1f459ep-1, 0x1.a88158p0, 0x1.4d639p0, -0x1.fa044ep-1, 0x1.6cbfd6p0, 0x1.5e1866p0, -0x1.501f38p-1, 0x1.ae715cp0, -0x1.a05cdep0, 0x1.7bcdaep-1, -0x1.9199acp0, -0x1.f03e24p0, 0x1.0bfc2cp0, 0x1.3a3398p-1, -0x1.d14bc8p0, -0x1.5639d2p-1, -0x1.fde3d8p-2, 0x1.098ebcp-6, 0x1.37c6e8p-3, -0x1.39241ap0, -0x1.d7ed16p0, 0x1.6af008p-1, -0x1.96463ep-1, -0x1.73d95ap-1, 0x1.b7c198p-2, 0x1.15f578p0, 0x1.9ddefcp-1, 0x1.23b6e6p-3, -0x1.1563d4p0, 0x1.dfa52cp-1, -0x1.f7f25cp0, -0x1.d5d904p-1, -0x1.86c634p-2, 0x1.26c8e6p0, 0x1.e62494p-5, -0x1.8408e8p0, -0x1.be790cp-3, 0x1.af8e6ep-1, -0x1.48f66p0, -0x1.a09812p0, 0x1.65fdbap-2, 0x1.1a8e26p0, 0x1.e42daep-2, 0x1.bd7dcp0, 0x1.29bd6ep-4, -0x1.b8b55cp0, -0x1.ed66f4p-1, -0x1.ffcedp-5, 0x1.06a126p-1, -0x1.c67972p-6, 0x1.2863bep0, -0x1.042bf6p0, -0x1.c402f6p-3, -0x1.dc4fbcp-1, 0x1.b5e6bap0, -0x1.1f367cp0, -0x1.6c3b2ap0, -0x1.5680aep-3, 0x1.674cd2p0, 0x1.3e7b0ap-4, 0x1.35c116p0, 0x1.df2d6p0, -0x1.947dbep-3, -0x1.c73dc2p-2, 0x1.9ad87p-2, 0x1.ace9b6p-1, -0x1.a9a166p-6, -0x1.1cb614p-1, -0x1.663e6cp-1, -0x1.6edd18p-2, -0x1.14a37ep-1, -0x1.f49cdep0, 0x1.2e54dp-2, 0x1.e0d178p-2, 0x1.60ea78p0, 0x1.aef704p-5, 0x1.e7b3dcp-1, -0x1.028442p0, 0x1.129ae6p0, 0x1.b7f5c2p-1, 0x1.b9e92p0, 0x1.1ea6fcp0, 0x1.a1a934p0, -0x1.21d13cp0, -0x1.5bb338p0, 0x1.816376p0, -0x1.437086p-1, 0x1.b43082p0, 0x1.51efcap-1, -0x1.957242p0, 0x1.f39c8ep-4, 0x1.7e8b72p-1, 0x1.f4b4a8p0, 0x1.c3f578p0, 0x1.ce6182p0, -0x1.d48d84p-1, -0x1.0b9a3ep-2, -0x1.851aaep-4, 0x1.82179ep0, 0x1.7af444p0, -0x1.1b8e0ep-5, 0x1.f92a7p0, -0x1.8f6886p-4, -0x1.e88272p0, 0x1.18594ep-1, -0x1.a36c56p-1, -0x1.96b936p-2, 0x1.021356p-1, 0x1.343a16p-2, 0x1.bc63e4p0, 0x1.31f728p-1, -0x1.0880ep-1, 0x1.d7f144p-1, 0x1.712954p0, 0x1.6a2a6ep-1, -0x1.097b3ap0, 0x1.71367ep-1, 0x1.37f4bcp0, 0x1.b4887p0, 0x1.87d306p-3, 0x1.91abf4p0, 0x1.7cb3aep0, -0x1.79b6e4p0, -0x1.65634cp-2, 0x1.43e312p0, 0x1.5a35d4p-1, -0x1.1e0d4p-2, -0x1.a8d5c6p-8, 0x1.4f0704p-1, 0x1.1b1d12p0, -0x1.f3a27p-1, 0x1.3dca68p-1, -0x1.62e2eap0, 0x1.5e3a8cp-3, 0x1.abce8ap0, 0x1.6d629p0, -0x1.86639cp-1, 0x1.171efp0, 0x1.7ce306p0, -0x1.32133ap0, -0x1.7d131cp0, -0x1.d85346p0, -0x1.3c245ep0, -0x1.0bc126p0, 0x1.d57f02p-2, 0x1.43ef2ap-4, 0x1.a0b202p0, -0x1.462b4cp0, 0x1.a876a2p0, 0x1.2f57e6p0, 0x1.b26186p-1, 0x1.a98d86p0, -0x1.8f81bep-5, 0x1.709e58p0, -0x1.358776p0, 0x1.125b2p0, -0x1.8c8f18p0, 0x1.fb2ff6p0, -0x1.d52adp-6, 0x1.f61d0ap0, -0x1.41728cp-3, 0x1.aa6054p0, 0x1.8e5a06p0, -0x1.3b451cp0, 0x1.0cbba8p-3, -0x1.3c767ap0, 0x1.8d7e1p-3, 0x1.5535p-1, -0x1.ca6bf2p-1, -0x1.5afa4p-4, 0x1.e890c6p-1, 0x1.153126p0, -0x1.bf290cp-1, 0x1.79c64p0, -0x1.7af13cp0, 0x1.3a9b78p-3, -0x1.cdb31ap-1, -0x1.db6ba4p0, 0x1.6489bp-1, 0x1.9c9396p-1, -0x1.1afac2p-3, -0x1.bf693ap0, 0x1.9ba8eep-1, -0x1.8b57b8p-1, 0x1.254a1p-4, -0x1.3a34cap0, 0x1.c982acp-1, -0x1.4dba98p0, 0x1.cd1f86p-1, 0x1.166ea8p0, -0x1.e3265p0, -0x1.a823f6p0, 0x1.8b786p-2, 0x1.185a2ap-2, -0x1.225e3cp-1, -0x1.52614cp0, -0x1.be48a2p0, -0x1.68f85ep-1, -0x1.082fd8p0, -0x1.5af8f8p-1, 0x1.8390aap-1, -0x1.c75516p-2, 0x1.133a04p0, -0x1.7571fep-5, -0x1.e6e454p-1, 0x1.c72aacp0, -0x1.c96a42p0, -0x1.5d0d64p0, -0x1.b80f18p0, -0x1.83476ap-6, 0x1.ac387cp0, -0x1.29c8ep0, -0x1.6bd258p-2, -0x1.7106dep0, -0x1.974bap0, -0x1.91d1f4p0, 0x1.b46c54p-1, -0x1.7f708p0, -0x1.c31ad2p0, 0x1.20ed64p0, -0x1.7e4ce2p0, -0x1.b19c0ep0, 0x1.e1cdd4p0, 0x1.609a64p0, -0x1.71aeb2p-2, -0x1.602c9cp0, 0x1.526dep0, 0x1.c6cd5p0, -0x1.e62d5cp-7, 0x1.eb1cdp-4, 0x1.6f95acp0, -0x1.cab8fap-1, 0x1.29edcp-1, 0x1.da69d8p0, 0x1.a9008p-2, -0x1.6d65e2p0, 0x1.14fae6p0, 0x1.33d5c8p0, -0x1.140b9ep0, -0x1.4337a8p-5, 0x1.a79444p0, -0x1.fa0708p-2, -0x1.8a423p0, -0x1.ab815cp0, -0x1.ad7264p0, 0x1.4de27cp0, -0x1.9e6526p-1, -0x1.d02ed6p-1, 0x1.90c7bap-2, -0x1.460c34p0, -0x1.db887ep0, -0x1.d701f2p0, -0x1.aa0bc2p-1, 0x1.9164a6p0, -0x1.faa866p0, 0x1.16e3b2p-2, 0x1.2ad04ep-3, 0x1.0493eep0, -0x1.f61c16p-1, -0x1.bbf58ap-2, 0x1.aa579p0, -0x1.4bcaa6p0, -0x1.949f2cp0, 0x1.c3cdbep0, -0x1.900a42p0, -0x1.d35394p-1, 0x1.55102ap0, -0x1.6d804cp-4, -0x1.1637dp-1, 0x1.08802cp0, 0x1.cd9b2cp0, 0x1.20b3b8p-1, 0x1.82784ap-1, 0x1.9781fp-2, 0x1.66033cp0, 0x1.b9d07cp-2, 0x1.b6abc2p-1, 0x1.12ea3cp0, -0x1.f51622p0, 0x1.819ea8p0, 0x1.46e5d6p0, -0x1.44eeecp0, 0x1.a687a8p-1, 0x1.5fe2a4p-1, 0x1.9785a4p-1, 0x1.228d1cp0, 0x1.6ea14ep-2, -0x1.4c257ap-1, -0x1.a86e6p0, 0x1.74d188p0, 0x1.5544ccp0, -0x1.d7e5e2p-2, -0x1.2dca82p0, -0x1.372532p-1, -0x1.ecaf04p-1, 0x1.9eaa1cp-1, -0x1.df769ap-1, -0x1.aad836p-2, -0x1.4d0da6p-2, -0x1.215ep0, -0x1.7b97e4p0, 0x1.96339cp0, -0x1.c0cfbcp-1 };
float keras_dense_71_test5_array[1] = { 0x1p0 };
float keras_dense_71_test1_array[1] = { 0x1.fffeeap-1 };
float test1_dense_69_input_input_array[399] = { 0x1.58462p-1, 0x1.af4c8ap-1, -0x1.cf6c0ep-2, -0x1.4ff13ep-2, 0x1.af226p0, 0x1.2790e4p-1, 0x1.8499c4p-1, 0x1.94df7ap0, 0x1.6db056p0, -0x1.f9749ep-1, -0x1.1841ep-1, -0x1.3cb5cep-2, 0x1.d53074p-5, -0x1.f6305p-1, -0x1.03401p-3, 0x1.b8991cp0, -0x1.f18366p-2, -0x1.6c9ba2p0, -0x1.19663ap-1, 0x1.7e2b42p-2, 0x1.f2e924p-1, 0x1.27cbe4p-3, -0x1.aadb74p0, 0x1.aaaf56p0, -0x1.fdb8c4p-3, 0x1.e0a0e6p0, -0x1.3b967cp0, -0x1.d44acep-1, -0x1.8f60aep-3, -0x1.062aeep0, 0x1.a1b3c6p-1, 0x1.1658f2p0, 0x1.45f16p-1, -0x1.aeef9p-2, 0x1.09df76p-2, 0x1.9c1d32p-3, -0x1.15ad76p0, -0x1.10366ep-1, 0x1.81bb7ep-1, 0x1.96c6c4p0, -0x1.5dfb8ep0, 0x1.39f6p-2, 0x1.b660a2p-1, -0x1.bebc06p0, -0x1.53882ep0, -0x1.dd9fa4p0, -0x1.08e4dep-1, 0x1.d1988ap-4, 0x1.ec959cp-2, -0x1.b40bf6p-1, -0x1.2dd5ccp-1, 0x1.2080cep-4, -0x1.c16982p-3, -0x1.27ce1p-1, 0x1.a260e8p-1, -0x1.666014p0, 0x1.c273c6p-4, 0x1.12915ep0, -0x1.0585a6p0, 0x1.2fce2cp0, 0x1.1e681cp0, 0x1.cd4042p-1, -0x1.bf6422p-3, 0x1.f82e4cp-8, -0x1.3fc1fep0, -0x1.c7c9cap-1, 0x1.5b57e4p0, -0x1.e5d394p0, 0x1.bf8ddap-2, -0x1.d41ecp0, 0x1.bc144ep0, -0x1.908e96p0, 0x1.17056p0, -0x1.975a88p-1, -0x1.d33b0ap-3, 0x1.d85682p0, 0x1.8794fcp-2, -0x1.95bd84p0, -0x1.36ddaap0, 0x1.94a2dp0, -0x1.482c3p-4, 0x1.acc3bep-2, 0x1.c95904p0, -0x1.f377aap0, -0x1.2049dcp0, -0x1.32d62ap0, -0x1.b431aep-5, 0x1.171dd4p-3, -0x1.007e32p-1, 0x1.fbcfc2p0, 0x1.a6d8b2p-3, 0x1.21039cp0, 0x1.b7252cp-2, -0x1.067598p0, 0x1.364162p-1, -0x1.621238p-1, -0x1.1392cp0, -0x1.f6e34p-3, -0x1.0052d4p0, 0x1.e4c394p0, -0x1.27ef16p0, -0x1.55ec36p-3, 0x1.379522p-2, -0x1.d55754p0, 0x1.071afcp-1, 0x1.0469bp-1, -0x1.38f39ap0, -0x1.566704p-3, -0x1.a58e24p-1, 0x1.2ec064p0, -0x1.4b5ed4p0, -0x1.023d82p-2, 0x1.be1ab8p0, 0x1.bf2fc4p-3, -0x1.7dce66p0, 0x1.3318dep-1, -0x1.a67306p0, -0x1.7ab5bep0, 0x1.4d45cep0, -0x1.3a24eep0, 0x1.bd0e7ap0, 0x1.8bdc38p-1, 0x1.e6e99p-2, -0x1.87767p-2, 0x1.b2f11p-1, -0x1.2808eap0, 0x1.ebec0ep-1, 0x1.fd236ap-4, 0x1.78159ap-2, -0x1.3e56c6p-3, -0x1.ab2f1ap0, 0x1.5476cap0, 0x1.0e93fcp-1, 0x1.90881p0, 0x1.e2120ap0, 0x1.2768c6p0, 0x1.606edcp-1, -0x1.fa3c46p-1, 0x1.2b276cp0, 0x1.fb28d2p0, -0x1.3128a8p0, 0x1.a63b6ap-1, -0x1.3aa30ep-8, -0x1.c48092p0, -0x1.489ep0, -0x1.8e52dcp0, -0x1.603c52p-1, 0x1.d8fd36p0, 0x1.43bd66p0, -0x1.a319ap0, 0x1.a4ca8ap-3, 0x1.2b34p0, -0x1.86cd56p0, 0x1.5be93cp-1, -0x1.57636ap-2, -0x1.7d457ep-2, -0x1.4a0e08p-3, -0x1.2dcb8cp-3, -0x1.60e434p0, 0x1.a448d2p-1, -0x1.f75c7cp0, -0x1.4dea1p-3, -0x1.2a64ecp0, 0x1.df1c6ep-3, -0x1.e6f85ep0, 0x1.15cda2p-2, 0x1.10fa1ep0, -0x1.d16456p-2, 0x1.25f78cp0, 0x1.de6212p0, 0x1.3ab368p-3, 0x1.95c0d8p0, 0x1.ffabap-4, -0x1.f2b218p-1, -0x1.7e79e4p-3, 0x1.b9f7dcp-2, 0x1.b652b2p0, -0x1.3c661p-2, -0x1.560aecp-2, -0x1.996488p-1, 0x1.47079p-2, -0x1.d6febcp-5, -0x1.67f20ap-3, -0x1.f05e66p-1, -0x1.539804p-2, 0x1.9b97b8p-1, -0x1.71ad34p-1, 0x1.86846p-2, 0x1.e4fddap0, 0x1.e4a82p0, 0x1.dd0824p0, 0x1.cbb266p0, -0x1.a55932p-1, -0x1.6f1e9p-1, -0x1.eead3cp0, 0x1.16b32ep-1, -0x1.919794p-1, 0x1.d856ap0, 0x1.f0a624p-2, -0x1.717b1ep0, 0x1.70ea42p0, -0x1.099c8ep0, -0x1.fd5f84p-1, -0x1.8b6cbep0, -0x1.b361eap-1, 0x1.ea6b18p-1, 0x1.2734fp0, 0x1.714db4p0, 0x1.e6dcb4p0, -0x1.de9f24p-1, -0x1.3751dep0, -0x1.b4878cp-2, -0x1.ce2d5ep0, -0x1.60950cp-3, -0x1.39ad4ep0, -0x1.62342ep0, 0x1.507872p-3, 0x1.222178p0, 0x1.cdcac6p-1, 0x1.b57332p-1, -0x1.90e43ep0, 0x1.cd8a8cp-3, -0x1.a6a57cp0, -0x1.c2b786p-2, -0x1.32ef98p0, -0x1.9072f2p0, -0x1.2e15f2p0, 0x1.8cdfe2p-2, -0x1.87e8b2p0, 0x1.555f5ep-1, 0x1.36bcd2p-1, -0x1.41af94p0, 0x1.f9dd2cp-1, -0x1.6248p-1, 0x1.e8d032p0, 0x1.ee2f02p0, 0x1.0c9e8ep0, 0x1.e9d4bcp0, -0x1.e8c7a4p-1, -0x1.9a26eep0, -0x1.b3d548p-2, -0x1.59c1b2p-1, -0x1.8a5c2cp0, -0x1.7c99f6p-1, -0x1.364a48p-2, -0x1.590b6p0, 0x1.aad73ep-3, -0x1.38b96p-2, -0x1.055abcp0, 0x1.09309ap-4, -0x1.24de9cp-1, 0x1.6d89ecp0, -0x1.61edeep0, 0x1.e7aebep0, -0x1.94eb82p-1, 0x1.dc4e54p-4, -0x1.de34a8p0, 0x1.d7683ap-1, 0x1.882e7cp0, -0x1.7e7dd4p-7, 0x1.741b1ap0, 0x1.2b86a6p0, -0x1.1ff48cp0, 0x1.7c619p-2, 0x1.ae9ee6p-1, 0x1.cdb652p-5, 0x1.83d15ap0, -0x1.0c2ad2p-1, -0x1.9a2294p-1, 0x1.c49e2ap-2, 0x1.41bb84p0, 0x1.5651eap0, -0x1.55ef84p-2, 0x1.55dcf8p0, 0x1.edb008p-7, 0x1.d17e96p-2, -0x1.be6b78p-1, -0x1.41ed46p0, 0x1.5e73ecp-1, 0x1.6f2552p-1, -0x1.30f754p0, 0x1.b1d822p0, -0x1.e0d658p0, 0x1.a3089ap0, 0x1.d30baap0, -0x1.c1d896p-1, 0x1.bd3a58p0, 0x1.dd5d58p-3, -0x1.26e80cp0, -0x1.26c3bcp0, -0x1.a9b78p0, -0x1.39289p-2, 0x1.cb64b2p-3, -0x1.36a536p-1, -0x1.672a26p-1, -0x1.4626c2p0, -0x1.749ffap-1, -0x1.9b16bcp0, -0x1.74c052p-2, -0x1.a83cep-1, -0x1.49fc74p0, -0x1.94cc08p0, -0x1.4a3996p0, -0x1.07d418p0, -0x1.ec8b24p-2, -0x1.d089d2p-1, -0x1.45fcd4p0, -0x1.b6be6ap0, 0x1.a01bcp0, 0x1.b2da28p0, 0x1.4d6044p0, 0x1.985ed6p-3, -0x1.962deep-1, -0x1.533fd6p-3, 0x1.b4652p-5, 0x1.a7fe54p-1, 0x1.d30646p-1, 0x1.a5d094p-2, -0x1.099c6p-4, 0x1.2f81f6p-2, 0x1.3672a4p0, -0x1.a396d8p-3, -0x1.142b38p0, 0x1.a5f4dep-1, 0x1.0a3dcp0, -0x1.5bd62ap-1, 0x1.643c36p-3, -0x1.16be7p0, -0x1.f3b5dep0, 0x1.9590dp0, -0x1.8ee6acp0, 0x1.40f50ep-4, -0x1.e256dep-1, -0x1.38cd0ep-3, -0x1.1cae84p-2, 0x1.3754d4p-2, -0x1.fec9e2p0, 0x1.2d75c4p0, -0x1.ad9368p-2, 0x1.558ad6p0, -0x1.b280d8p0, -0x1.065936p0, -0x1.a2a66ep-1, 0x1.4baf38p0, 0x1.89fc3ep-3, 0x1.c5aa96p-2, -0x1.50c774p-1, -0x1.4cdad8p0, -0x1.723328p0, -0x1.0d7c88p-1, -0x1.f54f14p-1, 0x1.14a9a6p0, 0x1.82b3e4p0, 0x1.2c1a48p0, 0x1.ab2648p-1, -0x1.c9ff3ep0, 0x1.9c654ap-6, -0x1.ec7f98p-5, -0x1.c6ac88p-1, -0x1.300daap-1, -0x1.dfb6a8p-1, 0x1.d7da0cp0, -0x1.8827a6p0, 0x1.abdb26p-1, 0x1.9803ecp0, 0x1.a6ac26p0, -0x1.22b85p-1, -0x1.1762dcp-2, 0x1.bc2322p0, -0x1.6da47ep-2, 0x1.65901cp-4, -0x1.be58ap-1, 0x1.675fe6p0, 0x1.54de9p0, 0x1.9c1922p-1, -0x1.146feap0, -0x1.06f68p0, 0x1.f5c48ep-1, -0x1.26b756p-3, -0x1.899e34p-1, -0x1.adf9b4p0, -0x1.005e6cp0, -0x1.4935fp-2, 0x1.8cd626p0, -0x1.d7b222p0, -0x1.b5d6eap0, -0x1.a9da0ap-2, 0x1.9bcafap-1, -0x1.35743p0, -0x1.23bc54p0, 0x1.f2d23p0, 0x1.2a3e86p0, -0x1.92834cp0, 0x1.1856eep0, 0x1.892616p-1, -0x1.e9174p-1, 0x1.82381ap-2, 0x1.fde768p-3, 0x1.92a78p-1 };
float c_dense_71_test9_array[1];
float keras_dense_71_test10_array[1] = { 0x1.285006p-1 };
l_struct_OC_k2c_tensor c_dense_71_test1 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test3_dense_69_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_71_test3 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test4_dense_69_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_71_test2 __ATTRIBUTE_WEAK__;
float keras_dense_71_test7_array[1] = { 0x1.93c50ap-4 };
float c_dense_71_test7_array[1];
l_struct_OC_k2c_tensor test1_dense_69_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test2_dense_69_input_input __ATTRIBUTE_WEAK__;
float test10_dense_69_input_input_array[399] = { -0x1.5035bap0, -0x1.d3f0f2p-1, -0x1.6d2b84p-1, 0x1.1d0034p-1, 0x1.f1e4f6p-1, 0x1.1d7f3cp0, 0x1.d2ab56p0, -0x1.aebddp-4, -0x1.23e834p0, -0x1.916584p0, 0x1.0a3124p-2, -0x1.9a5a88p0, 0x1.18fd3p-1, -0x1.ebeaacp-1, -0x1.79c10ap0, -0x1.46e39ap-2, 0x1.671f9ap-2, 0x1.48cfa8p0, 0x1.0c3d68p-5, -0x1.11252ep0, -0x1.3208bcp0, 0x1.3f12e8p-1, 0x1.2905e4p-2, -0x1.5d3ecep0, -0x1.3dc144p-1, -0x1.2be1bap-3, 0x1.0e7acp-2, -0x1.5fee9cp-1, 0x1.c18f62p0, 0x1.89d1c2p0, 0x1.5c37d8p0, -0x1.51438cp0, -0x1.265ae6p0, 0x1.31953ep-4, 0x1.3d7d12p-2, 0x1.1515aep0, -0x1.80b0d2p-2, -0x1.f6d25p0, 0x1.4f9212p-8, 0x1.1f313cp0, 0x1.1ea2e6p-2, -0x1.b5078ep-1, -0x1.c932eap0, 0x1.770498p0, -0x1.401b8p-1, -0x1.e0405ap-3, 0x1.29d3b2p-2, 0x1.d063ecp-1, 0x1.4e0e64p0, 0x1.e48066p0, -0x1.27c65p0, 0x1.aba212p0, 0x1.f3ac4cp-5, -0x1.976c72p0, -0x1.140faep-2, 0x1.691542p-1, 0x1.59b32p0, -0x1.ed085ap0, 0x1.1fc20ep-1, 0x1.e4c558p-2, 0x1.552ebep0, 0x1.074454p0, 0x1.d3536cp-1, -0x1.8707f2p0, 0x1.0989f2p-4, 0x1.ce512cp-1, -0x1.52c02ap0, 0x1.fcb906p-1, 0x1.bb0a9ap0, 0x1.856a5ep-4, 0x1.fb890ep-3, 0x1.b68216p0, -0x1.8190e4p-4, -0x1.c31be8p-5, 0x1.565378p0, 0x1.9e58cep-1, 0x1.6b6266p0, 0x1.e829a6p-1, -0x1.9b9e3ap0, -0x1.e97312p0, 0x1.a3c0acp-1, 0x1.a7789p-2, -0x1.fa754ep0, -0x1.6d821cp0, 0x1.d185b2p-1, 0x1.211baep-1, 0x1.e0c3fcp-4, 0x1.de702ep0, 0x1.54102ap-2, 0x1.f99bfep-1, 0x1.e638fap-1, -0x1.7bc3fap0, 0x1.2ae4p-2, 0x1.26146ap-1, -0x1.4fb44p-1, 0x1.e27b62p0, 0x1.e13f4p-1, 0x1.b25b16p0, -0x1.fa087ap-2, 0x1.1c0936p-1, 0x1.16abeap-3, -0x1.03004cp-2, -0x1.499da8p-1, 0x1.8dc1c6p-5, -0x1.8c8efep0, 0x1.885714p0, -0x1.89111ep0, 0x1.f7b1c2p0, 0x1.567f06p0, 0x1.e2c2c2p-2, 0x1.77e95cp0, 0x1.c7361p0, -0x1.a32948p-1, 0x1.65752ep0, -0x1.04d4fp0, 0x1.04f75ep0, -0x1.fb87ccp-3, -0x1.6085eap-2, 0x1.d77104p-1, 0x1.1f45a2p-1, 0x1.3f4552p0, -0x1.3f58ecp-2, -0x1.410d18p0, 0x1.30af2cp0, 0x1.b1aadep0, 0x1.234b26p-2, -0x1.d37aaep-5, -0x1.d8a33p0, 0x1.997526p0, -0x1.882d42p-3, 0x1.61ada2p-1, 0x1.c772cep0, 0x1.c9d1e4p0, -0x1.f0c132p-1, 0x1.6d2322p0, 0x1.556ddep0, 0x1.d8b872p-1, 0x1.b5063p-1, 0x1.a5bd72p0, 0x1.4e8d2ep-3, -0x1.6af318p0, -0x1.cef1c2p-1, 0x1.55b968p-3, 0x1.66bf5ep0, -0x1.765b62p0, 0x1.5f68c2p0, -0x1.1a61e4p-5, -0x1.21f0a2p-1, -0x1.2c1d2ap0, -0x1.55e3e8p0, -0x1.87d78ep-1, -0x1.419666p0, 0x1.078adcp-1, 0x1.cc8088p0, -0x1.784992p-1, -0x1.7e8fd8p0, -0x1.b33146p0, 0x1.4fd506p0, -0x1.51f3d2p0, -0x1.c56202p-1, 0x1.29db4ap0, 0x1.8f296p0, -0x1.5d786p0, -0x1.0d3fa4p-2, 0x1.183b1cp-1, 0x1.c0440cp0, -0x1.74ce9ep-1, -0x1.00736ep-1, -0x1.d1da16p-2, 0x1.fe9da8p0, -0x1.f1c88ap0, 0x1.97072ap-3, 0x1.538c0ap-2, 0x1.5255fp0, -0x1.6e8b16p-1, 0x1.2c3486p-2, 0x1.93ec68p-1, 0x1.7a8a7ep0, -0x1.bd0836p0, -0x1.342148p-1, -0x1.292ad4p-1, -0x1.9f8b54p0, 0x1.0e920ap0, 0x1.75f318p-1, -0x1.09853ap-3, -0x1.3917f6p-1, -0x1.4e4cap0, 0x1.201c1cp0, 0x1.141746p-1, -0x1.a20ceep0, 0x1.a8798cp0, -0x1.7363fp0, -0x1.aa61ccp0, -0x1.28d534p0, 0x1.99f8d4p0, -0x1.59b5a6p0, 0x1.688e5ap0, 0x1.0efdbcp0, 0x1.ab7fbp-1, -0x1.0b154ep-2, -0x1.3f826ep0, 0x1.21062ap-4, 0x1.9aa1f4p-4, -0x1.5f9cc4p0, -0x1.17fe24p-2, 0x1.b13846p0, -0x1.acdf2cp0, 0x1.783056p0, -0x1.054304p0, -0x1.364088p-4, 0x1.f9cd3p-1, -0x1.b85ba2p-3, -0x1.2ad8bep0, -0x1.0e63dcp-1, -0x1.658c2ep-4, -0x1.2047a8p-2, 0x1.33486ap0, 0x1.381828p0, 0x1.6212d4p-2, -0x1.1516fcp-2, -0x1.9ff854p0, -0x1.16d58ep-1, -0x1.af4f94p0, 0x1.a3302p0, 0x1.a86d4ep-1, -0x1.c1d68ep0, 0x1.98c5bp0, -0x1.d0b1e6p-2, -0x1.994eb6p-1, 0x1.c5ee6p-1, 0x1.be12e4p0, 0x1.bd1b58p0, 0x1.ea8cbcp-1, 0x1.006406p-1, -0x1.f7e46p0, -0x1.88294p0, 0x1.274598p0, 0x1.7ee8d4p0, -0x1.445cap-1, -0x1.c4ae28p-1, 0x1.1b57acp-2, 0x1.328ea4p-1, 0x1.105d5p0, 0x1.7dc568p0, 0x1.7d3886p0, -0x1.ab6a04p-5, 0x1.977882p0, -0x1.87e42p-1, -0x1.52a86ep-4, -0x1.a013cep-1, 0x1.387bdap0, 0x1.744098p-1, -0x1.614864p0, 0x1.dd6be4p-1, 0x1.a3489p-2, -0x1.c85aa4p0, 0x1.916be6p0, 0x1.66309p-1, 0x1.3dc67ap-4, 0x1.cb4b64p0, 0x1.0e96a2p-4, -0x1.ce0f0cp-1, -0x1.676becp0, -0x1.c21dd6p-1, 0x1.95137ep-3, 0x1.674114p0, 0x1.d29a48p0, 0x1.246a44p-1, -0x1.548e3ep0, 0x1.7ce342p-2, -0x1.5bafc8p-2, 0x1.e3967p-2, -0x1.41d39ep-2, -0x1.0e9f6ep0, -0x1.d18208p0, -0x1.e6373p-1, -0x1.2b5adp0, 0x1.62cb32p0, -0x1.acc296p0, 0x1.ef94d6p-4, -0x1.cb4ec6p0, -0x1.341fc6p-2, 0x1.d93392p-1, -0x1.15416ap0, 0x1.8081bep0, -0x1.9ce16ep-1, 0x1.9d924p0, 0x1.2c7954p-1, 0x1.99842cp-3, -0x1.2be2aap0, -0x1.c1b6fp-1, 0x1.0aba9p-2, -0x1.d96d02p-3, 0x1.4e7cfap0, -0x1.990e66p-2, 0x1.0df494p0, 0x1.fea8eep0, 0x1.35cd24p0, 0x1.79f12ep0, -0x1.b22b9ep-1, -0x1.ff5dc6p0, 0x1.13d9a2p0, 0x1.95d936p-4, 0x1.22b6bap-1, 0x1.a04454p0, 0x1.5c648ap0, -0x1.92ae64p0, 0x1.9bb9a8p0, 0x1.ae031ep-1, -0x1.9cd748p0, -0x1.4324b4p-1, -0x1.36a7bp0, -0x1.92307ep0, 0x1.49d966p0, -0x1.02e56p0, 0x1.04c768p-3, -0x1.670822p0, 0x1.0017bap-1, 0x1.2d34cep-1, 0x1.3820a6p0, -0x1.99f6c8p-2, 0x1.5e2d52p-2, -0x1.196b24p-1, 0x1.7ea2f8p-1, 0x1.3be57ep-5, -0x1.9fc85ap0, -0x1.76b52p0, -0x1.5858a8p0, 0x1.eb7662p-1, 0x1.adc71ep0, -0x1.9cd88cp0, 0x1.0bd2eap0, 0x1.f2f9ep-1, 0x1.7849cap0, 0x1.d19e4p-1, -0x1.821ec6p-1, -0x1.b215e6p0, 0x1.123f24p-2, 0x1.eff762p-1, -0x1.4637p0, 0x1.7a9118p-2, 0x1.f60bdep-2, -0x1.5e43e2p-5, 0x1.1995fcp-1, 0x1.11582p0, 0x1.2ff75p0, -0x1.e0b0d8p-3, 0x1.430daap-1, -0x1.3fd678p-1, 0x1.d7ca2ep0, 0x1.af63fcp0, -0x1.12ac6p0, -0x1.6a9e2ap-1, 0x1.7913ep-1, -0x1.d28168p-4, -0x1.f06d72p-1, 0x1.c35f0ep-1, 0x1.d349dep-1, -0x1.79d504p0, 0x1.6acd6p-3, -0x1.2b5f6ap0, 0x1.69a61cp-2, -0x1.80a60cp-3, 0x1.e95b28p0, -0x1.11abbap-3, -0x1.3a2b32p0, -0x1.693672p-2, -0x1.4d7ef6p0, 0x1.9b1196p0, -0x1.a9e3eep0, 0x1.f79cf4p0, -0x1.70909ep0, 0x1.97f9b8p0, 0x1.61d46ap0, 0x1.20e522p-1, -0x1.9fec3cp0, -0x1.660758p0, -0x1.e380a8p0, 0x1.19994ep0, 0x1.d5c86p-1, -0x1.6e4928p0, 0x1.13fa5p-4, 0x1.3539bp0, -0x1.1786a6p-1, 0x1.2d6f3ep0, -0x1.170fp-1, 0x1.b52dc8p-2, 0x1.4b8d12p-5, 0x1.8a8124p0, -0x1.b40e0cp0, -0x1.595cc8p0, 0x1.35eb14p-1, -0x1.b850a2p-4, -0x1.498456p-2, -0x1.2d67eep0, -0x1.902024p0, -0x1.36f994p-1, 0x1.8b854cp-2, -0x1.c864b4p0 };
float test8_dense_69_input_input_array[399] = { 0x1.61beb4p0, 0x1.ce3e1ep0, -0x1.a48e56p0, 0x1.14c124p-2, -0x1.35b852p-1, 0x1.340306p0, 0x1.eac1ep0, 0x1.14eb6ap-4, 0x1.53de1ap0, -0x1.267b3ep-1, -0x1.42a1eep0, -0x1.b9c5eep-3, -0x1.b79f78p-6, 0x1.a09c3p0, 0x1.aa1edap0, 0x1.c5184p-2, -0x1.cee91ap0, 0x1.1b30cep0, 0x1.01897p0, 0x1.2110dp0, -0x1.4855fep-3, 0x1.d422f8p-2, 0x1.b85176p0, 0x1.f33508p0, -0x1.5adf0ep0, 0x1.279622p0, 0x1.19813cp0, -0x1.d3f8e6p-3, -0x1.96ef92p-1, -0x1.433d1cp0, 0x1.f83004p-1, -0x1.e50edep0, 0x1.672bccp0, 0x1.586bc8p0, 0x1.2baccp-1, -0x1.d82a64p-1, 0x1.8926a4p-2, 0x1.9d26e4p0, -0x1.81ec14p0, -0x1.d3c4a8p-7, 0x1.d39cacp-2, 0x1.f37ea2p0, -0x1.fb0d16p0, 0x1.951c54p0, -0x1.757234p-2, 0x1.0cf73p0, 0x1.01562ep-1, -0x1.11d4bep0, 0x1.0d734ap-1, 0x1.8d62cep-2, 0x1.11a55p0, -0x1.97c954p0, 0x1.281d96p0, 0x1.2258fp-2, -0x1.84defep0, 0x1.b593e4p-2, 0x1.9b6d36p-3, -0x1.103aaep0, -0x1.337c14p0, -0x1.6fc77ap0, 0x1.208746p-2, 0x1.3681a8p-1, 0x1.82593cp-1, 0x1.e70c1ap0, 0x1.79865ep-9, -0x1.93d042p0, 0x1.bf7c26p0, -0x1.72b6bap-1, -0x1.ca0498p0, -0x1.1c4f8ap0, -0x1.a65746p0, -0x1.31dc6cp-2, 0x1.f0a1f2p0, 0x1.e8b7c6p0, 0x1.a5a70ap-1, 0x1.6c70fp0, -0x1.77f25p-2, 0x1.c673eep-1, -0x1.176dp-1, 0x1.075c28p-1, -0x1.97ad6p-1, -0x1.3bbe94p0, 0x1.b63b6ep0, 0x1.f4c236p-1, -0x1.49916ep0, 0x1.5489bep-1, -0x1.9ca5d4p-3, 0x1.d7265ep-1, 0x1.6238fep0, 0x1.fd2f1ap-3, -0x1.81db6ep-1, 0x1.37c2f2p-1, 0x1.7d675ap0, -0x1.ee3e68p0, -0x1.f883dp-1, -0x1.7dfb4p-1, 0x1.383e2ap-1, -0x1.66cda8p-1, -0x1.b87fd8p-1, -0x1.2caca8p0, -0x1.6b43ap-2, 0x1.13538ep0, 0x1.87782ap-1, 0x1.13346cp-2, 0x1.01be9ap0, 0x1.a661bp0, -0x1.e71e74p0, -0x1.69b7cp0, -0x1.00736p-1, 0x1.a22f5ap-1, 0x1.9843dp-1, -0x1.b969a8p-1, 0x1.39924ap0, 0x1.7246d2p-3, 0x1.aafb1ep0, -0x1.b93c96p0, 0x1.fc22c2p0, -0x1.467c72p0, -0x1.aa4ea2p-4, 0x1.0167a2p0, -0x1.25d608p0, 0x1.1000a2p0, -0x1.05dbcp0, -0x1.9c7a7ap0, 0x1.12b44ep0, 0x1.de89bp0, 0x1.74005p0, 0x1.30d816p-4, -0x1.ebb8bep0, -0x1.23ed3cp0, 0x1.6df776p-1, 0x1.3796dp-2, 0x1.72bbfap0, -0x1.62e132p0, 0x1.c1526p0, -0x1.07973ep-1, -0x1.12897p-3, 0x1.ba3f6cp0, 0x1.fa6c9ep-1, 0x1.80e15ap0, 0x1.5cf254p-6, 0x1.af3b52p0, 0x1.64061p0, -0x1.54274ap0, 0x1.61cbcep0, -0x1.8f7aaep0, 0x1.7f785cp0, -0x1.7706bp0, 0x1.d6488cp0, -0x1.5db436p-3, -0x1.47e504p0, 0x1.ba7cc4p-2, -0x1.7434bp-4, -0x1.df264cp-3, 0x1.662b22p0, -0x1.acde9ap0, 0x1.6e985p0, -0x1.5bd838p-3, -0x1.42f624p0, -0x1.47f2ccp0, 0x1.0864bcp-1, -0x1.13c40ap-1, 0x1.d5f24ep0, 0x1.15248ep0, 0x1.586ef8p0, 0x1.3149d8p-1, -0x1.39a31p-2, 0x1.18c18ap0, -0x1.14e8aap-1, 0x1.db6f8p0, -0x1.747e48p-1, 0x1.75d826p-1, -0x1.eb48f8p-4, 0x1.8f12b4p0, 0x1.b5fc3cp0, 0x1.6ff576p-1, 0x1.53dab4p0, -0x1.11d48p0, 0x1.029cp0, 0x1.ae658ap-2, -0x1.7aa96ap0, -0x1.3f04dep-1, 0x1.71d3d4p-2, -0x1.36ad98p0, 0x1.1d24b6p0, 0x1.25d8acp0, -0x1.bda5aap0, 0x1.c4d42ap0, 0x1.a34d7p-1, 0x1.c6d0bep-1, 0x1.036874p0, -0x1.7cf32ep-1, -0x1.f91eap-1, -0x1.0dadf4p-2, 0x1.50d86cp0, 0x1.31e0dp0, -0x1.8e6fbp0, -0x1.c3ce5cp-2, 0x1.fb7fd8p0, 0x1.13ff54p0, -0x1.57c34ap0, -0x1.0bbadep0, -0x1.b6ff56p-1, -0x1.f613e8p0, 0x1.75e192p0, -0x1.e3447ap-1, 0x1.7b7362p-1, 0x1.48cdf4p0, 0x1.a797f6p0, 0x1.fe2198p-1, 0x1.11bf1p-1, -0x1.a5a316p0, 0x1.db06d2p-1, 0x1.81ea3ep0, -0x1.10344p0, 0x1.45974ep-1, 0x1.701bdp-3, 0x1.b361ap0, -0x1.9ac8ep-4, -0x1.0de226p-4, 0x1.046164p0, -0x1.7397dap-2, 0x1.fce2a2p-2, 0x1.816accp0, 0x1.14954ap-1, 0x1.2af33ep-1, 0x1.6147fp-1, -0x1.b226dap0, -0x1.c3ec2ep-7, -0x1.b7cee8p-3, 0x1.770722p0, 0x1.22f98ep-1, -0x1.5eaf66p0, -0x1.b0baap0, 0x1.040cp0, -0x1.0fa2fcp-3, 0x1.68bc4p0, -0x1.ef645ap0, -0x1.7a1cecp0, -0x1.e86202p-1, -0x1.b1ab3ep-2, -0x1.8c723ep0, 0x1.767a1p0, -0x1.0180cp-4, -0x1.457fcep-6, -0x1.474416p-3, -0x1.d773c8p0, 0x1.1fe642p0, -0x1.b4825cp0, -0x1.1bd05p-2, 0x1.746e7ap-1, 0x1.ce5b24p-1, 0x1.2f7322p0, -0x1.159784p-1, -0x1.cc6f98p0, -0x1.86bb2ep-1, -0x1.9faf2p-1, -0x1.dc62b6p-1, 0x1.7b396cp0, -0x1.cd0cccp0, -0x1.e06032p0, -0x1.f5a5e2p0, 0x1.cd34e4p0, 0x1.e01cb8p0, -0x1.2dcc4ap-2, -0x1.dd032ep0, -0x1.c2795cp0, 0x1.9a111p-2, -0x1.c7b81ap-4, -0x1.3d6fb8p0, -0x1.8fb7b2p-3, -0x1.f526fep0, 0x1.bafacap-1, -0x1.745282p-4, 0x1.bf49c6p0, -0x1.aa225ap-1, -0x1.edbffap0, 0x1.e414cp-1, 0x1.2754dp-1, 0x1.749b44p0, -0x1.953dccp0, 0x1.cd8adcp-5, -0x1.fc6fcap0, 0x1.2b1628p-1, 0x1.354528p0, 0x1.e82926p0, 0x1.03170ap0, -0x1.d1bf36p0, 0x1.debdep0, 0x1.fec234p0, 0x1.2038acp-1, -0x1.4f6222p0, 0x1.910d2ep0, -0x1.464df2p0, 0x1.25a0f8p0, 0x1.27666p0, 0x1.d80356p-2, -0x1.5204eep-4, -0x1.84665ep0, 0x1.0afabcp-1, -0x1.e68fe6p0, -0x1.f06c6p0, 0x1.ca370ap0, 0x1.1f48dp-3, -0x1.4467ap0, 0x1.a61734p0, 0x1.b1404ap0, 0x1.a7214p-1, -0x1.2dba5p0, -0x1.48ec28p0, -0x1.e72044p0, 0x1.cab19ep0, 0x1.e5d088p-2, -0x1.7f3fa4p0, -0x1.1e24f8p0, 0x1.ef085cp-6, -0x1.2361a6p0, -0x1.5c999ap0, -0x1.76ac7ep0, 0x1.317548p-2, 0x1.8d4cp-2, -0x1.3be6fcp-1, 0x1.e9df5ap-1, 0x1.b26e58p-1, 0x1.067d06p-2, -0x1.d62592p-2, -0x1.473a0ap-1, 0x1.43c0e8p0, 0x1.9725dcp0, 0x1.d58cdcp0, 0x1.bef44ep0, 0x1.9324dcp-1, -0x1.e3ccd6p-2, 0x1.d22a2ep-4, 0x1.8072e6p0, 0x1.2de0dep-1, -0x1.0f6588p-1, -0x1.d086dp-2, 0x1.88b804p0, -0x1.48f7e2p-1, -0x1.30a4f6p-1, 0x1.f10ebp0, 0x1.e41c4ep0, 0x1.8a77e6p-1, 0x1.ba901ep-4, -0x1.970cc2p0, 0x1.190892p-2, 0x1.2b759ep0, -0x1.5e589p0, -0x1.f74986p-6, -0x1.2e84b2p0, -0x1.039752p0, 0x1.9da94p-1, -0x1.a5625cp-1, 0x1.930d42p0, -0x1.75d414p0, -0x1.d08d02p0, 0x1.5f4eeap-2, 0x1.a2249p0, -0x1.4a740cp-1, -0x1.dbac76p0, 0x1.64ed6ep-1, -0x1.e93334p0, 0x1.4b4284p-3, 0x1.cdf066p0, 0x1.ecad62p0, -0x1.817c38p0, 0x1.b4c4d8p-1, -0x1.204d92p0, 0x1.0664cep0, 0x1.ef7ce4p0, 0x1.91e4eap-5, -0x1.eb5eb4p-1, 0x1.ce7c9cp0, -0x1.d10596p-3, 0x1.3b40d8p0, 0x1.100ff8p-1, -0x1.aee338p0, -0x1.4b2c54p-1, -0x1.cb8b08p0, -0x1.2c31ccp0, -0x1.f2972p-1, 0x1.f08c8ep0, -0x1.0df1bcp-3, -0x1.7b731ap0, 0x1.71430ap-1, 0x1.11b30ap0, 0x1.08b052p-1, 0x1.7a98ap-1, 0x1.28c878p-3, -0x1.a4ed2p-3, -0x1.709156p0, -0x1.3e3ec4p0, -0x1.361704p-2, 0x1.cf7d54p-1, -0x1.bc93ecp0, 0x1.0330ccp0, -0x1.769aecp0, -0x1.6baa1cp-7 };
float c_dense_71_test8_array[1];
float keras_dense_71_test9_array[1] = { 0x1.0aad5cp-5 };
float keras_dense_71_test6_array[1];
float test6_dense_69_input_input_array[399] = { 0x1.355f7ep-2, 0x1.eef94p0, -0x1.092bb8p-1, 0x1.b70be6p0, 0x1.7f9094p0, 0x1.fc2006p-1, 0x1.953138p0, 0x1.c5da3p0, -0x1.c41e2cp0, 0x1.df6208p0, -0x1.652286p0, 0x1.a7037ap0, -0x1.89f188p-1, -0x1.ee4718p0, -0x1.798712p-2, 0x1.db7e6ep-1, -0x1.cb820ep-2, 0x1.180cdap0, 0x1.5fa122p-1, 0x1.66b00ap-2, -0x1.e16288p-1, 0x1.3db8b6p0, 0x1.20c68ap0, -0x1.b9de5p-4, -0x1.ea30c4p-3, 0x1.7b9826p-2, 0x1.867336p0, 0x1.a279b4p0, 0x1.71970ap0, 0x1.d6c86p-1, 0x1.f6670cp0, -0x1.c76d0cp0, 0x1.0f1ebp0, -0x1.31d6d8p-2, 0x1.f1cab4p-3, 0x1.6ccc0cp0, 0x1.986bfcp0, -0x1.d53f7p-1, 0x1.97845ep0, -0x1.8652dap0, 0x1.b158f4p-1, -0x1.4c133ap0, 0x1.a9d1ap0, 0x1.32f1cap-1, -0x1.2bdedp0, -0x1.2626a4p0, -0x1.fbe464p-1, 0x1.99cc5ap0, -0x1.15650ap0, 0x1.147328p0, 0x1.93ec54p-2, -0x1.e80612p-3, 0x1.3f4516p-1, -0x1.31afdap-3, 0x1.6698d2p0, 0x1.b93feap-1, -0x1.aca444p0, -0x1.39c1c8p0, 0x1.ba542cp-1, 0x1.7c8abap0, -0x1.3807bp0, -0x1.b12378p-2, 0x1.8e9faep0, -0x1.149692p0, -0x1.34b1ap-1, 0x1.939194p0, 0x1.67f6aap-1, -0x1.a74506p-1, -0x1.e808aep-1, -0x1.a9e3a4p-1, 0x1.cf8044p-1, 0x1.dc2d7ap-2, -0x1.ab8624p0, -0x1.ac86fap-2, 0x1.c630d2p0, -0x1.adc618p0, 0x1.5840c6p-2, -0x1.e5fa54p-2, 0x1.56ddc6p0, 0x1.bd2d2ep0, 0x1.edc526p-3, 0x1.8211eep0, -0x1.c0b33ep-5, -0x1.90dd04p0, 0x1.3c68f2p-9, -0x1.f44736p-1, -0x1.7a661p-6, 0x1.327458p-1, 0x1.5c4f36p0, 0x1.3f2a7cp0, 0x1.0b0dc2p0, -0x1.a01b32p0, -0x1.9216d4p-1, 0x1.7bf6a6p0, -0x1.2b4fp-1, -0x1.c1f23ep-3, -0x1.8d86dap-1, 0x1.5ecbe4p-1, 0x1.e3e4fp-1, 0x1.5968d4p0, -0x1.0ad8a8p-1, 0x1.ca4b64p0, 0x1.a8e414p0, -0x1.adf9acp-1, 0x1.980fbep-1, -0x1.2285dcp-1, 0x1.00a542p-2, 0x1.0ab5a6p-1, 0x1.91e5fcp-4, -0x1.d093d4p-3, -0x1.bbdb42p0, -0x1.5de7bep-3, 0x1.fddc0cp-1, 0x1.8be7c2p0, 0x1.149928p-1, -0x1.8228f8p0, 0x1.78c91cp-2, 0x1.8365dcp0, 0x1.be3522p0, 0x1.95ef3cp-1, 0x1.a2d364p0, -0x1.c58dcep-2, 0x1.a653dep0, 0x1.e035e8p-1, -0x1.a93252p0, 0x1.491f7ep-1, -0x1.17d702p0, 0x1.71c932p-1, -0x1.4196e4p-2, 0x1.a5ac76p0, -0x1.91c696p0, 0x1.a2c586p0, -0x1.bca00cp0, 0x1.65566cp0, -0x1.9fa94ep-1, 0x1.41942p-1, 0x1.001962p-1, 0x1.dbdf7cp-1, -0x1.7d3d14p0, 0x1.cde208p0, 0x1.38148cp0, -0x1.65cb72p-1, 0x1.c562acp-1, -0x1.39ceccp0, 0x1.93db74p0, 0x1.0ccf36p-1, 0x1.bd9f6p0, -0x1.e80a5ap-3, 0x1.f79d88p-1, -0x1.b4147ep-1, -0x1.0684b4p0, 0x1.fc839ap-1, -0x1.b03cdap0, -0x1.3568fcp-3, -0x1.7fc1d6p-2, -0x1.d25162p0, -0x1.bd86ap0, -0x1.bda4eap-1, 0x1.939d2ep0, 0x1.d4feaep0, 0x1.b85968p0, 0x1.146928p-5, -0x1.71146p-1, -0x1.70d1fap0, 0x1.4a95fep-1, 0x1.a7b6acp-3, -0x1.17da58p0, -0x1.95b766p-1, -0x1.c07012p-1, 0x1.989f64p0, 0x1.393d12p-3, 0x1.369c58p-1, 0x1.809dbep-1, -0x1.a6149p-1, -0x1.65b7dep0, 0x1.460a02p-2, -0x1.4b21ep0, 0x1.3c549p0, 0x1.34fc9cp0, 0x1.49a078p-2, 0x1.38f64p0, 0x1.d98f68p-1, -0x1.a49362p0, 0x1.12d346p0, 0x1.2330ecp-5, -0x1.3cbf3p0, 0x1.0c9f76p0, 0x1.e785b6p-2, 0x1.888216p-1, 0x1.465ba8p-2, 0x1.fd5b52p0, 0x1.268d06p0, -0x1.36784cp0, -0x1.cd7d2ap0, -0x1.5e063p-3, 0x1.5ff356p0, -0x1.692bcep0, 0x1.43f3bcp-1, 0x1.d110dcp-1, 0x1.6bf35ep0, 0x1.4d2a8ep0, 0x1.2bafeep0, 0x1.1ce086p0, -0x1.af8ed4p0, -0x1.134bbep0, -0x1.5f916ep-1, -0x1.2061d6p-3, -0x1.324c58p0, 0x1.ba5b3cp-1, 0x1.f30e74p0, -0x1.cbf234p0, 0x1.9875ep-1, 0x1.027e8ep-4, -0x1.df2ep-2, 0x1.51439ap-2, 0x1.97435ep-3, 0x1.1e0ec6p0, 0x1.f9aadep0, -0x1.fc8b42p0, -0x1.73aa04p-1, -0x1.51221ap0, 0x1.e5b90ap0, 0x1.764b58p0, 0x1.abc9dp0, -0x1.16398ep-1, 0x1.f32d66p-2, -0x1.c04c96p0, 0x1.775784p-10, 0x1.954486p0, -0x1.bc92d4p-1, 0x1.85c9bep0, -0x1.66789ep0, 0x1.7f0ed8p-2, 0x1.337db8p-2, -0x1.24e39ap-1, 0x1.93c964p-1, -0x1.d73596p-3, 0x1.9e61dep-2, 0x1.816748p0, 0x1.d59ddep0, 0x1.5fadfep-5, 0x1.27df76p0, 0x1.3e8b28p-4, -0x1.0a5282p0, -0x1.f1bd42p0, 0x1.2efdacp0, -0x1.bc5b78p0, 0x1.5eda3cp0, -0x1.e263c6p0, 0x1.e9afdep-1, 0x1.a2e82ap-1, -0x1.dfe4c4p-1, 0x1.6fcce2p0, -0x1.5ba8bap0, -0x1.f6ccfep0, 0x1.cc3d3ep-2, -0x1.09c4eep0, -0x1.6fdap0, 0x1.8d53ccp-1, 0x1.09e61cp-1, 0x1.eb2a86p-1, 0x1.a28382p0, -0x1.b1ae32p-1, -0x1.040f82p-3, 0x1.9dc684p-6, 0x1.e9920cp0, 0x1.4622ecp0, 0x1.b6b6dcp0, 0x1.903d14p0, -0x1.1e143p-1, 0x1.5f242ap-1, -0x1.afcf44p0, 0x1.754f3cp-5, -0x1.79eccp0, -0x1.4769b2p0, 0x1.fa3888p0, -0x1.d8e46p-2, 0x1.98def2p0, 0x1.e7fc46p0, -0x1.2321d8p0, 0x1.e0d888p0, -0x1.61cf52p-2, 0x1.b3cf28p0, -0x1.627e8cp0, 0x1.0858fap-8, 0x1.66e268p-1, 0x1.fa69a4p0, -0x1.2bb42p-5, -0x1.dab7eap0, -0x1.33e82cp0, 0x1.0aad88p0, -0x1.5a8efcp0, 0x1.0de494p-1, -0x1.a1398ep-2, 0x1.625324p0, 0x1.ca48f8p-1, -0x1.34d982p0, -0x1.15b154p0, -0x1.588c1p-5, 0x1.668622p-1, 0x1.be63ap-3, -0x1.9942a4p-1, -0x1.4fe0c8p-1, 0x1.6b7afcp0, 0x1.e8339ap0, 0x1.70ebcap0, 0x1.f3eb34p-2, 0x1.a4805cp0, -0x1.19a968p0, 0x1.d69d98p0, -0x1.d09258p-1, 0x1.0ed31ep-1, 0x1.48b0d4p-6, 0x1.46fd2ep0, 0x1.30fae2p0, -0x1.407f18p0, -0x1.1cbc98p-1, 0x1.02db2cp0, 0x1.89d378p-5, -0x1.7fb12ap0, 0x1.2f79aep-1, 0x1.57b8ap-2, 0x1.8097eep-1, 0x1.33e05ap-2, 0x1.73de2ep0, 0x1.199e14p0, -0x1.a837c8p-2, -0x1.4e3e7cp0, 0x1.7318dap0, -0x1.4668d4p-4, 0x1.732a7ep-1, -0x1.5d2ac4p0, 0x1.ad05aep0, 0x1.25a46ep-1, 0x1.ed3c8p0, -0x1.3e96c8p-3, -0x1.404222p-2, -0x1.5f24dep0, 0x1.c4bec2p-3, 0x1.1651eep0, 0x1.d57602p0, -0x1.e07a84p0, -0x1.ad6bfep-2, 0x1.aa6496p0, 0x1.3d8c92p0, 0x1.8bef12p0, -0x1.812c06p0, 0x1.a3def2p0, 0x1.22c68cp-1, 0x1.46556ap0, -0x1.e0138cp-1, 0x1.e9d608p-3, -0x1.0f3562p0, 0x1.1dec02p-2, -0x1.47248ap0, 0x1.603fp0, 0x1.940a56p0, -0x1.dbcba4p-3, -0x1.290296p0, 0x1.4bdda4p0, 0x1.f24e86p0, 0x1.405b72p0, -0x1.f37ddap0, -0x1.7e51ccp-1, 0x1.1fe342p-3, -0x1.d51d1ap-4, -0x1.47f82ep0, -0x1.daf712p-1, 0x1.34b9d6p0, -0x1.3b1c5ap-4, -0x1.34f91cp-2, -0x1.97bd26p0, -0x1.2a2c26p-2, 0x1.f98462p0, -0x1.92fc42p-3, -0x1.ec6198p-1, 0x1.4aff62p0, -0x1.0bf6p0, 0x1.2503d6p-1, -0x1.6a70c2p-1, 0x1.9fdd64p0, -0x1.46270cp0, 0x1.a96654p-1, -0x1.b54a94p0, -0x1.6316d4p0, 0x1.1b762p0, -0x1.8c3334p-1, -0x1.193e62p0, 0x1.c6b1b4p-3, 0x1.fe4704p0, 0x1.f7d53p0, -0x1.7ab2dp-1, 0x1.16c298p-2, -0x1.3f0b6ep0, 0x1.cac462p0, 0x1.a78342p-1, -0x1.11f9cep-3, 0x1.ba77fep-4, -0x1.f85f1ep-2 };
float keras_dense_71_test8_array[1] = { 0x1.fffffcp-1 };
float test9_dense_69_input_input_array[399] = { 0x1.ec484ap-1, -0x1.41ea88p-2, -0x1.872f6p-1, -0x1.570c52p0, 0x1.0dc482p0, -0x1.75ad6p-8, -0x1.44f5fcp0, -0x1.46fefcp-3, -0x1.0a8a32p-2, -0x1.db473ep0, -0x1.55e4fap0, -0x1.a5c388p0, -0x1.39efd4p0, 0x1.6666fp0, 0x1.6332d8p-3, 0x1.8643d8p0, -0x1.02f4p0, 0x1.cfd1c2p0, 0x1.e1bfdep-1, -0x1.2d0e1cp-3, 0x1.1215d6p0, 0x1.2fef66p0, -0x1.1479e4p0, -0x1.9842a8p-1, 0x1.45d9fcp-3, -0x1.3b21dp0, 0x1.57f0ep0, -0x1.8d41dp0, 0x1.642036p0, -0x1.424aa6p-2, -0x1.a97724p-1, -0x1.6002fap-3, -0x1.2b4fd6p-1, 0x1.f88752p0, -0x1.4ab022p-1, -0x1.662ddcp0, 0x1.a1ad5cp0, -0x1.8e25cp0, 0x1.8e858ep-3, -0x1.f3593ap-1, 0x1.4bda4cp-1, -0x1.0ba134p0, -0x1.be96f2p0, 0x1.680718p0, 0x1.6cd24cp0, -0x1.82a6p-1, 0x1.11a01p-3, 0x1.9c5476p0, 0x1.6961dep-4, 0x1.f15b58p0, -0x1.0fd0a2p-2, 0x1.1846e2p-1, 0x1.8e8738p-1, -0x1.c43abap0, -0x1.ff8332p-2, -0x1.c3b5fap-3, 0x1.2733fap0, 0x1.5e01cp0, -0x1.d7176p0, 0x1.4158ccp-1, -0x1.d412e6p-4, 0x1.7e97c2p0, -0x1.2422dep0, -0x1.ebbf1p0, 0x1.0bb628p-3, 0x1.c5b0c6p-1, 0x1.7e13bp-3, -0x1.8ffba8p0, -0x1.2a747ep-1, 0x1.19da62p-2, -0x1.f786f8p-1, 0x1.45335p-2, -0x1.088766p-1, -0x1.e8c792p0, 0x1.d268cap0, 0x1.34e244p-4, -0x1.dd6f2cp0, 0x1.5893dcp0, 0x1.cb97d4p0, 0x1.e6500cp-1, 0x1.d58cbap-1, 0x1.fda78p-1, -0x1.81c458p-1, -0x1.0c70e8p0, 0x1.6eff06p-2, 0x1.78ea86p-1, -0x1.fc2b04p0, -0x1.766656p0, -0x1.fe6b4p-1, 0x1.aedcf4p0, 0x1.5e97bp-4, 0x1.02af6ap-1, -0x1.2205e8p-2, -0x1.acf064p-2, 0x1.18423ap0, 0x1.c89b18p0, 0x1.d4523ap-3, -0x1.ab479ep0, -0x1.866c38p0, 0x1.f093d2p0, 0x1.c5d148p-1, -0x1.2d6e8cp-1, 0x1.8bae94p-1, -0x1.3ba926p0, 0x1.52e4dap0, 0x1.63078ep0, 0x1.71f56ap-3, -0x1.0862aap0, 0x1.1304ap-1, 0x1.57f26ep-3, 0x1.80d24ap0, -0x1.3d6f12p0, 0x1.ad2adap-3, 0x1.69e3a4p0, 0x1.78e75ep0, -0x1.eb21a8p0, -0x1.8e1b9cp0, -0x1.bc7f5ap0, 0x1.207456p-2, 0x1.c9e2e2p-1, -0x1.1f569p0, -0x1.21e528p0, -0x1.2f8288p-4, -0x1.8d6d9cp-3, -0x1.e91bd4p0, 0x1.be1d32p0, 0x1.8c6fp0, 0x1.eb0704p0, 0x1.87ffeep-1, 0x1.1e8a56p-1, 0x1.5d73c4p-2, -0x1.5a715p-1, 0x1.b4eb5p-3, -0x1.3c38dep-3, -0x1.2c213ap0, 0x1.3160e6p-1, 0x1.5fe992p-2, -0x1.818994p-1, 0x1.188124p0, -0x1.b3a412p-1, 0x1.9f33aep-1, 0x1.dc61bp-2, -0x1.4342ccp0, -0x1.16c49ep0, -0x1.f25fbp-1, -0x1.1e212ep-2, -0x1.c589e8p0, 0x1.756706p-1, 0x1.265534p0, 0x1.e78382p-1, 0x1.9058cap-2, -0x1.a276b2p0, 0x1.904ebep-5, -0x1.101638p-1, -0x1.5b340ep-1, 0x1.87712cp-1, 0x1.07bb86p0, -0x1.15ab48p0, -0x1.2685c8p-1, 0x1.8f74aap-2, -0x1.fe6514p-4, -0x1.04d37p0, 0x1.29da3p-1, -0x1.74d7ecp0, -0x1.70ecccp-1, -0x1.9fffc2p0, -0x1.b7c30ap0, 0x1.87e5ap0, 0x1.e1004p0, 0x1.8730ecp-1, -0x1.94ef18p0, -0x1.f7c1c4p-1, -0x1.6036ap-1, 0x1.cb4578p-7, -0x1.4c876ep0, -0x1.3b1226p-1, 0x1.ee491ap0, -0x1.4e51a4p-12, 0x1.20cea8p-6, 0x1.635378p-1, 0x1.99c9d8p-1, 0x1.da0b6ep-2, 0x1.4132e8p-4, 0x1.56c47p0, 0x1.351df2p-1, -0x1.6aa98p0, -0x1.2c39fp-3, 0x1.d01ea8p0, -0x1.e4a56ap-2, 0x1.7a20aep0, -0x1.4e33eap0, -0x1.871458p-1, -0x1.008976p-1, -0x1.785216p0, -0x1.7c4106p0, 0x1.79a83p0, 0x1.c342cep-1, 0x1.b13412p0, -0x1.e92182p0, -0x1.21c042p0, 0x1.9f216cp-3, 0x1.f286b6p0, 0x1.c1aef4p0, -0x1.38f3dep0, -0x1.fc8p0, 0x1.d5c9b8p0, -0x1.6634dap-2, -0x1.75aba2p-3, 0x1.642a76p-1, 0x1.e74f3cp-1, 0x1.073be8p-3, -0x1.ac1eb4p0, 0x1.7f1202p0, -0x1.3426fep-1, -0x1.1477b8p0, 0x1.5f911p0, -0x1.70fb98p-2, 0x1.85e01ap-1, -0x1.ff561ep0, -0x1.ed3144p-1, 0x1.d8aa8p-2, 0x1.582ef6p-2, 0x1.63151cp0, -0x1.9114fcp0, -0x1.c4f444p-1, -0x1.e2e51ap0, -0x1.c962d8p-3, -0x1.78c278p-3, 0x1.1b5c4ap0, -0x1.6efe36p0, 0x1.51ef24p0, -0x1.7176d8p-1, -0x1.2a164p0, 0x1.e27e9ep-1, -0x1.78ca04p-5, -0x1.95676cp0, 0x1.de7aecp-3, -0x1.b4c0a2p0, 0x1.a5a87ep-3, 0x1.10ad7ap0, 0x1.db118ap-4, 0x1.ebde66p-1, 0x1.693ab2p0, 0x1.8dd474p0, -0x1.78e622p-2, -0x1.336de6p-4, 0x1.e4f9e4p0, -0x1.5b57d6p-2, -0x1.5d7148p0, 0x1.02b0bep-1, 0x1.01446p-5, -0x1.dc0b34p0, 0x1.53ed82p0, 0x1.970d3ep-2, 0x1.5087eap0, -0x1.3509e4p-6, -0x1.f1c08ep-1, 0x1.261d3cp-2, 0x1.39f1dp0, 0x1.010e46p0, -0x1.ba043p0, 0x1.f8a68ep-2, -0x1.6775a2p-2, 0x1.29f526p0, 0x1.2a713ep0, 0x1.004e62p0, -0x1.3408eep-3, -0x1.76034cp0, -0x1.52f284p0, -0x1.d74542p-4, -0x1.029f82p0, 0x1.e833ep-1, -0x1.efb3bp-1, 0x1.16ca3p-1, -0x1.4440a2p-1, 0x1.3b599p0, -0x1.a348c2p-2, 0x1.f289d2p0, 0x1.fbc35cp0, -0x1.aafdbcp-1, -0x1.f1d32p-2, 0x1.69e6fcp-3, 0x1.642a02p-1, 0x1.b91f2ep-1, -0x1.052bdp-1, -0x1.a4dc62p-1, 0x1.573f7cp0, 0x1.d4e09ap-1, 0x1.b085d8p0, -0x1.d4625ep0, -0x1.b65c08p0, -0x1.f1ea32p-2, 0x1.68adap-1, 0x1.7c0a04p0, -0x1.d93b6ap-1, 0x1.bc4018p-4, -0x1.7ebbbep-2, -0x1.ffa4bp0, 0x1.84943cp0, -0x1.c5619ep-1, -0x1.35dd8cp-2, -0x1.593e84p-4, -0x1.05a88ap-1, 0x1.b63908p-5, 0x1.83452cp-1, 0x1.3402b8p0, 0x1.a96bdcp0, 0x1.da6f12p0, -0x1.1cfe84p-1, 0x1.083a2cp0, -0x1.79a228p-1, -0x1.6a3c6p0, -0x1.95151ap-2, -0x1.53c774p0, 0x1.0672dap-7, -0x1.1c63d8p-2, -0x1.a5b8e4p-2, -0x1.f72fp-1, -0x1.ee59c4p-2, 0x1.9aa7d8p0, -0x1.57b79p-1, -0x1.610a0ap-1, 0x1.552b1ap0, 0x1.3e2506p-1, 0x1.13b5a2p-2, -0x1.4c7cb4p0, -0x1.8c83ep0, -0x1.5c96p0, -0x1.68adcp-1, 0x1.78554ap0, -0x1.702b6p0, 0x1.9d20e8p0, -0x1.d255cap-2, 0x1.04341cp0, -0x1.e5b57p-1, -0x1.a26f26p-1, 0x1.a815a8p-1, 0x1.55d016p-3, -0x1.e60b8ep-1, -0x1.f3b7f4p0, 0x1.6b2e76p0, -0x1.856fd4p0, 0x1.52daf4p-1, 0x1.101132p0, -0x1.4dc11ap0, 0x1.87244ep0, -0x1.d54c6p-1, 0x1.6b8f8ap0, 0x1.d8c4f4p-1, -0x1.58fc2ep-2, -0x1.b9be9ep0, -0x1.a1a0dep0, -0x1.b635d4p0, -0x1.43c8p-1, -0x1.8d6502p-1, -0x1.e72df8p0, 0x1.16eeeap0, 0x1.e551dap-2, 0x1.b26972p0, 0x1.3bad4cp-5, 0x1.60d1dap0, -0x1.67cfa4p0, -0x1.3f30ccp0, -0x1.981328p0, -0x1.466442p0, -0x1.e5f42p-3, 0x1.abadeep0, -0x1.5946cp0, 0x1.7fa2bep0, -0x1.7c5d22p-3, -0x1.7bb794p0, -0x1.3b515p-1, 0x1.ed090ap0, -0x1.fa1dap0, 0x1.19c73ep-4, 0x1.c9ab4p-1, -0x1.ea28ecp0, -0x1.781394p-2, -0x1.b21ee6p-1, -0x1.67a21cp-1, 0x1.589922p0, 0x1.70e676p-5, -0x1.98478cp0, -0x1.0c53f4p0, -0x1.02f796p0, 0x1.12cb8ep0, 0x1.ba8592p-1, -0x1.d3203ap-1, 0x1.aa519ep-5, -0x1.f6e76ep0, 0x1.38a22p-1, 0x1.879644p0, -0x1.502a48p-1, 0x1.09c18ep-1, 0x1.cc49ccp0, 0x1.c09a6cp0, 0x1.45fcdap0, 0x1.5293eap0, 0x1.5766d6p0 };
l_struct_OC_k2c_tensor keras_dense_71_test1 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_71_test2 __ATTRIBUTE_WEAK__;
float c_dense_71_test6_array[1];
float test7_dense_69_input_input_array[399] = { 0x1.1e8974p-2, -0x1.20b846p-1, 0x1.05671ap0, 0x1.e4cf3p-3, 0x1.38af74p0, 0x1.279ff4p-1, 0x1.caf92ep0, 0x1.383fb6p0, -0x1.ee7f8cp-9, 0x1.e9ac2ap0, -0x1.3e217ep-5, 0x1.fd3d1cp0, -0x1.44cdfep0, -0x1.eff554p0, 0x1.c6902ep-4, 0x1.c90ba6p-3, -0x1.3469e4p-3, 0x1.6826fp0, -0x1.eb4f46p-1, 0x1.ff4dbep0, 0x1.08bd08p0, 0x1.36efdep0, -0x1.c04318p0, -0x1.b26078p0, 0x1.4acaa4p0, -0x1.41faeap-2, -0x1.1bac4cp-1, 0x1.518544p-6, 0x1.27c904p-1, -0x1.2c3c3cp0, -0x1.050c24p0, -0x1.85a67cp0, 0x1.fc972cp0, 0x1.312db6p0, -0x1.581a28p-1, -0x1.d43976p-2, 0x1.02c57p-1, -0x1.e9b1bcp-1, 0x1.cd06dcp-1, 0x1.09d35ap-1, 0x1.fe84b6p-1, 0x1.fc700ap-1, -0x1.aa61a2p-2, 0x1.04c8bp-1, 0x1.a0195p0, 0x1.ea0e8p0, -0x1.fde184p0, 0x1.47d122p0, -0x1.e2afe8p0, -0x1.28ca7cp-2, 0x1.91bc14p0, -0x1.e9ba4ep-1, -0x1.57fbb8p0, 0x1.2ff224p-1, -0x1.43de26p0, -0x1.f76802p0, 0x1.157a34p0, 0x1.3b12b2p0, -0x1.b41b0ep0, -0x1.a758cep-1, -0x1.b054a6p0, -0x1.18266ap0, -0x1.ca56b8p0, -0x1.8d0064p0, 0x1.ca4d74p0, -0x1.bc09d6p0, 0x1.b5d374p-1, 0x1.9df64cp-1, 0x1.d7bc0cp0, 0x1.da4f86p0, 0x1.4226aap-1, -0x1.cf2ccep0, -0x1.c83674p0, 0x1.bed106p-2, 0x1.1fa8fep0, -0x1.64d8bp-1, 0x1.0a245cp0, -0x1.4dadbcp0, -0x1.54b9f6p-1, -0x1.0b48e4p0, -0x1.b412ap0, 0x1.c303e8p-1, 0x1.3aade4p0, 0x1.ef519ep0, 0x1.8a50dap-3, 0x1.fb8ac6p-3, -0x1.64aadep0, -0x1.a8a0bp0, -0x1.14117ap-1, -0x1.90437ep0, 0x1.9f1f16p0, 0x1.efbd58p-1, 0x1.f42012p0, -0x1.7b2a6ep-2, -0x1.9ab20cp0, 0x1.73d83cp-1, 0x1.bcf4ep0, 0x1.fa52f6p0, -0x1.ecb358p0, 0x1.19c52ap0, -0x1.8fd946p0, -0x1.de952ep-5, 0x1.2e1676p0, 0x1.78e636p-2, 0x1.c1605ap0, 0x1.6d0798p0, 0x1.834dc8p0, 0x1.fbff78p-3, 0x1.51fb9ap0, -0x1.588414p-2, -0x1.56a78ep-1, 0x1.fefa98p0, 0x1.2e4078p0, 0x1.6799eap-1, -0x1.b3d53cp0, -0x1.dcd6bap-2, 0x1.28b65ep-1, -0x1.b9d646p-2, -0x1.b2f142p0, 0x1.5b19b2p-1, 0x1.6651aap-1, 0x1.260458p0, 0x1.bf54b6p-7, 0x1.8a7e24p-2, 0x1.2999b8p-1, -0x1.2572bep-1, 0x1.0422d2p0, -0x1.803756p0, 0x1.cedd98p0, 0x1.4df858p-1, 0x1.1ee2aep0, 0x1.f31d18p-1, -0x1.fa4e62p0, 0x1.93cd64p0, -0x1.605514p-1, 0x1.0d576cp0, 0x1.010db4p0, 0x1.6214d4p-1, 0x1.e0cb94p-2, -0x1.fdaefap0, -0x1.ece798p-1, 0x1.421ce8p0, 0x1.73c44p0, 0x1.602862p-2, -0x1.50279ap-3, 0x1.2e6a42p0, -0x1.dc9c58p0, 0x1.f412c4p-3, -0x1.bec122p-1, -0x1.9f4d68p-3, -0x1.be9d5ep-1, 0x1.d82a6cp-1, -0x1.db8e8ep-2, 0x1.c3c8d8p0, -0x1.42d506p-1, -0x1.0c58b2p-2, 0x1.f5e472p0, -0x1.1e404cp0, 0x1.c9582ap0, -0x1.c56f06p-1, -0x1.b77f4p0, 0x1.52d9c6p-2, -0x1.7b4456p0, -0x1.21d3bep0, -0x1.1c021p0, -0x1.341d9cp-1, -0x1.056212p-4, -0x1.ae159p0, -0x1.ec2c12p-2, -0x1.c91e24p-2, 0x1.0f07bcp-4, -0x1.d4e0f4p-1, -0x1.3a0048p0, -0x1.9fccb8p0, -0x1.56f45ep-4, -0x1.6c5c12p0, 0x1.e35082p-1, 0x1.b0dcaap-3, 0x1.58d982p-6, 0x1.279dfp0, -0x1.31cdb4p-1, 0x1.8e179ap0, -0x1.9e5288p-2, 0x1.1e9c22p-1, -0x1.124f28p0, 0x1.10a01cp-2, 0x1.ad014p0, -0x1.d1674cp-1, -0x1.25a4a4p-1, -0x1.70e2a2p-3, -0x1.50c304p-1, 0x1.5da69cp-1, -0x1.65a108p0, -0x1.32cd7ep-3, 0x1.6e0aa2p-1, -0x1.63781ep0, -0x1.21abap0, -0x1.bf8998p0, 0x1.b5abd6p-2, 0x1.1f0a2ap0, -0x1.57ef0ap-2, 0x1.69183ap-1, -0x1.c445ecp0, 0x1.66e472p0, 0x1.08250cp0, -0x1.3fbdcap-3, 0x1.023732p-3, -0x1.f67428p-1, 0x1.23b90ap0, 0x1.e0846cp-1, 0x1.83210ep-3, 0x1.106e3p-2, 0x1.a76a7ep-1, -0x1.e9cc9ep-2, -0x1.efbb7ep-1, -0x1.1f9268p0, 0x1.447bp-1, 0x1.a06ceep-1, -0x1.4f7d4ap0, -0x1.036b3p0, 0x1.4c23cep-1, -0x1.9a216p-3, 0x1.4f95ap0, 0x1.25c948p-1, -0x1.ce5732p-2, 0x1.17f61p0, -0x1.6dd156p-2, 0x1.2d3dc8p0, -0x1.539038p-6, -0x1.2fd66ap0, -0x1.003b98p-2, 0x1.c4a994p0, 0x1.53136ap-2, 0x1.191926p-1, 0x1.74fe28p-2, 0x1.2551fp-1, 0x1.3e3994p0, -0x1.0b6518p0, -0x1.777ca2p-3, -0x1.49b412p0, 0x1.7091dp0, -0x1.f5137p-4, 0x1.3c882p-2, -0x1.81ca42p-1, 0x1.156744p0, -0x1.38859cp-1, -0x1.5305f8p-4, -0x1.806b1ap-2, -0x1.8e729ap0, -0x1.8d8742p-1, 0x1.534ddep0, 0x1.42adap0, -0x1.5bf5f2p-2, 0x1.e54a36p0, 0x1.ed3b14p-2, 0x1.793c2ap0, 0x1.35e9fp-1, 0x1.40e2bp0, -0x1.a7e33cp0, -0x1.278644p0, -0x1.50230cp0, -0x1.29de24p-1, -0x1.a3207cp-1, 0x1.3fbffcp-1, 0x1.f82da6p0, 0x1.868604p0, -0x1.e4f29ap0, 0x1.8cc09p-1, 0x1.9f8816p0, -0x1.b0368ep-1, 0x1.e8609cp-1, 0x1.765f1cp0, -0x1.871fe2p0, 0x1.728444p-1, 0x1.514608p-2, 0x1.d9270cp0, -0x1.1bea2ap0, -0x1.c4e6a6p-3, -0x1.31e36cp0, -0x1.dbdc7p-1, 0x1.41efbcp0, 0x1.883f9ep0, 0x1.7f23fp0, 0x1.699a78p-2, 0x1.cbf9a6p-1, -0x1.7ed1b4p0, -0x1.744df6p-1, -0x1.ea3ed4p-2, 0x1.a52f4p-1, -0x1.bc2f92p-1, 0x1.8ffeacp0, -0x1.fb130cp0, 0x1.4f28aep-5, 0x1.2ea8a8p-5, -0x1.54dd2cp-2, -0x1.2eb71ap-2, -0x1.71cf12p-3, -0x1.ce94dep0, 0x1.4b35e8p-1, -0x1.7c946cp-1, 0x1.83dc42p0, -0x1.f303e4p0, -0x1.f7431cp0, 0x1.1771fcp-2, -0x1.d23ed6p-3, 0x1.cafabcp0, 0x1.a9f31cp0, 0x1.b04dbap-2, 0x1.670c54p0, -0x1.7e793cp-4, 0x1.7da702p0, 0x1.3d19bp0, -0x1.d8bcb2p0, 0x1.720272p-1, 0x1.9a6bbep0, 0x1.c7cf86p-2, 0x1.a4b956p-2, -0x1.afe034p-8, 0x1.55bf62p-1, -0x1.149334p0, -0x1.e27bc2p-1, 0x1.dad774p0, 0x1.414b8cp0, -0x1.c9a78p-1, 0x1.fbb434p-1, 0x1.e3d38cp0, -0x1.eac976p0, -0x1.b7a52cp-1, 0x1.79b2c8p-1, -0x1.c9527ep0, 0x1.c80c94p0, -0x1.c337aap0, 0x1.da88fap-2, -0x1.da58cep-4, 0x1.00b5bp0, -0x1.cfb252p-3, -0x1.55528ep-2, -0x1.1b8872p-1, 0x1.f63294p0, -0x1.c59d8cp0, 0x1.267422p0, -0x1.887f2p0, 0x1.5f99bap-1, -0x1.9e375ep-1, 0x1.d8762ap0, -0x1.f02b6ap0, -0x1.8724dp-1, 0x1.d98976p0, -0x1.a22b7cp0, 0x1.f25542p0, -0x1.d12cbep0, 0x1.8b2d9cp-1, 0x1.e02284p0, 0x1.bb96b2p0, 0x1.a1520ap0, -0x1.eaafdap-1, 0x1.b32544p-1, -0x1.e746fep-1, -0x1.594e46p0, 0x1.bf2e9ap-4, 0x1.4a1508p0, -0x1.25705p-1, 0x1.88b7c8p0, 0x1.cef136p0, -0x1.318a7ep0, -0x1.92e404p-2, 0x1.1c85d2p0, 0x1.030fc8p-2, 0x1.2f809ep-1, 0x1.fe98dap0, -0x1.731f58p-1, -0x1.f5d5b8p-2, 0x1.1a4bd6p0, -0x1.385b0cp0, -0x1.bd52d8p0, 0x1.e4819ep-1, -0x1.ffd4bep-1, 0x1.cab422p0, 0x1.66eda8p0, 0x1.6de97ap0, 0x1.398f7p-1, -0x1.141bap0, 0x1.8ec022p0, 0x1.a49d4ep-3, 0x1.041242p-1, 0x1.aa9ba8p0, 0x1.4772eep0, 0x1.e2348ep0, 0x1.9ec2a4p0, 0x1.a8fec2p0, 0x1.6d53cp-1, 0x1.0fae74p0, -0x1.3046f8p-1, -0x1.01b58ap0, 0x1.4ed27p0, 0x1.236dap0, 0x1.f8008ap-2, -0x1.f41448p0, -0x1.556952p-2 };
l_struct_OC_k2c_tensor keras_dense_71_test3 __ATTRIBUTE_WEAK__;
float c_dense_71_test10_array[1];
static  char aesl_internal__OC_str[35] = "Average time over 10 tests: %e s \n";
l_struct_OC_k2c_tensor test10_dense_69_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_71_test8 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_71_test8 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_71_test10 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_71_test9 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test9_dense_69_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_71_test9 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_71_test6 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test5_dense_69_input_input __ATTRIBUTE_WEAK__;
static  char aesl_internal__OC_str1[38] = "Max absolute error for 10 tests: %e \n";
l_struct_OC_k2c_tensor keras_dense_71_test5 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test7_dense_69_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_71_test4 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_71_test6 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_71_test4 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_71_test5 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_71_test10 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test6_dense_69_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_71_test7 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_71_test7 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test8_dense_69_input_input __ATTRIBUTE_WEAK__;


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

void test_array_initialize(void) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge59_count = 0;
  unsigned long long llvm_cbe_storemerge59;
  unsigned long long llvm_cbe_storemerge59__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  float *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  float llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  float *llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  unsigned long long llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond68_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  float llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  float llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge356_count = 0;
  unsigned long long llvm_cbe_storemerge356;
  unsigned long long llvm_cbe_storemerge356__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  float *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  float llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  float *llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  unsigned long long llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond67_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  float llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  float llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge653_count = 0;
  unsigned long long llvm_cbe_storemerge653;
  unsigned long long llvm_cbe_storemerge653__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  float *llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  float llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  float *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  unsigned long long llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond66_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  float llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  float llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge950_count = 0;
  unsigned long long llvm_cbe_storemerge950;
  unsigned long long llvm_cbe_storemerge950__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  float *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  float llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  float *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  unsigned long long llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond65_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  float llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  float llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1247_count = 0;
  unsigned long long llvm_cbe_storemerge1247;
  unsigned long long llvm_cbe_storemerge1247__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  float *llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  float llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  float *llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  unsigned long long llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond64_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  float llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  float llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1544_count = 0;
  unsigned long long llvm_cbe_storemerge1544;
  unsigned long long llvm_cbe_storemerge1544__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  float *llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  float llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  float *llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  unsigned long long llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond63_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  float llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  float llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1841_count = 0;
  unsigned long long llvm_cbe_storemerge1841;
  unsigned long long llvm_cbe_storemerge1841__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  float *llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  float llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  float *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  unsigned long long llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond62_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  float llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  float llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2138_count = 0;
  unsigned long long llvm_cbe_storemerge2138;
  unsigned long long llvm_cbe_storemerge2138__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  float *llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  float llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  float *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  unsigned long long llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond61_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  float llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  float llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2435_count = 0;
  unsigned long long llvm_cbe_storemerge2435;
  unsigned long long llvm_cbe_storemerge2435__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  float *llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  float llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  float *llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  unsigned long long llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond60_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  float llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  float llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2732_count = 0;
  unsigned long long llvm_cbe_storemerge2732;
  unsigned long long llvm_cbe_storemerge2732__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  float *llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  float llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  float *llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  unsigned long long llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  float llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  float llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @test_array_initialize\n");
  llvm_cbe_storemerge59__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__61;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__61:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge59 = phi i64 [ 0, %%0 ], [ %%5, %%1  for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_storemerge59_count);
  llvm_cbe_storemerge59 = (unsigned long long )llvm_cbe_storemerge59__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge59 = 0x%I64X",llvm_cbe_storemerge59);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__4);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [399 x float]* @test1_dense_69_input_input_array, i64 0, i64 %%storemerge59, !dbg !13 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_7_count);
  llvm_cbe_tmp__1 = (float *)(&test1_dense_69_input_input_array[(((signed long long )llvm_cbe_storemerge59))
#ifdef AESL_BC_SIM
 % 399
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge59 = 0x%I64X",((signed long long )llvm_cbe_storemerge59));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge59) < 399)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test1_dense_69_input_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = load float* %%2, align 4, !dbg !13 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_8_count);
  llvm_cbe_tmp__2 = (float )*llvm_cbe_tmp__1;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__2, *(int*)(&llvm_cbe_tmp__2));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.k2c_tensor* @test1_dense_69_input_input, i64 0, i32 0, i64 %%storemerge59, !dbg !13 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_9_count);
  llvm_cbe_tmp__3 = (float *)(&test1_dense_69_input_input.field0[(((signed long long )llvm_cbe_storemerge59))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge59 = 0x%I64X",((signed long long )llvm_cbe_storemerge59));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%3, float* %%4, align 4, !dbg !13 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_10_count);
  *llvm_cbe_tmp__3 = llvm_cbe_tmp__2;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = add i64 %%storemerge59, 1, !dbg !13 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_11_count);
  llvm_cbe_tmp__4 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge59&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__4&18446744073709551615ull)));
  if (((llvm_cbe_tmp__4&18446744073709551615ULL) == (399ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__62;
  } else {
    llvm_cbe_storemerge59__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__4;   /* for PHI node */
    goto llvm_cbe_tmp__61;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__62:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_69_input_input, i64 0, i32 1), align 8, !dbg !13 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_18_count);
  *((&test1_dense_69_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_69_input_input, i64 0, i32 2), align 8, !dbg !13 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_19_count);
  *((&test1_dense_69_input_input.field2)) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_69_input_input, i64 0, i32 3, i64 0), align 8, !dbg !13 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_20_count);
  *((&test1_dense_69_input_input.field3[(((signed long long )0ull))])) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_69_input_input, i64 0, i32 3, i64 1), align 8, !dbg !13 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_21_count);
  *((&test1_dense_69_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_69_input_input, i64 0, i32 3, i64 2), align 8, !dbg !13 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_22_count);
  *((&test1_dense_69_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_69_input_input, i64 0, i32 3, i64 3), align 8, !dbg !13 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_23_count);
  *((&test1_dense_69_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_69_input_input, i64 0, i32 3, i64 4), align 8, !dbg !13 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_24_count);
  *((&test1_dense_69_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load float* getelementptr inbounds ([1 x float]* @keras_dense_71_test1_array, i64 0, i64 0), align 4, !dbg !14 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__5 = (float )*((&keras_dense_71_test1_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__5, *(int*)(&llvm_cbe_tmp__5));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%7, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test1, i64 0, i32 0, i64 0), align 8, !dbg !14 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_31_count);
  *((&keras_dense_71_test1.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__5;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test1, i64 0, i32 1), align 8, !dbg !14 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_37_count);
  *((&keras_dense_71_test1.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test1, i64 0, i32 2), align 8, !dbg !14 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_38_count);
  *((&keras_dense_71_test1.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test1, i64 0, i32 3, i64 0), align 8, !dbg !14 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_39_count);
  *((&keras_dense_71_test1.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test1, i64 0, i32 3, i64 1), align 8, !dbg !15 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_40_count);
  *((&keras_dense_71_test1.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test1, i64 0, i32 3, i64 2), align 8, !dbg !15 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_41_count);
  *((&keras_dense_71_test1.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test1, i64 0, i32 3, i64 3), align 8, !dbg !15 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_42_count);
  *((&keras_dense_71_test1.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test1, i64 0, i32 3, i64 4), align 8, !dbg !15 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_43_count);
  *((&keras_dense_71_test1.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* getelementptr inbounds ([1 x float]* @c_dense_71_test1_array, i64 0, i64 0), align 4, !dbg !15 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__6 = (float )*((&c_dense_71_test1_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__6, *(int*)(&llvm_cbe_tmp__6));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%8, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test1, i64 0, i32 0, i64 0), align 8, !dbg !15 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_50_count);
  *((&c_dense_71_test1.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__6;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test1, i64 0, i32 1), align 8, !dbg !16 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_56_count);
  *((&c_dense_71_test1.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test1, i64 0, i32 2), align 8, !dbg !16 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_57_count);
  *((&c_dense_71_test1.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test1, i64 0, i32 3, i64 0), align 8, !dbg !16 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_58_count);
  *((&c_dense_71_test1.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test1, i64 0, i32 3, i64 1), align 8, !dbg !16 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_59_count);
  *((&c_dense_71_test1.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test1, i64 0, i32 3, i64 2), align 8, !dbg !16 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_60_count);
  *((&c_dense_71_test1.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test1, i64 0, i32 3, i64 3), align 8, !dbg !16 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_61_count);
  *((&c_dense_71_test1.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test1, i64 0, i32 3, i64 4), align 8, !dbg !16 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_62_count);
  *((&c_dense_71_test1.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge356__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__63;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__63:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge356 = phi i64 [ 0, %%6 ], [ %%13, %%9  for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_storemerge356_count);
  llvm_cbe_storemerge356 = (unsigned long long )llvm_cbe_storemerge356__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge356 = 0x%I64X",llvm_cbe_storemerge356);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__10);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [399 x float]* @test2_dense_69_input_input_array, i64 0, i64 %%storemerge356, !dbg !17 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_69_count);
  llvm_cbe_tmp__7 = (float *)(&test2_dense_69_input_input_array[(((signed long long )llvm_cbe_storemerge356))
#ifdef AESL_BC_SIM
 % 399
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge356 = 0x%I64X",((signed long long )llvm_cbe_storemerge356));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge356) < 399)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test2_dense_69_input_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load float* %%10, align 4, !dbg !17 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__8 = (float )*llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__8, *(int*)(&llvm_cbe_tmp__8));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.k2c_tensor* @test2_dense_69_input_input, i64 0, i32 0, i64 %%storemerge356, !dbg !17 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__9 = (float *)(&test2_dense_69_input_input.field0[(((signed long long )llvm_cbe_storemerge356))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge356 = 0x%I64X",((signed long long )llvm_cbe_storemerge356));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%11, float* %%12, align 4, !dbg !17 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_72_count);
  *llvm_cbe_tmp__9 = llvm_cbe_tmp__8;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add i64 %%storemerge356, 1, !dbg !17 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__10 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge356&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__10&18446744073709551615ull)));
  if (((llvm_cbe_tmp__10&18446744073709551615ULL) == (399ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__64;
  } else {
    llvm_cbe_storemerge356__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__10;   /* for PHI node */
    goto llvm_cbe_tmp__63;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__64:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_69_input_input, i64 0, i32 1), align 8, !dbg !17 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_80_count);
  *((&test2_dense_69_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_69_input_input, i64 0, i32 2), align 8, !dbg !17 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_81_count);
  *((&test2_dense_69_input_input.field2)) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_69_input_input, i64 0, i32 3, i64 0), align 8, !dbg !17 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_82_count);
  *((&test2_dense_69_input_input.field3[(((signed long long )0ull))])) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_69_input_input, i64 0, i32 3, i64 1), align 8, !dbg !17 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_83_count);
  *((&test2_dense_69_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_69_input_input, i64 0, i32 3, i64 2), align 8, !dbg !17 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_84_count);
  *((&test2_dense_69_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_69_input_input, i64 0, i32 3, i64 3), align 8, !dbg !17 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_85_count);
  *((&test2_dense_69_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_69_input_input, i64 0, i32 3, i64 4), align 8, !dbg !17 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_86_count);
  *((&test2_dense_69_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load float* getelementptr inbounds ([1 x float]* @keras_dense_71_test2_array, i64 0, i64 0), align 4, !dbg !18 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_92_count);
  llvm_cbe_tmp__11 = (float )*((&keras_dense_71_test2_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__11, *(int*)(&llvm_cbe_tmp__11));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%15, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test2, i64 0, i32 0, i64 0), align 8, !dbg !18 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_93_count);
  *((&keras_dense_71_test2.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__11;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test2, i64 0, i32 1), align 8, !dbg !18 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_99_count);
  *((&keras_dense_71_test2.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test2, i64 0, i32 2), align 8, !dbg !18 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_100_count);
  *((&keras_dense_71_test2.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test2, i64 0, i32 3, i64 0), align 8, !dbg !18 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_101_count);
  *((&keras_dense_71_test2.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test2, i64 0, i32 3, i64 1), align 8, !dbg !18 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_102_count);
  *((&keras_dense_71_test2.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test2, i64 0, i32 3, i64 2), align 8, !dbg !19 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_103_count);
  *((&keras_dense_71_test2.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test2, i64 0, i32 3, i64 3), align 8, !dbg !19 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_104_count);
  *((&keras_dense_71_test2.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test2, i64 0, i32 3, i64 4), align 8, !dbg !19 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_105_count);
  *((&keras_dense_71_test2.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load float* getelementptr inbounds ([1 x float]* @c_dense_71_test2_array, i64 0, i64 0), align 4, !dbg !19 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_111_count);
  llvm_cbe_tmp__12 = (float )*((&c_dense_71_test2_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__12, *(int*)(&llvm_cbe_tmp__12));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%16, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test2, i64 0, i32 0, i64 0), align 8, !dbg !19 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_112_count);
  *((&c_dense_71_test2.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test2, i64 0, i32 1), align 8, !dbg !19 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_118_count);
  *((&c_dense_71_test2.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test2, i64 0, i32 2), align 8, !dbg !20 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_119_count);
  *((&c_dense_71_test2.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test2, i64 0, i32 3, i64 0), align 8, !dbg !20 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_120_count);
  *((&c_dense_71_test2.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test2, i64 0, i32 3, i64 1), align 8, !dbg !20 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_121_count);
  *((&c_dense_71_test2.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test2, i64 0, i32 3, i64 2), align 8, !dbg !20 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_122_count);
  *((&c_dense_71_test2.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test2, i64 0, i32 3, i64 3), align 8, !dbg !20 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_123_count);
  *((&c_dense_71_test2.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test2, i64 0, i32 3, i64 4), align 8, !dbg !20 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_124_count);
  *((&c_dense_71_test2.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge653__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__65;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__65:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge653 = phi i64 [ 0, %%14 ], [ %%21, %%17  for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_storemerge653_count);
  llvm_cbe_storemerge653 = (unsigned long long )llvm_cbe_storemerge653__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge653 = 0x%I64X",llvm_cbe_storemerge653);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__16);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [399 x float]* @test3_dense_69_input_input_array, i64 0, i64 %%storemerge653, !dbg !20 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_131_count);
  llvm_cbe_tmp__13 = (float *)(&test3_dense_69_input_input_array[(((signed long long )llvm_cbe_storemerge653))
#ifdef AESL_BC_SIM
 % 399
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge653 = 0x%I64X",((signed long long )llvm_cbe_storemerge653));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge653) < 399)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test3_dense_69_input_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load float* %%18, align 4, !dbg !20 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_132_count);
  llvm_cbe_tmp__14 = (float )*llvm_cbe_tmp__13;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__14, *(int*)(&llvm_cbe_tmp__14));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds %%struct.k2c_tensor* @test3_dense_69_input_input, i64 0, i32 0, i64 %%storemerge653, !dbg !20 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_133_count);
  llvm_cbe_tmp__15 = (float *)(&test3_dense_69_input_input.field0[(((signed long long )llvm_cbe_storemerge653))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge653 = 0x%I64X",((signed long long )llvm_cbe_storemerge653));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%19, float* %%20, align 4, !dbg !20 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_134_count);
  *llvm_cbe_tmp__15 = llvm_cbe_tmp__14;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add i64 %%storemerge653, 1, !dbg !21 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_135_count);
  llvm_cbe_tmp__16 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge653&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__16&18446744073709551615ull)));
  if (((llvm_cbe_tmp__16&18446744073709551615ULL) == (399ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__66;
  } else {
    llvm_cbe_storemerge653__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__16;   /* for PHI node */
    goto llvm_cbe_tmp__65;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__66:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_69_input_input, i64 0, i32 1), align 8, !dbg !21 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_142_count);
  *((&test3_dense_69_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_69_input_input, i64 0, i32 2), align 8, !dbg !21 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_143_count);
  *((&test3_dense_69_input_input.field2)) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_69_input_input, i64 0, i32 3, i64 0), align 8, !dbg !21 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_144_count);
  *((&test3_dense_69_input_input.field3[(((signed long long )0ull))])) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_69_input_input, i64 0, i32 3, i64 1), align 8, !dbg !21 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_145_count);
  *((&test3_dense_69_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_69_input_input, i64 0, i32 3, i64 2), align 8, !dbg !21 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_146_count);
  *((&test3_dense_69_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_69_input_input, i64 0, i32 3, i64 3), align 8, !dbg !21 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_147_count);
  *((&test3_dense_69_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_69_input_input, i64 0, i32 3, i64 4), align 8, !dbg !21 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_148_count);
  *((&test3_dense_69_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load float* getelementptr inbounds ([1 x float]* @keras_dense_71_test3_array, i64 0, i64 0), align 4, !dbg !22 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_154_count);
  llvm_cbe_tmp__17 = (float )*((&keras_dense_71_test3_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__17, *(int*)(&llvm_cbe_tmp__17));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%23, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test3, i64 0, i32 0, i64 0), align 8, !dbg !22 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_155_count);
  *((&keras_dense_71_test3.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test3, i64 0, i32 1), align 8, !dbg !22 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_161_count);
  *((&keras_dense_71_test3.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test3, i64 0, i32 2), align 8, !dbg !22 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_162_count);
  *((&keras_dense_71_test3.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test3, i64 0, i32 3, i64 0), align 8, !dbg !22 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_163_count);
  *((&keras_dense_71_test3.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test3, i64 0, i32 3, i64 1), align 8, !dbg !22 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_164_count);
  *((&keras_dense_71_test3.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test3, i64 0, i32 3, i64 2), align 8, !dbg !22 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_165_count);
  *((&keras_dense_71_test3.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test3, i64 0, i32 3, i64 3), align 8, !dbg !23 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_166_count);
  *((&keras_dense_71_test3.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test3, i64 0, i32 3, i64 4), align 8, !dbg !23 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_167_count);
  *((&keras_dense_71_test3.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load float* getelementptr inbounds ([1 x float]* @c_dense_71_test3_array, i64 0, i64 0), align 4, !dbg !23 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_173_count);
  llvm_cbe_tmp__18 = (float )*((&c_dense_71_test3_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__18, *(int*)(&llvm_cbe_tmp__18));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%24, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test3, i64 0, i32 0, i64 0), align 8, !dbg !23 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_174_count);
  *((&c_dense_71_test3.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test3, i64 0, i32 1), align 8, !dbg !23 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_180_count);
  *((&c_dense_71_test3.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test3, i64 0, i32 2), align 8, !dbg !23 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_181_count);
  *((&c_dense_71_test3.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test3, i64 0, i32 3, i64 0), align 8, !dbg !24 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_182_count);
  *((&c_dense_71_test3.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test3, i64 0, i32 3, i64 1), align 8, !dbg !24 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_183_count);
  *((&c_dense_71_test3.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test3, i64 0, i32 3, i64 2), align 8, !dbg !24 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_184_count);
  *((&c_dense_71_test3.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test3, i64 0, i32 3, i64 3), align 8, !dbg !24 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_185_count);
  *((&c_dense_71_test3.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test3, i64 0, i32 3, i64 4), align 8, !dbg !24 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_186_count);
  *((&c_dense_71_test3.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge950__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__67;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__67:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge950 = phi i64 [ 0, %%22 ], [ %%29, %%25  for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_storemerge950_count);
  llvm_cbe_storemerge950 = (unsigned long long )llvm_cbe_storemerge950__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge950 = 0x%I64X",llvm_cbe_storemerge950);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__22);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds [399 x float]* @test4_dense_69_input_input_array, i64 0, i64 %%storemerge950, !dbg !24 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_193_count);
  llvm_cbe_tmp__19 = (float *)(&test4_dense_69_input_input_array[(((signed long long )llvm_cbe_storemerge950))
#ifdef AESL_BC_SIM
 % 399
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge950 = 0x%I64X",((signed long long )llvm_cbe_storemerge950));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge950) < 399)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test4_dense_69_input_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load float* %%26, align 4, !dbg !24 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__20 = (float )*llvm_cbe_tmp__19;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__20, *(int*)(&llvm_cbe_tmp__20));
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds %%struct.k2c_tensor* @test4_dense_69_input_input, i64 0, i32 0, i64 %%storemerge950, !dbg !24 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_195_count);
  llvm_cbe_tmp__21 = (float *)(&test4_dense_69_input_input.field0[(((signed long long )llvm_cbe_storemerge950))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge950 = 0x%I64X",((signed long long )llvm_cbe_storemerge950));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%27, float* %%28, align 4, !dbg !24 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_196_count);
  *llvm_cbe_tmp__21 = llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add i64 %%storemerge950, 1, !dbg !25 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_197_count);
  llvm_cbe_tmp__22 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge950&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__22&18446744073709551615ull)));
  if (((llvm_cbe_tmp__22&18446744073709551615ULL) == (399ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__68;
  } else {
    llvm_cbe_storemerge950__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__22;   /* for PHI node */
    goto llvm_cbe_tmp__67;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__68:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_69_input_input, i64 0, i32 1), align 8, !dbg !25 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_204_count);
  *((&test4_dense_69_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_69_input_input, i64 0, i32 2), align 8, !dbg !25 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_205_count);
  *((&test4_dense_69_input_input.field2)) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_69_input_input, i64 0, i32 3, i64 0), align 8, !dbg !25 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_206_count);
  *((&test4_dense_69_input_input.field3[(((signed long long )0ull))])) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_69_input_input, i64 0, i32 3, i64 1), align 8, !dbg !25 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_207_count);
  *((&test4_dense_69_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_69_input_input, i64 0, i32 3, i64 2), align 8, !dbg !25 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_208_count);
  *((&test4_dense_69_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_69_input_input, i64 0, i32 3, i64 3), align 8, !dbg !25 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_209_count);
  *((&test4_dense_69_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_69_input_input, i64 0, i32 3, i64 4), align 8, !dbg !25 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_210_count);
  *((&test4_dense_69_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = load float* getelementptr inbounds ([1 x float]* @keras_dense_71_test4_array, i64 0, i64 0), align 4, !dbg !26 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_216_count);
  llvm_cbe_tmp__23 = (float )*((&keras_dense_71_test4_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__23, *(int*)(&llvm_cbe_tmp__23));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%31, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test4, i64 0, i32 0, i64 0), align 8, !dbg !26 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_217_count);
  *((&keras_dense_71_test4.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__23;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test4, i64 0, i32 1), align 8, !dbg !26 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_223_count);
  *((&keras_dense_71_test4.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test4, i64 0, i32 2), align 8, !dbg !26 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_224_count);
  *((&keras_dense_71_test4.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test4, i64 0, i32 3, i64 0), align 8, !dbg !26 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_225_count);
  *((&keras_dense_71_test4.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test4, i64 0, i32 3, i64 1), align 8, !dbg !26 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_226_count);
  *((&keras_dense_71_test4.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test4, i64 0, i32 3, i64 2), align 8, !dbg !26 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_227_count);
  *((&keras_dense_71_test4.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test4, i64 0, i32 3, i64 3), align 8, !dbg !26 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_228_count);
  *((&keras_dense_71_test4.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test4, i64 0, i32 3, i64 4), align 8, !dbg !27 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_229_count);
  *((&keras_dense_71_test4.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load float* getelementptr inbounds ([1 x float]* @c_dense_71_test4_array, i64 0, i64 0), align 4, !dbg !27 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_235_count);
  llvm_cbe_tmp__24 = (float )*((&c_dense_71_test4_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__24, *(int*)(&llvm_cbe_tmp__24));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%32, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test4, i64 0, i32 0, i64 0), align 8, !dbg !27 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_236_count);
  *((&c_dense_71_test4.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test4, i64 0, i32 1), align 8, !dbg !27 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_242_count);
  *((&c_dense_71_test4.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test4, i64 0, i32 2), align 8, !dbg !27 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_243_count);
  *((&c_dense_71_test4.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test4, i64 0, i32 3, i64 0), align 8, !dbg !27 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_244_count);
  *((&c_dense_71_test4.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test4, i64 0, i32 3, i64 1), align 8, !dbg !28 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_245_count);
  *((&c_dense_71_test4.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test4, i64 0, i32 3, i64 2), align 8, !dbg !28 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_246_count);
  *((&c_dense_71_test4.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test4, i64 0, i32 3, i64 3), align 8, !dbg !28 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_247_count);
  *((&c_dense_71_test4.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test4, i64 0, i32 3, i64 4), align 8, !dbg !28 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_248_count);
  *((&c_dense_71_test4.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge1247__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__69;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__69:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1247 = phi i64 [ 0, %%30 ], [ %%37, %%33  for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_storemerge1247_count);
  llvm_cbe_storemerge1247 = (unsigned long long )llvm_cbe_storemerge1247__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1247 = 0x%I64X",llvm_cbe_storemerge1247);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__28);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds [399 x float]* @test5_dense_69_input_input_array, i64 0, i64 %%storemerge1247, !dbg !28 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__25 = (float *)(&test5_dense_69_input_input_array[(((signed long long )llvm_cbe_storemerge1247))
#ifdef AESL_BC_SIM
 % 399
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1247 = 0x%I64X",((signed long long )llvm_cbe_storemerge1247));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge1247) < 399)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test5_dense_69_input_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = load float* %%34, align 4, !dbg !28 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_256_count);
  llvm_cbe_tmp__26 = (float )*llvm_cbe_tmp__25;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__26, *(int*)(&llvm_cbe_tmp__26));
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = getelementptr inbounds %%struct.k2c_tensor* @test5_dense_69_input_input, i64 0, i32 0, i64 %%storemerge1247, !dbg !28 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_257_count);
  llvm_cbe_tmp__27 = (float *)(&test5_dense_69_input_input.field0[(((signed long long )llvm_cbe_storemerge1247))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1247 = 0x%I64X",((signed long long )llvm_cbe_storemerge1247));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%35, float* %%36, align 4, !dbg !28 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_258_count);
  *llvm_cbe_tmp__27 = llvm_cbe_tmp__26;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = add i64 %%storemerge1247, 1, !dbg !28 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_259_count);
  llvm_cbe_tmp__28 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1247&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__28&18446744073709551615ull)));
  if (((llvm_cbe_tmp__28&18446744073709551615ULL) == (399ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__70;
  } else {
    llvm_cbe_storemerge1247__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__28;   /* for PHI node */
    goto llvm_cbe_tmp__69;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__70:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_69_input_input, i64 0, i32 1), align 8, !dbg !29 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_266_count);
  *((&test5_dense_69_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_69_input_input, i64 0, i32 2), align 8, !dbg !29 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_267_count);
  *((&test5_dense_69_input_input.field2)) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_69_input_input, i64 0, i32 3, i64 0), align 8, !dbg !29 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_268_count);
  *((&test5_dense_69_input_input.field3[(((signed long long )0ull))])) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_69_input_input, i64 0, i32 3, i64 1), align 8, !dbg !29 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_269_count);
  *((&test5_dense_69_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_69_input_input, i64 0, i32 3, i64 2), align 8, !dbg !29 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_270_count);
  *((&test5_dense_69_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_69_input_input, i64 0, i32 3, i64 3), align 8, !dbg !29 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_271_count);
  *((&test5_dense_69_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_69_input_input, i64 0, i32 3, i64 4), align 8, !dbg !29 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_272_count);
  *((&test5_dense_69_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load float* getelementptr inbounds ([1 x float]* @keras_dense_71_test5_array, i64 0, i64 0), align 4, !dbg !30 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_278_count);
  llvm_cbe_tmp__29 = (float )*((&keras_dense_71_test5_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__29, *(int*)(&llvm_cbe_tmp__29));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%39, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test5, i64 0, i32 0, i64 0), align 8, !dbg !30 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_279_count);
  *((&keras_dense_71_test5.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__29;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test5, i64 0, i32 1), align 8, !dbg !30 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_285_count);
  *((&keras_dense_71_test5.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test5, i64 0, i32 2), align 8, !dbg !30 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_286_count);
  *((&keras_dense_71_test5.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test5, i64 0, i32 3, i64 0), align 8, !dbg !30 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_287_count);
  *((&keras_dense_71_test5.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test5, i64 0, i32 3, i64 1), align 8, !dbg !30 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_288_count);
  *((&keras_dense_71_test5.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test5, i64 0, i32 3, i64 2), align 8, !dbg !30 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_289_count);
  *((&keras_dense_71_test5.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test5, i64 0, i32 3, i64 3), align 8, !dbg !30 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_290_count);
  *((&keras_dense_71_test5.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test5, i64 0, i32 3, i64 4), align 8, !dbg !30 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_291_count);
  *((&keras_dense_71_test5.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = load float* getelementptr inbounds ([1 x float]* @c_dense_71_test5_array, i64 0, i64 0), align 4, !dbg !31 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_297_count);
  llvm_cbe_tmp__30 = (float )*((&c_dense_71_test5_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__30, *(int*)(&llvm_cbe_tmp__30));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%40, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test5, i64 0, i32 0, i64 0), align 8, !dbg !31 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_298_count);
  *((&c_dense_71_test5.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__30;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test5, i64 0, i32 1), align 8, !dbg !31 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_304_count);
  *((&c_dense_71_test5.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test5, i64 0, i32 2), align 8, !dbg !31 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_305_count);
  *((&c_dense_71_test5.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test5, i64 0, i32 3, i64 0), align 8, !dbg !31 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_306_count);
  *((&c_dense_71_test5.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test5, i64 0, i32 3, i64 1), align 8, !dbg !31 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_307_count);
  *((&c_dense_71_test5.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test5, i64 0, i32 3, i64 2), align 8, !dbg !32 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_308_count);
  *((&c_dense_71_test5.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test5, i64 0, i32 3, i64 3), align 8, !dbg !32 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_309_count);
  *((&c_dense_71_test5.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test5, i64 0, i32 3, i64 4), align 8, !dbg !32 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_310_count);
  *((&c_dense_71_test5.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge1544__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__71;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__71:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1544 = phi i64 [ 0, %%38 ], [ %%45, %%41  for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_storemerge1544_count);
  llvm_cbe_storemerge1544 = (unsigned long long )llvm_cbe_storemerge1544__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1544 = 0x%I64X",llvm_cbe_storemerge1544);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__34);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds [399 x float]* @test6_dense_69_input_input_array, i64 0, i64 %%storemerge1544, !dbg !32 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_317_count);
  llvm_cbe_tmp__31 = (float *)(&test6_dense_69_input_input_array[(((signed long long )llvm_cbe_storemerge1544))
#ifdef AESL_BC_SIM
 % 399
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1544 = 0x%I64X",((signed long long )llvm_cbe_storemerge1544));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge1544) < 399)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test6_dense_69_input_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load float* %%42, align 4, !dbg !32 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_318_count);
  llvm_cbe_tmp__32 = (float )*llvm_cbe_tmp__31;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__32, *(int*)(&llvm_cbe_tmp__32));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = getelementptr inbounds %%struct.k2c_tensor* @test6_dense_69_input_input, i64 0, i32 0, i64 %%storemerge1544, !dbg !32 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_319_count);
  llvm_cbe_tmp__33 = (float *)(&test6_dense_69_input_input.field0[(((signed long long )llvm_cbe_storemerge1544))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1544 = 0x%I64X",((signed long long )llvm_cbe_storemerge1544));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%43, float* %%44, align 4, !dbg !32 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_320_count);
  *llvm_cbe_tmp__33 = llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = add i64 %%storemerge1544, 1, !dbg !32 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_321_count);
  llvm_cbe_tmp__34 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1544&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__34&18446744073709551615ull)));
  if (((llvm_cbe_tmp__34&18446744073709551615ULL) == (399ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__72;
  } else {
    llvm_cbe_storemerge1544__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__34;   /* for PHI node */
    goto llvm_cbe_tmp__71;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__72:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_69_input_input, i64 0, i32 1), align 8, !dbg !32 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_328_count);
  *((&test6_dense_69_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_69_input_input, i64 0, i32 2), align 8, !dbg !33 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_329_count);
  *((&test6_dense_69_input_input.field2)) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_69_input_input, i64 0, i32 3, i64 0), align 8, !dbg !33 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_330_count);
  *((&test6_dense_69_input_input.field3[(((signed long long )0ull))])) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_69_input_input, i64 0, i32 3, i64 1), align 8, !dbg !33 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_331_count);
  *((&test6_dense_69_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_69_input_input, i64 0, i32 3, i64 2), align 8, !dbg !33 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_332_count);
  *((&test6_dense_69_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_69_input_input, i64 0, i32 3, i64 3), align 8, !dbg !33 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_333_count);
  *((&test6_dense_69_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_69_input_input, i64 0, i32 3, i64 4), align 8, !dbg !33 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_334_count);
  *((&test6_dense_69_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = load float* getelementptr inbounds ([1 x float]* @keras_dense_71_test6_array, i64 0, i64 0), align 4, !dbg !33 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_340_count);
  llvm_cbe_tmp__35 = (float )*((&keras_dense_71_test6_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__35, *(int*)(&llvm_cbe_tmp__35));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%47, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test6, i64 0, i32 0, i64 0), align 8, !dbg !33 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_341_count);
  *((&keras_dense_71_test6.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__35;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test6, i64 0, i32 1), align 8, !dbg !34 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_347_count);
  *((&keras_dense_71_test6.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test6, i64 0, i32 2), align 8, !dbg !34 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_348_count);
  *((&keras_dense_71_test6.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test6, i64 0, i32 3, i64 0), align 8, !dbg !34 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_349_count);
  *((&keras_dense_71_test6.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test6, i64 0, i32 3, i64 1), align 8, !dbg !34 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_350_count);
  *((&keras_dense_71_test6.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test6, i64 0, i32 3, i64 2), align 8, !dbg !34 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_351_count);
  *((&keras_dense_71_test6.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test6, i64 0, i32 3, i64 3), align 8, !dbg !34 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_352_count);
  *((&keras_dense_71_test6.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test6, i64 0, i32 3, i64 4), align 8, !dbg !34 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_353_count);
  *((&keras_dense_71_test6.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = load float* getelementptr inbounds ([1 x float]* @c_dense_71_test6_array, i64 0, i64 0), align 4, !dbg !35 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_359_count);
  llvm_cbe_tmp__36 = (float )*((&c_dense_71_test6_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__36, *(int*)(&llvm_cbe_tmp__36));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%48, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test6, i64 0, i32 0, i64 0), align 8, !dbg !35 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_360_count);
  *((&c_dense_71_test6.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test6, i64 0, i32 1), align 8, !dbg !35 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_366_count);
  *((&c_dense_71_test6.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test6, i64 0, i32 2), align 8, !dbg !35 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_367_count);
  *((&c_dense_71_test6.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test6, i64 0, i32 3, i64 0), align 8, !dbg !35 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_368_count);
  *((&c_dense_71_test6.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test6, i64 0, i32 3, i64 1), align 8, !dbg !35 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_369_count);
  *((&c_dense_71_test6.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test6, i64 0, i32 3, i64 2), align 8, !dbg !35 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_370_count);
  *((&c_dense_71_test6.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test6, i64 0, i32 3, i64 3), align 8, !dbg !36 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_371_count);
  *((&c_dense_71_test6.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test6, i64 0, i32 3, i64 4), align 8, !dbg !36 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_372_count);
  *((&c_dense_71_test6.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge1841__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__73;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__73:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1841 = phi i64 [ 0, %%46 ], [ %%53, %%49  for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_storemerge1841_count);
  llvm_cbe_storemerge1841 = (unsigned long long )llvm_cbe_storemerge1841__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1841 = 0x%I64X",llvm_cbe_storemerge1841);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__40);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds [399 x float]* @test7_dense_69_input_input_array, i64 0, i64 %%storemerge1841, !dbg !36 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_379_count);
  llvm_cbe_tmp__37 = (float *)(&test7_dense_69_input_input_array[(((signed long long )llvm_cbe_storemerge1841))
#ifdef AESL_BC_SIM
 % 399
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1841 = 0x%I64X",((signed long long )llvm_cbe_storemerge1841));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge1841) < 399)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test7_dense_69_input_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = load float* %%50, align 4, !dbg !36 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_380_count);
  llvm_cbe_tmp__38 = (float )*llvm_cbe_tmp__37;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__38, *(int*)(&llvm_cbe_tmp__38));
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = getelementptr inbounds %%struct.k2c_tensor* @test7_dense_69_input_input, i64 0, i32 0, i64 %%storemerge1841, !dbg !36 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_381_count);
  llvm_cbe_tmp__39 = (float *)(&test7_dense_69_input_input.field0[(((signed long long )llvm_cbe_storemerge1841))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1841 = 0x%I64X",((signed long long )llvm_cbe_storemerge1841));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%51, float* %%52, align 4, !dbg !36 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_382_count);
  *llvm_cbe_tmp__39 = llvm_cbe_tmp__38;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = add i64 %%storemerge1841, 1, !dbg !36 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_383_count);
  llvm_cbe_tmp__40 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1841&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__40&18446744073709551615ull)));
  if (((llvm_cbe_tmp__40&18446744073709551615ULL) == (399ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__74;
  } else {
    llvm_cbe_storemerge1841__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__40;   /* for PHI node */
    goto llvm_cbe_tmp__73;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__74:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_69_input_input, i64 0, i32 1), align 8, !dbg !36 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_390_count);
  *((&test7_dense_69_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_69_input_input, i64 0, i32 2), align 8, !dbg !36 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_391_count);
  *((&test7_dense_69_input_input.field2)) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_69_input_input, i64 0, i32 3, i64 0), align 8, !dbg !37 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_392_count);
  *((&test7_dense_69_input_input.field3[(((signed long long )0ull))])) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_69_input_input, i64 0, i32 3, i64 1), align 8, !dbg !37 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_393_count);
  *((&test7_dense_69_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_69_input_input, i64 0, i32 3, i64 2), align 8, !dbg !37 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_394_count);
  *((&test7_dense_69_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_69_input_input, i64 0, i32 3, i64 3), align 8, !dbg !37 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_395_count);
  *((&test7_dense_69_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_69_input_input, i64 0, i32 3, i64 4), align 8, !dbg !37 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_396_count);
  *((&test7_dense_69_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = load float* getelementptr inbounds ([1 x float]* @keras_dense_71_test7_array, i64 0, i64 0), align 4, !dbg !37 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_402_count);
  llvm_cbe_tmp__41 = (float )*((&keras_dense_71_test7_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__41, *(int*)(&llvm_cbe_tmp__41));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%55, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test7, i64 0, i32 0, i64 0), align 8, !dbg !37 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_403_count);
  *((&keras_dense_71_test7.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__41;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test7, i64 0, i32 1), align 8, !dbg !38 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_409_count);
  *((&keras_dense_71_test7.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test7, i64 0, i32 2), align 8, !dbg !38 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_410_count);
  *((&keras_dense_71_test7.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test7, i64 0, i32 3, i64 0), align 8, !dbg !38 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_411_count);
  *((&keras_dense_71_test7.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test7, i64 0, i32 3, i64 1), align 8, !dbg !38 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_412_count);
  *((&keras_dense_71_test7.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test7, i64 0, i32 3, i64 2), align 8, !dbg !38 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_413_count);
  *((&keras_dense_71_test7.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test7, i64 0, i32 3, i64 3), align 8, !dbg !38 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_414_count);
  *((&keras_dense_71_test7.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test7, i64 0, i32 3, i64 4), align 8, !dbg !38 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_415_count);
  *((&keras_dense_71_test7.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load float* getelementptr inbounds ([1 x float]* @c_dense_71_test7_array, i64 0, i64 0), align 4, !dbg !39 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_421_count);
  llvm_cbe_tmp__42 = (float )*((&c_dense_71_test7_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__42, *(int*)(&llvm_cbe_tmp__42));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%56, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test7, i64 0, i32 0, i64 0), align 8, !dbg !39 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_422_count);
  *((&c_dense_71_test7.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__42;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test7, i64 0, i32 1), align 8, !dbg !39 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_428_count);
  *((&c_dense_71_test7.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test7, i64 0, i32 2), align 8, !dbg !39 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_429_count);
  *((&c_dense_71_test7.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test7, i64 0, i32 3, i64 0), align 8, !dbg !39 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_430_count);
  *((&c_dense_71_test7.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test7, i64 0, i32 3, i64 1), align 8, !dbg !39 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_431_count);
  *((&c_dense_71_test7.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test7, i64 0, i32 3, i64 2), align 8, !dbg !39 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_432_count);
  *((&c_dense_71_test7.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test7, i64 0, i32 3, i64 3), align 8, !dbg !39 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_433_count);
  *((&c_dense_71_test7.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test7, i64 0, i32 3, i64 4), align 8, !dbg !40 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_434_count);
  *((&c_dense_71_test7.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge2138__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__75;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__75:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2138 = phi i64 [ 0, %%54 ], [ %%61, %%57  for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_storemerge2138_count);
  llvm_cbe_storemerge2138 = (unsigned long long )llvm_cbe_storemerge2138__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2138 = 0x%I64X",llvm_cbe_storemerge2138);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__46);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds [399 x float]* @test8_dense_69_input_input_array, i64 0, i64 %%storemerge2138, !dbg !40 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_441_count);
  llvm_cbe_tmp__43 = (float *)(&test8_dense_69_input_input_array[(((signed long long )llvm_cbe_storemerge2138))
#ifdef AESL_BC_SIM
 % 399
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2138 = 0x%I64X",((signed long long )llvm_cbe_storemerge2138));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge2138) < 399)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test8_dense_69_input_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = load float* %%58, align 4, !dbg !40 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_442_count);
  llvm_cbe_tmp__44 = (float )*llvm_cbe_tmp__43;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__44, *(int*)(&llvm_cbe_tmp__44));
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = getelementptr inbounds %%struct.k2c_tensor* @test8_dense_69_input_input, i64 0, i32 0, i64 %%storemerge2138, !dbg !40 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_443_count);
  llvm_cbe_tmp__45 = (float *)(&test8_dense_69_input_input.field0[(((signed long long )llvm_cbe_storemerge2138))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2138 = 0x%I64X",((signed long long )llvm_cbe_storemerge2138));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%59, float* %%60, align 4, !dbg !40 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_444_count);
  *llvm_cbe_tmp__45 = llvm_cbe_tmp__44;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = add i64 %%storemerge2138, 1, !dbg !40 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_445_count);
  llvm_cbe_tmp__46 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge2138&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__46&18446744073709551615ull)));
  if (((llvm_cbe_tmp__46&18446744073709551615ULL) == (399ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__76;
  } else {
    llvm_cbe_storemerge2138__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__46;   /* for PHI node */
    goto llvm_cbe_tmp__75;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__76:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_69_input_input, i64 0, i32 1), align 8, !dbg !40 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_452_count);
  *((&test8_dense_69_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_69_input_input, i64 0, i32 2), align 8, !dbg !40 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_453_count);
  *((&test8_dense_69_input_input.field2)) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_69_input_input, i64 0, i32 3, i64 0), align 8, !dbg !40 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_454_count);
  *((&test8_dense_69_input_input.field3[(((signed long long )0ull))])) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_69_input_input, i64 0, i32 3, i64 1), align 8, !dbg !41 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_455_count);
  *((&test8_dense_69_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_69_input_input, i64 0, i32 3, i64 2), align 8, !dbg !41 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_456_count);
  *((&test8_dense_69_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_69_input_input, i64 0, i32 3, i64 3), align 8, !dbg !41 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_457_count);
  *((&test8_dense_69_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_69_input_input, i64 0, i32 3, i64 4), align 8, !dbg !41 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_458_count);
  *((&test8_dense_69_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = load float* getelementptr inbounds ([1 x float]* @keras_dense_71_test8_array, i64 0, i64 0), align 4, !dbg !41 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_464_count);
  llvm_cbe_tmp__47 = (float )*((&keras_dense_71_test8_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__47, *(int*)(&llvm_cbe_tmp__47));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%63, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test8, i64 0, i32 0, i64 0), align 8, !dbg !41 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_465_count);
  *((&keras_dense_71_test8.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__47;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test8, i64 0, i32 1), align 8, !dbg !42 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_471_count);
  *((&keras_dense_71_test8.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test8, i64 0, i32 2), align 8, !dbg !42 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_472_count);
  *((&keras_dense_71_test8.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test8, i64 0, i32 3, i64 0), align 8, !dbg !42 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_473_count);
  *((&keras_dense_71_test8.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test8, i64 0, i32 3, i64 1), align 8, !dbg !42 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_474_count);
  *((&keras_dense_71_test8.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test8, i64 0, i32 3, i64 2), align 8, !dbg !42 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_475_count);
  *((&keras_dense_71_test8.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test8, i64 0, i32 3, i64 3), align 8, !dbg !42 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_476_count);
  *((&keras_dense_71_test8.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test8, i64 0, i32 3, i64 4), align 8, !dbg !42 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_477_count);
  *((&keras_dense_71_test8.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = load float* getelementptr inbounds ([1 x float]* @c_dense_71_test8_array, i64 0, i64 0), align 4, !dbg !43 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_483_count);
  llvm_cbe_tmp__48 = (float )*((&c_dense_71_test8_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__48, *(int*)(&llvm_cbe_tmp__48));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%64, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test8, i64 0, i32 0, i64 0), align 8, !dbg !43 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_484_count);
  *((&c_dense_71_test8.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__48;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test8, i64 0, i32 1), align 8, !dbg !43 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_490_count);
  *((&c_dense_71_test8.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test8, i64 0, i32 2), align 8, !dbg !43 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_491_count);
  *((&c_dense_71_test8.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test8, i64 0, i32 3, i64 0), align 8, !dbg !43 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_492_count);
  *((&c_dense_71_test8.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test8, i64 0, i32 3, i64 1), align 8, !dbg !43 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_493_count);
  *((&c_dense_71_test8.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test8, i64 0, i32 3, i64 2), align 8, !dbg !43 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_494_count);
  *((&c_dense_71_test8.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test8, i64 0, i32 3, i64 3), align 8, !dbg !43 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_495_count);
  *((&c_dense_71_test8.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test8, i64 0, i32 3, i64 4), align 8, !dbg !43 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_496_count);
  *((&c_dense_71_test8.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge2435__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__77;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__77:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2435 = phi i64 [ 0, %%62 ], [ %%69, %%65  for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_storemerge2435_count);
  llvm_cbe_storemerge2435 = (unsigned long long )llvm_cbe_storemerge2435__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2435 = 0x%I64X",llvm_cbe_storemerge2435);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__52);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = getelementptr inbounds [399 x float]* @test9_dense_69_input_input_array, i64 0, i64 %%storemerge2435, !dbg !44 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_503_count);
  llvm_cbe_tmp__49 = (float *)(&test9_dense_69_input_input_array[(((signed long long )llvm_cbe_storemerge2435))
#ifdef AESL_BC_SIM
 % 399
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2435 = 0x%I64X",((signed long long )llvm_cbe_storemerge2435));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge2435) < 399)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test9_dense_69_input_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load float* %%66, align 4, !dbg !44 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_504_count);
  llvm_cbe_tmp__50 = (float )*llvm_cbe_tmp__49;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__50, *(int*)(&llvm_cbe_tmp__50));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = getelementptr inbounds %%struct.k2c_tensor* @test9_dense_69_input_input, i64 0, i32 0, i64 %%storemerge2435, !dbg !44 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_505_count);
  llvm_cbe_tmp__51 = (float *)(&test9_dense_69_input_input.field0[(((signed long long )llvm_cbe_storemerge2435))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2435 = 0x%I64X",((signed long long )llvm_cbe_storemerge2435));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%67, float* %%68, align 4, !dbg !44 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_506_count);
  *llvm_cbe_tmp__51 = llvm_cbe_tmp__50;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = add i64 %%storemerge2435, 1, !dbg !44 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_507_count);
  llvm_cbe_tmp__52 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge2435&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__52&18446744073709551615ull)));
  if (((llvm_cbe_tmp__52&18446744073709551615ULL) == (399ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__78;
  } else {
    llvm_cbe_storemerge2435__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__52;   /* for PHI node */
    goto llvm_cbe_tmp__77;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__78:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_69_input_input, i64 0, i32 1), align 8, !dbg !44 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_514_count);
  *((&test9_dense_69_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_69_input_input, i64 0, i32 2), align 8, !dbg !44 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_515_count);
  *((&test9_dense_69_input_input.field2)) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_69_input_input, i64 0, i32 3, i64 0), align 8, !dbg !44 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_516_count);
  *((&test9_dense_69_input_input.field3[(((signed long long )0ull))])) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_69_input_input, i64 0, i32 3, i64 1), align 8, !dbg !44 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_517_count);
  *((&test9_dense_69_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_69_input_input, i64 0, i32 3, i64 2), align 8, !dbg !45 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_518_count);
  *((&test9_dense_69_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_69_input_input, i64 0, i32 3, i64 3), align 8, !dbg !45 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_519_count);
  *((&test9_dense_69_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_69_input_input, i64 0, i32 3, i64 4), align 8, !dbg !45 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_520_count);
  *((&test9_dense_69_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = load float* getelementptr inbounds ([1 x float]* @keras_dense_71_test9_array, i64 0, i64 0), align 4, !dbg !45 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_526_count);
  llvm_cbe_tmp__53 = (float )*((&keras_dense_71_test9_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__53, *(int*)(&llvm_cbe_tmp__53));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%71, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test9, i64 0, i32 0, i64 0), align 8, !dbg !45 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_527_count);
  *((&keras_dense_71_test9.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__53;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test9, i64 0, i32 1), align 8, !dbg !45 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_533_count);
  *((&keras_dense_71_test9.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test9, i64 0, i32 2), align 8, !dbg !46 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_534_count);
  *((&keras_dense_71_test9.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test9, i64 0, i32 3, i64 0), align 8, !dbg !46 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_535_count);
  *((&keras_dense_71_test9.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test9, i64 0, i32 3, i64 1), align 8, !dbg !46 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_536_count);
  *((&keras_dense_71_test9.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test9, i64 0, i32 3, i64 2), align 8, !dbg !46 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_537_count);
  *((&keras_dense_71_test9.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test9, i64 0, i32 3, i64 3), align 8, !dbg !46 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_538_count);
  *((&keras_dense_71_test9.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test9, i64 0, i32 3, i64 4), align 8, !dbg !46 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_539_count);
  *((&keras_dense_71_test9.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = load float* getelementptr inbounds ([1 x float]* @c_dense_71_test9_array, i64 0, i64 0), align 4, !dbg !46 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_545_count);
  llvm_cbe_tmp__54 = (float )*((&c_dense_71_test9_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__54, *(int*)(&llvm_cbe_tmp__54));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%72, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test9, i64 0, i32 0, i64 0), align 8, !dbg !46 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_546_count);
  *((&c_dense_71_test9.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__54;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test9, i64 0, i32 1), align 8, !dbg !47 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_552_count);
  *((&c_dense_71_test9.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test9, i64 0, i32 2), align 8, !dbg !47 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_553_count);
  *((&c_dense_71_test9.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test9, i64 0, i32 3, i64 0), align 8, !dbg !47 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_554_count);
  *((&c_dense_71_test9.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test9, i64 0, i32 3, i64 1), align 8, !dbg !47 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_555_count);
  *((&c_dense_71_test9.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test9, i64 0, i32 3, i64 2), align 8, !dbg !47 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_556_count);
  *((&c_dense_71_test9.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test9, i64 0, i32 3, i64 3), align 8, !dbg !47 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_557_count);
  *((&c_dense_71_test9.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test9, i64 0, i32 3, i64 4), align 8, !dbg !47 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_558_count);
  *((&c_dense_71_test9.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge2732__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__79;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__79:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2732 = phi i64 [ 0, %%70 ], [ %%77, %%73  for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_storemerge2732_count);
  llvm_cbe_storemerge2732 = (unsigned long long )llvm_cbe_storemerge2732__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2732 = 0x%I64X",llvm_cbe_storemerge2732);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__58);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = getelementptr inbounds [399 x float]* @test10_dense_69_input_input_array, i64 0, i64 %%storemerge2732, !dbg !48 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_565_count);
  llvm_cbe_tmp__55 = (float *)(&test10_dense_69_input_input_array[(((signed long long )llvm_cbe_storemerge2732))
#ifdef AESL_BC_SIM
 % 399
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2732 = 0x%I64X",((signed long long )llvm_cbe_storemerge2732));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_storemerge2732) < 399)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test10_dense_69_input_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = load float* %%74, align 4, !dbg !48 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_566_count);
  llvm_cbe_tmp__56 = (float )*llvm_cbe_tmp__55;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__56, *(int*)(&llvm_cbe_tmp__56));
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = getelementptr inbounds %%struct.k2c_tensor* @test10_dense_69_input_input, i64 0, i32 0, i64 %%storemerge2732, !dbg !48 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_567_count);
  llvm_cbe_tmp__57 = (float *)(&test10_dense_69_input_input.field0[(((signed long long )llvm_cbe_storemerge2732))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2732 = 0x%I64X",((signed long long )llvm_cbe_storemerge2732));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%75, float* %%76, align 4, !dbg !48 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_568_count);
  *llvm_cbe_tmp__57 = llvm_cbe_tmp__56;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = add i64 %%storemerge2732, 1, !dbg !48 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_569_count);
  llvm_cbe_tmp__58 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge2732&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__58&18446744073709551615ull)));
  if (((llvm_cbe_tmp__58&18446744073709551615ULL) == (399ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__80;
  } else {
    llvm_cbe_storemerge2732__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__58;   /* for PHI node */
    goto llvm_cbe_tmp__79;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__80:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_69_input_input, i64 0, i32 1), align 8, !dbg !48 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_576_count);
  *((&test10_dense_69_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_69_input_input, i64 0, i32 2), align 8, !dbg !48 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_577_count);
  *((&test10_dense_69_input_input.field2)) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 399, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_69_input_input, i64 0, i32 3, i64 0), align 8, !dbg !48 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_578_count);
  *((&test10_dense_69_input_input.field3[(((signed long long )0ull))])) = 399ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 399ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_69_input_input, i64 0, i32 3, i64 1), align 8, !dbg !48 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_579_count);
  *((&test10_dense_69_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_69_input_input, i64 0, i32 3, i64 2), align 8, !dbg !48 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_580_count);
  *((&test10_dense_69_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_69_input_input, i64 0, i32 3, i64 3), align 8, !dbg !49 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_581_count);
  *((&test10_dense_69_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_69_input_input, i64 0, i32 3, i64 4), align 8, !dbg !49 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_582_count);
  *((&test10_dense_69_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = load float* getelementptr inbounds ([1 x float]* @keras_dense_71_test10_array, i64 0, i64 0), align 4, !dbg !49 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_588_count);
  llvm_cbe_tmp__59 = (float )*((&keras_dense_71_test10_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__59, *(int*)(&llvm_cbe_tmp__59));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%79, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test10, i64 0, i32 0, i64 0), align 8, !dbg !49 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_589_count);
  *((&keras_dense_71_test10.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__59;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test10, i64 0, i32 1), align 8, !dbg !49 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_595_count);
  *((&keras_dense_71_test10.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test10, i64 0, i32 2), align 8, !dbg !49 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_596_count);
  *((&keras_dense_71_test10.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test10, i64 0, i32 3, i64 0), align 8, !dbg !50 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_597_count);
  *((&keras_dense_71_test10.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test10, i64 0, i32 3, i64 1), align 8, !dbg !50 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_598_count);
  *((&keras_dense_71_test10.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test10, i64 0, i32 3, i64 2), align 8, !dbg !50 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_599_count);
  *((&keras_dense_71_test10.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test10, i64 0, i32 3, i64 3), align 8, !dbg !50 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_600_count);
  *((&keras_dense_71_test10.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_71_test10, i64 0, i32 3, i64 4), align 8, !dbg !50 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_601_count);
  *((&keras_dense_71_test10.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = load float* getelementptr inbounds ([1 x float]* @c_dense_71_test10_array, i64 0, i64 0), align 4, !dbg !50 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_607_count);
  llvm_cbe_tmp__60 = (float )*((&c_dense_71_test10_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__60, *(int*)(&llvm_cbe_tmp__60));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%80, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test10, i64 0, i32 0, i64 0), align 8, !dbg !50 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_608_count);
  *((&c_dense_71_test10.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__60;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test10, i64 0, i32 1), align 8, !dbg !51 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_614_count);
  *((&c_dense_71_test10.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test10, i64 0, i32 2), align 8, !dbg !51 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_615_count);
  *((&c_dense_71_test10.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test10, i64 0, i32 3, i64 0), align 8, !dbg !51 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_616_count);
  *((&c_dense_71_test10.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test10, i64 0, i32 3, i64 1), align 8, !dbg !51 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_617_count);
  *((&c_dense_71_test10.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test10, i64 0, i32 3, i64 2), align 8, !dbg !51 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_618_count);
  *((&c_dense_71_test10.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test10, i64 0, i32 3, i64 3), align 8, !dbg !51 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_619_count);
  *((&c_dense_71_test10.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_71_test10, i64 0, i32 3, i64 4), align 8, !dbg !51 for 0x%I64xth hint within @test_array_initialize  --> \n", ++aesl_llvm_cbe_620_count);
  *((&c_dense_71_test10.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @test_array_initialize}\n");
  return;
}


signed int main(void) {
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  unsigned int llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  unsigned int llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  double llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  double llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  double llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  double llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  double llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  unsigned int llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  float llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  float llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  float llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  float llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  float llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  float llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  float llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  float llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  float llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  float llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_ph_count = 0;
  float llvm_cbe__2e_ph;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  float llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  float llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  float llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  float llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  float llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  float llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  float llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  float llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  float llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  double llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  unsigned int llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;

  CODE_FOR_MAIN();
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @main\n");
if (AESL_DEBUG_TRACE)
printf("\n  call void @test_array_initialize(), !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_622_count);
  test_array_initialize();
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%0 = call i32 @clock() nounwind, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_628_count);
  llvm_cbe_tmp__81 = (unsigned int )clock();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__81);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @WebModel(%%struct.k2c_tensor* @test1_dense_69_input_input, %%struct.k2c_tensor* @c_dense_71_test1) nounwind, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_631_count);
  WebModel((l_struct_OC_k2c_tensor *)(&test1_dense_69_input_input), (l_struct_OC_k2c_tensor *)(&c_dense_71_test1));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @WebModel(%%struct.k2c_tensor* @test2_dense_69_input_input, %%struct.k2c_tensor* @c_dense_71_test2) nounwind, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_632_count);
  WebModel((l_struct_OC_k2c_tensor *)(&test2_dense_69_input_input), (l_struct_OC_k2c_tensor *)(&c_dense_71_test2));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @WebModel(%%struct.k2c_tensor* @test3_dense_69_input_input, %%struct.k2c_tensor* @c_dense_71_test3) nounwind, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_633_count);
  WebModel((l_struct_OC_k2c_tensor *)(&test3_dense_69_input_input), (l_struct_OC_k2c_tensor *)(&c_dense_71_test3));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @WebModel(%%struct.k2c_tensor* @test4_dense_69_input_input, %%struct.k2c_tensor* @c_dense_71_test4) nounwind, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_634_count);
  WebModel((l_struct_OC_k2c_tensor *)(&test4_dense_69_input_input), (l_struct_OC_k2c_tensor *)(&c_dense_71_test4));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @WebModel(%%struct.k2c_tensor* @test5_dense_69_input_input, %%struct.k2c_tensor* @c_dense_71_test5) nounwind, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_635_count);
  WebModel((l_struct_OC_k2c_tensor *)(&test5_dense_69_input_input), (l_struct_OC_k2c_tensor *)(&c_dense_71_test5));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @WebModel(%%struct.k2c_tensor* @test6_dense_69_input_input, %%struct.k2c_tensor* @c_dense_71_test6) nounwind, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_636_count);
  WebModel((l_struct_OC_k2c_tensor *)(&test6_dense_69_input_input), (l_struct_OC_k2c_tensor *)(&c_dense_71_test6));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @WebModel(%%struct.k2c_tensor* @test7_dense_69_input_input, %%struct.k2c_tensor* @c_dense_71_test7) nounwind, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_637_count);
  WebModel((l_struct_OC_k2c_tensor *)(&test7_dense_69_input_input), (l_struct_OC_k2c_tensor *)(&c_dense_71_test7));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @WebModel(%%struct.k2c_tensor* @test8_dense_69_input_input, %%struct.k2c_tensor* @c_dense_71_test8) nounwind, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_638_count);
  WebModel((l_struct_OC_k2c_tensor *)(&test8_dense_69_input_input), (l_struct_OC_k2c_tensor *)(&c_dense_71_test8));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @WebModel(%%struct.k2c_tensor* @test9_dense_69_input_input, %%struct.k2c_tensor* @c_dense_71_test9) nounwind, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_639_count);
  WebModel((l_struct_OC_k2c_tensor *)(&test9_dense_69_input_input), (l_struct_OC_k2c_tensor *)(&c_dense_71_test9));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @WebModel(%%struct.k2c_tensor* @test10_dense_69_input_input, %%struct.k2c_tensor* @c_dense_71_test10) nounwind, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_640_count);
  WebModel((l_struct_OC_k2c_tensor *)(&test10_dense_69_input_input), (l_struct_OC_k2c_tensor *)(&c_dense_71_test10));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = call i32 @clock() nounwind, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_641_count);
  llvm_cbe_tmp__82 = (unsigned int )clock();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__82);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sitofp i32 %%1 to double, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_644_count);
  llvm_cbe_tmp__83 = (double )((double )(signed int )llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__83, *(long long*)(&llvm_cbe_tmp__83));
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sitofp i32 %%0 to double, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_645_count);
  llvm_cbe_tmp__84 = (double )((double )(signed int )llvm_cbe_tmp__81);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__84, *(long long*)(&llvm_cbe_tmp__84));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = fsub double %%2, %%3, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_646_count);
  llvm_cbe_tmp__85 = (double )llvm_cbe_tmp__83 - llvm_cbe_tmp__84;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__85, *(long long*)(&llvm_cbe_tmp__85));
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = fdiv double %%4, 1.000000e+03, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_647_count);
  llvm_cbe_tmp__86 = (double )llvm_cbe_tmp__85 / 0x1.f4p9;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__86, *(long long*)(&llvm_cbe_tmp__86));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = fdiv double %%5, 1.000000e+01, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_648_count);
  llvm_cbe_tmp__87 = (double )llvm_cbe_tmp__86 / 0x1.4p3;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__87, *(long long*)(&llvm_cbe_tmp__87));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([35 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%6) nounwind, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_649_count);
  printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 35
#endif
])), llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__87, *(long long*)(&llvm_cbe_tmp__87));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__88);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_71_test1, %%struct.k2c_tensor* @c_dense_71_test1), !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_650_count);
  llvm_cbe_tmp__89 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_71_test1), (l_struct_OC_k2c_tensor *)(&c_dense_71_test1));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__89);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_71_test2, %%struct.k2c_tensor* @c_dense_71_test2), !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_651_count);
  llvm_cbe_tmp__90 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_71_test2), (l_struct_OC_k2c_tensor *)(&c_dense_71_test2));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__90);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_71_test3, %%struct.k2c_tensor* @c_dense_71_test3), !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_652_count);
  llvm_cbe_tmp__91 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_71_test3), (l_struct_OC_k2c_tensor *)(&c_dense_71_test3));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__91);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_71_test4, %%struct.k2c_tensor* @c_dense_71_test4), !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_653_count);
  llvm_cbe_tmp__92 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_71_test4), (l_struct_OC_k2c_tensor *)(&c_dense_71_test4));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__92);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_71_test5, %%struct.k2c_tensor* @c_dense_71_test5), !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_654_count);
  llvm_cbe_tmp__93 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_71_test5), (l_struct_OC_k2c_tensor *)(&c_dense_71_test5));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__93);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_71_test6, %%struct.k2c_tensor* @c_dense_71_test6), !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_655_count);
  llvm_cbe_tmp__94 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_71_test6), (l_struct_OC_k2c_tensor *)(&c_dense_71_test6));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__94);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_71_test7, %%struct.k2c_tensor* @c_dense_71_test7), !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_656_count);
  llvm_cbe_tmp__95 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_71_test7), (l_struct_OC_k2c_tensor *)(&c_dense_71_test7));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__95);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_71_test8, %%struct.k2c_tensor* @c_dense_71_test8), !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_657_count);
  llvm_cbe_tmp__96 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_71_test8), (l_struct_OC_k2c_tensor *)(&c_dense_71_test8));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__96);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_71_test9, %%struct.k2c_tensor* @c_dense_71_test9), !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_658_count);
  llvm_cbe_tmp__97 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_71_test9), (l_struct_OC_k2c_tensor *)(&c_dense_71_test9));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__97);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_71_test10, %%struct.k2c_tensor* @c_dense_71_test10), !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_659_count);
  llvm_cbe_tmp__98 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_71_test10), (l_struct_OC_k2c_tensor *)(&c_dense_71_test10));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__98);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%.ph = select i1 %%18, float %%8, float %%9, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe__2e_ph_count);
  llvm_cbe__2e_ph = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__89, llvm_cbe_tmp__90))) ? ((float )llvm_cbe_tmp__89) : ((float )llvm_cbe_tmp__90));
if (AESL_DEBUG_TRACE)
printf("\n.ph = %f,  0x%x\n", llvm_cbe__2e_ph, *(int*)(&llvm_cbe__2e_ph));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = select i1 %%19, float %%9, float %%.ph, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_671_count);
  llvm_cbe_tmp__99 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__90, llvm_cbe__2e_ph))) ? ((float )llvm_cbe_tmp__90) : ((float )llvm_cbe__2e_ph));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__99, *(int*)(&llvm_cbe_tmp__99));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = select i1 %%21, float %%10, float %%20, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_683_count);
  llvm_cbe_tmp__100 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__91, llvm_cbe_tmp__99))) ? ((float )llvm_cbe_tmp__91) : ((float )llvm_cbe_tmp__99));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__100, *(int*)(&llvm_cbe_tmp__100));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = select i1 %%23, float %%11, float %%22, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_695_count);
  llvm_cbe_tmp__101 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__92, llvm_cbe_tmp__100))) ? ((float )llvm_cbe_tmp__92) : ((float )llvm_cbe_tmp__100));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__101, *(int*)(&llvm_cbe_tmp__101));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = select i1 %%25, float %%12, float %%24, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_707_count);
  llvm_cbe_tmp__102 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__93, llvm_cbe_tmp__101))) ? ((float )llvm_cbe_tmp__93) : ((float )llvm_cbe_tmp__101));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__102, *(int*)(&llvm_cbe_tmp__102));
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = select i1 %%27, float %%13, float %%26, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_719_count);
  llvm_cbe_tmp__103 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__94, llvm_cbe_tmp__102))) ? ((float )llvm_cbe_tmp__94) : ((float )llvm_cbe_tmp__102));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__103, *(int*)(&llvm_cbe_tmp__103));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = select i1 %%29, float %%14, float %%28, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_731_count);
  llvm_cbe_tmp__104 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__95, llvm_cbe_tmp__103))) ? ((float )llvm_cbe_tmp__95) : ((float )llvm_cbe_tmp__103));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__104, *(int*)(&llvm_cbe_tmp__104));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = select i1 %%31, float %%15, float %%30, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_743_count);
  llvm_cbe_tmp__105 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__96, llvm_cbe_tmp__104))) ? ((float )llvm_cbe_tmp__96) : ((float )llvm_cbe_tmp__104));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__105, *(int*)(&llvm_cbe_tmp__105));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = select i1 %%33, float %%16, float %%32, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_755_count);
  llvm_cbe_tmp__106 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__97, llvm_cbe_tmp__105))) ? ((float )llvm_cbe_tmp__97) : ((float )llvm_cbe_tmp__105));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__106, *(int*)(&llvm_cbe_tmp__106));
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = select i1 %%35, float %%17, float %%34, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_767_count);
  llvm_cbe_tmp__107 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__98, llvm_cbe_tmp__106))) ? ((float )llvm_cbe_tmp__98) : ((float )llvm_cbe_tmp__106));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__107, *(int*)(&llvm_cbe_tmp__107));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = fpext float %%36 to double, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_774_count);
  llvm_cbe_tmp__108 = (double )((double )llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__108, *(long long*)(&llvm_cbe_tmp__108));
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([38 x i8]* @aesl_internal_.str1, i64 0, i64 0), double %%37) nounwind, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_775_count);
  printf(( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 38
#endif
])), llvm_cbe_tmp__108);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__108, *(long long*)(&llvm_cbe_tmp__108));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__109);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = zext i1 %%39 to i32, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )((unsigned int )(bool )(llvm_fcmp_ogt(llvm_cbe_tmp__107, 0x1p-1))&1U);
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1 = 0x%X\n", llvm_cbe_storemerge1);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @main}\n");
  return llvm_cbe_storemerge1;
}


float maxabs(l_struct_OC_k2c_tensor *llvm_cbe_tensor1, l_struct_OC_k2c_tensor *llvm_cbe_tensor2) {
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  signed long long *llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  unsigned long long llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned long long llvm_cbe_storemerge1;
  unsigned long long llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  float llvm_cbe_tmp__112;
  float llvm_cbe_tmp__112__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
  float *llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  float llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  float *llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  float llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  float llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  float llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  float llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  unsigned long long llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
  unsigned long long llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa_count = 0;
  float llvm_cbe__2e_lcssa;
  float llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @maxabs\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.k2c_tensor* %%tensor1, i64 0, i32 2, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_794_count);
  llvm_cbe_tmp__110 = (signed long long *)(&llvm_cbe_tensor1->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* %%1, align 8, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_795_count);
  llvm_cbe_tmp__111 = (unsigned long long )*llvm_cbe_tmp__110;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__111);
  if (((llvm_cbe_tmp__111&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe_tmp__112__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i64 [ %%13, %%.lr.ph ], [ 0, %%0  for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned long long )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",llvm_cbe_storemerge1);
printf("\n = 0x%I64X",llvm_cbe_tmp__120);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = phi float [ %%12, %%.lr.ph ], [ 0.000000e+00, %%0  for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_798_count);
  llvm_cbe_tmp__112 = (float )llvm_cbe_tmp__112__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__112);
printf("\n = %f",llvm_cbe_tmp__119);
printf("\n = %f",0x0p0);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.k2c_tensor* %%tensor1, i64 0, i32 0, i64 %%storemerge1, !dbg !13 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_799_count);
  llvm_cbe_tmp__113 = (float *)(&llvm_cbe_tensor1->field0[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load float* %%5, align 4, !dbg !13 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_800_count);
  llvm_cbe_tmp__114 = (float )*llvm_cbe_tmp__113;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__114, *(int*)(&llvm_cbe_tmp__114));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.k2c_tensor* %%tensor2, i64 0, i32 0, i64 %%storemerge1, !dbg !13 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_801_count);
  llvm_cbe_tmp__115 = (float *)(&llvm_cbe_tensor2->field0[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* %%7, align 4, !dbg !13 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_802_count);
  llvm_cbe_tmp__116 = (float )*llvm_cbe_tmp__115;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__116, *(int*)(&llvm_cbe_tmp__116));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = fsub float %%6, %%8, !dbg !13 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_803_count);
  llvm_cbe_tmp__117 = (float )((float )(llvm_cbe_tmp__114 - llvm_cbe_tmp__116));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__117, *(int*)(&llvm_cbe_tmp__117));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = tail call float @fabsf(float %%9) nounwind, !dbg !13 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_804_count);
  llvm_cbe_tmp__118 = (float ) /*tail*/ fabsf(llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__117, *(int*)(&llvm_cbe_tmp__117));
printf("\nReturn  = %f",llvm_cbe_tmp__118);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = select i1 %%11, float %%10, float %%4, !dbg !13 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_812_count);
  llvm_cbe_tmp__119 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__118, llvm_cbe_tmp__112))) ? ((float )llvm_cbe_tmp__118) : ((float )llvm_cbe_tmp__112));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__119, *(int*)(&llvm_cbe_tmp__119));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add i64 %%storemerge1, 1, !dbg !14 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_814_count);
  llvm_cbe_tmp__120 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__120&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i64* %%1, align 8, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_820_count);
  llvm_cbe_tmp__121 = (unsigned long long )*llvm_cbe_tmp__110;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__121);
  if ((((unsigned long long )llvm_cbe_tmp__120&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__121&18446744073709551615ULL))) {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__120;   /* for PHI node */
    llvm_cbe_tmp__112__PHI_TEMPORARY = (float )llvm_cbe_tmp__119;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (float )llvm_cbe_tmp__119;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa = phi float [ 0.000000e+00, %%0 ], [ %%12, %%.lr.ph  for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe__2e_lcssa_count);
  llvm_cbe__2e_lcssa = (float )llvm_cbe__2e_lcssa__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa = %f",llvm_cbe__2e_lcssa);
printf("\n = %f",0x0p0);
printf("\n = %f",llvm_cbe_tmp__119);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @maxabs}\n");
  return llvm_cbe__2e_lcssa;
}

