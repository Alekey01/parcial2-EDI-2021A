#include <stdio.h>

#define RENGLON 2
#define COLUMNA 3

int main()
{
    float matriz[RENGLON][COLUMNA];

    //Capturamos los numeros por renglon
    for(int i = 0; i < RENGLON; i++)
    {
        for(int j = 0; j < COLUMNA; j++)
        {
            printf("Dame un numero para el renglon %d y la columna %d:", i+1, j+1 );
            scanf("%f", &matriz[i][j]);
        }
    }

    //Calculamos los promedios por columna
    float promedio;

    for(int i = 0; i < COLUMNA; i++)
    {   
        float suma = 0;

        for(int j = 0; j < RENGLON; j++)
        {
            suma = suma + matriz[j][i];
           
        }
        
        promedio = suma / RENGLON;

        printf("El promedio de la columna %d es: %f", i + 1, promedio);
        printf("\n");
    }

    getch();
    return 0;
}