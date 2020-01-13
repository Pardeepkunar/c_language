// 5.While loop
#include<stdio.h>

void main()
{
		int num1,num2,result;
		int a=0;
		
		while(a<=5)
		{
 	    printf("\nEnter a 1 number = ");
		scanf("%d",&num1);
		printf("Enter a 2 number = ");
		scanf("%d",&num2);
		result = num1+num2;
		printf("your result is = %d",result);
		a++;
		}

}

