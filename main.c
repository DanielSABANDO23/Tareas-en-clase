/******************************************************************************
Realizar un programa en C que determine el area del circulo
*******************************************************************************/
#include <stdio.h>//defincion de biblioteca
#define pi 3.141//defincion constatnte pi

void main()//definicion de la funcion principal
{//inicio
    float radio,area=0;
    printf("Ingrese el radio")
    scanf("%f",&radio);
    area=pi*radio*radio 
    printf("El area es;%f",area);
}//fin