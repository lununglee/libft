/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 15:55:50 by llee              #+#    #+#             */
/*   Updated: 2018/10/22 22:00:49 by llee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	int j;

	i = ft_strlen(s1);
	j = -1;
	while (s2[++j])
		*(s1 + i + j) = *(s2 + j);
	*(s1 + i + j) = '\0';
	return (s1);
}
