#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

struct contas {
	float d,c;
	char TipoDeConta[2]; //Analítica ou Sintética
	char number[15];
};
struct contas q[1000];
int dc (int i,int n){
	int e,j,l,k; 
	char n1[15],n2[15];
	for (e=n;e>=0;--e){
		if(strcmp(q[e].TipoDeConta,"A")==0){
			for(j=e;j<n;++j){
			if (strlen(q[e].number)!=strlen(q[j].number)-1)
				continue;
			strcpy(n1,q[j].number);
			n1[strlen(q[e].number)]= NULL;
			for(k=0;k<strlen(q[j].number)-1;++k){
				n2[k]=q[j].number[k+1];
			}
			if (strcmp(n1,q[e].number)==0 or strcmp(n2,q[e].number)==0) {
				q[e].d=(q[j].d) + (q[e].d);
				q[e].c=(q[j].c) + (q[e].c);
			}
			}
		}
	}

}
int main (){
	int n,i,e;

	scanf("%d",&n);	
	for (i=0;i<n;++i){
		printf("\nInforme o numero:");
		scanf("%s",q[i].number);
		while(q[i].number[0]=='0'){
			for (e=0;e<strlen(q[i].number);++e){
			q[i].number[e]=q[i].number[e+1]; }
		}
		for (e=strlen(q[i].number)-1;e>=0;--e){
			if (q[i].number[e]!='0'){
			q[i].number[e+1]= NULL;
			break; }
			}
			printf("\Tipo da Conta:");
		scanf("%s",& q[i].TipoDeConta);
		q[i].c=0;
		q[i].d=0;
		if(strcmp(q[i].TipoDeConta,"S")==0){
			printf("\Credito:");
			scanf("%f",& q[i].c);
			printf("\nDebito:");
			scanf("%f",& q[i].d);
			}
	}	
	dc (i,n);
	for (i=0;i<n;++i){
		printf("%s ",q[i].number);		
		printf("%.2f ",q[i].c);
		printf("%.2f ",q[i].d);
		printf("\n");
}
	system("pause");
	return 0;
}
