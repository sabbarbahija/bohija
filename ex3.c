 #include<stdio.h>
int main(){
    float v;
    int r, PI;
     PI=3,14;
    printf("donner le rayon de cette sphère :");
    scanf("%f",&r);
    v=(4.0f/3.0f)*PI*r*r*r;
    printf("le volume d'une sphère est :%f",&v);
 return 0;

}