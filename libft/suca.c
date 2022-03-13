#include <stdio.h>


int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
 int mark;
 printf("Enter mark: ");
 scanf("%d", &mark);
 printf("%d", (ft_fibonacci(mark)));
 return 0;
}