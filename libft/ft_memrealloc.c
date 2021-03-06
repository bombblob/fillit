/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 16:15:18 by acarlson          #+#    #+#             */
/*   Updated: 2018/10/22 16:47:26 by acarlson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Reallocates memory to "size" size and copies mem from ptr to new
** if ptr is NULL realloc is identical to malloc
** if size < size of ptr, copy as much as you can
*/

void		*ft_memrealloc(void *ptr, size_t size)
{
	void	*new;

	RET_IF(!(new = ft_memalloc(size)), ptr);
	if (ptr != NULL)
		ft_memcpy(new, ptr, size);
	free(ptr);
	return (new);
}
