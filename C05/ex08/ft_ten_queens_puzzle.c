/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famacama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:42:27 by famacama          #+#    #+#             */
/*   Updated: 2019/11/13 19:26:18 by famacama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<math.h>

int board[20],count;

//function for printing the solution
void print(int n)
{
	int i,j;
	printf("\n\nSolution %d:\n\n",++count);

	i = 0; 
	while (++i <= n)
		printf("\t%d",i);
	i = 0;
	while (i <= n)
	{
		printf("\n\n%d",i);
		for(j=1;j<=n;++j) //for nxn board
		{
			if(board[i]==j)
				printf("\tQ"); //queen at i,j position
			else
				printf("\t-"); //empty slot
		}
	}
}

/*funtion to check conflicts
  If no conflict for desired postion returns 1 otherwise returns 0*/
int place(int row,int column)
{
	int i;

	i = 0;
	while (++i <= row - 1)
	{
		//checking column and digonal conflicts
		if(board[i]==column)
			return 0;
		else
			if(abs(board[i]-column)==abs(i-row))
				return 0;
	}
	return 1; //no conflicts
}

//function to check for proper positioning of queen
void queen(int row,int n)
{
	int column;

	column = 0;
	while (++column <= n)
	{
		if(place(row,column))
		{
			board[row]=column; //no conflicts so place queen
			if(row==n) //dead end
				print(n); //printing the board configuration
			else //try queen with next position
				queen(row+1,n);
		}
	}
}

int main()
{
	int n,i,j;
	void queen(int row,int n);

	//printf(" - N Queens Problem Using Backtracking -");
	//printf("\n\nEnter number of Queens:");
	//scanf("%d",&n);
	queen(1,10);
	return 0;
}
