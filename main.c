#include <stdio.h>
#include <math.h>

double funcF(int x){
	if (x > 0) return exp(-x) * sin(x);
	else return exp(x)*sin(x);
}

double funcG(int x){
	if (x > 0) return exp(-x) * cos(x);
	else return exp(x) * cos(x);
}

int main(){
	float x;
	printf("Enter the value of X: ");
	scanf("%f", &x);
	printf("Func f(x) = %f\n", funcF(x));
	printf("Func g(x) = %f\cn", funcG(x));
	return 0;
}
