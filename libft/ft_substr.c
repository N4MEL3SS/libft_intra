/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:46:48 by celadia           #+#    #+#             */
/*   Updated: 2021/10/18 13:46:48 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	s_sub_len;

	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len <= ft_strlen(&s[start]))
		s_sub_len = len;
	else
		s_sub_len = ft_strlen(&s[start]);
	sub_str = malloc(sizeof(char) * (s_sub_len + 1));
	if (sub_str == NULL)
		return (NULL);
	ft_strlcpy(sub_str, &s[start], s_sub_len + 1);
	return (sub_str);
}
