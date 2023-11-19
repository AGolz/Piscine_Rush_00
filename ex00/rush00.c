/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:57:57 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/19 05:02:20 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

//int width: Represents the width of the line.
//char left: Represents the leftmost character of the line.
//char middle: Represents the character to be repeated in the middle 
//of the line.
//char right: Represents the rightmost character of the line.

//ft_putchar(left);: Prints the leftmost character.
//while (i < width - 2) { ft_putchar(middle); i++; }:
//Prints the middle character (width - 2) times. 
//The -2 is because the left and right characters are already printed.
//if (width > 1) ft_putchar(right);: Prints the rightmost character 
//only if the width is greater than 1.
//ft_putchar('\n');: Moves to the next line.

void	draw_line(int width, char left, char middle, char right)
{
	int	i;

	i = 0;
	ft_putchar(left);
	while (i < width - 2)
	{
		ft_putchar(middle);
		i++;
	}
	if (width > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

//void	rush(int x, int y) 
//This function is responsible for drawing a pattern of lines based on the provided 
//width x and height y. It uses the draw_line function.
//int x: Represents the width of the pattern.
//int y: Represents the height of the pattern.
//Here's a step-by-step explanation of the rush function:
//if (x <= 0 || y <= 0) return;: Checks if the input width x or height y is less than 
//or equal to 0. If true, the function returns early.
//draw_line(x, 'o', '-', 'o');: Draws the top line of the pattern with left, middle, 
//and right characters as 'o', '-', 'o' respectively.
//i = 2; while (i < y) { draw_line(x, '|', ' ', '|'); i++; }: Draws the middle part 
//of the pattern with left, middle, and right characters as '|', ' ', '|' respectively. 
//This loop runs from 2 to y - 1.
//if (y > 1) draw_line(x, 'o', '-', 'o');: Draws the bottom line of the pattern 
//if y is greater than 1.
//The draw_line function is a reusable component used by rush to draw lines 
//with different characters. Together, these functions create a pattern on 
//the screen based on the specified parameters.

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	draw_line(x, 'o', '-', 'o');
	i = 2;
	while (i < y)
	{
		draw_line(x, '|', ' ', '|');
		i++;
	}
	if (y > 1)
		draw_line(x, 'o', '-', 'o');
}
