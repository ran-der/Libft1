/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-der <rvan-der@studen.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 18:31:10 by rvan-der          #+#    #+#             */
/*   Updated: 2016/03/02 18:46:38 by rvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list		*tmp;
	t_list		*next;

	if (*alst != NULL)
	{
		tmp = *alst;
		while (tmp != NULL)
		{
			next = tmp->next;
			ft_lstdelone(&tmp, del);
			tmp = next;
		}
	}
}
