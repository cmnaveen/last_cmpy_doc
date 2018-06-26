#include<iostream>
using namespace std;

//We can do this using flags

int main()
{
#if 0 //Array Implemenation
	char x[]="Pranay";
	char y[]="Vinay";
	//bool flag =false; //if k=1 => flag=true, if k=0 => flag=false
        int k =0;
	for(int i=0;x[i] !='\0';i++)
	{
		for(int j=0;y[j] !='\0';j++)
		{
			if(x[i]==y[j])
			{
                                k=1;
				break;//V.V.Imp step
			}
                        else //V.V.Imp,flag has to be reset when characters are not same
			{
				k=0;
			}
		}
		if(k==0) //For unique[not same] characters 
		{
			cout<<x[i]<<endl;
		}
#if 0
		if(k==1) //For same characters
		{
			cout<<x[i]<<endl;
		}
#endif 
	}
#endif

#if 1
	const char*x="PranDay";
	const char*y="Vinay";
	const char*z=y; //Preserve base address into other ptr 
	int k=0;
	while(*x)
	{
		while(*y)
		{

			if(*x == *y)
			{
				k=1;
				break;
			}
			else //V.V.Imp,flag has to be reset when characters are not same
			{
				k=0;
			}
			y++;
		}
		y=z; //V.V.Imp step,Redirect ptr to base address

		if(k==0) //For unique[not same] characters 
		{
			cout<<*x<<endl;
		}
#if 0
		if(k==1) //For same characters
		{
			cout<<*x<<endl;
		}
#endif
		x++;
	}
#endif
}

