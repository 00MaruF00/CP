#include<stdio.h>
int main()
{
    printf("Bubble sort : \n");
    int sz;
    scanf("%d",&sz);
    int ar[sz];
    for(int i = 0 ; i < sz ; i++) scanf("%d",&ar[i]);
    for(int i = 0 ; i < sz ; i++){
        printf("Step - %d :\n",i+1);
        int c = 0;
        for(int j = i + 1 ; j < sz ; j++){
            if(ar[i]>ar[j]){
                ar[i] = ar[i]^ar[j];
                ar[j] ^= ar[i];
                ar[i] ^= ar[j];
            }
            printf("\t Sub Step %d :  " , ++c);
            for(int i = 0 ; i < sz ; i++) printf("%d ",ar[i]);
            printf("\n");
        }
    }
    printf("Finally_Sorted :   ");
    for(int i = 0 ; i < sz ; i++) printf("%d ",ar[i]);
    printf("\n\n\n");
    printf("Insertion_Sort : \n");
    scanf("%d",&sz);
    int arr[sz];
    for(int i = 0 ; i < sz ; i++) scanf("%d",&arr[i]);
    for(int i = 1 ; i < sz ; i++){
        printf("Step - %d : \n",i);
        int c = 0 , j = i;
        while(j != 0 && arr[j] < arr[j-1]){
            arr[j] ^= arr[j-1];
            arr[j-1] ^= arr[j];
            arr[j] ^= arr[j-1];
            printf("\tSub_Step %d : ",++c);
            for(int k = 0 ; k < sz ; k++) printf("%d ",arr[k]);
            printf("\n");
            j--;
        }
    }
    printf("Finally Sorted : \n");
    for(int i = 0 ; i < sz ; i++) printf("%d ",arr[i]);
    printf("\n");
    printf("Selection_sort : \n");
    scanf("%d",&sz);
    int arrr[sz];
    for(int i = 0 ; i < sz ; i++) scanf("%d",&arrr[i]);
    for(int i = 0 ; i < sz ; i++){
        int mn = 1e9 , idx ;
        for(int j = i ; j < sz ; j++) {
            if(mn>arrr[j])mn = arrr[j] , idx = j;
        }
        printf("Setp - %d : ",i+1);
        arrr[idx] = arrr[i] , arrr[i] = mn;
        for(int i = 0 ; i < sz ; i++) printf("%d ",arrr[i]);
        printf("\n");
    }
    printf("Finally_Sorted : \n");
    for(int i = 0 ; i < sz ; i++) printf("%d ",arrr[i]);
    printf("\n");
    return 0;
}
