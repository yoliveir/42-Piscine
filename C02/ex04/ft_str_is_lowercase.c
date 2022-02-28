/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoliveir <yoliveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:18:59 by yoliveir          #+#    #+#             */
/*   Updated: 2022/02/24 12:29:58 by yoliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			++i;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str;
// 	int		f;

// 	str = "oi";
// 	f = ft_str_is_lowercase(str);
// 	printf("%d", f);
// }