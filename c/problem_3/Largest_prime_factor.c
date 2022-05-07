#include <stdio.h>
 

int main(){
    long int num=600851475143;
    int factor;
    for(long int i=0;i<num;i++){
        if(i%3!=0 && i%5!=0 && i%7!=0){
          factor = i;
        }
    }
    printf("%d",factor);
}