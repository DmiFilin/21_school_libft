/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 08:07:29 by rgalyeon          #+#    #+#             */
/*   Updated: 2019/03/23 02:03:07 by rgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/memory_ft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh;
	t_vec	*vec;

	vec = ft_gc_helper();
	fresh = malloc(size);
	if (!fresh)
		return (NULL);
	ft_bzero(fresh, size);
	vec_pro_push(&vec, fresh);
	return (fresh);
}
