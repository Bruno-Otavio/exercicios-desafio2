#include <stdio.h>

int main() {
	int numArray[5], order[5];
	int n = sizeof(numArray) / sizeof(numArray[0]);

	int i;
	for (i = 0; i < n; i++) {
		printf("Digite o %d valor: ", i+1);
		scanf("%d", &numArray[i]);
	}

	int min = numArray[0];
	int delPos;

    for (i = 0; i < n; i++) {
        if (numArray[i] < min && numArray != 0) {
            min = numArray[i];
            delPos = i;
        }
    }

    printf("dP: %d ", delPos);
    order[ordpos] = min;

    for (i = delPos; i < n - (ordpos + 1); i++) {
        numArray[i] = numArray[i+1];
    }
    printf("nA: %d | ", numArray[ordpos]);
    ordpos++;

    return 0;
}
