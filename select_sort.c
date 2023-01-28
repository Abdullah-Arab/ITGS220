#include <stdio.h>

int main(){
    /*
    أكتب برنامج بلغة السي لقراءة مصفوفة وترتيب عناصرها ( تصاعدي - تنازلي ) باستخدام الترتيب الإختياري Selection Sorting . وطباعة المصفوفة بعد الترتيب.
    
    */
    printf("Enter the number of elements in the array: ");
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter the element number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        // select sort
        int min = arr[i];
        int min_index = i;
        for(int j = i; j < n; j++){
            if(arr[j] < min){
                min = arr[j];
                min_index = j;
            }
        }
        int temp = arr[i];


    }


    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}