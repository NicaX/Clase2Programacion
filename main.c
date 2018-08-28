#include <stdio.h>
#include <stdlib.h>



void sumar2(int, int);
int sumar3(void);
int main()
{
    int suma;
    suma = sumar3();
    printf("La suma es: %d",suma);



    return 0;
}


void sumar2(int n1, int n2)
{
	//(acà no voy a pedir los numeros, ya que los numeros van a venir de afuera, ya sea del main o de otra funcion)
	int suma;
	suma=n1+n2;

    printf("La suma de los dos numeros es %d", suma);
}

int sumar3(void)
{
    int numero1;
    int numero2;
    int suma;

    printf("Ingrese el primer numero ");
    scanf("%d",&numero1);


    printf("Ingrese el segundo numero ");
    scanf("%d",&numero2);

    suma=numero1 + numero2;
    return suma;
}
