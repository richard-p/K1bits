#define BITS 8
int main(){
    int i, j, var, array1[BITS];
    
    printf("What number do you want to convert (0-255)\n>>> ");
    scanf("%d", &var);
    
    for(i=0;i<BITS;i++){
                     
                      array1[i] = var%2; //remainder can either be 1 or 0
                      var/=2;
                      }            
    
    printf("\n");
    for(j=BITS-1;j>=0;j--){ //reverses binary contained in array for correct result
                     printf("%d", array1[j]);
                     }
    printf("\n");
    
    
    
    system("PAUSE");
    return 0;
    }
