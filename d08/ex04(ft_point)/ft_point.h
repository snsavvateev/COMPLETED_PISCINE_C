/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/05/12 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/* ************************************************************************** */
/* ************************************************************************** */
/* **************************************************************************   


	• Create a file ft_point.h that’ll compile the following main :
	• Создайте файл ft_point.h, который скомпилирует следующее основное:



#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(void)
{
	t_point		point;
	set_point(&point);
	return (0);
}


   **************************************************************************


	ТУТ ВСЁ О "struct":							https://youtu.be/hoHAOTVRndc
												https://youtu.be/6ooPdvzhhJw


   ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


#ifndef __FT_POINT_H
# define __FT_POINT_H

typedef struct	s_point
{
	int	x;
	int	y;
}				t_point;

void			set_point(t_point *point);

#endif

/* ************************************************************************** */
/* ******************************_ИЛИ_*************************************** */
/* ************************************************************************** */


#ifndef FT_POINT_H
# define FT_POINT_H

typedef	struct	s_point
{
	int x;
	int y;
}				t_point;

void			set_point(t_point *point);

#endif


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

