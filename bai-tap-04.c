#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	float num1;
	printf ("Nhap so nhiet do (0C): ");
	scanf ("%f",&num1);
	printf ("Nhiet do theo thang F: %.2f",((9*num1)/5)+32);

	getch();
	
	return 0;
}
