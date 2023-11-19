/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 02:02:20 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/19 10:58:20 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//This function is a simple implementation of outputting a single character 
//to the standard output. The "char" c parameter represents the character to 
//be printed.

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

void	ft_puterror(void)
{
	ft_putstr("The passed arguments for the rush function are invalid!\n");
	ft_putstr("-------> We are very sorry (ｏ・_・)ノ”(ノ_<、) <-------\n");
}
