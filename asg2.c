#include<stdio.h>

void findpair(int arr[], int n, int sum);

int main(){
    int a[50],i, s, sum;
    printf("Enter the array size: ");
    scanf("%d", &s);
    printf("Enter the array elements:\n");
    for(i=0;i<s;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the desired sum between pair:\n");
    scanf("%d", &sum);

    findpair(a,s,sum);

    return 0;
}

//finding the pair of sum
void findpair(int arr[], int n, int sum){
    int i,j,cnt=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("Pair Found for sum %d that is (%d, %d)\n", sum,arr[i],arr[j]);
                cnt++;
                continue;
            }
                    
        }
    }
    if(cnt==0)
        printf("Pair Not Found :(");
}