# ATM MACHINE SIMULATION
**INTRODUCTION:**
The ATM Machine Simulation is a comprehensive software solution designed to simulate the basic functionalities of an Automated Teller Machine (ATM). Developed as a project by Momeena, this system provides a realistic platform for users to perform various banking transactions such as balance inquiry, cash withdrawal, deposit, fund transfer, and PIN management.

**CODE EXPLANATION:**

**Main Function (‘main()’):**
The ‘main()’ function serves as the entry point of the program. It processes user choices (A, B, C, D, E, F) to perform different actions, including:
	-	Balance Inquiry: Display the current balance of the user. 
	-	Withdrawal: Allow the user to withdraw a specified amount from their account. 
	-	Deposit: Facilitate depositing a specified amount into the account. 
	-	Transfer Funds: Transfer a specified amount to another account. 
	-	Change PIN: Enable users to change their ATM PIN for security. 
	-	Exit: Terminate the session. 
Depending on the user's choice, it displays relevant information and performs the necessary transaction.

**Helper Functions:**

	-	transferFunds(): Handles the transfer of funds between two accounts. It checks for sufficient balance and updates both the sender's and receiver's balances accordingly. 

**USER INTERACTION:**

**Balance Inquiry** 
	-	When the user selects option 'C', the program displays the current balance of the account. 

**Cash Withdrawal** 
	-	Selecting option 'A' prompts the user to enter an amount for withdrawal. The program checks for sufficient balance and, if available, dispenses the cash and updates the balance.
 
**Deposit** 
	-	For option 'B', the user is prompted to enter an amount to deposit into their account. The program adds this amount to the current balance and displays the updated balance. 

**Transfer Funds** 
	-	Option 'D' allows the user to transfer funds to another account. The user must enter the transfer amount, which is then deducted from the sender's balance and credited to the receiver's balance. 

**Change PIN** 
	-	By selecting option 'E', the user can change their ATM PIN. The program updates the PIN to the new value provided by the user. 
	-	Exit 
	-	Option 'F' allows the user to exit the ATM system safely. 

**FEATURES:**

	-	User-Friendly Interface: The system provides a simple and intuitive interface, allowing users to easily navigate and complete transactions. 
	-	Secure PIN Management: Ensures user security by requiring PIN entry for all transactions. 
	-	Real-Time Balance Update: Reflects changes in account balance immediately after transactions. 
	-	Fund Transfer Capability: Enables users to transfer money between accounts. 
	-	Error Handling: Provides feedback for incorrect PIN entries and insufficient funds, enhancing user experience. 

**USAGE:**
To use the ATM Machine Simulation, follow these steps:
	-	Launch the Application: Start the program by executing the compiled executable. 
	-	Authenticate: Enter the ATM PIN to access the main menu. The default PIN is 7654. 
	-	Choose a Transaction: Select the desired transaction option from the menu. 
	-	Follow Instructions: Complete the transaction by following the on-screen prompts. 
	-	Exit: Safely exit the application by choosing the exit option.
