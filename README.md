📖 Simple Phone Book Program
This is a basic C program that simulates a simple Phone Book system.

It allows you to:

Add 1 or 2 contacts by entering their details like Name, Age, Phone Number, Date of Birth, and Address.

💻 Features
Displays a welcome screen and menu.

Asks user to input the number of contacts they want to add (1 or 2).

Takes user input for each contact's:

Name

Age

Phone Number

Date of Birth

Address

Displays the entered details after input.

🛠️ How to Run
Clone the repository or download the code file.

Compile the C program using any C compiler. Example:

bash
Copy
Edit
gcc phonebook.c -o phonebook
Run the executable:

bash
Copy
Edit
./phonebook
📝 Code Explanation
The program uses basic scanf and printf statements to interact with the user.

It uses simple if and else if conditions to check whether the user wants to add 1 or 2 contacts.

Details are stored in different variables for each contact.

⚠️ Known Issues / Improvements
Only two contacts can be added at maximum.

Data for the second contact overwrites the first contact's variables (needs separate variables or better data structure like struct).

Phone numbers are stored as int, but should ideally be stored as long or string to handle leading zeros and large numbers.

No saving of contacts; details are lost when the program ends.

Input buffer issues might occur when using scanf("%s", &string) for addresses with spaces.

🚀 Future Improvements
Use struct to handle multiple contacts easily.

Allow adding, deleting, viewing, and searching contacts.

Save contacts to a file for persistent storage.

Better input handling with fgets instead of scanf("%s", &var).

Support more than two contacts dynamically.
