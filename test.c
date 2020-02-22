/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <jaleman@student.42.us.org>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 17:35:32 by exam              #+#    #+#             */
/*   Updated: 2016/09/01 18:14:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/* ************************************************************************** */
/* ************************************************************************** */
/* **************************************************************************

Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.
Напишите программу, которая принимает строку и отображает ее первое слово, за 
которым следует новая строка.

A word is a section of string delimited by spaces/tabs or by the start/end of the string.
Слово - это раздел строки, разделенный пробелами / табуляцией или началом / концом строки.

If the number of parameters is not 1, or if there are no words, simply display a newline.
Если количество параметров не равно 1 или нет слов, просто отобразите новую строку.

Examples:
Примеры:


$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$

   ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;

	i = 0;
	if (argc != 2)
		write(1, "a\n", 2);
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a", 1);
				break ;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}