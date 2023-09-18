#include <stdio.h>

typedef char *string;

int main(int argc, char *argv[])
{
  string text = "Hello, world!\n";

  printf("%s", text);

  return 0;
}