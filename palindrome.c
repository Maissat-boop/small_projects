#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void
strrev(unsigned char *str)
{
	int i;
	int j;
	unsigned char a;
	unsigned len = strlen((const char *)str);
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		a = str[i];
		str[i] = str[j];
		str[j] = a;
	}
}
int menu(){
  int x;
  printf("----------------------------\n");
  printf("BIENVENUE DANS PALINDROME.C\n");
  printf("----------------------------\n");
  printf("1 - Test palindrome\n");
  printf("2 - Qu'est ce qu'un palindrome \n");
  printf("3 - Quitter \n");
  printf("----------------------------\n");

  while(x==2 || x!=1 || x!=3){
    scanf(" %d",&x);
    printf("----------------------------\n");
    
    if(x==1){
      return 1;
    }
    else if(x==2){
      printf("Mot ou groupe de mots qui peut se lire indifféremment de gauche à droite ou de droite à gauche en gardant le même sens (ex. la mariée ira mal ; Roma Amor).\n");
      printf("\n");
      printf("Que voulez vous faire ensuite \n");
      printf("\n");
    }
    else if(x==3){
      return 0 ;
    }
    else{
      printf("\n");
      printf("Commande inconnue, réessayez:  ");
    }
    

  }
  
  
}

int main(){
   while(true){
    char mot[20];
    char p[20];
    int x = menu();
    if(x==0){
      printf("A la prochaine !\n");
      return 0;
    }
    if(x==1){
        printf("Tapez votre mot :");
        scanf(" %s",mot);
        for(int i=0;i<strlen(mot);i++){
          p[i]=mot[i];
        }
        strrev((unsigned char *)mot);
        
        if(strcmp(p,mot) == 0){
          printf("\n");
          printf("%s à l'envers  %s\n",p,mot);
          printf("\n");
          printf("C'est un palindrome!\n");
        }
        else{
          printf("%s à l'envers  %s\n",p,mot); 
          printf("\n");
          printf("Ce n'est pas un palindrome.\n");
        }
      
    
    }
    char c;
    while(c!='Y'||c!='N'){
      printf("----------------------------\n");
      printf("Continuer ? (Y/N)\n");
      printf("\n");
      
      scanf(" %s",&c);
      printf("\n");

      
      if(c=='N'){
        printf("----------------------------\n");
        printf("A la prochaine\n");
        printf("----------------------------\n");
        
        return 0;
      }
      if(c=='Y'){
        break;
      }
      else{
        printf("Commande inconnue, réessayez : ");
      }
  
    }
  
  }
 
  return 0;
}
