/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 02:16:32 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/19 10:12:51 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_puterror(void);

void	draw_line(int width, char left, char middle, char right)
{
	int	i;

	if (width <= 0)
		return ;
	ft_putchar(left);
	i = 0;
	while (i < width - 2)
	{
		ft_putchar(middle);
		i++;
	}
	if (width > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
	{
		ft_puterror();
		return ;
	}
	draw_line(x, '/', '*', '\\');
	i = 2;
	while (i < y)
	{
		draw_line(x, '*', ' ', '*');
		i++;
	}
	if (y > 1)
		draw_line(x, '\\', '*', '/');
}
