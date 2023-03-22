package Tuan5_6.bai5;

public class Rectangle extends Shape 
{
    private double width;
    private double length;

    public Rectangle()
    {
        this.width=1.0;
        this.length=1.0;
    }
    public Rectangle(double width,double length)
    {
        this.length=length;
        this.width=width;
    }
    public Rectangle(double width,double length,String  color,boolean filled)
    {
        super(color, filled);
        this.length=length;
        this.width=width;
    }

    public double getWidth() 
    {
        return width;
    }

    public void setWidth(double width) 
    {
        this.width = width;
    }

    public double getLength() 
    {
        return length;
    }

    public void setLength(double length) 
    {
        this.length = length;
    }
    public double getArea()
    {
        return getLength()*getWidth();
    }
    public double getPerimeter()
    {
        return (getLength()+getWidth())*2;
    }
    @Override
    public String toString()
    {
        return "Rectamgle["+super.toString()+",width="+getWidth()+",lenght="+getLength()+"]";
    }
}
