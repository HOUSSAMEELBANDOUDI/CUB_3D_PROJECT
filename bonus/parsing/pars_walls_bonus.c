/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_walls_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-oirg <zel-oirg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:24:33 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/27 07:58:11 by zel-oirg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d_bonus.h"

int	ft_check_wall(char **cub, int row, int col)
{
	if (cub[row][col] != '1' && cub[row][col] != ' ')
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int	ft_surrond_wall(char **cub, int row, int col)
{
	while (cub[row][col])
	{
		if (cub[row][col] != '1' && cub[row][col] != ' ')
			return (EXIT_FAILURE);
		col++;
	}
	return (EXIT_SUCCESS);
}

int	ft_pars_wall(char **cub, int row)
{
	int	len_1;
	int	len_2;

	len_1 = ft_strlen(cub[row]);
	len_2 = 0;
	if (cub[row + 1])
		len_2 = ft_strlen(cub[row + 1]);
	if (len_1 > len_2 && len_2 > 0)
	{
		if (ft_surrond_wall(cub, row, len_2))
			return (EXIT_FAILURE);
	}
	else if (len_2 > len_1)
	{
		if (ft_surrond_wall(cub, row + 1, len_1))
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}