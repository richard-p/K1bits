// UC Berkeley programming problem 1, 1991.

#include <stdio.h>
#define BITS 8
#define N 9

int main(){
    
    int arrayN[N-1], arrayB[N][BITS], arrayE[N];
    int a, i, j, k, x, y, z, count1=0, count2=0;
    
    for(i=0; i<N; i++){
             arrayN[i] = i+1; // array contains {1,2,3,4,5,6,7,8,9}
             }
             
    for(j=0;j<N;j++){
             for(k=0;k<BITS;k++){
                      arrayB[j][k] = (arrayN[j]%2);
                      arrayN[j]/=2; // convert to binary
                      }
             }
             
    for(x=0; x<N; x++){
             for(y=0;y<BITS;y++){
                      if(arrayB[x][y] == 1){
                               count1+=1;
                               }
                      arrayE[x] = count1; 
                      }// each index holds the amount of 1-bits for each 8-bit number
             count1 = 0; 
             }// Reset count to 0 for the next 8-bit count
    
    for(a=0;a<N;a++){
             if(arrayE[a] == arrayE[N-1]){
                       count2+=1;
                       }     
             }
             
    printf("%d is number %d in the sequence of numbers with %d 1-bits.\n\n", N, count2, arrayE[N-1]);
    
    
    system("PAUSE");
    return 0;
    }
