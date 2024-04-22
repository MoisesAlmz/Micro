#include <conio.h>
#include <stdlib.h>

int main()
{
	menu();
	
	return 0;
}

void menu()
{
	int salir = 0;
	int opcion = 0;
	
	do{
		system("cls");
		
		printf("\t\t\t\t\t\t Guardado y eliminado de numeros ");
		
		printf("\n\n\n\nMenu desplegable:\n ");
		printf("\n[1].Insertar");
		printf("\n[2].Eliminar");
		printf("\n[3].Salir");
		printf("\n\n\t\tSelecciona que deseas hacer: ");
		scanf("%i", &opcion);
		
		//condicional que sirve para elegir que funcion se va a utilizar
		switch(opcion){
			
			case 1: insertar(); break;
			case 2: eliminar(); break;			
			case 3: salir = 0; break;
		}
		
	}while(salida);
}

struct ubi
{
	int info;
	struct ubi *sig;
};

struct ubi *raiz=NULL;

void insertar(int x)
{
	struct ubi *nuevo;
	nuevo = malloc(sizeof(struct ubi));
	nuevo->info = x;
	
	if (raiz == NULL)
	{
		raiz = nuevo;
		nuevo->sig = NULL;
	}
	
	else
	{
		nuevo->sig = raiz;
		raiz = nuevo;
	}
}

void eliminar()
{
	if (raiz != NULL)
	{
		int infor = raiz->info;
		struct ubi *borrar = raiz;
		raiz = raiz->sig;
		free(borrar);
		return infor;
	}
	else
	{
		return -1;
	}
}

void imprimir()
{
	struct nodo *trayecto=raiz;
	printf("Lista completa: \n");
	while(trayectoria!=NULL)
	{
		printf("%i", trayectoria->info);
		trayectoria=trayectoria->sig;
	}
	printf("\n");
}



