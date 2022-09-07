/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyeki <minkyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:07:11 by minkyeki          #+#    #+#             */
/*   Updated: 2022/09/07 14:01:55 by minkyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gl_vec3.h"

t_vec3	gl_vec3(float _x, float _y, float _z)
{
	t_vec3	pos3;

	pos3.x = _x;
	pos3.y = _y;
	pos3.z = _z;
	return (pos3);
}

t_vec3	gl_vec3_normalize(t_vec3 v)
{
	float	len;

	len = gl_vec3_get_magnitude(v);
	return (gl_vec3(v.x / len, v.y / len, v.z / len));
}

float	gl_vec3_dot_product(t_vec3 dst, t_vec3 src)
{
	return (dst.x * src.x + dst.y * src.y + dst.z * src.z);
}

float	gl_vec3_get_magnitude(t_vec3 v)
{
	return (sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z)));
}

/** FIX: check if cross-product code is valid!  */
t_vec3	gl_vec3_cross_product(t_vec3 v1, t_vec3 v2)
{
	float	x;
	float	y;
	float	z;

	x = v1.y * v2.z - v1.z * v1.y;
	y = v1.z * v2.x - v1.x * v1.z;
	z = v1.x * v2.y - v1.y * v1.x;
	return (gl_vec3(x, y, z));
}
