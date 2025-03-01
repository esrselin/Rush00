/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rfinal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esakgul <esakgul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:12:20 by esakgul           #+#    #+#             */
/*   Updated: 2025/03/01 18:31:04 by esakgul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush_top(int x)
{
	int	m;

	m = 1;
	while (m <= x)
	{
		if (m == 1 || m == x)
		{
			write(1, "o", 1);
		}
		else
			write(1, "-", 1);
		m++;
	}
}

void	rush_middle(int x, int y)
{
	int	n;
	int	k;

	n = 1;
	while (n < y - 1)
	{
		write(1, "\n|", 2);
		k = x - 2;
		while (k--)
		{
			write(1, " ", 1);
		}
		write(1, "|", 1);
		n++;
	}
	write(1, "\n", 1);
}

void	rush_bottom(int x)
{
	int	m;

	m = 1;
	while (m <= x)
	{
		if (m == 1 || m == x)
		{
			write(1, "o", 1);
		}
		else
		{
			write(1, "-", 1);
		}
		m++;
	}
	write(1, "\n", 1);
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
		write(1, "o", 1);
		return (0);
	}
	if (x == 0 || y == 0)
	{
		write(1, "\n", 1);
		return (1);
	}
	rush_top(x);
	if (y > 1)
		rush_middle(x, y);
	if (y > 1)
		rush_bottom(x);
	return (0);
}

int	main(void)
{
    rush(4, 0);
    return (0);
}
