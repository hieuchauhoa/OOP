package Tuan5_6.Bai1T5_6;
public class Cylinder extends Circle 
{
    private double height=1;
    public Cylinder()
    {

    }
   public Cylinder(double radius)
   {
        super(radius);

   }
    public Cylinder(double radius,double height)
    {
        super(radius);
        this.height=height;
    }
    public Cylinder(double radius,double height,String color)
    {
        super(radius, color);
        this.height=height;
    }

    public double getHeight() 
    {
        return height;
    }

    public void setHeight(double height) 
    {
        this.height = height;
    }
    public double getVolume()
    { 
        return getHeight()*getArea();
    }

   @Override
    public String toString () 
    {       
        return "Cylinder: subclass of" + super.toString ()   
                + "height =" + height;
    }
}
