/**
 * @file prog9.c
 * @author Ramirez Aguilar Victor Sauul (victors.ramirezq@gmail.com)
* @brief  programa que calcula la raiz de un numero usando el ciclo for
*@version 0.1
* @date 2023-03-11
* @boleta 2023640349
*
* @copyright GPL v3
*
*/

#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main ()
{
    const float e = 2.71828182846;
    float n = 0, m = 0, k = 0, logN = 0, suma = 0, res = 0;

    printf("proporcione el numero dentro de la raiz:  ");
    scanf("%f", &n);   
    printf("proporcione la raiz:  ");
    scanf("%f", &m);


    for (k = 0.0; k <= 5000; k++)
    {
        logN = (1/((2*k)+1))*pow(((n-1)/(n+1)),((2*k)+1));
        suma = logN + suma;
    }

    logN = ((2)*(suma));
    res = pow(e,((1/m)*logN));

    printf("El resultado de tu raiz es:  %0.3f", res);
    return 0;
}





