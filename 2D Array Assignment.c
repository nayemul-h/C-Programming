#include<stdio.h>
int main()
{
    int row=5,col=7,i,j,hot=0,cold=0;
    int arr[row] [col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]<5 || arr[i][j]>60)
            {
                printf("Invalid");
                return 0;
            }
        }
    }
             float average,sum=0;
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    sum+=arr[i][j];
                    if(arr[i][j]>40) hot++;
                    if(arr[i][j]<10) cold++;
                }
                average=sum/col;
                printf("\nCity:%d\n",i+1);
                printf("Average Temp:%0.1f\n",average);
                if(average>=30)  printf("Weather: Hot\n");
                if(average>=20 && average<=29.9) printf("Weather:Moderate\n");
                if(average<20) printf("Weather: Cold\n");
                printf("Heat Alert Days:%d\n",hot);
                printf("Cold Alert Days:%d\n",cold);
                hot=0;
                cold=0;
                sum=0;

            }

            int highest=arr[0][0],lowest=arr[0][0],hcity,lcity;

            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    if(highest<arr[i][j]) {
                            highest=arr[i][j];
                            hcity=i+1;
                    }
                    if(lowest>arr[i][j]) {
                            lowest=arr[i][j];
                            lcity=i+1;
                    }
                }
            }
            printf("\nHighest Temperature: %d C in City %d\n",highest,hcity);
            printf("Lowest Temperature: %d C in City %d\n\n",lowest,lcity);

            float sum2=0,average2=0;
            printf("\nAverage Temperature per Day:\n");

            for(j=0;j<col;j++)
            {
                for(i=0;i<row;i++)
                {
                    sum2+=arr[i][j];
                }
                average2=sum2/row;
                printf("Day %d: %0.1f C\n",j+1,average2);
                sum2=0;
            }

            float hottest=average2,coldest=average2;
            int hday1,cday1;
             for(j=0;j<col;j++)
            {
                for(i=0;i<row;i++)
                {
                    sum2+=arr[i][j];
                }
                average2=sum2/row;
                if(hottest<=average2)
                {
                    hottest=average2;
                    hday1=j+1;
                }
                if(coldest>average2)
                {
                    coldest=average2;
                    cday1=j+1;
                }
                sum2=0;
            }
            printf("\nHottest Day: Day %d (%0.1f C)\n",hday1,hottest);
            printf("coldest Day: Day %d (%0.1f C)\n",cday1,coldest);

    return 0;
}
