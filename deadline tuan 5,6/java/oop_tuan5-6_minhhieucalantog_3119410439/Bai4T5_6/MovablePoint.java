package Tuan5_6.Bai4T5_6;

public class MovablePoint  extends  Point
{
    private float xSpeed;
    private float ySpeed;

    public MovablePoint()
    {
        this.xSpeed=0.0f;
        this.ySpeed=0.0f;
    }
    public MovablePoint(float x,float y,float xSpeed,float ySpeed)
    {
        super(x, y);
        this.xSpeed=xSpeed;
        this.ySpeed=ySpeed;
    }
    public MovablePoint(float xSpeed,float ySpeed)
    {
        this.xSpeed=xSpeed;
        this.ySpeed=ySpeed;
    }

    public float getxSpeed() 
    {
        return xSpeed;
    }

    public void setxSpeed(float xSpeed) 
    {
        this.xSpeed = xSpeed;
    }

    public float getySpeed() 
    {
        return ySpeed;
    }

    public void setySpeed(float ySpeed) 
    {
        this.ySpeed = ySpeed;
    }
    public  float[] getSpeed()
    {
        float a[]=new float[2];
        a[0]=getxSpeed();
        a[1]=getySpeed();
        return a;
    }
    public void setSpeed(float xSpeed,float ySpeed)
    {
        this.xSpeed=xSpeed;
        this.ySpeed=ySpeed;
    }

    @Override
    public String toString()
    {
        return "("+getX()+","+getY()+")"+","+"speed=("+getxSpeed()+","+getySpeed()+")";
    }
    public MovablePoint move()
    {
        MovablePoint mp=new MovablePoint();
        mp.setX(this.getX()+xSpeed);
        mp.setY(this.getY()+ySpeed);
        mp.xSpeed=this.xSpeed;
        mp.ySpeed= this.ySpeed;
        return  mp;


    }


}
