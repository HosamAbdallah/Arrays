


1int base_of3(int num)
{
    while(num>1)
    {
        if(num%3!=0)
        {
            return 0;
        }
        num=num/3;
    }
    return 1;
}

/*******************************************/

// Q.3 sheet 3
int power_of3(int num)
{
    if(num%3!=0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
// Q.3 sheet 3 .... sol 2
int powerr_of3(int num)
{
    int i;
    for(i=1;i<num;i++)
    {
        //27=3*3*3...true  -  24=2*2*6....false 
        if(i*i*i==num)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
	//Q.3 sheet3
    int numm;
    printf("enter your number\n");
    scanf("%d",&numm);
    int res=powerr_of3(numm);
    printf("res=%d",res);


	return 0;
}







