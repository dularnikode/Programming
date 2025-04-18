import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class Bank {
	
	private String name;
	private ArrayList<User> users;
	
	private ArrayList<Account> accounts;
	
	
	
	//Create a new Bank object with empty lists of users and accounts.
	public Bank(String name) {
		
		this.name = name;
		
		// init users and accounts
		users = new ArrayList<User>();
		accounts = new ArrayList<Account>();
		
	}
	
	//Generate a new universally unique ID for a user.
	public String getNewUserUUID() {
		
		String uuid;
		Random rng = new Random();
		int len = 6;
		boolean nonUnique;
		
		// continue looping until we get a unique ID
		do {
			
			// generate the number
			uuid = "";
			for (int c = 0; c < len; c++) {
				uuid += ((Integer)rng.nextInt(10)).toString();
			}
			
			// check to make sure it's unique
			nonUnique = false;
			for (User u : this.users) {
				if (uuid.compareTo(u.getUUID()) == 0) {
					nonUnique = true;
					break;
				}
			}
			
		} while (nonUnique);
		
		return uuid;
	}
	
	//Generate a new universally unique ID for an account. 
	public String getNewAccountUUID() {
		
		String uuid;
		Random rng = new Random();
		int len = 10;
		boolean nonUnique = false;
		
		// continue looping until we get a unique ID
		do {
			
			// generate the number
			uuid = "";
			for (int c = 0; c < len; c++) {
				uuid += ((Integer)rng.nextInt(10)).toString();
			}
			
			// check to make sure it is unique
			for (Account a : this.accounts) {
				if (uuid.compareTo(a.getUUID()) == 0) {
					nonUnique = true;
					break;
				}
			}
			
		} while (nonUnique);
		
		return uuid;
				
	}

	// Create a new user of the bank.
	public User addUser(String firstName, String lastName, String pin) {
		
		// create a new User object and add it to our list
		User newUser = new User(firstName, lastName, pin, this);
		this.users.add(newUser);
		
		// create a savings account for the user and add it to our list
		Account newAccount = new Account("Savings", newUser, this);
		newUser.addAccount(newAccount);
		this.accounts.add(newAccount);
		
		return newUser;
		
	}
	
	//Add an existing account for a particular User.
	public void addAccount(Account newAccount) {
		this.accounts.add(newAccount);
	}
	
	public User userLogin(String userID, String pin) {
		
		// search from listof user
		for (User u : this.users) {
			
			// return User object if login is correct
			if (u.getUUID().compareTo(userID) == 0 && u.validatePin(pin)) {
				return u;
			}
		}
		return null;
		
	}
	
	// Get the name of the bank.
	public String getName() {
		return this.name;
	}

}