#include <unistd.h>

void ft_putchar(char c);

int main()
{
  char letter;
  letter = 'a';
  while(letter <= 'z')
  {
    ft_putchar(letter++);
  }

}

void ft_putchar(char c)
{
  write(1, &c, 1);
}
