	/*
Program to demonstrate the use of the switch statement
*/
#include <stdio.h>

int main(void)
{
 	char oper;
 	float num1, num2, answer ;

    
    printf("Enter a simple maths operation\n");
 	scanf("%f", &num1);
 	scanf("%c", &oper);
 	scanf("%f", &num2);
  
    // Now use the switch statement
 	switch(oper)
 	{
   		case '+': // if (oper == '+' )
   		{
            answer = num1 + num2;
            printf("\n%.1f + %.1f is %.1f", num1, num2, answer);
            break;

   		} // end case '+'

   		case '-':
   		{
            answer = num1 - num2;
            printf("\n%.1f - %.1f is %.1f", num1, num2, answer);
            break;

     	} // end case '-'

   		case '*':
		case 'x':
        case 'X':
        // similar to: if (oper == '*' || oper == 'x' || oper == 'X')
   		{
            answer = num1 * num2;
            printf("\n%.1f * %.1f is %.1f", num1, num2, answer);
            break;

   		} // end case '*'

   		case '/':
   		{
            answer = num1 / num2;
            printf("\n%.1f / %.1f is %.1f", num1, num2, answer);
            break;

   		} // end case '/'

   		default:
   		{
            printf("\nInvalid operator entered");
            break;

   		} // end default

 	} // end switch

 	return 0;

} // end main()