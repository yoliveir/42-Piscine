/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoliveir <yoliveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:19:08 by yoliveir          #+#    #+#             */
/*   Updated: 2022/02/25 12:48:13 by yoliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

// 	str = "OI";
// 	f = ft_str_is_uppercase(str);
// 	printf("%d", f);
// }
