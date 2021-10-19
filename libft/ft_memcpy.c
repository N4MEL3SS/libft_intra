/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:48:52 by celadia           #+#    #+#             */
/*   Updated: 2021/10/19 15:31:58 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sour;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	i = -1;
	dest = (unsigned char *)dst;
	sour = (unsigned char *)src;
	while (++i < n)
		dest[i] = sour[i];
	return (dst);
}
