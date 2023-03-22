package Tuan5_6.Bai4T5_6;

public class Main 
{
    public static void main(String[] args)
    {
        Point p=new Point(3,5);
        System.out.println(p);

        MovablePoint mv=new MovablePoint(3,4,6,8);
        System.out.println(mv);
        
        mv.setxSpeed(5);
        mv.setySpeed(8);
        System.out.println(mv.getxSpeed());
        System.out.println(mv.getySpeed());
        System.out.println(mv.move());

    }
}
