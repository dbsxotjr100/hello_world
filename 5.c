#include<stdio.h>
float my_cal(char op,float operand_1,float operand_2)
{	
	float result;
	switch(op)
	{
		case'+':
			result=operand_1+operand_2;
			break;
		case'-':
			result=operand_1-operand_2;
			break;
		case'*':
			result=operand_1*operand_2;
			break;
		case'/':
			result=operand_1/operand_2;
			break;
		default:
			printf("오류");
	}
	return result;}
	int main(){
		char op;
		float operand_1,operand_2;
		printf("연산자를 입력하세요 : ");
		scanf("%c",&op);
		printf("두 개의 숫자를 입력하세요 : ");
		scanf("%f %f",&operand_1,&operand_2);
		printf("결과값은 %f 입니다.",my_cal(op,operand_1,operand_2));
		return 0;
	}
