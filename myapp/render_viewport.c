/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_viewport.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyeki <minkyeki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:30:53 by minkyeki          #+#    #+#             */
/*   Updated: 2022/09/13 13:45:34 by minkyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	render_viewport(t_device *device, t_image *viewport)
{
	/** WARN: Use Static Variable for private data member! */
	(void)device;
	t_vec4 color = gl_vec4(0, 10, 30, 0);
	color = gl_color_set_brightness(color, 10.0f);
	gl_draw_background(viewport, gl_color_(color));

	return (0);
}