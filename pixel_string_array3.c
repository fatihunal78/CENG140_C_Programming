#include<stdio.h>
#include<string.h>

int main ()
{
	char format[2];
	char string[50];
	int stringer[50];
	int stringest[50*6];
	int pixels[500][500][3];
	int newarray[500][500][3];
	int counter[500*500*3];
	int newstringer[10][10][3];
	int row,column;
	int max;
	int a,b,r;
	int i,j,k,l;
	int blank;
	char c,s;
	
	do
	{
		scanf("%c",&c);
		format[i]=c;
		i++;
	}
	while(i<2);

	format[i]=0;
	scanf("%d",&blank);
	scanf("%c",&s);
	string[0]=0;
	
	if(s=='#')
	{
		for(i=0;s!='.' && s!='\n';i++)
		{
			scanf("%c",&s);
			string[i]=s;
		}
		
		string[i]=0;
		l=i;
	}
		
	printf("\n");
	printf("%s\n",format);
	printf("%s\n",string);

	scanf("%d %d\n",&row , &column);
	
	scanf("%d\n",&max);
		
	for(i=0;i<500;i++)
		for(j=0;j<500;j++)				              
			for(k=0;k<3;k++)
			{	
				counter[i*500*3+j*3+k]=0;
				pixels[i][j][k]=0;
			}
	
	for(i=0;i<10;i++)
		for(j=0;j<10;j++)
			for(k=0;k<3;k++)
			{
				newstringer[i][j][k]=0;
			}
		
	for(i=0;i<50;i++)
	{
		stringer[i]=0;
	}
	
	for(i=0;i<300;i++)
	{
		stringest[i]=0;
	}
		
	
	for(i=0;i<row;i++)
		for(j=0;j<column;j++)
			for(k=0;k<3;k++)
			{
				scanf("%d",&pixels[i][j][k]);
				counter[i*column*3+j*3+k]=pixels[i][j][k];
			}


if(max==1 || max==2)
{
	a=row*column*3;
	b=a/3;
	r=b/10;
	if(b%10)
		++r;
	for (i=0;i<r;i++)
		for(j=0;j<10;j++)
			for(k=0;k<3;k++)
			{
				newarray[i][j][k]=counter[i*column*3+j*3+k];	
			}
}

if(max>2 && max<10)
{
	a=row*column*3;
	b=a/3;
	r=b/10;
	if(b%10)
		++r;
	for (i=0;i<r;i++)
		for(j=0;j<10;j++)
			for(k=0;k<3;k++)
			{
				newarray[i][j][k]=counter[i*column*3+j*3+k];
			}
}

if(max>9 && max<54)
{
	a=row*column*3;
	b=a/3;
	r=b/7;
	if(b%7)
		++r;
	for (i=0;i<r;i++)
		for(j=0;j<7;j++)
			for(k=0;k<3;k++)
			{
				newarray[i][j][k]=counter[i*column*3+j*3+k];
			}
}

if(max>53 && max<100)
{
	a=row*column*3;
	b=a/3;
	r=b/7;
	if(b%7)
		++r;
	for (i=0;i<r;i++)
		for(j=0;j<7;j++)
			for(k=0;k<3;k++)
			{
				newarray[i][j][k]=counter[i*column*3+j*3+k];
			}
}

if(max>99 && max<255)
{
	a=row*column*3;
	b=a/3;
	r=b/5;
	if(b%5)
		++r;
	for (i=0;i<r;i++)
		for(j=0;j<5;j++)
			for(k=0;k<3;k++)
			{
				newarray[i][j][k]=counter[i*column*3+j*3+k];
			}
}


if(max==1 || max==2)
{
	for (i=0;i<10;i++)
		for(j=0;j<10;j++)
			for(k=0;k<3;k++)
			{
				newstringer[i][j][k]=stringest[i*10*3+j*3+k];
			}
}

if(max>2 && max<10)
{
	for (i=0;i<5;i++)
		for(j=0;j<10;j++)
			for(k=0;k<3;k++)
			{
				newstringer[i][j][k]=stringest[i*10*3+j*3+k];
			}
}

if(max>9 && max<54)
{
	for (i=0;i<8;i++)
		for(j=0;j<7;j++)
			for(k=0;k<3;k++)
			{
				newstringer[i][j][k]=stringest[i*10*3+j*3+k];
			}
}

if(max>53 && max<100)
{
	for (i=0;i<3;i++)
		for(j=0;j<7;j++)
			for(k=0;k<3;k++)
			{
				newstringer[i][j][k]=stringest[i*10*3+j*3+k];
			}
}

if(max>99 && max<255)
{
	for (i=0;i<4;i++)
		for(j=0;j<5;j++)
			for(k=0;k<3;k++)
			{
				newstringer[i][j][k]=stringest[i*10*3+j*3+k];
			}
}


for(i=0;i<row;i++)
{
	for(j=0;j<column;j++)
	{
		for(k=0;k<3;k++)
		{
			printf("%d ",pixels[i][j][k]);
		}
		printf("\t");
	}
	printf("\n");
}

if(max==1 || max==2)
{
	int x;
	
	for (i=0; i < 50; i++)
	{
		int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;
		
		x=stringer[i];
		i=i*6;
		
		while(x!=0)
		{
			d1=x%max;
			x=x/max;
			stringest[i+5]=d1;			
			while(x!=0)
			{
				d2=x%max;
				x=x/max;
				stringest[i+4]=d2;
				while(x!=0)
				{
					d3=x%max;
					x=x/max;
					stringest[i+3]=d3;
					while(x!=0)
					{
						d4=x%max;
						x=x/max;
						stringest[i+2]=d4;
						while(x!=0)
						{
							d5=x%max;
							x=x/max;
							stringest[i+1]=d5;
							while(x!=0)
							{
								d6=x%max;
								x=x/max;
								stringest[i]=d6;
							}
						}
					}
				}
			}
		}
	}

}

if(max > 2 && max < 54)
{

	int x;
	
	for (i=0; i < 50; i++)
	{
		int d1=0,d2=0,d3=0;
		
		x=stringer[i];
		i=i*3;
		
		while(x!=0)
		{
			d1=x%max;
			x=x/max;
			stringest[i+2]=d1;
			while(x!=0)
			{
				d2=x%max;
				x=x/max;
				stringest[i+1]=d2;
				while(x!=0)
				{
					d3=x%max;
					x=x/max;
					stringest[i]=d1;
				}
			}
		}
	}
}
					
if(max > 54)
{
	int x;
	
	for (i=0; i < 50; i++)
	{
		x=stringer[i];
		stringest[i]=x;
	}
}

for(i=1;i<50;i++)
{
		switch(string[i])
	{	
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
		
		case ' ':
                stringer[i]=1;
                break;		
	}
}
stringer[i]=0;

return 0;
}	

