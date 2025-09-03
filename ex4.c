 
 #include<stdio.h>
 int  main(){
    float montant,montanttaxe;
    printf("entrer un montant  en dollars et en cents");
    scanf("%f\n ,& montant");
    montanttaxe = montant * 0.05;
    printf("montant avec texe de 5% est %f ",montanttaxe);
    return 0;
    
}
