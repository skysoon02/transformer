#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<windows.h>

int t = 10;

char trans[26][20] = {
    "|\\/A",
    "|bp8B",
    "|(cC",
    "|)OD",
    "|[E",
    "|+F",
    "|(6G",
    "|hH",
    "|TI",
    "|TJ",
    "|kK",
    "|L",
    "|TYvM",
    "|\\N",
    "|)O",
    "|!?P",
    "|(OQ",
    "|!?PR",
    "|$5S",
    "|IT",
    "|U",
    "|TYyvV",
    "|TYyvW",
    "|/\\X",
    "|TY",
    "|/7Z",
};

int main(void){
    srand(time(NULL));

    char input[100]="";
    int state[100]={};
    scanf("%s", input);

    int task=true;
    while(task){
        char output[100]="";
        for(int i=0; input[i]!=0; i++){
            output[i] = trans[input[i]-65][state[i]];
        }

        Sleep(200);
        printf("\r%s", output);
        
        task=false;
        for(int i=0; input[i]!=0; i++){
            if(trans[input[i]-65][state[i]]==input[i])
                continue;
            if(rand()%100>70){
                state[i]++;
            }
            task=true;
        }
    }
}

//input example: ABCDEFGHIJKLMOPQRSTUVWYXZ
