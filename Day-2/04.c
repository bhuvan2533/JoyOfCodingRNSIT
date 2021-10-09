// Following is the CET rank cut-off at RNSIT
// CSE 3250
// ISE 6505
// EandC 12012
// MEC 22340
// Help your friend Mr. Engineer with a rank to know the possibility of getting into a particular 
// branch.
// For example, 
// if the rank is 
// 7205 then he will get EandC and MEC
// 1265 then he will get in all branches
// 25000 then admission not possible at RNSIT

#include <stdio.h>
void main(){
    int cse=3250;
    int ise=6505;
    int ec=12012;
    int mec=22340;
    int rank;
    printf("Enter your rank :");
    scanf("%d",&rank);
    if(rank<cse && rank>0){
        printf("Congrats you will get seat in any branch");
    }
    else if(rank<ise && rank>cse){
        printf("U will get seat in ISE or EC or MEC");
    }
    else if(rank>ise && rank<ec){
        printf("U will get seat in EC or MEC");
    }
    else if(rank>ec && rank<mec){
        printf("U will get seat in MEC");
    }
    else{
        printf("Admission not possible in RNSIT");
    }
}