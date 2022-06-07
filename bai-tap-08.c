#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
printf ("/*=======KICH THUOC CUA CAC KIEU DU LIEU =========/*");
printf ("\nKieu so nguyen int : %d Bytes",sizeof(int));
int d=15;
printf ("\nVi du: so %d",d);
printf ("**********************************************");


printf ("\nKieu so thuc float : %d Bytes",sizeof(float));
float f=15;
printf ("\nVi du: so %f",f);
printf ("**********************************************");


printf ("\nKieu so char : %d Bytes",sizeof(char));
char ch='a';
printf ("\nVi du: ky tu %c",ch);
printf ("**********************************************");


printf ("\nKieu long int : %d Bytes",sizeof(long int));

printf ("\n**********************************************");


printf ("\nKieu long double : %d Bytes",sizeof(long double));
	
	return 0;
}
