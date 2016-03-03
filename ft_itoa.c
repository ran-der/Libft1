/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-der <rvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 18:55:07 by rvan-der          #+#    #+#             */
/*   Updated: 2015/11/03 19:12:35 by rvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		i;
	int		tmp;
	int		range;
	char	*nbr;

	tmp = (n < 0 ? -n : n);
	range = (n <= 0 ? 1 : 0);
	while (tmp != 0)
	{
		range++;
		tmp = tmp / 10;
	}
	if ((nbr = (char*)malloc(sizeof(char) * (range + 1))) == NULL)
		return (NULL);
	i = range - 1;
	if (n < 0 || n == 0)
		nbr[0] = (n < 0 ? '-' : '0');
	tmp = (n < 0 ? -n : n);
	while (tmp != 0)
	{
		nbr[i--] = '0' + (tmp % 10);
		tmp = tmp / 10;
	}
	nbr[range] = '\0';
	return (nbr);
}
