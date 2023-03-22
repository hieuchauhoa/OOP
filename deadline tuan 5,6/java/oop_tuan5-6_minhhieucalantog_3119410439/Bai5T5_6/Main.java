package Tuan5_6.bai5;

public class Main 
{
    public static void main(String[] args)
    {
        Shape s=new Shape("black",false);
        System.out.println(s);

        s.setFilled(true );
        System.out.println(s);

        Circle c=new Circle(5,"red",true);
        System.out.println(c);

        System.out.println("dien tich="+(double) Math.round(c.getArea()*100)/100);
        System.out.println("Chu vi="+(double) Math.round( c.getPerimeter()*100)/100);

        Rectangle r=new Rectangle(2,4,"red",true);
        System.out.println(r);
        System.out.println("dien tich="+(double) Math.round(r.getArea()*100)/100);
        System.out.println("Chu vi="+(double) Math.round(r.getPerimeter()*100)/100);

        Square q=new Square(3,"led",true);
        System.out.println(q);
        q.setLength(10);
        q.setWidth(20);
        System.out.println(q);
    }
}
