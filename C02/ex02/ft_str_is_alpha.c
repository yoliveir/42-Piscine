/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoliveir <yoliveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:18:41 by yoliveir          #+#    #+#             */
/*   Updated: 2022/02/24 14:46:33 by yoliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	ok;

	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			ok = 1;
		}
		else
		{
			ok = 0;
			break ;
		}
		str++;
	}
	return (ok);
}

// int	main(void)
// {
// 	char	*str;
// 	int		f;

// 	str = "oi5hf";
// 	f = ft_str_is_alpha(str);
// 	printf("%d", f);
// }
