#include <stdio.h>
#include <stdlib.h>
#define max 40
int compression(int nn, int ii)
{
    int i,j,m,n;
    int a[max], b[max];
    int k = 0, t = 0, N = 10, y = 0;
    int c[max];
    //printf(" COMPRESSION \n");
    for(j = 0; j < max; j++)
        {
        b[j] = 0;
        a[j]=mass(j);
//printf("(%d) [%d] \n",j,a[j]);
        }
    for(i = 0; i < max; i++)
    {
        if(a[i]==nn||a[i]==nn){
            k++;
            b[i]=k;
           //printf("compression = %d\n",b[i]);
        }
        else
        {
                k=0;
        }
    }
    for(i = 0; i < max; i++)
        {
            c[i] = 0;
    if(b[i] == 0 && b[i+1] == 0)
    {
        //c[i] = 0;
        //printf("\nyes");
    }
    else
    {
        if(b[i+1] == 0)
    {
    y++;
    c[y] = b[i];
    //printf("c(y) = %d\n",c[y]);
    }
    else
    {
    //        t++;
            //b[max+1] = 0;
      //      c[t] = b[max-1];

    }
    }
}
//for(i = 0; i < 5;i++)
//printf("c = %d\n",c[i]);
    return c[ii];
}


    int mass(int i)

    {
  /*sss     int j,a[max];
        for(j = 0; j < max; j++)
            a[j] = ((5.*rand())/(RAND_MAX+0.));
            a[0] = 0;
            a[1] = 0;
*/

        int a[max] = {0,0,204,204,204,0,32,32,32,32,32,204,204,204,32,32,32,32,32,32,204,204,204,32,32,32,32,32,32,204,204,204,32,32,32,32,32,32,204,204,204,32,32,32,32,32,32,204,204,204,0,0,32,32,32,32,204,204,204,32,32,32,32,32,32,204,204,204,32,32,32,32,32,32,204,204,204,32,32,32,32,32,32,204,204,204,32,32,32,32,32,32,204,204,204,32,32,32,32,32,32,204,32,204,204,204,204};

            return a[i];

    }

int sort(int n, int a[max],int k)
{
    int i,j,tmp;
for(i = k - 1; i >= 0; i--)
{
    for(j = 0; j < i; j++)
    {
        if(a[j] > a[j + 1])
        {
            tmp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = tmp;
        }
    }
}
 return a[n];
}

    void print( int n, int B[n], int t[n])
    {
int i,j,P[n],T[n];
int tmp,tp;
for(i = 0; i < n; i++)
{
    //B[i] = B[i+1];
    t[i] = t[i+1];
    P[i] = i;
}
for(i = n - 1; i >= 0; i--)
{
    for(j = 0; j < i; j++)
    {
        if(B[j] > B[j + 1])
        {
            tmp = B[j];
            tp = P[j];
            B[j] = B[j + 1];
            P[j] = P[j + 1];
            B[j + 1] = tmp;
            P[j + 1] =tp;
        }
    }
}
int M[n];
/////////////////////////
for(i = 0; i < n; i++){
    T[P[i]] = t[i];
    M[P[i]] = B[i];
/////////////////////
    }
    int Q=0;
    FILE *f = fopen("test1.txt","w");

    for(i = 0; i < n; i++){
        printf(" %d%d ",M[i],T[i]);
     fprintf(f,"%d%d",M[i],T[i]);

    }
           // printf("\n K = %d M = %d n = %d",n*2, max, n);
fclose(f);
FILE *fl = fopen("test3.txt","w");
for(i = 0; i < max; i++)
    fprintf(fl,"%d",mass(i));
    fclose(fl);
            printf("\n");
    }
int main()
{

    int A[max], B[max+4];
    int c[max+4][max+4];
    int i,z,k=0;
    int b[max+2];
    int AB[max+4];
        for(i = 0; i < max; i++)
            {
              A[i] = mass(i);
              A[max+1] = 0;
              A[max] = 0;
              printf(" [%d] ",A[i]);
            }
            printf("\n");
            printf("-----------\n");

    for (i = 0; i < max; i++)
{
    if(A[i] == A[i] && A[i+1] != A[i])
    {
        k++;
        B[k] = A[i];
        b[k] = A[i];
        AB[k] = A[i];
        printf(" -%d-  ",B[k]);
    }
}
int j;
printf("\n");


int l =0,p=0,qu=0;
int T[max],t[max];
for(i = 0; i < max; i++){
    t[i] = 0;
    //printf(" (%d) ",A[i]);
}

printf("\n");

///////////////////////////////////////////
for(i = 0; i < k; i++){
    B[i] = B[i+1];
    b[i] = b[i+1];
}
///////////////////////////////////////////
printf("\n");
for(i = 0; i < k; i++){
B[i] = sort(i,B,k);
//printf(" %d ",B[i]);
}
B[k] = 0;
///////////////////////////////////////////
printf("\n");
int s = 0;
for (i = 0; i < k; i++)
{
    //printf(" /%d/ ",B[i]);
    if(B[i] == B[i] && B[i+1] != B[i])
    {
        s++;

        AB[s] = B[i];
  //      printf("\n (%d, %d) ",AB[s],i);

    }

}
printf("\n");
////////////////////////////////////////////

for(i = 0; i < s; i++){
    AB[i] = AB[i+1];
}

for(z = 0; z <s; z++){
//        printf("(%d) ",AB[z]);
        for(i = 1; i < k; i++){
c[z][i] = compression(AB[z],i);
//printf(" %d ",c[z][i]);
        }
        printf("\n");
}
//printf("S = %d, K = %d\n",s,k);
/////////////////////////////////////////////
for(z = 0; z <s; z++){
    for(i = 0; i <k; i++)
        if (b[i] == AB[z])
    {
        l++;
        p++;
        t[p] = c[z][l];
        //printf("  (%d,%d)",t[p],AB[z]);
        if(t[p]!=0){
            qu++;
          T[qu] = t[p];
        }
    }
l=0;
}
printf("\n");
if(qu!=k)
{
    printf("ERROR!\n");
}
//printf("Q = %d\n",qu);
print(qu,b,T);
///////////////////////////////////////////////////

    return 0;

}
//
