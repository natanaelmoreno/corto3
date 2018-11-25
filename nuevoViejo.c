/*Escribir una función Reemplazar que tenga como argumentos una pila con
tipo de elemento int y dos valores int: nuevo y viejo de forma que si el
segundo valor aparece en algún lugar de la pila,sea reemplazado por el
segundo.*/



#include<stdio.h>
//tamaño maximo que asignaremos
int MAXSIZE= 7;
//declaramos vector de pila desde 0 hasta 6 
int pila[7];
int top=-1;

void cambio();
int estaVacia();
int estaLlena();
int contar();
int pop();
int push();
int nuevo,viejo;


int estaVacia(){
  if (top == -1)
  return 1;
  else 
  return 0;
}

int estaLlena(){
  if (top==MAXSIZE)
  return 1;
  else 
  return 0;
}	

int contar(){
	return pila[top];
	}
	
		
int pop(){
	int datos;
	if (!estaVacia())
	{    
		//Hacemos el cambio del valor viejo por el nuevo
		int cm=pila[top];
		if (cm==viejo)
		{
			pila[top]=nuevo;
		}
		
		datos=pila[top];
		top=top-1;
		return datos;
	}else{
		printf("\tLa pila esta vacia\n");
		}
	}


	
	int push(int datos){
		if (!estaLlena())
		{
			top=top+1;
			pila[top]=datos;
		}else{
			printf("\tLa pila esta llena\n");
			}
		}	



	int main(void){
	//Hacemos push a la pila 	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	push(70);
	
	//ojo. lo puse comentado porque me estaba dando bastantes errores a la hora de pedir todos los datos
	printf("\nlos elementos dentro de la pila \n "
	"70\n 60\n 50\n 40\n 30\n 20\n 10\n \n");
	//pedimos su nuevo valor
	printf("\nIngrese su valor nuevo :\n");
	scanf("%d",&nuevo);
	//pedimos su viejo valor
	printf("\nIngrese su valor viejo :\n");
	scanf("%d",&viejo);
	printf("Elementos: \n");
	//Imprimimos los elementos en el orden ingresados
	
	while (!estaVacia())
	{
		//mostramos todos los datos
   int datos=pop();
   printf("%d\n",datos);		
	}
	//mostramos si la pila esta llena o vacia
      printf("\nPila llena: %s\n" , estaLlena()?"true":"false");
	  printf("Pila vacia: %s\n" , estaVacia()?"true":"false");

		}

