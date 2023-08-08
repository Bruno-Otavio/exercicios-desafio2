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
	int ordPos;

	while (ordPos < n) {
	    for (i = 0; i < n - ordPos; i++) {
	        if (numArray[i] < min && numArray != 0) {
	            min = numArray[i];
	            delPos = i;
	        }
	    }
	
	    printf("dP: %d \n", delPos);
	    order[ordPos] = min;
	
	    for (i = delPos; i < n - 1; i++) {
	        numArray[i] = numArray[i+1];
	    }
	    
	    for (i = 0; i < n - (ordPos + 1); i++){
	    	printf("%d ", numArray[i]);
		}
		ordPos++;
	}
	
	for (i = 0; i < 5; i++) {
		printf("%d, ", order[i]);
	}

    return 0;
}
