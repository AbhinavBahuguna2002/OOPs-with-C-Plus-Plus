import java.util.*; 
class Counter {
	
	static int count=0; 
	
	Counter () 
	{		
		count++; 
	} 
	
	public static void main (String args[]) 
	{ 
		Counter obj1 = new Counter (); 
		Counter obj2 = new Counter (); 
		Counter obj3 = new Counter (); 
		Counter obj4 = new Counter (); 
		Counter obj5 = new Counter (); 
		System.out.println("Number of Objects made: " + count); 
	} 
} 
