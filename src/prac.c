/**
 * @file prac.c
 * @author vijay
 * @brief 
 * @version 0.1
 * @date 2021-07-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/*
typedef struct user{
    char user_id[20];
    int user_hscore;
}user;
*/
#include "prac.h"
/**
 * @brief 
 * 
 * @return int 
 */
int key_present=-1;
int lsearch(int *a,int *key,int* size)
{
 for(int i=0;i<*size;i++)
 {
     if(a[i]==*key)
     {
        key_present=1;
     }
 }
 return key_present;
}

int binarysearch(int *a,int l,int r,int *key,int* size)
{
    r-=1;
   if (r >= l) {
        int mid = l + (r - l) / 2;
  
        
        if (a[mid] == *key)
            return 1;
  
       
        if (a[mid] > *key)
            return binarysearch(a, l, mid, key,size);
  
        
        return binarysearch(a, mid + 1, r, key,size);
    }
  
    
    return -1;
 
}
/*
int ternarySearch(int *ar,int l,int r,int *key,int* size)
{
    if (r >= l) {
 
        // Find the mid1 and mid2
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
 
        // Check if key is present at any mid
        if (ar[mid1] == *key) {
            return mid1;
        }
        if (ar[mid2] == *key) {
            return mid2;
        }
 
        // Since key is not present at mid,
        // check in which region it is present
        // then repeat the Search operation
        // in that region
 
        if (*key < ar[mid1]) {
 
            // The key lies in between l and mid1
            return ternarySearch(ar, l, mid1-1, key,size);
        }
        else if (*key > ar[mid2]) {
 
            // The key lies in between mid2 and r
            return ternarySearch(ar, mid2+1, r, key,size);
        }
        else {
 
            // The key lies in between mid1 and mid2
            return ternarySearch(ar,mid1 + 1, mid2 - 1, key, size);
        }
    }
 
    
    return -1;
}
 */
int search(int *a,int *key,int* size)
{
     clock_t begin=clock();
    double time_spent=0.0;
    int res;
    res=lsearch(a,key,size)&&binarysearch(a,0,*size,key,size);
   clock_t end=clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 printf("fun() took %lf seconds to execute \n", time_spent);
    return res;
}

/*
int fun()
{
  int n;
  printf("Enter the Number of Users:\n");
  scanf("%d",&n);
  user *u;
  u=(user*)malloc(n*sizeof(user));
  for(int i=0;i<n;i++)
  {
  scanf("%s", &(u+i)->user_id);
  scanf("%d",&(u+i)->user_hscore);
  }
  for(int i=0;i<n;i++)
  {
  printf("%s\n", (u+i)->user_id);
  printf("%d\n", (u+i)->user_hscore);
  }
  
  return 0;
}
*/
/**
 * @brief 
 * 
 * @return int 
 */
