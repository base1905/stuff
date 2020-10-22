#include <unistd.h>
static void ft_puthex(unsigned int n, char *base)
{
    if (n < 16)
        write(1, &(base[n]), 1);
    else
    {
        ft_puthex(n / 16, base);
        ft_puthex(n % 16, base);
    }
}

int main (void)
{
    int a = 161236;
    ft_puthex(a, "0123456789abcdef");
}
