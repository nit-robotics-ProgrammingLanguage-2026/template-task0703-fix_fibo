#include <stdio.h>

int fibo(int n);

int main(void)
{
    int n;
    int ans;
    scanf("%d", &n);
    if (n < 1 || n >= 30)
    {
        printf("NG");
        return 0;
    }
    ans = fibo(n);
    printf("%d", ans);
    return 0;
}

int fibo(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}
