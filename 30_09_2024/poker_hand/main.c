#include <stdio.h>

char* pokerHand(int ranks[5], char suits[5]) {
    int flush = 0;
    int pair = 0;
    int three_of_a_kind = 0;
    int count[14] = {0};
    int consecutive = 1;
    int num = 0;

    for (int i = 1; i < 5; i ++) {
        if (suits[i] == suits[0]){
            flush += 1;
        }
    }

    if (flush == 4) {
        return "Flush";
    } else {
        for(int i = 0; i < 5; i++){
            count[ranks[i]]++;
        }
        for(int i = 0; i <= 13; i++){
            if(count[i] == 1 && count[i + 1] == 1){
                consecutive++;
            }
            if(count[i] >= 3){
                three_of_a_kind = 1;
            } else if (count[i] == 2){
                pair = 1;
            } 
        }

        if (consecutive == 5) {
            return "Straight";
        } else if(pair && three_of_a_kind){
            return "Full House";
        }else if (three_of_a_kind){
            return "Three of a kind";
        } else if(pair){
            return "Pair";
        } else {
            return "High card";
        }
    }

    return "No match";
}

int main() {
    int ranks[5] = {2, 1, 3, 4, 5};
    char suits[5] = {'a','a','b','a','a'};
    printf("Best outcome: %s\n", pokerHand(ranks, suits));
}