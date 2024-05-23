#include<stdio.h>   
#include<string.h>  
#include<stdlib.h>  

int main() {   

    //se pide al usuario el tamaño de la matriz
    printf("Ingrese el tamaño de la matriz\n");

    // Declara las variables para las filas y columnas.
    int renglon, columna;   

    scanf("%d", &renglon);  // Lee el tamaño de las filas desde la entrada estándar.
    columna = renglon;      // Inicializa las columnas con el mismo valor que las filas.
    int aux1 = columna, aux2, aux3 = -1, sum = 1, aux4 = 0; // Variables auxiliares para el cálculo.
    int i = 0, j = 0, valor = 1;   // Variables de control de bucles y para el valor inicial.
    int **matriz;   // Declara un puntero a puntero para la matriz.
    int *ren;       // Declara un puntero para las filas de la matriz.

    matriz = (int **)malloc(renglon * sizeof(int *)); // Reserva memoria para el número de filas.

    for (i = 0; i < renglon; i++) {   // Bucle para cada fila.
        if (columna != 0) {   // Si columna no es cero.
            *matriz = (int *)malloc(columna * sizeof(int)); // Reserva memoria para las columnas de la fila actual.
            ren = *matriz;   // Asigna el puntero de la fila actual a 'ren'.
            columna--;       // Decrementa el número de columnas.
            aux3++;          // Incrementa el auxiliar.
        }
        for (j = 0; j <= columna; j++) {   // Bucle para cada elemento de la columna.
            *ren = sum;    // Asigna el valor de 'sum' al elemento actual de la fila.
            sum++;         // Incrementa 'sum'.
            valor++;       // Incrementa 'valor'.

            printf("\t%d ", *ren); // Imprime el valor actual del elemento de la fila.
            ren++;         // Avanza al siguiente elemento de la fila.
        }
        aux2 = valor;      // Actualiza 'aux2' con el valor actual.
        aux4 = aux4 + aux3; // Actualiza 'aux4' sumándole 'aux3'.
        sum = aux4 + aux2;  // Calcula el nuevo valor de 'sum'.
        printf("\n");      // Imprime una nueva línea después de imprimir una fila.
        matriz++;          // Avanza al siguiente puntero de fila en la matriz.
    }

    return 0;  // Finaliza la función principal.
}