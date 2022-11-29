
/** C program to find mostRepNum using only one loop **/


int mostRep(int*arr)
{
	int arr2[10]={0};
	int i,max=0,c=0;
	for(i=0;i<10;i++)
	{
		if(arr2[arr[i]]==0)/** kda mafesh element **/
		{
			arr2[arr[i]]=1;
		}
		else
		{
			c++;/** kda la2et L elemnt mara kman **/
			max=i;/** rag3le l index bta3 l element da **/
		}
	}
	printf("the num is repeated:%d\n",c);
	return arr[max];
}


void main (void)
{
	int arr[10]= {10,2,3,3,5,3,7,8,3,9};
    int x=mostRep(arr);
	printf("%d",x);
}





