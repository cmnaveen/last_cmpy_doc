strcmp()
----------

Pointer Implementation:
=========================
int func(char *m, char *n)
{
	//while(*m && *n && *m == *n) //Checking character by character till NULL character
	while(*m != '\0' && *n != '\0' && *m == *n) //Checking character by character till NULL character
	{
		m++;
		n++;
	}

	if(*m == *n) //'\0' NULL character check condition
	{
		return 0;
	}
	else
	{
		return(*m-*n);//ASCII value difference
	}
}


Array Implementation:
=========================
int func(char m[], char n[])
{
	int i = 0;
	while(m[i] && n[i] && m[i] ==n[i])
	{
		i++;
	}

	if(m[i] == n[i])
	{
		return 0;
	}
	else
	{
		return (m[i] - n[i]);
	}
}

int main()
{
    char x[] = "RajZ";//ASCII value for [a to z]= 97 to 122
    char y[] = "RajA";//ASCII value for [A to Z]= 65 to 90
    cout<<func(x,y)<<endl;
       /*
        if x == y, func(x,y) returns 0
        if x > y, func(x,y) returns Positive number
        if x < y, func(x,y) returns Negative number
        Here func(x,y) is strcmp(x,y)
       */
}
