#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


void print_numbers(const char *separator, const unsigned int n, ...)
{
	    if (n == 0)
		        {
				        printf("\n");
					        return;
						    }

	        unsigned int i;
		    va_list params;

		        va_start(params, n);
			    for (i = 0; i < n; i++)
				        {
						        printf("%d", va_arg(params, int));

							        if (i != n - 1 && separator != NULL)
									            printf("%s", separator);
								    }
			        printf("\n");
				    va_end(params);
}

