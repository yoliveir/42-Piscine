/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoliveir <yoliveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:18:50 by yoliveir          #+#    #+#             */
/*   Updated: 2022/02/24 16:10:25 by yoliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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

// 	str = "123";
// 	f = ft_str_is_numeric(str);
// 	printf("%d", f);
// }