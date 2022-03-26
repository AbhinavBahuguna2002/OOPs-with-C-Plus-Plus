import java.util.*; 
class Student {
	
	String name; 
	int roll_no; 
	String branch; 
	static String uniname; 
	
	void set (String name, int roll, String  branch) 
	{
 		this.name = name;
 		roll_no = roll; 
		this.branch = branch; 
		//this.uniname = uniname; 
	} 
	
	void get () 
	{ 
		System.out.println("Name= " + name + "\nBranch= " + branch + "\nRoll no= " + roll_no + "\nUniversity Name= " + uniname); 
	} 
	public static void main (String args[]) 
	{
		Scanner sc= new Scanner (System.in);  
		Student obj = new Student (); 
		String name, branch; 
		int roll; 
		System.out.print("Enter a name: ");
		name = sc.nextLine(); 
		System.out.print("\nEnter the roll no:"); 
		roll = sc.nextInt(); 
		sc.nextLine(); 
		System.out.print("\nEnter the branch: ");
		branch =sc.nextLine(); 
		System.out.print("\nEnter the University name: "); 
		uniname = sc.nextLine(); 
		System.out.println("\n");
		obj.set(name, roll, branch); 
		obj.get(); 
	
	} 
} 

