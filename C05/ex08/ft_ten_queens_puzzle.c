/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrlee <gabrlee@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 14:11:54 by gabrlee           #+#    #+#             */
/*   Updated: 2026/06/09 15:38:28 by gabrlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		solve(char *board, int pos);
int		is_valid(char *board, int pos);
void	ft_print(char *board);

int	ft_ten_queens_puzzle(void)
{
	char	board[11];

	board[0] = '\0';
	solve(board, 0);
	return (0);
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

int	solve(char *board, int pos)
{
	int	guess;

	guess = 0;
	if (pos == 10)
		ft_print(board);
	while (guess < 10 && pos < 10)
	{
		board[pos] = guess + '0';
		if (is_valid(board, pos) && solve(board, pos + 1))
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
