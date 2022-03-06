//
//  main.c
//  insertion
//
//  Created by Merve Yanmaz on 15.12.2020.
//

#include <stdio.h>
#define SIZE 100

int main(void) {
   
       int i,k,n,ekle;
       int ar[SIZE];
       
       printf("Please enter number of elements:");
       scanf("%d",&n);
       for (i=0; i<n; i++) {
           printf("Please enter element %d:",i);
           scanf("%d",&ar[i]);
       }
       
       for (i=1; i<n; i++) {
          ekle=ar[i];
          for (k=i-1; k>=0 && ekle<=ar[k]; k--) {
             ar[k+1]=ar[k];
          }
          ar[k+1]=ekle;
       }
    
       for (i=0; i<n; i++) {
          printf("%d\t",ar[i]);
       }
       
    
    return 0;
}
