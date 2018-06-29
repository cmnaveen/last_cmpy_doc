#include<stdio.h>      
#include<string.h>                                                         
#include<stdlib.h>
struct node
{
int c;
char word[20];
};
int main(void)                                                                  
{       struct node *big,*small;
	big=(struct node *)malloc(sizeof(struct node));
	small=(struct node *)malloc(sizeof(struct node));
	big->c=0;
	small->c=100;                                                                        
	char str[100];                                                          
	int i=0,j=0,k,wc=0;                                                     
	printf("enter the string:\n");                                          
	scanf("%[^\n]s",str);                                                   
	while(str[i] != 0)                                                      
	{ wc=0;                                                                      
		for(j=i; str[j] != ' ' && str[j] != 0 ; j++)
		{ 
			wc++;

		}
		printf("%d\n",wc);
		if(str[j] == 0)
		j--;
		if(wc > big->c)
		{
			big->c=wc;
			strncpy(big->word,(str+i),wc);
			*(big->word+wc)=0;
		}
		if(wc < small->c)
		{
			small->c=wc;
			strncpy(small->word,(str+i),wc);
			*(small->word+wc)=0;
		}
		i=j;
		i++;                                                            
	}                                                                       

               printf("big word is: %s\nsmall word is: %s \n ",big->word,small->word);

}
