#include <stdio.h>
#include<string.h>
#include<stdlib.h>
//if文は()の中身が0ならfalse 0以外ならture　writer:al19010
//scanf("%s",&a[0]);入力された文字列（空白文字の手前までを文字リテラルとしてa[0]から代入する。('\n'を'\0'に置き換えているともいえる)
//%sは&a[0]のようにアドレスで対応させる！！（忘れがちなので注意！！）
//gets(&a[0]);//これでやると入力された文字列（空白文字も含めて）を文字リテラルとしてa[0]から代入する。('\n'を'\0'に置き換えているともいえる)。ただし、バッファオーバーフローの温床になり得るのでgccコンパイラが警告を出す。
//fgets(&a[0],入力文字数,stdin(ファイルポインタをstdinによって標準入力化));//こっちは安全なget関数。警告も出ない。
//scanf("%[^\n]",&a[0]);これが一番文字入力でおすすめ！！
//strcmp(s1,s2) s1とs2が同じ文字列なら0を返す。#include<string.h>が必要　s1とs2はchar型のポインタでなければならない！
//fprint(fp,"");ファイルポインタの示すファイルに""の中身を入力                                      
//fscanf(fp,"");ファイルポインタの示すファイルから""のと合致する変数型の中身を取得
//fp=fopen("ファイル名.txt","r");　ファイルの中身はUTF-8である必要がある//

//double hyouji(int n,double a[][n])
typedef struct{
    int m;
    int f;
    int r;
    char result;
}id;
int main(void){//線形代数学p57参照（参考）
    //入力部
    id student[50];
    int i,n;
    for(i=0;i<50;i++){
        scanf("%d %d %d",&student[i].m,&student[i].f,&student[i].r);
        if(student[i].m==-1&&student[i].f==-1&&student[i].r==-1){
            n=i;
            break;
        }
    }
    //処理部
    for(i=0;i<n;i++){
        if(student[i].m+student[i].f>=80){
            student[i].result='A';
        }
        else if(student[i].m+student[i].f>=65&&student[i].m+student[i].f<80){
            student[i].result='B';
        }
        else if((student[i].m+student[i].f>=50&&student[i].m+student[i].f<65)||(student[i].m+student[i].f>=30&&student[i].m+student[i].f<50&&student[i].r>=50)){
            student[i].result='C';
        }
        else if((student[i].m==-1||student[i].f==-1)||(student[i].m+student[i].f<30)){
            student[i].result='F';
        }
        else if(student[i].m+student[i].f>=30&&student[i].m+student[i].f<50){
            student[i].result='D';
        }
       
    }
    //出力部
    //printf("n=%d,m=%d\n",n,m);
    for(i=0;i<n;i++){
        printf("%c",student[i].result);
        printf("\n");
        //if(i!=n-1) printf("\n");
    }

    return 0;
}
