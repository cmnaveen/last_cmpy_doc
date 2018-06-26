#include<iostream>
using namespace std;
#include<ctype.h>

/***********************************************
isalpha() -It accepts only alphabets,eliminates special characters,numbers
***********************************************/

int main()
{
	const char *x="GloBal @^~$#*EdGe2257";

	while(*x)
	{
		// if(*x >='A' || *x <= 'Z' || *x >='a' || *x <= 'z')
		if(isalpha(*x)) //It eliminates all special characters and numbers
		{
			if(isupper(*x))
				cout<<"Upper Case letters are:"<<*x<<endl;
			else if(islower(*x))
				cout<<"Lower Case letters are:"<<*x<<endl;
		}

		if(isdigit(*x)) //It accepts only numbers
		{
			cout<<"Numbers are:"<<*x<<endl;
		}

		x++;
	}
}
