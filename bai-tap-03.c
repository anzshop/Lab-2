#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int num1,num2;
	printf ("Nhap so num1 = ");
	scanf ("%d",&num1);
	printf ("Nhap so num2 = ");
	scanf ("%d",&num2);
	printf ("Tong: %d",num1+num2);
	printf ("\nHieu: %d",num1-num2);
	printf ("\nTich: %d",num1*num2);
	printf ("\nThuong: %d",num1/num2);
	//Hoi lai co giao dong code tren
	getch();
	
	return 0;
}
