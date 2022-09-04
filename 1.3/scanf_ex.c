/* C input (scanf) example */
#include <stdio.h>

int main() {
    int x;
    float pi;

    // read in an int value followed by a float value ("%d%g")
    // store the int value at the memory location of x (&x)
    // store the float value at the memory location of pi (&pi)
    printf("Enter a decimal number (x) "
    "followed by a floating point number (pi)\n"
    "(try adding lots of whitespace between them):\n");
    scanf("%d%g", &x, &pi);

    printf("x = %d, pi = %g", x, pi);

    return 0;
}