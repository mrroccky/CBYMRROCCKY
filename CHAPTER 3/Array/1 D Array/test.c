int v;
main()//06-01-20 23:29
{
	char a[10000],b[5000];
	printf("enter frist string");
	gets(a);
	printf("enter 2ndstring");
	gets(b);
	v=strcmp(a,b);
	myfunc();
//	art();
}
void myfunc(string)
{
	if(v==0)
	{ printf("both are equal");
	}
	else if(v!=0)
	{
		printf("not equal ");
	}
	else
	{
		printf("condition out of my mind");
			
	}
}
/*void art()
{
	//printf("
	
	\\\\\\\\\\
	\\\\\\\\\
	\\\\\\\\\
	\\\\\\\\\\
	\\\\\\\\\\\\
	\\\\\\\\\\\\\\\\\\\\\\
	\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
	\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
}*/
