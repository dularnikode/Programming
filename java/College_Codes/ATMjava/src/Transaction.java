import java.util.Date;

public class Transaction {
	
	private double amount;
	
	private Date timestamp;
	
	
	private String memo;
	
	private Account inAccount;
	
	//Create a new transaction.
	public Transaction(double amount, Account inAccount) {
		
		this.amount = amount;
		this.inAccount = inAccount;
		this.timestamp = new Date();
		this.memo = "";
		
	}
	
	//Create a new transaction with a memo.
	public Transaction(double amount, String memo, Account inAccount) {
		
		// call the single-arg constructor first
		this(amount, inAccount);
		
		this.memo = memo;
		
	}
	
	//Get the transaction amount 
	public double getAmount() {
		return this.amount;
	}
	
	//Get a string summarizing the transaction
	public String getSummaryLine() {
		
		if (this.amount >= 0) {
			return String.format("%s, $%.02f : %s", 
					this.timestamp.toString(), this.amount, this.memo);
		} else {
			return String.format("%s, $(%.02f) : %s", 
					this.timestamp.toString(), -this.amount, this.memo);
		}
	}

}
