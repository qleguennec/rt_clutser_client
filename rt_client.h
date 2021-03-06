/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_client.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 12:10:27 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/10 11:57:18 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_CLIENT_H
# define RT_CLIENT_H

# include <unistd.h>
# include <limits.h>
# include <sys/socket.h>
# include <sys/types.h>
# include <netinet/in.h>
# include <netdb.h>
# include <errno.h>
# include "libft/libft.h"
# include "libfmt/libfmt.h"
# include "libvect/libvect.h"
# include "cl_interface.h"
# include "libcl/libcl.h"
# include "parameters.h"

// TODO remove debug includes
# include <stdio.h>
# include <assert.h>

typedef struct		s_cl
{
	t_cl_info		info;
	t_cl_krl		main_krl;
	cl_mem			objs;
	cl_mem			lgts;
	short			n_objs;
	short			n_lgts;
	cl_float2		offs;
}					t_cl;

void				client_loop(int sockfd , t_vect *data , t_cl *cl); 
int					client_init(char *host_ip , int port);
bool				cl_main_krl_init(t_cl *cl);
bool				cl_main_krl_exec(t_cl *cl);

#endif
