#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success,and 1 on error
 */
int add_positive_numbers(int argc, char *argv[]) {
int sum = 0;
for (int i = 1; i < argc; i++) {
for (int j = 0; argv[i][j] != '\0'; j++) {
if (!isdigit(argv[i][j])) {
printf("Error\n");
return 1;
}
}
sum += atoi(argv[i]);
}
return sum;
}

int main(int argc, char *argv[]) {
if (argc <= 1) {
printf("0\n");
} else {
int result = add_positive_numbers(argc, argv);
if (result != 1) {
printf("%d\n", result);
}
}
return 0;
}
