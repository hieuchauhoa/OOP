package bt1;

public class POINT 
{
     int x,y;
    public POINT(int x,int y)
    {
        this.x=x;
        this.y=y;
    }
    public double distance(POINT p)
    {
        return Math.sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
    }

    @Override
    public String toString()
    {
        return "("+x+","+y+")";
    }
}
