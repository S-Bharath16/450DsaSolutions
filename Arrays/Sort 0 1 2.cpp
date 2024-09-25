#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int count_0 = 0;
   int count_1 = 0;
   int count_2 = 0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==0)
      count_0+=1;
      else if(arr[i]==1)
      count_1+=1;
      else if(arr[i]==2)
      count_2+=1;
   }
   for(int i=0;i<n;i++)
   {
      if(i<count_0)  // count0 = 2 count1 = 3 count2 = 3
      // 00 111 222
      {
         arr[i] = 0;
      }
      else if(i>=count_0 && i<count_0+count_1)
      {
         arr[i] = 1;
      }
      else
      {
         arr[i] = 2;
      }
   }
}
