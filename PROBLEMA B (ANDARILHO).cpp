#include <stdio.h>
#include <stdlib.h> 

int main (){
	char resposta='s';
	
do {
	printf("\n\n\n\t\t\tO ANDARILHO\n\n");
	int quantidade;
	
	printf("\nQuantidade de vezes que os passos serao revezados: ");
	scanf("\n%i",&quantidade);
	
	if (quantidade==0){
	exit(0);
	}

	int i=0;
	int passos[i];
	int n=0;
	int maior=0;
	
	for ( ; i<quantidade+1; i++){
	printf("\nQuantidade de passos: ");
	scanf("\n%i",&passos[i]);		
	
			if (i%2==0){
			       if (n==0){
			       	n=passos[i];
			       }
			       else {
			n=n+passos[i];	
			       }
			}
			else{
				n=n-passos[i];
			}
			if (n>maior)
			maior=n;
	}
printf("\n___________________________________________________________");
printf("\nA maior distancia  percorrida por Joaozinho foi: %i",maior);
printf(" passos.");
printf("\n\nChecar outra vez?");
printf("\n(Tecle 's' para continuar ou tecle qualquer digito para sair): ");
scanf("\n%c",&resposta);
if (resposta !='s'){
exit (0);
}
} while (1);
	
return 0;
}
