#include <stdio.h>
#include <string.h>

int stackcontrol(char stack[30], int stackcounter)
{
  if(stackcounter == 1)
    return 1;
	else if(stack[stackcounter - 1] == '(')
    	return 1;
  		else if(stack[stackcounter - 2] == '(')
    		return 1;
  			else if(((stack[stackcounter - 2] == '+') || (stack[stackcounter - 2] == '-')) && 
 			((stack[stackcounter - 1] == '*') || (stack[stackcounter - 1] == '/')))
    			return 1;
  				else
    				return 0;
}


void modify(char stack[30], char postfix[30], int *stackcounter, int *postfixcounter)
{
  postfix[*postfixcounter] = stack[*stackcounter - 2];
  ++*postfixcounter;
  postfix[*postfixcounter] = '\0';
  stack[*stackcounter - 2] = stack[*stackcounter - 1];
  --*stackcounter;
}


void absorb(char stack[30], char postfix[30], int *stackcounter, int *postfixcounter)
{
  int counter = *stackcounter - 1;

  while(stack[counter] != '(')
  {
    postfix[*postfixcounter] = stack[counter];
    ++*postfixcounter;
    postfix[*postfixcounter] = '\0';
    --counter;
  }

  *stackcounter = counter;
}


void emptystack(char stack[30], char postfix[30], int *stackcounter, int *postfixcounter)
{
  int counter;

  for(counter = *stackcounter - 1; counter >= 0; --counter)
  {
    postfix[*postfixcounter] = stack[counter];
    ++*postfixcounter;
    postfix[*postfixcounter] = '\0';
  }

  *stackcounter = 0;
}


void operation(double result[30], int *resultcounter, char operation)
{
  if(operation == '+')
  {
    result[*resultcounter - 2] = result[*resultcounter - 2] + result[*resultcounter - 1];
    --*resultcounter;
  }

  else if(operation == '-')
  {
    result[*resultcounter - 2] = result[*resultcounter - 2] - result[*resultcounter - 1];
    --*resultcounter;
  }

  else if(operation == '*')
  {
    result[*resultcounter - 2] = result[*resultcounter - 2] * result[*resultcounter - 1];
    --*resultcounter;
  }

  else
  {
    result[*resultcounter - 2] = result[*resultcounter - 2] / result[*resultcounter - 1];
    --*resultcounter;
  }

}



int main(void)
{
  int stackcounter = 0, postfixcounter = 0, infixcounter = 0,resultcounter = 0;
  char infix[30], postfix[30], stack[30];
  double result[30];

  printf("Lutfen gecerli (Maksimum 30 karakter) bir matematiksel ifade giriniz:");
  gets(infix);

  for(infixcounter = 0; infixcounter < (int)strlen(infix); ++infixcounter)
  {
    if(infix[infixcounter] != ')')
    {
      if(('0' <= infix[infixcounter]) && (infix[infixcounter] <= '9'))
      {
        postfix[postfixcounter] = infix[infixcounter];
        ++postfixcounter;
        postfix[postfixcounter] = '\0';
      }
      else
      {
        stack[stackcounter] = infix[infixcounter];
        ++stackcounter;
        while(stackcontrol(stack, stackcounter) == 0)
          modify(stack, postfix, &stackcounter, &postfixcounter);
      }
    }
    else
      absorb(stack, postfix, &stackcounter, &postfixcounter);
  }

  emptystack(stack, postfix, &stackcounter, &postfixcounter);

  for(postfixcounter = 0; postfixcounter < (int)strlen(postfix); postfixcounter++)
  {
    if(('0' <= postfix[postfixcounter]) && (postfix[postfixcounter] <='9'))
    {
      result[resultcounter] = postfix[postfixcounter] - 48;
      ++resultcounter;
    }
    else
      operation(result, &resultcounter, postfix[postfixcounter]);
  }

  printf("\nInfix Gosterimi: %s\n\nPostfix Gosterimi: %s\n\nSonuc: %lf\n", infix, postfix, result[0]);

  return 0;
}

