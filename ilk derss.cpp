#include <stdio.h>
#include <process.h>
#include <math.h>
#define M_PI 3.14159265
int main() {

	float a, b, c;
	printf("kenar uzunluklarini yaziniz : ");
	scanf("%f %f", &a, &b);
	a = pow(a, 2);
	b = pow(b, 2);
	c = sqrt(a + b);
	printf("HÝPO degeri :%f", c);
	//////////////////////////////////////////////////////////////////////////////////////
	float num;
	printf("Enter a number : ");
	scanf("%f", &num);
	printf("Casinus of %f : %f\n", num, cos(num*M_PI / 180.0));
	printf("Sinus of %f : %f\n", num, sin(num*M_PI / 180.0));
	printf("Square of %f : %f\n", num, pow(num, 2));
	printf("Root Square of %f : %f\n", num, sqrt(num));
	///////////////////////////////////////////////////////////////////////////////

		int a,s;
		printf("iki sayi giriniz : ");
		scanf("%d %d", &a, &s);
		printf("ORTALAMASI : %.2f\n", (a + s) / 2.0);
		

	system("pause");
	return 0;
}


