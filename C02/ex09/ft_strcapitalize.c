/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoliveir <yoliveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:19:43 by yoliveir          #+#    #+#             */
/*   Updated: 2022/02/22 12:19:44 by yoliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] >= 'A' && str[k] <= 'Z')
			str[k] = str[k] + 32;
		k++;
	}
}

/* 1. Changing all letters to lowercase (ft_strlowcase) */
/* 2. Then check if upercase is needed (letters after no-lc, no-uc, no number)*/
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	change;
	int	is_lc;
	int	is_uc;

	i = 0;
	change = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		is_lc = (str[i] >= 'a' && str[i] <= 'z');
		is_uc = (str[i] >= 'A' && str[i] <= 'Z');
		if (change && is_lc)
		{
			str[i] = str[i] - 32;
			change = 0;
		}
		else if (is_lc || (str[i] >= '0' && str[i] <= '9') || is_uc)
			change = 0;
		else
			change = 1;
		i++;
	}
	return (str);
}
