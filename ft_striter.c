/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecampbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 22:34:22 by hecampbe          #+#    #+#             */
/*   Updated: 2019/04/09 13:21:19 by hecampbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striter(char *str, void (*f)(char *))
{
	int i;

	i = 0;
	if ((str != NULL) && (f != NULL && *f != NULL))
	{
		while (str[i])
		{
			f(&str[i]);
			i++;
		}
	}
}