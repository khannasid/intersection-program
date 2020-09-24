#include <stdio.h>

int printIntersection(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
            i++; 
        else if (arr2[j] < arr1[i]) 
            j++; 
        else /* if arr1[i] == arr2[j] */
        { 
            printf("%d", arr2[j++]); 
            i++; 
        } 
    } 
} 
  
/* Driver program to test above function */
int main() 
{ 
    int arr1[5], arr2[5],a,b;  
    int m,n;
     m = sizeof(arr1) / sizeof(arr1[0]);
      n = sizeof(arr2) / sizeof(arr2[0]); 
    printf("enter the set1");
    for(a=0;a<m;a++)
    { scanf("%d",&arr1[a]);
    }
     printf("enter the set2");
    for(b=0;b<n;b++)
    { scanf("%d",&arr2[b]);
    }
    printIntersection(arr1, arr2, m, n); 
    getchar(); 
    return 0; 
} 
