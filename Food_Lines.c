#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINES 100

/*
dmoj problem lkp18c2p1

n lines of people
known # people per line
m new people, each joins shortest line
how many join each line

ex.
3 lines
line 1: 3
line 2: 2
line 3: 5
m = 4
line 2, line 1, line 2, line 1
final result:
line 1: 5
line 2: 4
line 3: 5

input:
3 4
3 2 5

output: number of people in line that each person joins
2
3
3
4
*/

//helper function to choose which line each new person joins

int shortest_line(int lines[], int num_lines){
    int shortest = 0;
    for (int i=1;i<num_lines;i++){
        if (lines[i] < lines[shortest]){
            shortest = i;
        }
    }
    return shortest;
}

void solve(int lines[], int num_lines, int m){
    int shortest;
    for (int i=0; i<m;i++){
        shortest=shortest_line(lines, num_lines);
        printf("%d\n", lines[shortest]);
        lines[shortest]++;
    }
}

int main(void){
    int lines[MAX_LINES];
    int num_lines, m;
    scanf("%d%d", &num_lines, &m);
    for (int i = 0; i < num_lines; i++) scanf("%d", &lines[i]);
    solve(lines, num_lines, m);
    return 0;
}