#include<stdio.h>

#include<stdarg.h>

#include<stdio.h>



/**
 *
 *  * * print_numbers - a function ...
 *
 *   * * @separator: the chaine
 *
 *    * * @n: the number
 *
 *     * * @...: the char
 *
 *      * * Return: 1 or 0
 *
 *       */

void print_numbers(char *separator, const unsigned int n, ...)

{

		va_list nums;

			unsigned int index;



				va_start(nums, n);



					for (index = 0; index < n; index++)

							{

									printf("%d", va_arg(nums, int));



										if (index != (n - 1) && separator != NULL)

												printf("%s", separator);

											}



						printf("\n");



							va_end(nums);

}
