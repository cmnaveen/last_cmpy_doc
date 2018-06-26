#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	const char *x="Global Edge is a MNC\nGlobal Edge is located in Tech Park\tTech Park is Good";
	char y[20][10]; //2d array with rows = Number of words[space+1]
	int j = 0; //rows
	int k = 0; //columns

	while (*x)
	{
		if(*x == ' ' || *x == '.' || *x == '\n' || *x == '\t')
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

	int max = INT_MAX;
	int min = INT_MIN; 
        char maxword[20]; 
	char minword[20];
	for(int a=0;a<=j;a++) //condition check with rows only
	{
		if(strlen(y[a]) > max)
		{
			max = strlen(y[a]);
			strcpy(maxword,y[a]);
		}

		if(strlen(y[a]) < min)
		{
			min = strlen(y[a]);
			strcpy(minword,y[a]);
		}
	}

	for(int a=0;a<=j;a++)
	{
		cout<<y[a]<<endl;
	}
}


