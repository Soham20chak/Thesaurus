void sort012(int a[], int n)
{
   int l=0,m=0,r=n-1;
   while(m<r){
       if(a[m]==0){
           swap(a[m],a[l]);
           l++;
           m++;
       }
       else if(a[m]==1){
           m++;
       }
       else if(a[m]==2){
           swap(a[m],a[r]);
           r--;
       }
   }
   
}
