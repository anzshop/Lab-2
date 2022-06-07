#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	float top, bottom, heigh;
	printf ("TINH DIEN TICH HINH THANG: ");
	printf ("\nNhap vao day nho: TOP = ");
	scanf ("%f",&top);
	printf ("\nNhap vao day day lon: Bottom = ");
	scanf ("%f",&bottom);
	printf ("\nNhap vao day nho: Heigh = ");
	scanf ("%f",&heigh);
	printf ("\nDien tich hinh thang = %f",(top+bottom)*heigh*1/2);
	
	return 0;
}
