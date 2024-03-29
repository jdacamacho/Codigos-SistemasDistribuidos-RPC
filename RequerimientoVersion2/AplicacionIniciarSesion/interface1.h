/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _INTERFACE1_H_RPCGEN
#define _INTERFACE1_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXNOM 20

struct nodo_usuario {
	char login[MAXNOM];
	char contrasenia[MAXNOM];
};
typedef struct nodo_usuario nodo_usuario;

#define gestion_usuarios 0x20000001
#define gestion_usuarios_version_1 1

#if defined(__STDC__) || defined(__cplusplus)
#define registrarAdministrador 1
extern  bool_t * registraradministrador_1(nodo_usuario *, CLIENT *);
extern  bool_t * registraradministrador_1_svc(nodo_usuario *, struct svc_req *);
#define registrarCliente 2
extern  bool_t * registrarcliente_1(nodo_usuario *, CLIENT *);
extern  bool_t * registrarcliente_1_svc(nodo_usuario *, struct svc_req *);
#define enviarDatosSesionAdministrador 3
extern  bool_t * enviardatossesionadministrador_1(nodo_usuario *, CLIENT *);
extern  bool_t * enviardatossesionadministrador_1_svc(nodo_usuario *, struct svc_req *);
#define enviarDatosSesionCliente 4
extern  bool_t * enviardatossesioncliente_1(nodo_usuario *, CLIENT *);
extern  bool_t * enviardatossesioncliente_1_svc(nodo_usuario *, struct svc_req *);
extern int gestion_usuarios_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define registrarAdministrador 1
extern  bool_t * registraradministrador_1();
extern  bool_t * registraradministrador_1_svc();
#define registrarCliente 2
extern  bool_t * registrarcliente_1();
extern  bool_t * registrarcliente_1_svc();
#define enviarDatosSesionAdministrador 3
extern  bool_t * enviardatossesionadministrador_1();
extern  bool_t * enviardatossesionadministrador_1_svc();
#define enviarDatosSesionCliente 4
extern  bool_t * enviardatossesioncliente_1();
extern  bool_t * enviardatossesioncliente_1_svc();
extern int gestion_usuarios_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_nodo_usuario (XDR *, nodo_usuario*);

#else /* K&R C */
extern bool_t xdr_nodo_usuario ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_INTERFACE1_H_RPCGEN */
