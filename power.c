
#include "myMath.h"
#define E 2.71828
#define E1 2.71828

double Exponent(int x){
	double s=2.71828;
	if(x==0){
		return 1.0;
	}
	if(x==1){
		return E;
	}
	if(x<0){
		x=-1*x;
		int i=2;
			while(i<=x){
				s=s*E;
			    i++;
			}
			return 1/s;

	}
	else{
		int i=2;
			while(i<=x){
				s=s*E;
			    i++;
			}
			
			}	
		
	return s;
}


double Power(double x , int y){
double t=x;
	if(y==0){
		return 1.0;
	}
	if(y==1){
		return x;
	}
	if(y<0){
		y=-1*y;

		for (int i = 2; i <= y; ++i)
		{
			x=x*t;
		}
		return (1/x);

	}
	else{
		for (int i = 2; i <= y; ++i)
		{
			x=x*t;
		}
	}
	return x;

}








