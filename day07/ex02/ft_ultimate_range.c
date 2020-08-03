/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblood <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 15:35:35 by mblood            #+#    #+#             */
/*   Updated: 2020/02/06 18:28:28 by mblood           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *ofints;

	if (min >= max)
		return (NULL);
	i = 0;
	ofints = (int *)malloc(4 * (max - min));
	while (min < max)
	{
		ofints[i] = min;
		i++;
		min++;
	}
	return (ofints);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	else
		return (max - min);
}
