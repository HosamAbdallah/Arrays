

/** this function to copy source array To destination array **/ 

void array_copy(void*src,void*des,unsigned int size)
{
    char* src_char=src;
    char* des_char=des;
    int i;
    for(i=0;i<size;i++)
    {
        des_char[i]=src_char[i];
    }
}

// Driver program
int main()
{
	int isrc[] = {10, 20, 30, 40, 50};
	int n = sizeof(isrc)/sizeof(isrc[0]);
	int idest[n], i;
	array_copy(idest, isrc, sizeof(isrc));
	printf("\nCopied array is ");
	for (i=0; i<n; i++)
		printf("%d ", idest[i]);
	return 0;
}