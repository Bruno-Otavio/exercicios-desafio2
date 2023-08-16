#include <stdio.h>

int main() {
	char cliente[10];
	int dias;
	float mediaSistolica, mediaDiastolica;
	float decisao = 1;
	while(decisao < 2){
		mediaDiastolica = 0;
		mediaSistolica = 0;
		
		printf("Nome do(a) cliente:");
		scanf("%s", &cliente);
		printf("Quantidade de dias medidos: ");
		scanf("%d", &dias);
		
		int sistolica;
		int diastolica;
		
		int i;
		for(i = 0; i < dias; i++){
			printf("Escreva sua pressao sistolica: ");
			scanf("%d", &sistolica);
			
			printf("Escreva sua pressao diastolica: ");
			scanf("%d", &diastolica);
			printf("========================\n");
			
			mediaSistolica += sistolica;
			mediaDiastolica += diastolica;
		}
		
		mediaSistolica /= dias;
		mediaDiastolica /= dias;
		printf("A media da pressao do cliente e: %.2f por %.2f\n", mediaSistolica, mediaDiastolica);
		
		printf("Digite 1 para continuar ou 2 para encerrar o programa.\n");
		scanf("%f", &decisao);
	}
	return 0;
}
