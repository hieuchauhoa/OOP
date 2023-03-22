package bt1;

public class CIRCLE extends SHAPE
{
     POINT center;
     int R;

    public CIRCLE(POINT p,int r)
    {
        center=new POINT(p.x, p.y);
        R=r;

    }

    @Override 
    public double chuvi()
    {
        return Math.PI*2*R;
    }

    @Override 
    public double dientich()
    {
        return Math.PI*R*R;
    }

    @Override
    public String toString()
    {
        return "co tam "+center;
    }
}