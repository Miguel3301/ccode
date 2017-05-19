#include <stdio.h>
#include <math.h>
float main()	/* program which introduces keyboard input */
	{
		float a,s;
		
		printf("Type in a numbers a \n");
		printf("After the input type the Enter key. \n");
		printf("Input a ");
		scanf("%f", &a);
		printf("The number you type was %f\n", a);
		s = sqrt(a);
		printf("The square root of %f is %f\n",a, s);
	}
