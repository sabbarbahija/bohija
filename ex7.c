#include<stdio.h>
int main(){
    float M,M20,M10,M5,M1;
    printf("donner un montant en dollars américains:");
     scanf("%f",&M);
     M20=M/20;
     M=M%20;
     M10=M/10;
      M=M%10;
        M5=M/5;
      M=M%5;
        M1=M/1;
      M=M%1;
    printf("Billets de 20$ :%d";M20);
     printf("Billets de 10$ :%d";M10);
      printf("Billets de 5$ :%d";M5);
       printf("Billets de 1$ :%d";M1);
       return 0;
}