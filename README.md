# Rush_00 ([Piscine](https://www.42.fr)) 2023 :football:

Rush_00 is a group project of the Piscine school "42", which is created according to certain rules:

• Files to submit: main.c, ft_putchar.c and your rush0X.c, ’0X’ represents the
rush number. For example rush00.c.

• Those three files will be compiled together.

• Your file ft_putchar.c should include the function ft_putchar.

• Example of main.c:
```
int main(void)
{
  rush(5, 5);
  return (0);
}
```
• You must therefore write the function rush taking two variables of type int as
arguments, named respectively x and y. No need to say this function should be on
the rush0X.c file.

• Your function rush should display (on-screen) a rectangle of x characters for width,
and y characters for length.

• Your function should never crash or loop indefinitely.

• Your main will be modified during defense, to check if you’ve handled everything
Your main will be modified during defense, to check if you’ve handled everything
you’re supposed to. Here’s an example of test we’ll perform:
```
int main()
{
  rush(123, 42);
  return (0);
}
```
