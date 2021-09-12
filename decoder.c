#include<stdio.h>
#include<string.h>

int main()
{
	int row,column;
	int max;
	int counter[750001];
	char format[2];
	char string[50];
	char c;
	int length;
	int i,j,k;
	int t;
	
	i=0;
	while(c!=' ' && c!='\n')
	{
		scanf("%c",&c);
		format[i]=c;
		i++;
	}
	format[i-1]=0;
		
	scanf("%d %d\n",&row , &column);
	scanf("%d\n",&max);

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
		string[i]=0;
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
	length=counter[row*column*3-1];

	for(i=0;i<length;i++)
	{	
		string[i]=counter[i];
		
		switch(string[i])
		{
			
			case 2:
				string[i]='a';
				break;
				
			case 3:
				string[i]='b';
				break;
				
			case 4:
				string[i]='c';
				break;
				
			case 5:
				string[i]='d';
				break;
				
			case 6:
				string[i]='e';
				break;
				
			case 7:
				string[i]='f';
				break;
				
			case 8:
				string[i]='g';
				break;
				
			case 9:
				string[i]='h';
				break;
				
			case 10:
				string[i]='i';
				break;
				
			case 11:
				string[i]='j';
				break;
				
			case 12:
				string[i]='k';
				break;
				
			case 13:
				string[i]='l';
				break;
				
			case 14:
				string[i]='m';
				break;
				
			case 15:
				string[i]='n';
				break;
				
			case 16:
				string[i]='o';
				break;
				
			case 17:
				string[i]='p';
				break;
				
			case 18:
				string[i]='q';
				break;
				
			case 19:
				string[i]='r';
				break;
				
			case 20:
				string[i]='s';
				break;
				
			case 21:
				string[i]='t';
				break;
				
			case 22:
				string[i]='u';
				break;
				
			case 23:
				string[i]='v';
				break;		
				
			case 24:
				string[i]='w';
				break;
				
			case 25:
				string[i]='x';
				break;
				
			case 26:
				string[i]='y';
				break;
				
			case 27:
				string[i]='z';
				break;
				
			case 28:
				string[i]='A';
				break;
				
			case 29:
				string[i]='B';
				break;		
				
			case 30:
				string[i]='C';
				break;
				
			case 31:
				string[i]='D';
				break;
				
			case 32:
				string[i]='E';
				break;
				
			case 33:
				string[i]='F';
				break;
				
			case 34:
				string[i]='G';
				break;
				
			case 35:
				string[i]='H';
				break;		
				
			case 36:
				string[i]='I';
				break;
				
			case 37:
				string[i]='J';
				break;
				
			case 38:
				string[i]='K';
				break;
				
			case 39:
				string[i]='L';
				break;
				
			case 40:
				string[i]='M';
				break;
				
			case 41:
				string[i]='N';
				break;
				
			case 42:
				string[i]='O';
				break;
				
			case 43:
				string[i]='P';
				break;
				
			case 44:
				string[i]='Q';
				break;
				
			case 45:
				string[i]='R';
				break;
				
			case 46:
				string[i]='S';
				break;
				
			case 47:
				string[i]='T';
				break;
				
			case 48:
				string[i]='U';
				break;
				
			case 49:
				string[i]='V';
				break;
				
			case 50:
				string[i]='W';
				break;
				
			case 51:
				string[i]='X';
				break;
				
			case 52:
				string[i]='Y';
				break;

			case 53:
				string[i]='Z';
				break;		
				
			case 54:
				string[i]='.';
				break;
				
			case 1:
				string[i]=' ';
				break;
		}
	}
	string[i]=0;

	printf("%s\n",string);

	return 0;
}

