/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _TRPC_H_RPCGEN
#define _TRPC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct args {
	float value;
	char operation;
};
typedef struct args args;

#define TRPC 456123789
#define TRPC_VERS 6

#if defined(__STDC__) || defined(__cplusplus)
#define SETTEMP 1
extern  void * settemp_6(args *, CLIENT *);
extern  void * settemp_6_svc(args *, struct svc_req *);
#define GETTEMP 2
extern  float * gettemp_6(void *, CLIENT *);
extern  float * gettemp_6_svc(void *, struct svc_req *);
extern int trpc_6_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SETTEMP 1
extern  void * settemp_6();
extern  void * settemp_6_svc();
#define GETTEMP 2
extern  float * gettemp_6();
extern  float * gettemp_6_svc();
extern int trpc_6_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_args (XDR *, args*);

#else /* K&R C */
extern bool_t xdr_args ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_TRPC_H_RPCGEN */
