#include <stdio.h>
#include <locale.h>

/*
	Utilizando apenas um vetor de tamanho 6, troque os valores de maneira inversa,
	ex: 2 4 6 8 10 11 inverso 11 10 8 6 4 2;
*/

int main() {
    setlocale(LC_ALL, "");

    int numbers[6] = {2, 4, 6, 8, 10, 11};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int half = size / 2 - 1;
    
    int i, temp;
    for (i = 0; i < half; i++) {
        temp = numbers[i];
        numbers[i] = numbers[size - 1 - i];
        numbers[size - 1 - i] = temp;
    }

    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
