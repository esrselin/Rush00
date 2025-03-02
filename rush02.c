/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   						    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:47:25 by esakgul           #+#    #+#             */
/*   Updated: 2025/03/02 20:16:30 by esakgul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush_edge(int x, char first, char last)
{
	int	m;

	m = 1;
	while (m <= x)
	{
		if (m == 1)
		{
			ft_putchar(first);
		}
		else if (m == x)
		{
			ft_putchar(last);
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
		return (2);
	}
	rush_edge(x, 'A', 'A');
	if (y > 1)
		rush_middle(x, y);
	if (y > 1)
		rush_edge(x, 'C', 'C');
	return (0);
}
