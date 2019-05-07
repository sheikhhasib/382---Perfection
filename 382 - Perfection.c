#include<stdio.h>
int main()
{
    int h,a,bul;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&h)== 1)
    {

        if(h==0)
        {
            break;
        }
        bul=0;
        for(a=1;a<=h/2;a++)
        {
            if(h%a==0)
            {
                bul = bul+a;
            }
        }
        if(bul==h){
            printf("%5d  PERFECT\n",h);
        }
        else if(bul<h)
        {
            printf("%5d  DEFICIENT\n",h);
        }
        else
        {
            printf("%5d  ABUNDANT\n",h);
        }
    }
    printf("END OF OUTPUT\n");
    return  0;
}
