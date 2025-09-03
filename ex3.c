 #include<stdio.h>
int main(){
    float v,PI;
    int r;
     PI=3.14;
    printf("donner le rayon de cette sphère :");
    scanf("%d",&r);
    v=(4.0f/3.0f)*PI*r*r*r;
    printf("le volume d'une sphère est :%f",v);
 return 0;