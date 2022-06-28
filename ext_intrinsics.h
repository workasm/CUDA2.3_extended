
#if !defined(__EXT_INTRINSICS_H__)
#define __EXT_INTRINSICS_H__


#if defined(__cplusplus) && defined(__CUDACC__)

#include "device_types.h"
#include "host_defines.h"

extern "C"
{
/*DEVICE_BUILTIN*/
extern __device__ int                    __addo(int, int);
/*DEVICE_BUILTIN*/
extern __device__ unsigned int           __uaddo(unsigned int, unsigned int);
/*DEVICE_BUILTIN*/
extern __device__ int                    __addc(int, int);
/*DEVICE_BUILTIN*/
extern __device__ unsigned int           __uaddc(unsigned int, unsigned int);
/*DEVICE_BUILTIN*/
extern __device__ int                    __mul24hi(int, int);
/*DEVICE_BUILTIN*/
extern __device__ unsigned int           __umul24hi(unsigned int, unsigned int);
/*DEVICE_BUILTIN*/
extern __device__ int                    __mad24hi(int, int, int);
/*DEVICE_BUILTIN*/
extern __device__ unsigned int           __umad24hi(unsigned int, unsigned int, unsigned int);
}


#endif  /* __cplusplus && __CUDACC__ */

#endif /* !__EXT_INTRINSICS_H__ */

