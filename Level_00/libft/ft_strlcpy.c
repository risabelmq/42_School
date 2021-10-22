/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:26:29 by ritaisabel        #+#    #+#             */
/*   Updated: 2021/10/20 18:34:01 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*
int	main(void)
{
	char	*src;
	char	dst[34];

	int	result;
	src = "My name is Luka, I live on the 2nd floor";
	result = ft_strlcpy(dst, src, 35);
	printf("String: %s\n", src);
	printf("Copied[35]: %s\nSource Number[40]: %d", dst, result);
}
*/
