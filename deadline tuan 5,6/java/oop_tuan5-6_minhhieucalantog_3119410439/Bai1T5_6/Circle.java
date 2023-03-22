package Tuan5_6.Bai1T5_6;

public class Circle 
{
    private double radius;
    private  String color;
    
    public Circle()
    {
        radius=1;
        color="red";
    }
    public  Circle(double radius)
    {
        this.radius=radius;
    }
    public Circle(double radius,String color)
    {
        this.radius=radius;
        this.color=color;
    }

    public double getRadius() 
    {
        return radius;
    }

    public void setRadius(double radius) 
    {
        this.radius = radius;
    }

    public String getColor() 
    {
        return color;
    }

    public void setColor(String color) 
    {
        this.color = color;
    }
   public double getArea()
    {
        return Math.PI*radius*radius;
    }

    @Override
    public String toString() 
    {
        return "Circle["+getRadius() +","+getColor()+"]";
    }
}
