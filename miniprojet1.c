#include<stdio.h>
#include<stdlib.h>

int main (){
int note1 , note2 , note3 ,note4,totale , note5, min ,max;
float  moyenne ;
char nom [50];
char mention ;

printf("saisire votre nom : ");
scanf("%s", nom);

    do {
        printf("saisire le 1er note : ");
        scanf("%d", &note1);
    } while (note1 < 0 || note1 >100);

    do {
        printf("saisire le 2eme note : ");
        scanf("%d", &note2);
    } while (note2 < 0 || note2>100);


      do {
        printf("saisire le 3eme note : ");
        scanf("%d", &note3);
    } while (note3 < 0 || note3>100);
m
       do {
        printf("saisire le 4eme note : ");
        scanf("%d", &note4);
    } while (note4 < 0 || note4>100);


        do {
        printf("saisire le 5eme note : ");
        scanf("%d", &note5);
    } while (note5 < 0 || note5>100);




max = note1;

if (max < note2){
    max = note2;
}else if (max < note3){
    max = note3;
}else if (max < note4){
    max = note4;
}else if (max < note5){
    max = note5;
}
min = note1 ;

if (min > note2){
    min = note2;
}else if (min > note3){
    min = note3;
}else if (min > note4){
    min = note4;
}else if (min > note5){
    min = note5;
}


totale = note1 + note2 + note3 + note4 + note5 ;


moyenne = totale / 5 ;


printf ("======================================\n");
printf("            RAPPORT FINAL \n ");
printf ("======================================\n");
printf("le nom est :%d \n",nom);
printf("Note saisies est : \n");
printf("Saisissez la note 1 : %d \n" , note1);
printf("Saisissez la note 2 : %d \n ", note2);
printf("Saisissez la note 3 : %d \n " , note3);
printf("Saisissez la note 4 : %d \n " , note4);
printf("Saisissez la note 5 : %d \n \n", note5);
printf("Total des notes : %d \n",totale);
printf("Moyenne est : %.2f \n", moyenne);
printf("Note la plus haute  : %d \n ", max);
printf("Note la plus basse  : %d \n \n", min);



return 0 ;
}
