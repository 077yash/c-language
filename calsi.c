//wap to create infinite calculator using udf, switch case and loop.

#include<stdio.h>

int main() 
	{
	char op;
	double first,second;
	printf("enter an operator(+,-,*,/):");
	scanf("c",&op);
	printf("enter two operands: ");
	scanf("%lf %lf",&first,&second);
	
	switch(op) 
	{
		case '+' :
			printf("%.1lf + %.1lf = %.1lf", first, second, first+second); 
			break;
		case '-' :
			printf("%.1lf + %.1lf = %.1lf", first, second, first-second);
			break;	
		case '*' :
			printf("%.1lf + %.1lf = %.1lf", first, second, first*second); 
			break;
		case '/' :
			printf("%.1lf + %.1lf = %.1lf", first, second, first/second);
			break;		
		default :
			printf("error! operator is not correct");	
	}
	return 0;
}






