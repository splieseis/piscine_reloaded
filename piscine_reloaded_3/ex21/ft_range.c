/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spliesei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:28:02 by spliesei          #+#    #+#             */
/*   Updated: 2017/11/07 13:28:05 by spliesei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		size;
	int		i;
	int		*range;

	size = max - min;
	if (size <= 0)
		range = NULL;
	else
	{
		range = malloc(sizeof(int) * size);
		i = 0;
		while (min < max)
		{
			range[i] = min;
			i++;
			min++;
		}
	}
	return (range);
}
