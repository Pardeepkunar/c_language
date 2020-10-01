//return Function
#include<stdio.h>

/*
	Delcleare
	Defination
	calling
*/

int deep(); //Decleration

int main()
{
	int result = deep();     //Calling Function
	printf("Total Sum is %d",result);

}


int deep() //Function Defination
{
	int a=10;
	int b=10;
	int c = a+b;
	return c;
}
