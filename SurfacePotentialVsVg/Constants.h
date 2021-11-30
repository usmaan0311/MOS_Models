#ifndef Constant
#define Constant

#define q 1.6e-19
#define Epsilon0 8.854e-14
#define EpsilonS Epsilon0*11.4
#define EpsilonOx Epsilon0*3.9
#define Na 1e+17
#define ni 1e+10
#define phims 0.21
#define tox 2e-7
#define kt 0.026
#define Q0 0.0
#define phif kt*log(Na/ni)
#define Cox EpsilonOx/tox
#define Vfb phims - Q0/Cox
#define gamma sqrt(2*q*EpsilonS*Na)/(Cox)

#endif
