#include<stdio.h>
#include "myMath.h"



int main(){
	double x;
	printf("enter a number/n");
	scanf("%lf", &x);
	double q1 = Exponent(x);   
	double q2 = Power(x,3);
	double q3 = add(q1,q2);
	double fx1 = sub(q3,2);

	double f = mul(x,3);
	double f1 = Power(x,2);
	double f2 = mul(f1,2);
	double fx2 = add(f,f2);

	double s = Power(x,3);
    double s1 = mul(s,4);     	                          
    double s2 = div(s1,5);
    double s3 = mul(x,2);
    double fx3 = sub(s2,s3);

    printf("The value of f(x) = e^x + x^3 − 2 at the point  %.4lf is %.4lf\n" , x , fx1);
    printf("The value of f(x) = 3*x + 2*x^2  at the point  %.4lf is %.4lf\n" , x , fx2);
    printf("The value of f(x) = (4x^3)/5 -2*x at the point  %.4lf is %.4lf\n" , x , fx3);
    return 0;
}













