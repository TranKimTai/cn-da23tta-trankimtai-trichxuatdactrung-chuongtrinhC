#include<stdio.h>
#define ARRAY_MAX 50
#define COUNT_RESET 0
#define RETURN 0
#define ARRAY_END -1
#define TEST_ABSENT -1
#define BORDER_A 80
#define BORDER_B 65
#define BORDER_C 50
#define BORDER_D 30

struct test_result{
    signed short ssW_D_mid;
    signed short ssW_D_fin;
    signed short ssW_D_re;
    unsigned char ubW_D_eval;
};

unsigned char s_EVALUATE(struct test_result test);

int main(){
    struct test_result test[ARRAY_MAX];
    unsigned short usW_C_i;
    unsigned short usW_C_count = COUNT_RESET;

    for(usW_C_i = 0;usW_C_i < ARRAY_MAX;usW_C_i++){
        scanf("%d %d %d", &test[usW_C_i].ssW_D_mid, &test[usW_C_i].ssW_D_fin, &test[usW_C_i].ssW_D_re);
        if(test[usW_C_i].ssW_D_mid == -1 && test[usW_C_i].ssW_D_fin == -1 && test[usW_C_i].ssW_D_re == -1){
            break;
        }
        test[usW_C_i].ubW_D_eval = s_EVALUATE(test[usW_C_i]);
        usW_C_count++;
    }

    for(usW_C_i = 0;usW_C_i < usW_C_count;usW_C_i++){
        printf("%c\n", test[usW_C_i].ubW_D_eval);
    }

    return 0;
}

unsigned char s_EVALUATE(struct test_result test){
    signed short ssW_D_sum;
    unsigned char ubW_D_result;

    ssW_D_sum = test.ssW_D_mid + test.ssW_D_fin;

    if(test.ssW_D_mid == -1 || test.ssW_D_fin == -1){
        ubW_D_result = 'F';
    }
    else if(ssW_D_sum >= 80){
        ubW_D_result = 'A';
    }
    else if(ssW_D_sum >= 65){
        ubW_D_result = 'B';
    }
    else if(ssW_D_sum >= 50){
        ubW_D_result = 'C';
    }
    else if(ssW_D_sum >= 30){
        if(test.ssW_D_re >= 50){
            ubW_D_result = 'C';
        }
        else{
            ubW_D_result = 'D';
        }
    }
    else{
        ubW_D_result = 'F';
    }

    return ubW_D_result;
}
