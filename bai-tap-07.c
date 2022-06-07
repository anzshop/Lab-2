#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){

	int select,stop;
	float r,r1,d,d1,c;
	stop=1;
	while (stop==1)
	{
	printf ("CHUONG TRINH TINH CHU VI, DIEN TICH HINH TRON - VUONG - CHU NHAT: ");
	printf ("\nLUA CHON CAC SO SAU:");
	printf ("\n1: CHU VI HINH TRON \n2: DIEN TICH HINH TRON");
	printf ("\n3: CHU VI HINH VUONG \n4: DIEN TICH HINH VUONG");
	printf ("\n5: CHU VI CHU NHAT \n6: DIEN TICH HINH CHU NHAT\nNHAP VAO LUA CHON TU 1-6: ");

	scanf ("%d",&select);


	
		if (select ==1)
		{
			printf ("\n***********************\nCHUONG TRINH TINH CHU VI HINH TRON\n");
			printf ("Nhap vao ban kinh: r=");
			scanf ("%f",&r);
			r1=2*3.14*r;
			printf ("Chu vi cua hinh tron la:%f",r1);
			printf ("\n***********************\n");
		}
			if (select ==2)
		{
			printf ("\n***********************\nCHUONG TRINH TINH DIEN TICH HINH TRON\n");
			printf ("Nhap vao ban kinh: r=");
			scanf ("%f",&r);
			r1=3.14*r*r;
			printf ("Dien tich cua hinh tron la:%f",r1);
			printf ("\n***********************\n");
		}
			if (select ==3)
		{
			printf ("\n***********************\nCHUONG TRINH TINH CHU VI HINH VUONG\n");
			printf ("Nhap vao do dai 1 canh : d=");
			scanf ("%f",&d);
			d1=4*d;
			printf ("Chu vi cua hinh vuong la:%f",d1);
			printf ("\n***********************\n");
		}
			if (select ==4)
		{
			printf ("\n***********************\nCHUONG TRINH TINH DIEN TICH HINH VUONG\n");
			printf ("Nhap vao do dai 1 canh : d=");
			scanf ("%f",&d);
			d1=d*d;
			printf ("Dien tich cua hinh vuong la:%f",d1);
			printf ("\n***********************\n");
		}
			if (select ==5)
		{
			printf ("\n***********************\nCHUONG TRINH TINH CHU VI HINH CHU NHAT\n");
			printf ("Nhap vao do chieu cao hinh chu nhat : c=");
			scanf ("%f",&c);
			printf ("Nhap vao do chieu dai hinh chu nhat : d=");
			scanf ("%f",&d);	
			printf ("Chu vi cua hinh chu nhat la la:%f",2*(c+d));
			printf ("\n***********************\n");
		}
				if (select ==5)
		{
			printf ("\n***********************\nCHUONG TRINH TINH DIEN TICH HINH CHU NHAT\n");
			printf ("Nhap vao do chieu cao hinh chu nhat : c=");
			scanf ("%f",&c);
			printf ("Nhap vao do chieu dai hinh chu nhat : d=");
			scanf ("%f",&d);	
			printf ("Dien tich cua hinh chu nhat la la:%f",c*d);
			printf ("\n***********************\n");
		}
		
	printf ("An 1 de tiep tuc, so bat ky de thoat: ");
	scanf ("%d",&stop);
	}	
	getch();
	
	return 0;
}
