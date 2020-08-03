/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblood <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 00:07:13 by mblood            #+#    #+#             */
/*   Updated: 2020/02/01 10:56:03 by mblood           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factorial;
	int i;

	factorial = 1;
	i = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (i <= nb)
			factorial *= i++;
	}
	else
		return (0);
	return (factorial);
}
