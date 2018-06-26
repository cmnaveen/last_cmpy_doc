#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	const char *x="Global Edge is a MNC Global Edge is located in Tech Park Tech Park is Good";
	char y[20][10]; //2d array with rows = Number of words[space+1]
	int j = 0; //rows
	int k = 0; //columns

	while (*x)
	{
		if(*x ==' ' || *x == '.' || *x == '\n' || *x == '\t')
		{
			y[j][k]='\0'; //Completion of Each WORD
			j++; //Increment rows
			k=0; //Reset columns to 0
                        
			x++; //V.V.Imp, Whenever these characters come,Move the 'x' position to next position
		}

		if(*x != '\0')
		{    
			y[j][k]= *x; //Filling the 2d array
			k++; //increment columns
		}
		x++;
	}
	y[j][k]='\0'; //Completion of Last WORD

	bool flag = 0;
	int count=1; //Make count as 1
	for(int a=0;a<=j;a++) //condition check with rows only
	{
		for(int b=0;b<=j;b++) //V.V.Imp step, b should always start from Zero
		{ 
			if(a==b) //V.V.Imp step, Check for the same position and skip that WORD
			{
				continue;
			}

			if( strcmp(y[a],y[b])==0 ) //duplicate words
			{
				flag =1;
				break;
			} 
			else //unique words
			{
				flag=0;
			}
		}
		if(flag == 0) //Number of unique words
		{
			count++;
			cout<<"Unique Words are: "<<y[a]<<endl;
		}
	}
	cout<<"Count  of Unique Words: "<<count<<endl;
}
