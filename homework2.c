#include<stdio.h>
#include<string.h>

int main ()
{
	
	char format[2];
	char string[50];
	int stringer[50];
	int stringest[300];
	int pixels[500][500][3];
	int newarray[500][500][3];
	int counter[750000];
	int newstringer[10][10][3];
	int row,column;
	int max;
	int b,r;
	int i,j,k;
	int length;
	int t;
	int z,y;
	char c,s;

	while(c!=' ' && c!='\n')
	{
		scanf("%c",&c);
		format[i]=c;
	}
	format[i]=0;
	
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
		length=i;
	}

	scanf("%d %d\n",&row , &column);
	scanf("%d\n",&max);
	
	t=0;	
	for(i=0;i<500;i++)
		for(j=0;j<500;j++)				              
			for(k=0;k<3;k++)
			{	
				counter[t]=0;
				pixels[i][j][k]=0;
				t++;
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
	
	
	t=0;
	for(i=0;i<row;i++)
		for(j=0;j<column;j++)
			for(k=0;k<3;k++)
			{
				scanf("%d",&pixels[i][j][k]);
				counter[t]=pixels[i][j][k];
				t++;
			}
	


for(i=0;i<length;i++)
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


if(max==1 || max==2)
{
        int x;
	int a=0;
	for (i=0; a < length; a++)
	{
		int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;

		x=stringer[a];
		
		while(x!=0)
		{
			d1=x%(max+1);
			x=x/(max+1);
			stringest[i+5]=d1;
			
			while(x!=0)
			{
				d2=x%(max+1);
				x=x/(max+1);
				stringest[i+4]=d2;	
				
				while(x!=0)
				{
					d3=x%(max+1);
					x=x/(max+1);
					stringest[i+3]=d3;
					
					while(x!=0)
					{
						d4=x%(max+1);
						x=x/(max+1);
						stringest[i+2]=d4;
						
						while(x!=0)
						{
							d5=x%(max+1);
							x=x/(max+1);
							stringest[i+1]=d5;
							
							while(x!=0)
							{
								d6=x%(max+1);
								x=x/(max+1);
								stringest[i]=d6;	
							}
                                                }
                                        }
                                }
                        }
                } 
		
		i+=6;
        }

}

if(max > 2 && max < 54)
{
	int a;
	int x;
	
	a=0;
	for (i=0; a < length; a++)
	{
		int d1=0,d2=0,d3=0;
		
		x=stringer[a];
		
		
		while(x!=0)
		{
			d1=x%(max+1);
			x=x/(max+1);
			stringest[i+2]=d1;
			
			while(x!=0)
			{
				d2=x%(max+1);
				x=x/(max+1);
				stringest[i+1]=d2;
				
				while(x!=0)
				{
					d3=x%(max+1);
					x=x/(max+1);
					stringest[i]=d1;
				}
			}
		}
		
		i+=3;
	}
}


if(max > 53)
{
	
	for (i=0; i < length; i++)
	{
		stringest[i]=stringer[i];
	}
}


if(max==1 || max==2)
{
		if(length*2<11)
		{
			y=length*2;
			z=1;
		}
	
		else if (length*2>10)
		{
			y=10;
			z=(length*2/10);
			
			if((length*2)%10)
				z++;
		}

	t=0;
	for (i=0;i<z;i++)
		for(j=0;j<y;j++)
			for(k=0;k<3;k++)
			{
				newstringer[i][j][k]=stringest[t];
				t++;
			}
	
	b=row*column;
	r=b/10;
	if(b%10)
		++r;
	t=0;
	for (i=0;i<r;i++)
		for(j=0;j<10;j++)
			for(k=0;k<3;k++)
			{
				newarray[i][j][k]=counter[t];
				t++;	
			}
	for (i=0;i<z;i++)
		for(j=0;j<y;j++)
			for(k=0;k<3;k++)
			{
				if (newstringer[i][j][k]!=newarray[i][j][k])
					newarray[i][j][k]=newstringer[i][j][k];
			}		
	for(i=0;i<r;i++)
	{
		for(j=0;j<10;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",newarray[i][j][k]);
			}
			printf(" ");
		}
		printf("\n");
	}
	
}

if(max>2 && max<10)
{
	
		if(length<11)
		{
			y=length;
			z=1;
		}
	
		else if (length>10)
		{
			y=10;
			z=length/10;
			
			if(length%10)
				z++;
		}
	t=0;
	for (i=0;i<z;i++)
		for(j=0;j<y;j++)
			for(k=0;k<3;k++)
			{
				newstringer[i][j][k]=stringest[t];
				t++;
			}
	
	b=row*column;
	r=b/10;
	if(b%10)
		++r;
	t=0;
	for (i=0;i<r;i++)
		for(j=0;j<10;j++)
			for(k=0;k<3;k++)
			{
				newarray[i][j][k]=counter[t];
				t++;
			}
	for (i=0;i<z;i++)
		for(j=0;j<y;j++)
			for(k=0;k<3;k++)
			{
				if (newstringer[i][j][k]!=newarray[i][j][k])
					newarray[i][j][k]=newstringer[i][j][k];
			}
	for(i=0;i<r;i++)
	{
		for(j=0;j<10;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",newarray[i][j][k]);
			}
			printf(" ");
		}
		printf("\n");
	}	
}

if(max>9 && max<54)
{
		if(length<8)
		{
			y=length;
			z=1;
		}
	
		else if (length>7)
		{
			y=7;
			z=length/7;
			
			if(length%7)
				z++;
			
		}

	t=0;
	for (i=0;i<z;i++)
		for(j=0;j<y;j++)
			for(k=0;k<3;k++)
			{
				newstringer[i][j][k]=stringest[t];
				t++;
			}
	
	b=row*column;
	r=b/7;
	if(b%7)
		++r;
	t=0;
	for (i=0;i<r;i++)
		for(j=0;j<7;j++)
			for(k=0;k<3;k++)
			{
				newarray[i][j][k]=counter[t];
				t++;
			}
	for (i=0;i<z;i++)
		for(j=0;j<y;j++)
			for(k=0;k<3;k++)
			{
				if (newstringer[i][j][k]!=newarray[i][j][k])
					newarray[i][j][k]=newstringer[i][j][k];
			}
	for(i=0;i<r;i++)
	{
		for(j=0;j<7;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",newarray[i][j][k]);
			}
			printf(" ");
		}
		printf("\n");
	}
	
}

if(max>53 && max<100)
{
	if(length<22)
	{
		if(length%3)
		{
			y=(length/3)+1;
			z=1;
		}
		else
		{
			y=length/3;
			z=1;
		}
	}

	if(length>21)
	{
		if(length%21)
		{
			y=7;
			z=(length/21)+1;
		}
		else
		{
			y=7;
			z=length/21;
		}
	}
	
	t=0;
	for (i=0;i<z;i++)
		for(j=0;j<y;j++)
			for(k=0;k<3;k++)
			{
				newstringer[i][j][k]=stringest[t];
				t++;
			}	
	
	b=row*column;
	r=b/7;
	if(b%7)
		++r;
	t=0;
	for (i=0;i<r;i++)
		for(j=0;j<7;j++)
			for(k=0;k<3;k++)
			{
				newarray[i][j][k]=counter[t];
				t++;
			}
	for (i=0;i<z;i++)
		for(j=0;j<y;j++)
			for(k=0;k<3;k++)
			{
				if (newstringer[i][j][k]!=newarray[i][j][k])
					newarray[i][j][k]=newstringer[i][j][k];
			}
	for(i=0;i<r;i++)
	{
		for(j=0;j<7;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",newarray[i][j][k]);
			}
			printf(" ");
		}
		printf("\n");
	}
}

if(max>99 && max<255)
{
	if(length<16)
	{
		if(length%3)
		{
			y=(length/3)+1;
			z=1;
		}
		else
		{
			y=length/3;
			z=1;
		}
	}

	if(length>15)
	{
		if(length%15)
		{
			y=5;
			z=(length/15)+1;
		}
		else
		{
			y=5;
			z=length/15;
		}
	}
	t=0;
	for (i=0;i<z;i++)
		for(j=0;j<y;j++)
			for(k=0;k<3;k++)
			{
				newstringer[i][j][k]=stringest[t];
				t++;
			}
	
	b=row*column;
	r=b/5;
	if(b%5)
		++r;
	t=0;
	for (i=0;i<r;i++)
		for(j=0;j<5;j++)
			for(k=0;k<3;k++)
			{
				newarray[i][j][k]=counter[t];
				t++;
			}
	for (i=0;i<z;i++)
		for(j=0;j<y;j++)
			for(k=0;k<3;k++)
			{
				if (newstringer[i][j][k]!=newarray[i][j][k])
					newarray[i][j][k]=newstringer[i][j][k];
			}
	for(i=0;i<r;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",newarray[i][j][k]);
			}
			printf(" ");
		}
		printf("\n");
	}
}

return 0;
}	

