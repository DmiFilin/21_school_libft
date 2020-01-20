/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:32:31 by rgalyeon          #+#    #+#             */
/*   Updated: 2019/03/21 06:02:19 by rgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# include "char_ft.h"
# include "conv_ft.h"
# include "lst_ft.h"
# include "math_ft.h"
# include "matrix_ft.h"
# include "memory_ft.h"
# include "put_ft.h"
# include "rb_trees_ft.h"
# include "str_ft.h"
# include "vec_ft.h"
# include "sort_ft.h"
# include "hashtable_ft.h"

typedef unsigned char	t_uchar;
typedef unsigned int	t_uint;

# define SUCCESS 0
# define MALLOC_ERR 1
# define FAILURE 2
# define READ_ERROR 3

/*
** Colors
*/

/*
** Development utils
** for debugging or writing code
*/

void	do_nothing(void);

#endif
