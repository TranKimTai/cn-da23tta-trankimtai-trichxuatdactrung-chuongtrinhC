#include<stdio.h>
int main(void){
	int W,H,x,y,r ;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r) ;
	if(x<-100){
		printf("??¨??????\n") ;
	}
	else{
		if(x>100){
			printf("??¨??????\n") ;
		}
		else{
			if(y<-100){
				printf("??¨??????\n") ;
			}
			else{
				if(y>100){
					printf("??¨??????\n") ;
				}
				else{
					if(W<=0){
						printf("??¨??????\n") ;
					}
					else{
						if(W>100){
							printf("??¨??????\n") ;
						}
						else{
							if(H<=0){
								printf("??¨??????\n") ;
							}
							else{
								if(H>100){
									printf("??¨??????\n") ;
								}
								else{
									if(x-r<0){
										printf("No\n") ;
									}
									else{
										if(x+r>W){
											printf("No\n") ;
										}
										else{
											if(y-r<0){
												printf("No\n") ;
											}
											else{
												if(y+r>H){
													printf("No\n") ;
												}
												else{
													printf("Yes\n") ;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0 ;
}