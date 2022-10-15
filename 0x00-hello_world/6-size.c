#include <stdio.h>
/**
 * main-entry point for the program.
 *
 * Return:0 if no errors, return non zero if errors
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}
