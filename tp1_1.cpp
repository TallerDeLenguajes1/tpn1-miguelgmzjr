#include <stdio.h>


int main(){


int num = 14;
int tamanio = sizeof(num);
int *pnum;

pnum = &num;

printf("El contenido del puntero pnum es: %d \n",*pnum);
printf("La direccion de memoria almacenada por el puntero es: %p \n",pnum);
printf("La direccion de memoria de la variable es: %p \n",&num);
printf("La direccion de memoria del puntero es: %p \n",&pnum);
printf("El tamanio de memoria utilizado por la variable es: %d",tamanio);



getchar();
return 0;
}