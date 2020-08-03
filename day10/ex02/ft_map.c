/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblood <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:18:30 by mblood            #+#    #+#             */
/*   Updated: 2020/02/11 14:10:36 by mblood           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *array;

	i = 0;
	array = (int *)malloc(sizeof(int) * length);
	if (array == NULL)
		return (NULL);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
