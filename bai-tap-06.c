#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	float toan, ly, hoa;
	printf ("Tinh tong diem va trung binh cac mon: ");
	printf ("\nNhap vao diem TOAN: ");
	scanf ("%f",&toan);
	printf ("\nNhap vao diem LY:");
	scanf ("%f",&ly);
	printf ("\nNhap vao diem HOA:");
	scanf ("%f",&hoa);
	printf ("\nTong diem 3 mon la: %.1f",toan+ly+hoa);
	printf ("\nTrung binh 3 mon la: %.1f",(toan+ly+hoa)/3);
	return 0;
}
