#include <stdio.h>

int main() {
    int sz;
    scanf("%d",&sz);
    int ar[sz][sz];
    for(int i = 0 ; i < sz ; i++){
        for(int j = 0; j < sz ; j++){
            scanf("%d",&ar[i][j]);
        }
    }
    for(int i=0 ; i < sz ; i++){
        for(int j = 0 ; j < sz ; j++){
            for(int k = j + 1 ; k < sz ; k++){
                if(ar[i][j] > ar[i][k]){
                    int x = ar[i][j];
                    ar[i][j] = ar[i][k];
                    ar[i][k] = x;
                }
            }
        }
    }
    printf("\n\n Output : \n");
    for(int i = 0 ; i < sz ; i++){
        for(int j = 0; j < sz ; j++){
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
	return 0 ;
}
