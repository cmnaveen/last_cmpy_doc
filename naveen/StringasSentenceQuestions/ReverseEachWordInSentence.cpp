#include<iostream>
using namespace std;

void reverse(char *start,char *end)
{
	while(start < end) //V.V.Imp step
	{
		char temp = *start;
		*start = *end;
		*end = temp;
                 start++; //for traversing,Imp step
                 end--; //For traversing.Imp step
	}
}

#if 0 //For reversing each individual word in the sentence
void func(char *x)
{
	char *w =x;
	char *y=x;
	while(*y)
	{
		if(*y == ' ')
		{
			reverse(w,y-1);
			w=y+1; //Update the word ptr by changing its address
		}
		y++;
	}
	//if(*y == '\0') //Condition is not necessary,since *y is NULL obviously after while loop 
	//{
		reverse(w,y-1); //O/p: labolG egdE si a CNM
	//}

}
#endif

#if 1 //For reversing complete sentence
void func(char *x) 
{
	char *w =x;
	char *y=x;
	while(*y)
	{
		if(*y == ' ')
		{
			reverse(w,y-1);
			w=y+1; //Update the word ptr by changing its address
		}
		y++;
	}
	//if(*y == '\0') //Condition is not necessary,since *y is NULL obviously after while loop 
	//{
		reverse(w,y-1); //O/p: labolG egdE si a CNM
		reverse(x,y-1); //O/p: MNC a is Edge Global
	//}

}
#endif 

int main()
{
	char x[]="Global Edge is a MNC";
	func(x);
	cout<<x<<endl;
}

/******************************************
Reverse Each Word in Sentence Using 2d Array
******************************************/

int main()
{
	const char *x="Global Edge is a MNC\nGlobal Edge is located in Tech Park\tTech Park is Good";
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

	for(int a=0;a<=j;a++) //condition check with rows only
	{
		strrev(y[a]); //Reverse each word	
	}

	for(int a=0;a<=j;a++)
	{
		cout<<y[a]<<endl;
	}
}






