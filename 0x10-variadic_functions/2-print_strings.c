#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
		unsigned int i;
			va_list params;

				va_start(params, n);
					if (n != 0)
							{
										for (i = 0; i < n; i++)
													{
																	if (i != n - 1)
																					{
																										if (separator != NULL)
																																printf("%s%s", make_nil(va_arg(params, char *)), separator);
																														else
																																				printf("%s", make_nil(va_arg(params, char *)));
																																	}
																				else
																								{
																													printf("%s", make_nil(va_arg(params, char *)));
																																}
																						}
											}
						printf("\n");
							va_end(params);
}

char *make_nil(char *s)
{
		if (s == NULL)
					s = "(nil)";

			return (s);
}
