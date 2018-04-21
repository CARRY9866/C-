#include<stdio.h>

int main(void){
		int nl, nspace, nstar, i, j;
		
		scanf("%d",&nl);
		for(nspace = nl/2, nstar = 1; nspace >= 0 && nstar <= nl; nspace--, nstar+=2){
				for(i = 0; i < nspace; i++)
						printf(" ");
				for(j = 0; j < nstar; j++)
						printf("*");
				printf("\n");
		}
		for(nspace = 1, nstar = nl-2; nspace <= nl/2 && nstar >= 1; nspace++, nstar-=2){
				for(i = 0; i < nspace; i++)
						printf(" ");
				for(j = 0; j < nstar; j++)
						printf("*");
				printf("\n");
		}

		return 0;
}
