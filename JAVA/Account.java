/*
The variable names in method setDetails are same, so we use the keyword "this" to overcome the ambiguity & refer to the current object. 

26-03-2022
*/
import java.util.*; 
class Account {
	
	String name; 
	int acc;
	float amount;
	
	void setDetails (String name, int acc, float amount) 
	{
 		this.name = name;
 		this.acc = acc;  
		this.amount = amount; 
	
	} 
	
	void show () 
	{ 
		System.out.println("Name: " + name + "\nAccount Number: " + acc + "\nAmount: " + amount); 
	} 
	public static void main (String args[]) 
	{
		Scanner sc= new Scanner (System.in);  
		Account obj = new Account(); 
		String name; 
		int acc;
		float amount;
		System.out.print("Enter a name: ");
		name = sc.nextLine(); 
		System.out.print("\nEnter the Account Number:"); 
		acc = sc.nextInt(); 
		sc.nextLine(); 
		System.out.print("\nEnter the Amount: ");
		amount =sc.nextFloat(); 

		System.out.println("\n");
		obj.setDetails(name, acc, amount); 
		obj.show(); 
	
	} 
} 

