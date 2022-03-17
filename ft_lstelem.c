/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstelem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:59:01 by ykot              #+#    #+#             */
/*   Updated: 2022/03/17 11:32:50 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstelem(t_list **begin_list, size_t	elem)
{
	t_list	*temp;

	++elem;
	if (!*begin_list || !elem)
		return (NULL);
	temp = *begin_list;
	while (temp && --elem)
		temp = temp->next;
	if (!elem)
		return (temp);
	return (NULL);
}
