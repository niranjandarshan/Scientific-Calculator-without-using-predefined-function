#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	void sqroot(float);
	void power(int,int);
	void power_two(int);
       int fact(int);
	int logrithm(int,int);
	float x1;

	int choice,x,y,i;
	//Making menu
	printf("\n 1.Square root");
	printf("\n 2.Power x^y");
	printf("\n 3.Factorial");
	printf("\n 4. Power of 2");
	printf("\n 5.Logrithm of base  y and number x");
	printf("\n 6. Exit");

	while(1){
		printf("\n Enter your  choice");
		scanf("%d",&choice);
	switch(choice){
	      //Printing the square root of any number
	case 1:

		printf("\n Enter value of number x");
		scanf("%f",&x1);
		sqroot(x1);
		break;
	 //for x^y=?
	case 2:

		printf("\n Enter value of number x");
		scanf("%d",&x);
		printf("\n Enter value of y");
		scanf("%d",&y);
		power(x,y);
		break;

		//Factorial of any number
	case 3:

		printf("\n Enter value of number x");
		scanf("%d",&x);
		printf("%d",fact(x));
		break;
		//for power of 2^x
	case 4:

		printf("\n Enter value of number x");
		scanf("%d",&x);
		power_two(x);
		break;
		//for Lograthmic value with base and number
	case 5:

		printf("\n Enter value of number x");
		scanf("%d",&x);

		printf("\n Enter base value  y");
		scanf("%d",&y);
		printf("%d",logrithm(x,y));
		break;
		//exit from loop
	case 6:
		exit(1);
	default:
		exit(1);
	}
	getch();
	}
}
//Square root function
void sqroot(float x1){
	float m;
	m=x1/2.0;
	float temp=0.0;
	while(m!=temp){
		temp=m;
		m=(x1/temp+temp)/2.0;
	}
	printf("\n Square root is:- %f",m);

}
//Power of x^y
void power(int x,int y){
	int i,mult=1;

	for(i=1;i<=y;i++){
		mult=mult*x;
	}
printf("%d",mult);
}
//for 2^x
void power_two(int x){
	int mult=1,i;

	for(i=1;i<=x;i++){
		mult=mult*2;
	}
printf("%d",mult);

}
//factorial of any number
int fact(int x){
int y;
	if(x<=1)
		return 1;
	else {
		return (x * fact(x-1));

		}

}
//Log value of a number with base and value
int logrithm(int x,int y){
int p;
	if(x > y-1){
	       return (1+logrithm(x/y,y));
	       }

	else
		return 0;

}