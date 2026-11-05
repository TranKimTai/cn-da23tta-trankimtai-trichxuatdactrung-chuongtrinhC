/*
 * a.c
 *
 *  Created on: 2017/06/13
 *      Author: AWV060608
 */

#include	<stdio.h>

int		main(void)
{
	//W???H???x???y???r

	int		W, H, x, y, r;

	scanf("%d",&W);
	scanf("%d",&H);
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&r);

	if(( 0 <= x-r ) && ( x+r <= W ))
	{
		if(( 0 <= y-r ) && ( y+r <= H ))
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	else
	{
		printf("No\n");
	}

	return 0;
}