#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	const char *x ="AAAABBBCCD";  //Mixed characters[upper,lower case]
	int freq[26] = {0}; //Initialize each element of array to ZERO ,V.V.V.Imp step

	while(*x)
	{
		//if(*x >= 'A' && *x <='Z') //No need of this condition
		{
			freq[*x - 65]++; //++ is very Important,V.V.Imp step
		}
		x++;
	}

#if 0 // o/p:A4B3C2D1
	for(int i=0;i<4;i++) //i<4,Since only 4 characters are present in the given array
	{
		if(freq[i] != 0) //V.V.Imp step, To avoid indexes with value 0 
		{
			cout<<(char)(i+65)<<freq[i]; //Typecasting is must  
		}
	} 
#endif

#if 0 // o/p:A4B3C2D
for(int i=0;i<4;i++) //i<4,Since only 4 characters are present in the given array
{
	if(freq[i] != 0) //V.V.Imp step, To avoid indexes with value 0 
	{
		cout<<(char)(i+65); //V.V.Imp step
		if(freq[i] != 1)
		{
			cout<<freq[i]; 
		}
	}
}
#endif

#if 1 // Maximum and Minimum Frequency characters 
        int max=freq[0]; //Should be initialized mandatorily
        int maxindex=0; //Should be initialized mandatorily
        int min=freq[0]; //Should be initialized mandatorily
        int minindex=0; //Should be initialized mandatorily

	for(int i=0;i<4;i++)
	{
		if(freq[i] != 0) //V.V.Imp step, To avoid indexes with value 0 
		{
                        if(freq[i]>max)
                          {
                          max=freq[i];
                          maxindex=i;
                          }

                        if(freq[i]<min)
                          {
                          min=freq[i];
                          minindex=i;
                          }
		}
	}
       cout<<"Maximum frequency Occuring Character is:"<<char(maxindex+65)<<endl; //Typecasting is must  
       cout<<"Minimum frequency Occuring Character is:"<<char(minindex+65)<<endl; 
#endif

}


