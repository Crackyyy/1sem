#include <stdio.h>
#include <string.h>


int main(){
  int s,k,len1,len2,l;
  char s1[100];
  char s2[100];
  char d[20];
  char c[20];
  

printf("Enter your mnoshzestvo: \n");
   gets(s1);
   gets(s2);
 
  while(s!=4){
  printf("\n");
  printf("Click the button: \n");
  printf("1. Array output\n");
  printf("2. Add array element\n");
  printf("3. Remove array element\n");
  printf("4. Exit\n");
  scanf("%d",&s);
  
  
  switch (s){
          
    case 1:
    printf("\n");
    printf("The first: ");
    printf(s1);
    printf("\n");
    printf("The second: ");
    printf(s2);
    printf("\n");
       continue;


    case 2:
    
    printf("\n");
    printf("1.Dobavit' k 1 mnozhestvu");
    printf("\n");
    printf("2.Dobavit' ko 2 mnozhestvu\n");
    printf("3.Exit\n");
    scanf("%d\n",&k);

    
    switch(k){
      case 1:
      printf("Chto dobavit' k 1 mnozhestvu:\n");
      gets(c);
      strcat(s1,c);
      printf(s1);
      printf("\n");
      break;
      

    case 2:
      printf("Chto dobavit' ko 2 mnozhestvu:\n");
      gets(d);
      strcat(s2,d);
      printf(s2);
      printf("\n");
      continue;

    
    
    }
    
    printf("\n");continue;

    
    case 3:

    printf("\n");
    printf("1.Ydalit' iz 1 mnozhestva posledniy symvol:\n");
    printf("2.Ydalit' iz 2 mnozhestva posledniy symvol:\n");
    printf("3.Exit\n");
    scanf("%d\n",&l);

    switch(l){

    case 1:
    len1=strlen(s1);
    s1[len1-1] = '\0';
    continue;

    case 2:
    len2=strlen(s2);
    s2[len2-1] = '\0';
    continue;
     
     case 3: ; continue;
    }
    
    printf("\n") ;continue;
    


    
    case 4: printf("Exit is successful \n"); continue;

  default: 
    printf("error!\n");
  

  
  
  }
  }
  return(0);
}