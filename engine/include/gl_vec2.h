/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gl_vec2.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungjpar <sungjpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:23:51 by minkyeki          #+#    #+#             */
/*   Updated: 2022/09/06 16:46:15 by sungjpar         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef GL_VECTOR2
# define GL_VECTOR2

# include <math.h>

typedef union u_vec2 {
	struct {
		float	x;
		float	y;
	};
	float	v[2];
}	t_vec2;

/* Create R-value vec2 and returns data */
extern t_vec2	gl_vec2(float _x, float _y);
extern float	gl_vec2_dot_product(t_vec2 v1, t_vec2 v2);
extern float	gl_vec2_get_magnitude(t_vec2 v);
extern t_vec2	gl_vec2_normalize(t_vec2 v);

#endif /* VECTOR2 */
