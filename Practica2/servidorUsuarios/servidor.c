/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "interface1.h"
#include <string.h>

nodo_usuario misUsuarios[1];

bool_t *
enviardatossesion_1_svc(nodo_usuario *argp, struct svc_req *rqstp)
{
	static bool_t  result;
	cargarUsuarios();
	printf("\n Invocando iniciar sesion");
	printf("\n Login %s" ,argp->login);
	printf("\n Contrasenia %s",argp->contrasenia);
	for(int i = 0 ; i<1 ; i++){
		if(strcmp(misUsuarios[i].login,argp->login) == 0){
			if(strcmp(misUsuarios[i].contrasenia,argp->contrasenia) == 0){
				printf("\n RESPUESTA DEL SERVIDOR:");
				printf("\n Existe usuario");
				printf("\n ************************");
				result=TRUE;
				return &result;
			}
		}
	}	
	result=FALSE;
	if(result==FALSE){
		printf("\n RESPUESTA DEL SERVIDOR:");
		printf("\n NO existe usuario");
		printf("\n ***********************");
	}
	return &result;
}

void cargarUsuarios()
{
	printf("\n Cargando usuarios...");
	nodo_usuario miUsuario;
	strcpy(miUsuario.login,"julian");
	strcpy(miUsuario.contrasenia,"julian123");
	misUsuarios[0]=miUsuario;
}
