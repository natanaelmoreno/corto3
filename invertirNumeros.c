//Escribir un programa para invertir números utilizando pilas

#include<stdio.h>

//tamaño maximo que asignaremos
int MAXSIZE= 8;
//declaramos vector de pila desde 0 hasta 7 
int pila[8];
int top=-1;
int *pil=pila;
int cambioPila[8];

void cambio();
int estaVacia();
int estaLlena();
int contar();
int pop();
int pop2();
int push();

//Metodo para comprobar si la pila esta vacia
int estaVacia(){
  if (top == -1)
  return 1;
  else 
  return 0;
}

//Metodo para comprobar si la pila esta llena
int estaLlena(){
  if (top==MAXSIZE)
  return 1;
  else 
  return 0;
}	

//Metodo para contar la pila
int contar(){
	return pila[top];
	}
	
//metodo para invertir los numeros de la pila	
void cambio(){
	
	if (!estaVacia())
	{   
		int i;
	    int j=0;
		 for (i = (MAXSIZE-1) ; i >=0  ; i--)
	  {   
		int cam =pil[i];
		cambioPila[j]= cam;
		
	     }
	     
	  }
	}
	
	
		
int pop(){
	int datos;
	if (!estaVacia())
	{    
		
		datos=pila[top];
		cambioPila[top]=datos;
		top=top-1;
		return datos;
	}else{
		printf("\tLa pila esta vacia\n");
		}
	}


	
	int push(int datos){
		if (!estaLlena()){
			top=top+1;
			pila[top]=datos;
		}else{
			printf("\tLa pila esta llena\n");
			}
			
	}	



	int main(void){
	//Cargamos elementos a la pila 	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);	
	
	printf("\tElementos dentro la pila :%d\n",contar());
	printf("Elementos: \n");
	//Imprimimos los datos de la pila en el orden que fueron ingresados
	
	while (!estaVacia()){
   int datos=pop();
   printf("%d\n",datos);		
	}
	//Imprimimos los elementos de la pila pero de manera invertida
	  printf("\nImprimimos  elementos invertidos :\n");
	  
	 int i;
	   
	 for (i = 0 ; i < MAXSIZE  ; i++)
	  {   
		  if (cambioPila[i]==0)
		  {
			  break;
		  }else{
		  
		printf("\n%d",cambioPila[i]);
		    }
		}
}
