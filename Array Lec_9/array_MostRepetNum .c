

/** C program to find Most Repeated Num in array doesn't sorted (msh metrateb) using (2)loops **/

/************** Lec_9 **************/

/**  Time complexity bta3 l Function de= O(n2) 3shan mst5dem 2 for gowa b3d **/
/** this Algorithm is using 2 for loop Method 3shan l array (msh metrateb) **/

int array_MostRepeatedNumber(int *arr,int size,int *pnum)
{
    int i,count=0,j,max=0;
    int num;
    for(i=0; i<size; i++)
    {
        for(j=i; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
		/** hena bt check 3la 3adad tkrar l num **/
        if(count>max)
        {
            max=count;
			// l pointer (*pnum) da 3shan asgel fe aktar raqam etkrar fe L array 
            *pnum=arr[i];
        }
		//lazem asfar l count 3shan mayrg3sh y3d m3a raqam tany 
        count=0;
    }

    return max;
}


int main()
{
	int arr3[]= {10,2,3,4,1,12,3,5,3,6,3,7,10,10,10,10,10};
    int size3=sizeof(arr3)/sizeof(*(arr3));
    int num;
    int repeat=array_MostRepeatedNumber(arr3,size3,&num);
    printf("the Max repeated num=%d was found in num:%d\n",repeat,num);

    return 0;
}

