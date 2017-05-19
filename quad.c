// Do not copy this and paste this code. Type it. I did!
//compile gcc inputabc.c -o inputabc -lm
//run ./inputabc
#include <stdio.h>
#include <math.h>
float discriminat (float a, float b, float c);
float main(){
	float a,b,c,d,x1,x2;
	printf("\n\t ************ ************* ************* ************* *************\n");
	printf("\t Type in 3 values for a,b and c. Type Enter after each input. \n");
	printf("\t the discriminate of a+b+c will be calculated and displayed.\n");
	printf("\t Input a:");
	scanf("%f", &a );
	printf("\t Input b:");
	scanf("%f", &b );
	printf("\t Input c:");
	scanf("%f", &c );
	d = disc(a,b,c);
	if (d < 0){
			//imaginary roots
}
	else {
	printf("\t\nImaginary\n");
	x1 = ((-1*b)+sqrt(d))/(2*a);
	
}
	
	
	printf("\n\t a =  %f b = %f c = %f",a,b,c);
	printf("\n\t The discriminate of a+b+c is %f ",d);
		printf("\n\t ************ ************* ************* ************* *************\n");
	return 0;
}


float discriminat (float a, float b, float c){
		float d = (b*b-4*a*c);
		return d;
}
