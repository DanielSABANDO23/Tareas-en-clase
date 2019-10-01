/******************************************************************************


*******************************************************************************/
#include <stdio.h>

void main ()
{
    char nombre[10],descP1[20],descp2[20];
    char cedula[10];
    float descP1,descp2,cantP1,cantP2,precioP1precioP2,pVtaP1,pVtaP2,subtotal=0,iva,total=0
    printf("Ingrese el nombre:");
    scanf("%s",nombre);
    printf("Ingresa la cedula:");
    scanf("%s",cedula);
    printf("Datos del producto 1\n");
    printf("Ingrese la decripcion:");
    scanf("%s"descP1);
    printf("Ingrese el precio:");
    scanf("%s"&precioP1);
    printf("Ingrese la cantidad:");
    scanf("%s"&cantP1);
    printf("Datos del producto 2\n");
    printf("Ingrese la decripcion:");
    scanf("%s"descP2);
    printf("Ingrese el precio:");
    scanf("%s"&precioP2);
    printf("Ingrese la cantidad:");
    scanf("%s"&cantP2);
    pVtaP1=cantP1*precioP1;
    pVtaP2=cantP2*precioP2;
    subtotal=pVtaP1+pVtaP2;
    iva=subtotal*0.012;
    total=subtotal+iva;
    printf("******COMPUTEKSA******\n");
    printf("Cliente:%s\n",nombre);
    printf("Cedula:%s\n",cedula);
    printf("Descripcion\tCantidad\tPrecio\t\tPventa\n");
    printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\n",descP1,cantP1,precioP1,pVtaP1);
    printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\n",descP2,cantP2,precioP2,pVtaP2);
    printf("\t\t\t\tSubtotal:%.2f\n",subtotal);
    printf("\t\t\t\tIva:%.2f\n",iva);
    printf("\t\t\t\tTotal:%.2f\n",total);