/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblood <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 12:16:05 by mblood            #+#    #+#             */
/*   Updated: 2020/02/06 16:02:08 by mblood           ###   ########.fr       */
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
