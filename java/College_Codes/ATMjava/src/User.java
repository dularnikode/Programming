import java.security.MessageDigest;
import java.util.ArrayList;

public class User {


	private String firstName;
	private String lastName;
	
	private String uuid;//id of user
	
	private byte pinHash[];//hash of pin
	
	private ArrayList<Account> accounts;//list of account for this user
	
	// Create new user
	public User (String firstName, String lastName, String pin, Bank theBank) {
		
		this.firstName = firstName;
		this.lastName = lastName;
		
	
		try {
			MessageDigest md = MessageDigest.getInstance("MD5");
			this.pinHash = md.digest(pin.getBytes());
		} catch (Exception e) {
			System.err.println("error, caught exeption : " + e.getMessage());
			System.exit(1);
		}
		
		this.uuid = theBank.getNewUserUUID();// to get unique id for user
		
		this.accounts = new ArrayList<Account>();
		
		System.out.printf("New user %s, %s with ID %s created.\n", lastName, firstName, this.uuid);
		
	}
	
	//to get user id
	public String getUUID() 
	{
		return this.uuid;
	}
	
	
	 // Add an account for the user. 
	public void addAccount(Account anAcct) {
		this.accounts.add(anAcct);
	}
	
	//Get the number of accounts the user has.
	public int numAccounts() {
		return this.accounts.size();
	}
	
	//Get the balance of a particular account.
	public double getAcctBalance(int acctIdx) {
		return this.accounts.get(acctIdx).getBalance();
	}
	
	
	
	// Get the UUID of a particular account.
	public String getAcctUUID(int acctIdx) {
		return this.accounts.get(acctIdx).getUUID();
	}
	
	
	// Print transaction history for a particular account.
	public void printAcctTransHistory(int acctIdx) {
		this.accounts.get(acctIdx).printTransHistory();
	}
	
	//Add a transaction to a particular account.
	public void addAcctTransaction(int acctIdx, double amount, String memo) {
		this.accounts.get(acctIdx).addTransaction(amount, memo);
	}
	
	// Check whether a given pin matches the true User pin

	public boolean validatePin(String aPin) {
		
		try {
			MessageDigest md = MessageDigest.getInstance("MD5");
			return MessageDigest.isEqual(md.digest(aPin.getBytes()), 
					this.pinHash);
		} catch (Exception e) {
			System.err.println("error, caught exeption : " + e.getMessage());
			System.exit(1);
		}
		
		return false;
	}
	
	//Print summaries for the accounts of this user.
	public void printAccountsSummary() {
		
		System.out.printf("\n\n%s's accounts summary\n", this.firstName);
		for (int a = 0; a < this.accounts.size(); a++) {
			System.out.printf("%d) %s\n", a+1, 
					this.accounts.get(a).getSummaryLine());
		}
		System.out.println();
		
	}
}