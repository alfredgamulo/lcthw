#include <stdio.h>

/*
Escape characters:
=================
alert (beep)	\a
backslash	\\
backspace	\b
carriage return	\r
double quote	\"
formfeed	\f
horizontal tab	\t
newline	\n
null character	\0
single quote	\'
vertical tab	\v
question mark	\?


Format sequences:
=================
c	as a character
d	as a decimal integer
e	as a floating point number; example 7.123000e+00
f	as a floating point number; example 7.123000
g	in the e-format or f-format, whichever is shorter
s	as a string
 */

int main()
{
	int age = 10;
	int height = 72;

	printf("I am %d years old. \n", age);
	printf("I am %d inches tall. \n", height);

	// Extra Credit

	int leftParen = 40;
	printf("The int 40 as a char -> %c \n", leftParen);

	double pi = 3.14159265359;
	printf("pi = %e \n", pi);
	printf("pi = %f \n", pi);
	printf("pi = %g \n", pi);

// 	printf("pi = %s \n", pi);

	char lul[3]; //array size doesn't seem to matter?
	lul[0] = 'l';
	lul[1] = 'o';
	lul[2] = 'l';
	lul[3] = 12;
	lul[4] = 40;
	lul[5] = 's'; //will keep on printing until null value? 
	
	printf("%s, I broke it.", lul);
	
	printf("\n");
	return 0;
}
