#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char  *stack;
char  *top;

int  pop(void)
{  return *top--;
}

void push(int c)
{  *++top=c;
}
     	
char *poster(void)
{       int c=0, k;
        int i=0;
	char *postfix=(char *)malloc(sizeof(char)*300);
	top=stack=(char *)malloc(sizeof(char)*300);
	
	while(c=getchar())
	{ if (c==EOF) break;
	  if (c==' '||c=='\n') continue;
	          	  
	  else if (c=='t') 
	        { c=getchar();  c=getchar(); 
	          postfix[i++]='t';
	         }
	  else if (c=='s')   
                {  c=getchar();
	           if (c=='h') postfix[i++]='z';
                   else  { postfix[i++]='s'; getchar(); }
                }
	  
          else if (c=='l')
	        {  c=getchar(); postfix[i++]='l'; }
          
	  else if (c=='c')		  
	        {  c=getchar(); postfix[i++]='c'; }             
	  
	  else if (c=='^')
	          push('^');
	  
	  else if (c=='+')
	       { while(1)
		       { if (top==stack) {push('+'); break; }	  
                         k=pop();
		         if (k=='(')  {push('('); push('+'); break; }
                         else postfix[i++]=k;
                       }
                }
	  else if (c=='-')
	          { while(1)
	                  { if (top==stack) {push('-'); break; }
	                    k=pop();
	                    if (k=='-')  { push('(');  push('-'); break; }
	                    else postfix[i++]=k;
	                   }
	           }
          
	  else if (c=='(')
		  push('(');
	  

          else if (c==')')
	  {       while(1)
		     {  k=pop();
                        if (k=='(') break;
			postfix[i++]=k;
		     }
          }
	  
	  
	  else if (c=='*')
	           {  while(1)
			   { if (top==stack) { push('*'); break; }
	                     k=pop();     
                             if (k=='(') {push('('); push('*');  break; }
			     if (k=='+') { push('+'); push('*'); break; }
			     if (k=='-') { push('-'); push('*'); break; }
                             else postfix[i++]=k;
                            }
		   }
      
	  
	  else if (c=='X')
	     postfix[i++]='X';  
	  
	  else if (c=='/')
	                {  while(1)
		              { if (top==stack) { push('/'); break; }
		                 k=pop();
		                if (k=='(') {push('('); push('/');  break; }
                                if (k=='+') { push('+'); push('/'); break; }
                                if (k=='-') { push('-'); push('/'); break; }
         			else postfix[i++]=k;
		               }
		         }
	  
                    else postfix[i++]=c;		    
	        				
	}        
             
	 
	while(1)
	   { if (stack==top) break;
	     k=pop(); postfix[i++]=k;
	   }

           postfix[i]=0;
	   return postfix;

}




char * derivative(char *post)
{       char *p;
	if (*post=='X') 
	{ p=(char *)malloc(sizeof(char));
          *p++='1';
	}
        if (*post=='l')
	{ p=(char *)malloc(sizeof(char)*3);
	  *p++='1'; *p++='/'; *p='X';
        }
	
        if (*post=='t');
	{ p=(char *)malloc(sizeof(char)*5);
	  *p++='1'; *p++='+'; *p++='t'; *p++='^'; *p='2';
        }  

        if (*post=='s')
        { p=(char *)malloc(sizeof(char)*3);
	  *p++='c'; *p++='o'; *p=='s';
	}
        
	if (*post=='z')
	{ p=(char *)malloc(sizeof(char)*3);
	 *p++='c'; *p='h';
	}

	return *p;        
}


int main(void)
{
        char *c=poster();
	while(*c)
	{  if (*c=='t') {printf("tan"); c++; }
	   else if (*c=='c') {printf("ch");  c++; }
	   else if (*c=='s') {printf("sin"); c++; }
	   else if (*c=='z') {printf("sh"); c++; }
	   else if (*c=='l') {printf("ln"); c++; }
	   else printf("%c", *c++);
	} 
	
			
	return 0;
}
