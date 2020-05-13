/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;

	i = 0;
	ft_putstr(par->copy);
	ft_putchar('\n');
	ft_putnbr(par->size_param);
	ft_putchar('\n');
	while (par->tab[i] != NULL)
	{
		ft_putstr(par->tab[i++]);
		ft_putchar('\n');
	}
}





/* ************************************************************************** */
/* ***********************************_ИЛИ_********************************** */
/* ************************************************************************** */



#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_show_tab(t_stock_par *par)
{
	int i;
	int y;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		y = 0;
		while (par[i].tab[y] != 0)
		{
			ft_putstr(par[i].tab[y]);
			if (par[i + 1].str != 0 || par[i].tab[y + 1] != 0)
				ft_putchar('\n');
			y++;
		}
		i++;
	}
}





/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

