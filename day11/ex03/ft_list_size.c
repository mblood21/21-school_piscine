/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblood <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:15:44 by mblood            #+#    #+#             */
/*   Updated: 2020/02/11 22:15:16 by mblood           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		count;

	count = 0;
	list = begin_list;
	while (list)
	{
		list = list->next;
		count++;
	}
	return (count);
}
