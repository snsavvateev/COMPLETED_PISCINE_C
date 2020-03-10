/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*	команда для компиляции и одновременного запуска                           */
/*                                                                            */
/*  gcc -Wall -Werror -Wextra test.c && chmod +x ./a.out && ./a.out	   	      */
/* ************************************************************************** */


#include <unistd.h>

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


void	ft_putchar(char c)			/* функция вывода символа */
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)		/* функция печати строки */
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

char	*ft_strlowcase(char *str)	/* функция изменения символов строки на нижний регистр */
{
	int	i;							/* обьявляем целочисленную переменную для счетчика */

	i = 0;							/* инициализируем переменную счетчика нулем чтобы начать с нулевой ячейки массива */
	while (str[i])					/* если эта ячейка массива не храни символ конца массива то запускаем цикл */
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))	/* проверяем хранит ли ячейка какой нибудь символ в верхнем регистре */
			str[i] = str[i] + 32;				/* если хранит то прибавляем к нему 32 чтобы перевезти в нижний регистр */
		i++;						/* увеличиваем счетчик чтоб перейти к след ячейке и так до тех пор пока не встретим символ конца массива */
	}
	return (str);					/* если массив закочился то возвращаем адресс массива назад */
}

int 	main(void)
{
	char	t[] = {"YOUR_DICK_ SO_BIG\n"}; /* создадим массив символов(строку) в верхнем регистре */
	
    ft_putstr(ft_strlowcase(t));	/* отправим в функцию ft_strlowcase адресс массива символов(строки), 
									 * когда функци закончит свою работу она вернет адресс массива, 
									 * и этот адресс мы сразу же используем передав в функцию ft_putstr,
									 * которая тоже принимает в аргументах адресс строки. И ft_putstr напечатает каждый символ строки */

	return 0;
}
