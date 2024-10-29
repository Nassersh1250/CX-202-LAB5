#include <stdio.h>
int addint(int a, int b){
        return a+b;
}


float addflt(float c, float d){
        return c+d;
}

float areacirc(float r){
        return 3.1415*r*r;
}


float arearect(float w, float l){
        return w*l;
}


int factorial(int n){
        if (n==0){
                return 1;
        }
        else {
                return n*factorial(n-1);
        }
}

int main(){

	int sumint=addint(5,7);
	printf("adding two integers 5 and 7 = %d\n",sumint);
	float sumfloat = addflt(5.32,7.33);
	printf("adding two floats 5.32 and 7.33 = %f\n",sumfloat);
	float cir = areacirc(10);
	printf("area of a circle with radius 10 cm = %f\n",cir);
	float rec = arearect(4,10);
	printf("area of rectangle with width 4 and length 10 = %f\n",rec);
	int fac = factorial(5);
	printf("factorial of 5 = %d\n",fac);

	return 0;


}





