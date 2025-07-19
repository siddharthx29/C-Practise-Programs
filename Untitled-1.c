/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 #include <stdio.h>

int main() {
    int a, b, c, m;

    printf("Enter three integer values: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b)
    {
        m = a;
    }
    else
    {
        m = b;
    }

    if(c > m)
    {
        m = c;
    }

    printf("The maximum number is: %d\n", m);

    return 0;
}

