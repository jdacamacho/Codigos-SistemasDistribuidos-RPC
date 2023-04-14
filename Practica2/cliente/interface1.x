/*Definicion de las operaciones que se pueden realizar*/

const MAXNOM = 20;

struct nodo_usuario{	
	char login[MAXNOM];	
	char contrasenia[MAXNOM];	
};


program gestion_usuarios{
	version gestion_usuarios_version_1{
		bool enviarDatosSesion(nodo_usuario objUsuario)=1;		
	}=1;
}=0x20000001;
