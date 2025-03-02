/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakgul <esakgul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:12:20 by esakgul           #+#    #+#             */
/*   Updated: 2025/03/02 20:17:01 by esakgul          ###   ########.fr       */
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
		if (m == 1)
		{
			ft_putchar('A');
		}
		else if (m == x)
		{
			ft_putchar('C');
		}
		else
			ft_putchar('B');
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
		ft_putchar('B');
		k = x - 2;
		while (k-- > 0)
		{
			ft_putchar(' ');
		}
		if (x > 1)
			ft_putchar('B');
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
		if (m == 1)
		{
			ft_putchar('C');
		}
		else if (m == x)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		m++;
	}
	ft_putchar('\n');
}

int	rush(int x, int y)
{
	if (x < 0 || y < 0)
	{
		return (2);
	}
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		return (0);
	}
	if (x == 0 || y == 0)
	{
		return (1);
	}
	rush_top(x);
	if (y > 1)
		rush_middle(x, y);
	if (y > 1)
		rush_bottom(x);
	return (0);
}
