#include<stdio.h>
#include<stdlib.h>
  void soma(int *v1, int *v2, int *v3, int n){
      for(int i = 0; i<n; i++){
        v3[i] = v1[i] + v2[i];
      }
  }
  int main(void){
    int t;
    scanf("%d\n", &t);
    int n;
    scanf("%d\n", &n);
    int *vet1;
    int *vet2;
    int *vet3;
    vet1 = (int*) malloc(n*sizeof(int));
    vet2 = (int*) malloc(n*sizeof(int));
    vet3 = (int*) malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
      scanf("%d", &vet1[i]);
    }
    for(int i=0; i<n; i++){
      scanf("%d", &vet2[i]);
    }
    for(int i = 0; i<t; i++){
      soma(vet1, vet2, vet3, n);
      for(int j=0; j<n; j++){
        vet1[j] = vet2[j];
        vet2[j] = vet3[j];
      }
    }

    for(int i=0; i<n; i++){
      printf("%d ", vet3[i]);
    }

    free(vet1);
    free(vet2);
    free(vet3);
    return 0;
  }
