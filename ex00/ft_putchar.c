/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 02:02:20 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/19 04:52:52 by elmaksim         ###   ########.fr       */
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
