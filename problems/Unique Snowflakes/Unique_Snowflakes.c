#include <stdio.h>
#define SIZE 100000
//generally ok to hardcode the maximum test case size


int identical_right(int snowflake1[], int snowflake2[], int start){
    int offset;
    for (offset = 0; offset < 6; offset++){
        if (snowflake1[offset] != snowflake2[(start + offset)%6]){
            return 0;
        }
    }
    return 1;
}


int identical_right(int snowflake1[], int snowflake2[], int start){
    int offset;
    for (offset = 0; offset < 6; offset++){
        int snowflake2_index = start - offset;
        //since negative numbers mod 6 return a negative number, we cannot use % here. ex. -1%6 = -1
        if (start - offset < 0){
            snowflake2_index+=6;
        }
        if (snowflake1[offset] != snowflake2[snowflake2_index]){
            return 0;
        }
    }
    return 1;
}

void is_identical(int snowflake1[], int snowflake2[]){
    int start;
    for(start = 0; start < 6; start++){
        if (identical_right(snowflake1, snowflake2, start)){
            return 1;
        }
        if (identical_left(snowflake1, snowflake2, start)){
            return 1;
        }
    }
    return 0;
}
void check_all(int snowflakes[][6], int n){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (is_identical(snowflakes[i],snowflakes[j])){
                printf("Twin snowflakes found. \n");
                return;
            }
        }
    }
    printf("No snowflakes are alike. \n");
}
int main(void){
    static int snowflakes[SIZE][6];
    //use static to place array in its own separate piece of memory,
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i+){
        for (int j = 0; j < n; j++){
            scanf("%d", snowflakes[i][j]);
        }
    }
    check_all(snowflakes, n);
    return 0;
}