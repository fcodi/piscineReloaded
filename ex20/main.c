/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 12:28:37 by fcodi             #+#    #+#             */
/*   Updated: 2019/04/08 12:59:43 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int		main(int ac, char **av)
{
	if (ac != 2)
		return (-1);
	printf("%s\n", ft_strdup(av[1]));	
}