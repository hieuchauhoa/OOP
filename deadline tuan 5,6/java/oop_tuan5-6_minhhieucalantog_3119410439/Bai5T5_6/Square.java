package Tuan5_6.bai5;
public class Square extends Rectangle
{

    public Square()
    {

    }
    public Square(double side)
    {
        super(side,side);

    }
    public Square(double side,String color,boolean filled)
    {
        
            super(side,side,color,filled);
    }
    public double getSide()
    {
        return getSide();
    }
    public void setSide(double side)
    {
           setSide(side);
    }
    public void setWidth(double side) 
    {
        super.setWidth(side);
    }
    public void setLenght(double side)
    {
        super.setLength(side);
    }
    @Override
    public String toString()
    {
        return "Square[ "+super.toString() +"]";
    }
}
