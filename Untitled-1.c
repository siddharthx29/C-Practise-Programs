
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

