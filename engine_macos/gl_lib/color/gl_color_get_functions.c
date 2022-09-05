/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gl_color_get_functions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parksungjun <parksungjun@student.42seou    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:52:02 by minkyeki          #+#    #+#             */
/*   Updated: 2022/09/05 23:14:58 by parksungjun      ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "gl_color.h"

/* TODO : 
 * ======================================
 * ints are stored from right to left!! |
 * ====================================== */
unsigned char	gl_color_get_alpha(int trgb)
{
	return (((unsigned char *)&trgb)[3]);
}

unsigned char	gl_color_get_red(int trgb)
{
	return (((unsigned char *)&trgb)[2]);
}

unsigned char	gl_color_get_green(int trgb)
{
	return (((unsigned char *)&trgb)[1]);
}

unsigned char	gl_color_get_blue(int trgb)
{
	return (((unsigned char *)&trgb)[0]);
}
