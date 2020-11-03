#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

///////////////////////////////////////////////////////////////
/// EXIT NUMBERS											///
/// 42 - Wrong call of program								///
/// 43 - Non-number argument 1								///
/// 44 - Non-number argument 2								///
/// 45 - Non-aritmetic operator operator != +, -, /, *		///
/// 50 - Dividing with 0									///
///////////////////////////////////////////////////////////////

int main(int argc, char **argm)
{
    if(argc != 4)
    {
        printf("\n USAGE %s ARG1 OPERATOR ARG2\n\n", argm[0]);
        printf(" \n ------------------------------------------\n");
        printf(" |\tAvailable Operators Table\t  |");
        printf(" \n ------------------------------------------\n");
        printf(" |\t + \t |   Add 2 number         |\n");
        printf(" |\t - \t |   Subtract 2 numbers   |\n");
        printf(" |\t / \t |   Divide 2 numbers     |\n");
        printf(" |\t x \t |   Multiply 2 numbers   |\n");
        printf(" ------------------------------------------\n");
        exit(42);
    }
    else
    {
		unsigned i = 0, len = strlen(argm[1]); // duzina niza

		// ako se unese broj sa predznakom
		if(argm[1][0] == '-' || argm[1][0] == '+')
			i++;

		// provera unetih podataka
		do {
			if(isdigit(argm[1][i]) == 0){
				printf("\nUneti argument nije broj!\n\nIzlazak iz programa..........\n\n");
				exit(43);
			}
			else
				i++;
		} while(i < len);

		// provera unetih podataka
		i = 0; len = strlen(argm[3]);

		// ako se unese broj sa predznakom
		if(argm[3][0] == '-' || argm[3][0] == '+')
			i++;

		do {
			if(isdigit(argm[3][i]) == 0){
				printf("\nUneti argument nije broj!\n\nIzlazak iz programa..........\n\n");
				exit(44);
			}
			else
				i++;
		} while(i < len);

        double arg1 = atoi(argm[1]);
        double arg2 = atoi(argm[3]);
        char arg3 = (char)((argm[2][0]));

        switch(arg3)
        {

        case '+':
            printf("%.3lf %c %.3lf = %.3lf\n", arg1, arg3, arg2, arg1 + arg2);
            break;
        case '-':
            printf("%.3lf %c %.3lf = %.3lf\n", arg1, arg3, arg2, arg1 - arg2);
            break;
        case '/':
			if(arg2 == 0) {
				puts("\n\t\t\t\t\t\tNice one, just kidding ^o^\n\t\t\t\t\t\tTry again...\n");
				exit(50);
			}
            printf("%.3lf %c %.3lf = %.3lf\n", arg1, arg3, arg2, arg1 / arg2);
            break;
        case 'x':
            printf("%.3lf %c %.3lf = %.3lf\n", arg1, arg3, arg2, (arg1 * arg2));
            break;
        default:
            printf("\nOperacija %c nije validna racunska operacija\n", arg3);
			exit(45);
        }
    }
    return 0;

}
