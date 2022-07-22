 #include <stdio.h>

int main() 
{
    float t,cel,fahr;
    char d;
    scanf ("%f %c",&t,&d);
 //  printf ("%f %c\n",t,d);
//printf("%c\n",d);
    if (d=='c'){
        cel = t;
        fahr = (1.8)*cel+32;
    //    printf("%f\n",cel);
    }
    else 
    if (d=='f')
    {
        fahr = t;
        cel = 5.0/9*(fahr-32);
    
     //   printf("%f%f\n",fahr,cel);
    }
    else
    {
        fahr=0;
        cel=0;
    }

    if (fahr==0 && cel==0)
    {
        printf ("wrong input\n");
        return 1;
    }
    else
    printf ("%.1f°C, %.1f°F",cel,fahr);
    return 0;
}