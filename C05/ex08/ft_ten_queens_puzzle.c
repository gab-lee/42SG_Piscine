/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 14:11:54 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/11 09:45:54 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		solve(char *board, int pos, int *i);
int		is_valid(char *board, int pos);
void	ft_print(char *board);

int	ft_ten_queens_puzzle(void)
{
	char	board[11];
	int		i;

	i = 0;
	board[0] = '\0';
	solve(board, 0, &i);
	return (i);
}

int	is_valid(char *b, int pos)
{
	int	col;

	col = 0;
	while (col < pos)
	{
		if (b[col] == b[pos])
			return (0);
		else if (b[col] - b[pos] == pos - col || b[pos] - b[col] == pos - col)
			return (0);
		col++;
	}
	return (1);
}

int	solve(char *board, int pos, int *i)
{
	int	guess;

	guess = 0;
	if (pos == 10)
	{
		ft_print(board);
		(*i)++;
	}
	while (guess < 10 && pos < 10)
	{
		board[pos] = guess + '0';
		if (is_valid(board, pos) && solve(board, pos + 1, i))
			return (1);
		guess++;
	}
	return (0);
}

void	ft_print(char *board)
{
	while (*board)
		write(1, board++, 1);
	write(1, "\n", 1);
	return ;
}
