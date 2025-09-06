#include<stdio.h>

int main (){
	char name[50];
	char*grade;
	char mention ;
	int totale , max, min ,r , e;
	int note1 ,note2 ,note3, note4, note5;
	float moyenne ;
	int global= 0;
	int bonus =0;
	
	printf("entrer vote nom :");
	scanf(" %[^\n]", name);
	
	do {
		printf("entrer la premier note : \n");
	scanf("%d",&note1);
	}while (0 > note1 || note1>100 );
	
	do {
		printf("entrer la deuxieme note : \n");
	scanf("%d",&note2);
	}while (0 > note2 || note2>100 );
	
	do {
		printf("entrer la troisieme note : \n");
	scanf("%d",&note3);
	}while (0 > note3 || note3>100 );
	
	do {
		printf("entrer la quatrieme note : \n");
	scanf("%d",&note4);
	}while (0 > note4 || note4>100 );
	
	do {
		printf("entrer la cinquieme note : \n");
	scanf("%d",&note5);
	}while (0 > note5 || note5>100 );		
	
	totale = note1 + note2 + note3 + note4 + note5 ;
	
	moyenne = totale / 5.0 ;
	
max = note1;
if (note2 > max) max = note2;
if (note3 > max) max = note3;
if (note4 > max) max = note4;
if (note5 > max) max = note5;

	
min = note1;
if (note2 < min) min = note2;
if (note3 < min) min = note3;
if (note4 < min) min = note4;
if (note5 < min) min = note5;

r = 0 ;
e = 0 ;

if (note1 >=50){
	r++;
}else{
	e++;
}
if (note2 >=50){
	r++;
}else{
	e++;
}
if (note3 >=50){
	r++;
}else{
	e++;
}
if (note4 >=50){
	r++;
}else{
	e++;
}
if (note5 >=50){
	r++;
}else{
	e++;
}

	if (moyenne >=85 ){
		mention = 'A';
		grade = "Excellent";
	}else if (moyenne >=75){
		mention ='B';
		grade = "Tres bien";
	}else if (moyenne >=65){
		mention ='C';
		grade = "Bien";
	}else if (moyenne >= 50){
		mention ='D';
		grade = "Passable";
	}else {
		mention ='F';
		grade = "Echec";
	}
	
	if (moyenne >= 50 && e <= 2){
		global = 1;
	}
	if (note1 == 100 || note2 == 100 || note3 == 100 || note4 == 100 || note5 ==100){
		bonus = 1 ;
	}
	printf("==============================\n");
	printf("      Gestion des notes\n");
	printf("==============================\n");
	printf("Nom de l'etudiant :%s \n",name);
	printf("La note de matiere 1 :%d \n",note1);
	printf("La note de matiere 2 :%d \n",note2);
	printf("La note de matiere 3 :%d \n",note3);
	printf("La note de matiere 4 :%d \n",note4);
	printf("La note de matiere 5 :%d \n\n",note5);
	printf("Total des notes :%d \n",totale);
	printf("Moyenne des notes :%.2f \n ", moyenne);
	printf("Note la plus haute :%d \n", max);
	printf("Note la plus basse :%d \n \n", min);
	printf("Nombre de matieres reussies : %d \n",r);	
	printf("Nombre de matieres echouees : %d \n\n",e);
	
	
	printf("Mention obtenue : %c (%s) \n \n ", mention, grade);
	
	
    if(global) printf("Statut global : Reussi\n");
    else printf("Statut global : Echoue\n");
    
    if(bonus) printf("Felicitation ! Vous avez eu 100 dans au moins une matiere. Bonus !\n");
    
	return 0;
}
