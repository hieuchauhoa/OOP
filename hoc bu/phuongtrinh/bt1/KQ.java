package bt1;

public class KQ extends PTB2
{

    private double x;
    
    public KQ()
    {
        super(a,b,c);
    }

    public double inKetQua(double x)
    {
        
        this.x=x;
        return x*x*a+x*b+c;
    }
}
