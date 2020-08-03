/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblood <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 18:40:23 by mblood            #+#    #+#             */
/*   Updated: 2020/02/06 22:55:45 by mblood           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		stringlen(int argc, char **argv)
{
	int strlen;
	int argcount;
	int sumletter;

	argcount = 1;
	sumletter = 0;
	while (argcount < argc)
	{
		strlen = 0;
		while (argv[argcount][strlen] != '\0')
		{
			sumletter++;
			strlen++;
		}
		sumletter++;
		argcount++;
	}
	return (sumletter);
}

void	ft_strcpy(char *strp, char *src)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (src[n] != '\0')
	{
		strp[i] = src[n];
		i++;
		n++;
	}
	while (strp[n] != '\0')
		i++;
	if (i != 0)
	{
		strp[i] = '\n';
		i++;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	int		countargs;
	char	*strp;
	int		sum;

	countargs = 1;
	sum = stringlen(argc, argv);
	strp = (char *)malloc(sum);
	while (countargs < argc)
	{
		ft_strcpy(strp, argv[countargs]);
		countargs++;
	}
	return (strp);
}
