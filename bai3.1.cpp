#include<stdio.h>
int main()
{
  int i, n;
  float S;
  S = 0;
  do
  {
     printf("\nNhap vao so n: ");
     scanf("%d", &n);
     if(n < 1)
     {
        printf("\nphai nhap so n lon hon 1 !");
     }
  }while(n < 1);
  for(int i = 1; i <= n; i++){
    S = S + 1.0 / (2 * i);
  }
  printf("\nTong 1/2 + 1/4 + ... + 1/%d là: %.2f",n * 2, S);
 
}
