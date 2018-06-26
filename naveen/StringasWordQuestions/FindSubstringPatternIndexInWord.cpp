#include<iostream>
using namespace std;

void func(char *x, char *y)
{
	char *sourcestr = x; //V.V.Imp step,Store x,to get the base address position
	while(*x)
	{
		if(*x == *y)
		{
			char *z = x; //V.V.Imp step,x should not get affected,so store it to local variable
			char *sub = y; //V.V.Imp step,y should not get affected,so store it to local variable
			while(*sub)
			{
				if(*z == *sub)
				{
					z++;
				}
				else 
				{
					break;
				}
				sub++;
			}

			if(*sub == '\0') //V.V.Imp step,Substring will traverse to NULL, 
				// only when all the characters of it get matched with that substring present in source string
			{
				cout<<"Substring Pattern is at position: "<<x-sourcestr<<endl; //Position(index) starts from 0,V.V.Imp step
#if 1
				static int count=0;
				count++;
				cout<<"Substring Pattern occurred: "<<count<<"times"<<endl;
#endif 
			}
			sub=y; //V.V.Imp step,Resetting the sub to its starting address
		}
		x++;
	}
}


int main()
{
	char x[]="aabaabccabacabcdeffabc";
	char y[]="abc"; //Substring Pattern to search
	func(x,y);
}
