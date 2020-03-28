#include<stdio.h>
int median(int,int,int);
int main()
{
    int i,n;
    int p=0;
    int count=1;
    int counter = 0;

    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    int b[n];

    printf("Enter %d elements in the array : ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nElements in array are: ");
    for(i=0;i<n;i++)

    {
        printf("%d  ", a[i]);
    }
    printf("\n");
    int len = sizeof(a)/sizeof(a[1]);
    printf("%d",len);
    printf("\n");
    printf("%d",a[n-1]);
    printf("\n");
    //main logic starts here//
    while(count>0){
            if(p==0){
                b[p] = a[p];
            }
            else if(p==n-1){
                b[n-1]= a[n-1];
            }
            else{

                int x = a[p];
                int y = a[p-1];
                int z = a[p+1];
                int k = median(x,y,z);
                if(x!=k){
                    count = count+1;
                }
                count = count-1;
                b[p] = k;
                p = p+1;
            }



    }


    //end of the main logic//
    for(i=0;i<n;i++){
        printf("%d",b[i]);
        printf("\n");
    }
    return 0;
}
int median(int x,int y,int z){

    if(x >= y && x >= z)
    {
        if(y >= z)
        {

            return y;
        }
        else
        {
            return z;
        }
    }
    else if(y >= x && y >= z)
    {
        if(x >= z)
        {
            return x;
        }
        else
        {
            return z;
        }
    }

    // c is the largest number of the three
    else if(x >= y)
    {
        return x;
    }
    else
    {
        return y;
    }

    return 0;
}

