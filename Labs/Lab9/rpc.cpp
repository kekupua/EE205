// /////////////////////////////////////////////////////////////////////////////////////////////////
//
// C code for reverse Polish calculator p.72 from Kernighan and Ritchie C book.
//
// Input: user types in the expression to be evaluated, and hits ENTER
//        The expression can use only + - * /
//        The format is: operand operand operator
//        FOr example, 1 1 + 2 3 * +  ENTER  will calculate (1+1) + (2*3)
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h> /* for atof() - in K&R, math.h is referenced - this is an anachronism */

#define MAXOP 3 /* max size of operand or operator */  // should be 100; 3 is just for simple testing
#define NUMBER '0' /* signal that a number was found */

using namespace std;

int getop(char[]);
void push(double);
double pop(void);

/* reverse Polish calculator */

int main(void){
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF)
	{
		switch (type)
		{
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0)
				push(pop() / op2);
			else
				printf("error: zero divisor\n");
			break;
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("error: unknown command %s\n", s);
			break;
		}
	}

	while (true) {}
	return 0;
}

///////////////////////////////////////////////////
///   stack.c
///////////////////////////////////////////////////
#define MAXVAL  100 /* maximum depth of val stack */

int sp = 0; /* next free stack position */
double val[MAXVAL]; /* value stack */

					/* push: push f onto value stack */
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

/* pop: pop and return top value from stack */
double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else
	{
		printf("error: stack empty\n");
		return 0.0;
	}
}

///////////////////////////////////////////////////
///   getop.c
///////////////////////////////////////////////////

#include <ctype.h>

int getch(void);
void ungetch(int);

/* getop: get next operator or numeric operand */
int getop(char s[])
{
	int i, c;

	for (i = 0; i < MAXOP; i++)
		printf("in getop, s[i]= %c\n", s[i]);

	printf("in getop, ready to getch() \n");

	while ((s[0] = c = getch()) == ' ' || c == '\t') {
		;
		printf("eating spaces\n");
	}


	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c; /* not a number */
	i = 0;
	if (isdigit(c)) /* collect integer part */
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.')
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}

///////////////////////////////////////////////////
///   getch.c
///////////////////////////////////////////////////

#define BUFSIZE 100

char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */

int getch(void) /* get a (possibly pushed back) character */
{
	int i = (bufp > 0) ? buf[--bufp] : getchar();
	printf("in getch, returning %c\n", char(i));
	return i;  ////getchar is used to read a single-byte character from screen
}

void ungetch(int c) /* push character back on input */
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}
