/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurieux <ldurieux@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:32:51 by ldurieux          #+#    #+#             */
/*   Updated: 2022/08/11 17:32:53 by ldurieux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok_r(char *str, const char *delims, char **save_ptr)
{
	char	*end;
	char	*res;

	str += ft_strspn(str, delims);
	end = ft_strpbrk(str, delims);
	if (!end)
		end = str + ft_strlen(str);
	if (end - str == 0)
		return (NULL);
	res = ft_strndup(str, end - str);
	*save_ptr = end;
	return (res);
}
