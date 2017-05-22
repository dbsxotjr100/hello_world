#include<stdio.h>
int main(){
	int grade[10];
	int i=0, j=0,sum=0,tmp=0;
	printf("줄의 수를 입력하세요 : ");
	scanf("%d", &num);
	for(i=0;i<=num;i++){
		for(j=0;j<num-i;j++){
			printf(" ");
		}
		for(j=0;j<2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<num;i++){
		for(j=0;j<=i;j++){
			printf(" ");
		}
		for(j=0;j<2*(num-i-1)-1;j++){
			printf("*");
		}
		printf("\n");
	}
			return 0;
}
