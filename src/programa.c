#include <stdio.h>

#define SIZE 5  // Tamaño de los arreglos

int main() {
    int array1[SIZE], array2[SIZE], sumArray[SIZE];
    int i;
    float totalSum = 0, average;

    // Entrada de datos para el primer arreglo
    printf("Introduce %d elementos para el primer arreglo:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Entrada de datos para el segundo arreglo
    printf("\nIntroduce %d elementos para el segundo arreglo:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Sumar los arreglos y calcular la suma total
    for (i = 0; i < SIZE; i++) {
        sumArray[i] = array1[i] + array2[i];
        totalSum += sumArray[i];
    }

    // Calcular el promedio
    average = totalSum / SIZE;

    // Mostrar los resultados
    printf("\nResultados:\n");
    printf("Arreglo resultante (suma): ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", sumArray[i]);
    }
    printf("\nPromedio del arreglo resultante: %.2f\n", average);

    return 0;
}
