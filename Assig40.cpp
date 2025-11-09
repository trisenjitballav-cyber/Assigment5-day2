#include<stdio.h>
int main(){
	int n=3;
	for(inti=1;i<=n;i++){
		for(intj=1;j<=n-i;j++){
			printf("");}
			for(intj=1;j<=1;j++){
				printf("*");
				if(j<i){printf(" ");}}
				printf("\n");}
				for(inti=n-1;i>=1;i--){
					for(intj=1;j<=n-1;j++){printf(" ");}
					for(int=1;j<=1;j++){
						printf("*");
						if(j<i){
							printf(" ");}}
							printf("\n");}
							return 0;
						}