#include <stdlib.h>
#include <stdio.h>

int         is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (!(1&n))
			n /= 2;
		else
			return (0);
	}
	return (1);
}

//int	    is_power_of_2(unsigned int n)
//{
  //  return (n > 0 && 1 & (n-1));
//}



int main(int ac, char **av)
{
    if (is_power_of_2(atoi(av[1])))
        printf("True");
    else
        printf("False");
}
