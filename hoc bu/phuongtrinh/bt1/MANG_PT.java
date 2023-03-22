package bt1;

import java.util.Random;


public class MANG_PT 
{
    int length;
    PTB2[] mang=new PTB2[100];

    public MANG_PT(int n)
    {
        length=n;
        Random r=new Random();
        for(int i=0;i<n;i++)
        {
            double a=r.nextInt(10)*1.0;
            double b=r.nextInt(10)*1.0;
            double c=r.nextInt(10)*1.0;
            mang[i]=new khoitaomang[];
        }
    }
    
}
