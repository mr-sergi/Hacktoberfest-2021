interface person 
{
public void sleep();
interface activity
{
public void move();
}
}
class activeperson implements person
{
public void sleep()
{
System.out.println("person is sleeping");
}
public void move()
{
System.out.println("person is moving");
}
public static void main(String args[])
{
activeperson a= new activeperson();
a.sleep();
a.move();
}
}



