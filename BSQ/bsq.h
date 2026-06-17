/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:00:00 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/16 14:00:00 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_minfo
{
	int		rows;
	int		cols;
	char	emp;
	char	obs;
	char	fil;
	int		max_size;
	int		max_row;
	int		max_col;
}	t_minfo;

void	ft_compare(int top, int left, int top_left, int *cur);
int		*ft_create_ia(int size);
int		ft_max_atcell(int *prev_ia, int *cur_ia, t_minfo *info, int row);
void	ft_print_row(int fd, int row, t_minfo *info);
int		ft_print_map(char *path, t_minfo *info);
char	*sav_stdin(void);
int		solve_map(char *path, t_minfo *info);
int		red_hdr(int fd, t_minfo *info);
int		red_row_num(char *str, int len);
int		red_get_cols(char *path, t_minfo *info);
int		red_map(char *path, t_minfo *info);
int		red_map_err(int fd, int *pre_ia, int *cur_ia);
int		red_read_row(int fd, int *cur_ia, t_minfo *info);
int		red_rws(int fd, t_minfo *info, int *pre_ia, int *cur_ia);

#endif