class Xyz {
	int w,x,y,z;
	
	Xyz (int a, int b) 
	{
		w=a; 
		x=b; 
	} 
	Xyz (int a, int b, int c) 
	{ 
		this (a,b);  // constructor chaining 
		y=c; 
	} 
	Xyz (int a, int b, int c, int d)  
	{ 
		this (a, b, c); 
		z=d; 
	} 
	void display () 
	{ 
		System.out.println("w= " + w + "\nx= " + x + "\ny= " + y + "\nz= " + z); 
	} 

	public static void main (String args[]) 
	{ 
		Xyz obj = new Xyz (3,4,5,6); 
		obj.display (); 
	} 		
}  
