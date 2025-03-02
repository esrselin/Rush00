/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:12:20                      #+#    #+#             */
/*   Updated: 2025/03/02 15:05:22                     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush_top(int x)
{
	int	m;

	m = 1;
	while (m <= x)
	{
		if (m == 1 || m == x)
		{
			ft_putchar('o');
		}
		else
			ft_putchar('-');
		m++;
	}
	ft_putchar('\n');
}

void	rush_middle(int x, int y)
{
	int	n;
	int	k;

	n = 1;
	while (n < y - 1)
	{
		ft_putchar('|');
		k = x - 2;
		while (k-->0)
		{
			ft_putchar(' ');
		}
		if(x > 1)
			ft_putchar('|');
		ft_putchar('\n');
		n++;
	}
}

void	rush_bottom(int x)
{
	int	m;

	m = 1;
	while (m <= x)
	{
		if (m == 1 || m == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		m++;
	}
	ft_putchar('\n');
}

int	rush(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(2, "Hata\n", 5);
		return (1);
	}
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		return (0);
	}
	if (x == 0 || y == 0)
	{
		ft_putchar('\n');
		return (1);
	}
	rush_top(x);
	if (y > 1)
		rush_middle(x, y);
	if (y > 1)
		rush_bottom(x);
	return (0);
}
