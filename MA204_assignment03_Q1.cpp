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

   //upper triangular matrix
   for (k = 1; k <= n-1; ++k)
   {
      for ( i = k+1; i <= n; ++i)
      {
	        b=a[i][k]/a[k][k];
	        for ( j = 1; j <= n+1; ++j)
	        {
	           a[i][j]=a[i][j]-b*a[k][j];
	        }
         
      }
   }

   x[n]=a[n][n+1]/a[n][n];

  

  	for(i=n-1;i>=1;i--)
    {
        x[i] = a[i][n+1];
        for(j=i+1;j<=n;j++)
        {
            x[i] = x[i] - a[i][j]*x[j];
        }
        x[i] = x[i]/a[i][i];
    }


   cout<<"\nThe solution is:\n";
   for(i=1; i<=n; i++) {
      
      cout<<"x"<<i << "="<<x[i]<<" ";
   }

   


   return(0);
}