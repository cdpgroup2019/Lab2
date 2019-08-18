#include<stdio.h>
#include<string.h>

int main (int argc , char *argv[])
{

  //ifstream file(argv[1]);
  FILE* file = fopen(argv[1], "r");
  if(file == NULL) printf("error\n");
  char str[300],word[20];

  int x=1,i,c;
  printf("Enter string to search : ");
  scanf("%s",word);
  printf("%s\n", word);
  while (fgets(str, sizeof(str), file)) {
    c=0;
    i=0;
    while (str[i]!='\0')
	  {
		  if (str[i]==word[c] && word[c]!='\0' && str[i]!=' ')
		    c++;
		  else{
        if (c==strlen(word)){
          break;
        }
        c=0;
      }
		i++;
	  }
    if (c==strlen(word)){
       // cout << x<<" : "<< str << "\n";   
        printf("%d : %s\n",x,str); 
    }
    x++;  
  }
}
