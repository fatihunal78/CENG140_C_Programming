#include<stdio.h>
#include<string.h>

int main ()
{
	
	char format[2];
	char string[50];
	int stringer[50];
	int counter[750001];
	int row,column;
	int newrow,newcolumn;
	int max;
	char c,s;
	int length;
	int i,j,k;
	int b,t;

	i=0;
	while(c!=' ' && c!='\n')
	{
		scanf("%c",&c);
		format[i]=c;
		i++;
	}
	format[i-1]=0;
	
	scanf("%c",&s);
	
	string[0]=0;
	if(s=='#')
	{
		for(i=0 ; s!='.' && s!='\n';i++)
		{
			scanf("%c",&s);
			string[i]=s;
		}
		
		string[i]=0;
		length=i;
	}

	scanf("%d %d\n",&row , &column);
	scanf("%d\n", &max);
	
	t=0;	
	for(i=0;i<500;i++)
		for(j=0;j<500;j++)				              
			for(k=0;k<3;k++)
			{	
				counter[t]=0;
				t++;
			}
	
	counter[t]=0;

	for(i=0;i<50;i++)
	{
		stringer[i]=0;
	}	

	t=0;
	for(i=0;i<row;i++)
		for(j=0;j<column;j++)
			for(k=0;k<3;k++)
			{
				scanf("%d",&counter[t]);
				t++;
			}
	
	counter[t]=0;

for(i=0 ; i<length ; i++)
{
	switch(string[i])
	{
		case ' ':
			stringer[i]=1;
			break;
			
		case 'a':
			stringer[i]=2;
			break;
			
		case 'b':
			stringer[i]=3;
			break;
			
		case 'c':
			stringer[i]=4;
			break;
			
		case 'd':
			stringer[i]=5;
			break;
			
		case 'e':
			stringer[i]=6;
			break;
			
		case 'f':
			stringer[i]=7;
			break;
			
		case 'g':
			stringer[i]=8;
			break;
			
		case 'h':
			stringer[i]=9;
			break;
			
		case 'i':
			stringer[i]=10;
			break;
			
		case 'j':
			stringer[i]=11;
			break;
			
		case 'k':
			stringer[i]=12;
			break;
			
		case 'l':
			stringer[i]=13;
			break;
			
		case 'm':
			stringer[i]=14;
			break;
			
		case 'n':
			stringer[i]=15;
			break;
			
		case 'o':
			stringer[i]=16;
			break;
			
		case 'p':
			stringer[i]=17;
			break;
			
		case 'q':
			stringer[i]=18;
			break;
			
		case 'r':
			stringer[i]=19;
			break;
			
		case 's':
			stringer[i]=20;
			break;
			
		case 't':
			stringer[i]=21;
			break;
			
		case 'u':
			stringer[i]=22;
			break;
			
		case 'v':
			stringer[i]=23;
			break;
			
		case 'w':
			stringer[i]=24;
			break;
			
		case 'x':
			stringer[i]=25;
			break;
			
		case 'y':
			stringer[i]=26;
			break;
			
		case 'z':
			stringer[i]=27;
			break;
			
		case 'A':
			stringer[i]=28;
			break;
			
		case 'B':
			stringer[i]=29;
			break;
			
		case 'C':
			stringer[i]=30;
			break;
			
		case 'D':
			stringer[i]=31;
			break;
			
		case 'E':
			stringer[i]=32;
			break;
			
		case 'F':
			stringer[i]=33;
			break;
			
		case 'G':
			stringer[i]=34;
			break;
			
		case 'H':
			stringer[i]=35;
			break;
			
		case 'I':
			stringer[i]=36;
			break;
			
		case 'J':
			stringer[i]=37;
			break;
			
		case 'K':
			stringer[i]=38;
			break;
			
		case 'L':
			stringer[i]=39;
			break;
			
		case 'M':
			stringer[i]=40;
			break;
			
		case 'N':
			stringer[i]=41;
			break;
			
		case 'O':
			stringer[i]=42;
			break;
			
		case 'P':
			stringer[i]=43;
			break;
			
		case 'Q':
			stringer[i]=44;
			break;
			
		case 'R':
			stringer[i]=45;
			break;
			
		case 'S':
			stringer[i]=46;
			break;
			
		case 'T':
			stringer[i]=47;
			break;
			
		case 'U':
			stringer[i]=48;
			break;
			
		case 'V':
			stringer[i]=49;
			break;
			
		case 'W':
			stringer[i]=50;
			break;
			
		case 'X':
			stringer[i]=51;
			break;
			
		case 'Y':
			stringer[i]=52;
			break;
			
		case 'Z':
			stringer[i]=53;
			break;
			
		case '.':
			stringer[i]=54;
			break;
	}
}

stringer[i]=0;

if(max < 54)
	max=54;

if(max>53 && max<100)
{

	for(t=0;t<length;t++)
	{
	counter[t]=stringer[t];
	}	
	
	b=row*column;
	newrow=b/7;
	newcolumn=7;
	
	if(b%7)
		++newrow;
		
	counter[row*column*3-1]=length;
	
	printf("%s\n",format);
        printf("%d %d\n",row,column);
        printf("%d\n",max);
	
	t=0;
	for(i=0;i<newrow;i++)
	{
		for(j=0;j<7;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",counter[t]);
				t++;
			}
		}
		printf("\n");
	}
}

if(max>99)
{	

	for(t=0;t<length;t++)
	{
		counter[t]=stringer[t];
	}
	
	b=row*column;
	newrow=b/5;
	newcolumn=5;
	
	if(b%5)
		++newrow;
	
	counter[row*column*3-1]=length;
	
	printf("%s\n",format);
	printf("%d %d\n",row,column);
	printf("%d\n",max);	
	
	t=0;
	for(i=0;i<newrow;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",counter[t]);
				t++;
			}
		}
		printf("\n");
	}
}

return 0;
}	

