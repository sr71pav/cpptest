#include <stdio.h>
#include <string>

#define SUCCESS 0
#define OUTSTR "%d %d\n"

int x=2;

int fooa(), foob();

int main(int argc, char *argv[])
{
    const char* c = "%d\n";
    int x, *y;
    printf(c);

    x = fooa() + foob();
    printf("%d %d\n", x, *y);
    return SUCCESS;
}

int fooa()
{
    x = x*2;
    return x;
}

int foob()
{
    x = x+2;
    return x;
}
