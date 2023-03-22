package Tuan5_6.Bai3T5_6;

public class Point2D 
{
    private float x;
    private float y;
    
    public Point2D()
    {
        this.x=0.0f;
        this.y=0.0f;
    }
    public Point2D(float x,float y)
    {
        this.x=x;
        this.y=y;
    }

    public float getX() 
    {
        return x;
    }

    public void setX(float x) 
    {
        this.x = x;
    }

    public float getY() 
    {
        return y;
    }

    public void setY(float y) 
    {
        this.y = y;
    }
    public float[] getXY()
    {
        float a[]=new float[2];
        a[0]=getX();
        a[1]=getY();
        return a;
    }
    public void setXY(float x,float y)
    {
        this.x=x;
        this.y=y;
    }
    @Override
    public String toString()
    {
        return "("+getX()+","+getY()+")";
    }


}
