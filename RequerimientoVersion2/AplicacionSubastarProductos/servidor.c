/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "interface2.h"

bool_t *
administradorregistrarproductoofertar_2_svc(nodo_producto *argp, struct svc_req *rqstp)
{
	static bool_t  result;

	/*
	 * insert server code here
	 */

	return &result;
}

void *
listarproductosofertarcliente_2_svc(void *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	return (void *) &result;
}

bool_t *
abrircerrarsubasta_2_svc(int *argp, struct svc_req *rqstp)
{
	static bool_t  result;

	/*
	 * insert server code here
	 */

	return &result;
}

void *
listarproductoscliente_2_svc(void *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	return (void *) &result;
}

nodo_producto *
consultarproducto_2_svc(char **argp, struct svc_req *rqstp)
{
	static nodo_producto  result;

	/*
	 * insert server code here
	 */

	return &result;
}

void *
consultardatosproductoactualsubastando_2_svc(void *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	return (void *) &result;
}

void *
ofreceroferta_2_svc(void *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	return (void *) &result;
}
