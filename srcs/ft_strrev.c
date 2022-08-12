/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurieux <ldurieux@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 00:07:06 by ldurieux          #+#    #+#             */
/*   Updated: 2022/08/12 00:07:07 by ldurieux         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	t_size	len;
	t_size	i;
	char	swp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		swp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = swp;
		i++;
	}
	return (str);
}