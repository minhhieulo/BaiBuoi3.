#include<conio.h>
#include<stdio.h>
int main(){
	int N;
	int sotachra;
	int s = 0;
	printf("Nhap N: ");
	scanf("%d",&N);
	for(;N!=0;){
		sotachra = N % 10;
		s += sotachra;
		N /= 10;
	}	
	printf("Tong Cua N La : %d",s);
}
