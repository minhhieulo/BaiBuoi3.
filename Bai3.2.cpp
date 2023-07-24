#include<stdio.h>
int main(){
	float n ,s =0; 
	printf("Nhap Vao so nguyen n : ");
	scanf("%f",&n);
	for(int i =0 ; i<=n;i++){
		s+=i; 
	} 
	 printf("tong la : %f ",s);
	 return 0;
	  
}
