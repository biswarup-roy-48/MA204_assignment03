// BISWARUP ROY
// BTECH/10048/19
// SEC A  'MECH ENGG'


#include<iostream>
using namespace std;
int main() {
   int i,j,k,n; // declare variables and matrixes as input
   float a[10][10],b,x[10];
   printf("\nEnter the size of matrix: ");
   scanf("%d",&n);

   // taking inputs from user in augumented form
   printf("\nEnter the elements of augmented matrix (rowwise):\n");
   for(i=1; i<=n; i++) {
      for(j=1; j<=(n+1); j++) {
         cout << "A[" << i << ", " << j << " ]=";
         cin >> a[i][j];
      }
   }

   //to find the elements of diagonal matrix
   for (k = 1; k <= n; ++k)
   {
      for ( i = 1; i <= n; ++i)
      {
         if (k!=i)
         {
            b=a[i][k]/a[k][k];
            for ( j = k; j <= n+1; ++j)
            {
               a[i][j]=a[i][j]-b*a[k][j];
            }
         }
      }
   }


   cout<<"\nThe solution is:\n";
   for(i=1; i<=n; i++) {
      x[i]=a[i][n+1]/a[i][i];
      cout<<"x"<<i << "="<<x[i]<<" ";
   }
   return(0);
}