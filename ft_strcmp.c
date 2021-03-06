/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-der <rvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 15:24:11 by rvan-der          #+#    #+#             */
/*   Updated: 2016/03/03 18:30:54 by rvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	unsigned char	*S1;
	unsigned char	*S2;

	S1 = (unsigned char*)s1;
	S2 = (unsigned char*)s2;
	i = 0;
	while (S1[i] != '\0' && S2[i] != '\0' && S1[i] == S2[i])
		i++;
	return (S1[i] - S2[i]);
}
