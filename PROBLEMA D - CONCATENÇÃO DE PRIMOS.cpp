#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int ConcatenPrimos(int e[], char c[]){
	int num,i,l,k,j,m,ver,p,a;
	l=1;
	j=1;
	num=0;
	ver=0;
	a=0;
	m= atoi(c);
	for(num=0;num<strlen(c);++num){
		if (c[num]<48 or c[num]>57){
			return j;} 
		 }
	if (e[0]==0 or m==1)
		return j;
	for(num=0;num<strlen(c);++num){
		if (c[num]<48 or c[num]>57)
			return j;
		if (e[num]==1 and e[num]==e[strlen(c)-1]){
			e[num]=(e[num-1] * (pow(10,1))) + e[num];
			++l;}
		if (e[num]==1){
			e[num+1]=(e[num] * (pow(10,1))) + e[num+1];
			++l;
			break;				
		}
		for (i=2;i<e[num];++i) {
				if (e[num] % i==0 or e[num]==1 or e[num+1]==0)  {
				if ((strlen(c))-1==num){
					if (ver==0)				
					return j;
					e[num]=(e[num-l] * (pow(10,l))) + e[num];
				for(a=2;a<e[num];++a){
					if (e[num] % a==0 ){
						return j;} } }
				e[num+1]=(e[num] * (pow(10,1))) + e[num+1];
				++l;
				p=1;
				break;
			}
		}
		if (p!=1){
			l=1;
			ver=1;
			p=0;}
}
	++j;
	return j;
}
int main (){
	int v,i,e[5],j,l,k;
	char c[5];
	scanf("%d",& v);
	for (i=0;i<v;++i){
		scanf("%s",c);
		for(j=0;j<strlen(c);++j){
			e[j] = (c[j]-48) ;
		}
		k=ConcatenPrimos(e,c);
		if (k ==1){
			printf("Nao\n");
		}
		if(k==2){
			printf("Sim\n");
		}
	}
	system("pause");
	return 0;
}
