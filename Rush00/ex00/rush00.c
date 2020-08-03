/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsterlin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 20:57:45 by lsterlin          #+#    #+#             */
/*   Updated: 2020/02/02 21:05:51 by lsterlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	new_line(int width, char first, char middle, char last)
{
	ft_putchar(first);
	while (width > 2)
	{
		ft_putchar(middle);
		width = width - 1;
	}
	if (width > 1)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		new_line(x, 'o', '-', 'o');
		while (y > 2)
		{
			new_line(x, '|', ' ', '|');
			y = y - 1;
		}
		if (y > 1)
			new_line(x, 'o', '-', 'o');
	}
}
