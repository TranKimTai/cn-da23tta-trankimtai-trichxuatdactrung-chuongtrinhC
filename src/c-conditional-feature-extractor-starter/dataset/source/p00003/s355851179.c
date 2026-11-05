#include <stdio.h>

void sort_asc(int *v, int c){
    int i, j;
    int t;

    for(i = 0; i < c - 1; i++){
        if(v[i] > v[i+1]){
            t = v[i+1];
            v[i+1] = v[i];
            v[i] = t;
            for(j = i; j > 0; j--){
                if(v[j] < v[j-1]){
                    t = v[j-1];
                    v[j-1] = v[j];
                    v[j] = t;
                }else{
                    break;
                }
            }
        }
    }
    return;
}

int main(){
    int cnt, i;
    int v[3];

    scanf("%d", &cnt);
    if(0 <= cnt && cnt <= 1000){
        for(i = 0; i < cnt; i++){
            scanf("%d %d %d", &v[0], &v[1], &v[2]);
            if((1 <= v[0] && v[0] <= 1000) && (1 <= v[1] && v[1] <= 1000) && (1 <= v[2] && v[2] <= 1000)){
                sort_asc(v, 3);
                if(v[2] * v[2] == v[0] * v[0] + v[1] * v[1]){
                    printf("YES");
                }else{
                    printf("NO");
                }
            }
        }
    }
    return 0;
}