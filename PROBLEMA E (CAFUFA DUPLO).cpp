#include <stdio.h>     
#include <stdlib.h>



int main (){



do {
	
int numeros,primeiro,segundo;
printf("\n\n\n\t\t\tO CAFUFA DUPLO\n\n");
printf("Quantidade de numeros que irao compor a contagem final: ");

scanf("%d",&numeros);

printf("\nInforme o primeiro numero: ");

scanf("\n%d",&primeiro);

printf("\nInforme o segundo numero: ");

scanf("\n%d",&segundo);

int cont=0;



printf("\n------------------------------------\n");





for (int i=1; i<numeros+1; i++){

int x,y,a,b;



cont=cont+1;

x=i%primeiro;	

y=i%segundo;

a=(i-primeiro)%10;

b=(i-segundo)%10;



if ((x==0) || (y==0) || (a==0) || (b==0))

{

printf("Cafufa");

		

		if (i<numeros)

		printf(", ");

		else

		printf(".");


} else 

{

printf("%i",i);

		if (i<numeros)

		printf(", ");

		else

		printf(".");

}
}

char resp;

printf("\n\nDeseja continuar? ");
printf("\n('s' para continuar ou tecle qualquer tecla para sair): ");
scanf("\n%c",&resp);
if (resp != 's'){
	exit(0);
}
} while (1);


return 0;

}
