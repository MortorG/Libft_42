/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hufuster <hufuster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:57:33 by hufuster          #+#    #+#             */
/*   Updated: 2024/01/05 11:15:10 by hufuster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;

	d = (unsigned char *)dst;
	while (n > 0)
	{
		*d = *(unsigned char *)src;
		d++;
		src++;
		n--;
	}
	return (dst);
}
