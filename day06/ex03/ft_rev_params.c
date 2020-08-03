/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblood <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 20:30:40 by mblood            #+#    #+#             */
/*   Updated: 2020/02/05 20:48:05 by mblood           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int count_arg;
	int str;

	count_arg = argc - 1;
	while (count_arg > 0)
	{
		str = 0;
		while (argv[count_arg][str] != '\0')
		{
			ft_putchar(argv[count_arg][str]);
			str++;
		}
		ft_putchar('\n');
		count_arg--;
	}
}
