
/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Your code here
   int sum = 0;
   for (int i = 0; i < n; i++)
       sum += A[i];
   int lsum = 0, rsum = sum;
   for (int i = 0; i < n; i++)
   {
       rsum -= A[i];
       if (lsum == rsum)
           return i;
       lsum += A[i];
   }
   return -1;
}
