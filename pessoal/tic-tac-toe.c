#include <stdio.h>

int main()
{
	char boardPositions[9];
	
	printf("  %d  |  %d  |  %d \n", boardPositions[0], boardPositions[1], boardPositions[2]);
	printf("-----+-----+-----\n");
	printf("  %d  |  %d  |  %d  \n", boardPositions[3], boardPositions[4], boardPositions[5]);
	printf("-----+-----+-----\n");
	printf("  %d  |  %d  |  %d  \n", boardPositions[6], boardPositions[7], boardPositions[8]);
	
	return 0;
}
