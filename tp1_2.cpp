#include <stdio.h>
#include <stdlib.h>

int cuadrado(int n);
void cuad(int n);
void invertir(int a,int b);

int main(){

    int var1,var2,resultado;

    printf("Ingrese un numero a: ");
    fflush(stdin);
    scanf("%d",&var1);
    printf("Ingrese un numero b: ");
    scanf("%d",&var2);
    

    resultado = cuadrado(var1);
    printf("El cuadrado del numero a es: %d \n\n",resultado);

    //Con funcion de tipo void
    cuad(var1);

    printf("La direccion de la variable es: %p \n",&var1);
    printf("El contenido de la variable es: %d \n\n",var1);

    invertir(var1,var2);


    scanf(" %c");
    return 0;
}


/////////////////////////////////////////////FUNCIONES//////////////////////////////////////////////
int cuadrado(int n){
   return n*n;
}


void cuad(int n){
    int aux = n*n;
    printf("El cuadrado del numero a es: %d \n\n",aux);
}


void invertir(int a,int b){
    int aux;

    aux = a;
    a = b;
    b = aux;

    printf("El valor del numero a ahora es: %d \n",a);
    printf("El valor del numero b ahora es: %d \n\n",b);

    if(a<b){
        printf("En forma ordenada a = %d y b = %d",a,b);
    }else{
       aux = a;
        a = b;
        b = aux;

        printf("En forma ordenada a = %d y b = %d",a,b); 
    }
}


