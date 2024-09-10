#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management {
    public:
        Management() {
            mainMenu();
        }
};

class Details {
    public:
        static string name, gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information() {
            cout << "\nEnter the customer id: ";
            cin >> cId;
            cout << "\nEnter the name: ";
            cin >> name;
            cout << "\nEnter the age: ";
            cin >> age;
            cout << "\nEnter Address: ";
            cin >> add;
            cout << "\nEnter gender: ";
            cin >> gender;
            cout << "Your details are saved with us\n" << endl;
        }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration {
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights() {
            string flightsN[] = {"Dubai", "Canada", "US", "UK", "Australia", "EU"};
            for (int a = 0; a < 6; a++) {
                cout << (a + 1) << " flight to " << flightsN[a] << endl;
            }

            cout << "\nWelcome to Airlines!" << endl;
            cout << "Press the number of the country you want to book the flight for: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    {
                        cout << "Welcome to Dubai Emirates\n" << endl;
                        cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                        cout << "Following are the flights \n" << endl;
                        cout << "1. DUB 498 - 08-01-2024 8:00AM 10hrs Rs. 14000" << endl;
                        cout << "2. DUB 658 - 09-01-2024 4:00AM 12hrs Rs. 10000" << endl;
                        cout << "3. DUB 508 - 11-01-2024 11:00AM 11hrs Rs. 9000" << endl;
                        cout << "\nSelect the flight you want to book: ";
                        cin >> choice1;

                        if (choice1 == 1) {
                            charges = 14000;
                            cout << "\nYou have successfully booked the flight DUB 498" << endl;
                        } else if (choice1 == 2) {
                            charges = 10000;
                            cout << "\nYou have successfully booked the flight DUB 658" << endl;
                        } else if (choice1 == 3) {
                            charges = 9000;
                            cout << "\nYou have successfully booked the flight DUB 508" << endl;
                        } else {
                            cout << "Invalid input, shifting to the previous menu" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the main menu" << endl;
                        cin >> back;
                        if (back == 1) {
                            mainMenu();
                        } else {
                            mainMenu();
                        }
                        break;
                    }
                case 2:
                    {
                        cout << "Welcome to Canadian Airlines\n" << endl;
                        cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                        cout << "Following are the flights \n" << endl;
                        cout << "1. CA 198 - 08-01-2024 2:00AM 20hrs Rs. 34000" << endl;
                        cout << "2. CA 158 - 10-01-2024 6:00AM 22hrs Rs. 29000" << endl;
                        cout << "3. CA 208 - 12-01-2024 5:00PM 21hrs Rs. 40000" << endl;
                        cout << "\nSelect the flight you want to book: ";
                        cin >> choice1;

                        if (choice1 == 1) {
                            charges = 34000;
                            cout << "\nYou have successfully booked the flight CA 198" << endl;
                        } else if (choice1 == 2) {
                            charges = 29000;
                            cout << "\nYou have successfully booked the flight CA 158" << endl;
                        } else if (choice1 == 3) {
                            charges = 40000;
                            cout << "\nYou have successfully booked the flight CA 208" << endl;
                        } else {
                            cout << "Invalid input, shifting to the previous menu" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the main menu" << endl;
                        cin >> back;
                        if (back == 1) {
                            mainMenu();
                        } else {
                            mainMenu();
                        }
                        break;
                    }
                case 3:
                    {
                        cout << "Welcome to US Airlines\n" << endl;
                        cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                        cout << "Following are the flights \n" << endl;
                        cout << "1. US 298 - 08-01-2024 12:00AM 18hrs Rs. 37000" << endl;
                        cout << "2. US 658 - 09-01-2024 4:00AM 22hrs Rs. 32000" << endl;
                        cout << "3. US 508 - 11-01-2024 9:00AM 19hrs Rs. 28000" << endl;
                        cout << "\nSelect the flight you want to book: ";
                        cin >> choice1;

                        if (choice1 == 1) {
                            charges = 37000;
                            cout << "\nYou have successfully booked the flight US 298" << endl;
                        } else if (choice1 == 2) {
                            charges = 32000;
                            cout << "\nYou have successfully booked the flight US 658" << endl;
                        } else if (choice1 == 3) {
                            charges = 28000;
                            cout << "\nYou have successfully booked the flight US 508" << endl;
                        } else {
                            cout << "Invalid input, shifting to the previous menu" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the main menu" << endl;
                        cin >> back;
                        if (back == 1) {
                            mainMenu();
                        } else {
                            mainMenu();
                        }
                        break;
                    }
                case 4:
                    {
                        cout << "Welcome to UK Airways\n" << endl;
                        cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                        cout << "Following are the flights \n" << endl;
                        cout << "1. UK 798 - 08-01-2024 1:00PM 14hrs Rs. 25000" << endl;
                        cout << "2. UK 658 - 09-01-2024 5:00AM 16hrs Rs. 22000" << endl;
                        cout << "3. UK 508 - 11-01-2024 10:00AM 15hrs Rs. 20000" << endl;
                        cout << "\nSelect the flight you want to book: ";
                        cin >> choice1;

                        if (choice1 == 1) {
                            charges = 25000;
                            cout << "\nYou have successfully booked the flight UK 798" << endl;
                        } else if (choice1 == 2) {
                            charges = 22000;
                            cout << "\nYou have successfully booked the flight UK 658" << endl;
                        } else if (choice1 == 3) {
                            charges = 20000;
                            cout << "\nYou have successfully booked the flight UK 508" << endl;
                        } else {
                            cout << "Invalid input, shifting to the previous menu" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the main menu" << endl;
                        cin >> back;
                        if (back == 1) {
                            mainMenu();
                        } else {
                            mainMenu();
                        }
                        break;
                    }
                case 5:
                    {
                        cout << "Welcome to Australian Airlines\n" << endl;
                        cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                        cout << "Following are the flights \n" << endl;
                        cout << "1. AUS 798 - 18-01-2024 2:00PM 20hrs Rs. 34000" << endl;
                        cout << "2. AUS 658 - 19-01-2024 6:00AM 22hrs Rs. 29000" << endl;
                        cout << "3. AUS 508 - 21-01-2024 5:00PM 21hrs Rs. 40000" << endl;
                        cout << "\nSelect the flight you want to book: ";
                        cin >> choice1;

                        if (choice1 == 1) {
                            charges = 34000;
                            cout << "\nYou have successfully booked the flight AUS 798" << endl;
                        } else if (choice1 == 2) {
                            charges = 29000;
                            cout << "\nYou have successfully booked the flight AUS 658" << endl;
                        } else if (choice1 == 3) {
                            charges = 40000;
                            cout << "\nYou have successfully booked the flight AUS 508" << endl;
                        } else {
                            cout << "Invalid input, shifting to the previous menu" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the main menu" << endl;
                        cin >> back;
                        if (back == 1) {
                            mainMenu();
                        } else {
                            mainMenu();
                        }
                        break;
                    }
                case 6:
                    {
                        cout << "Welcome to European Airlines\n" << endl;
                        cout << "Your comfort is our priority. Enjoy the journey!" << endl;
                        cout << "Following are the flights \n" << endl;
                        cout << "1. EU 798 - 22-01-2024 12:00PM 20hrs Rs. 37000" << endl;
                        cout << "2. EU 658 - 24-01-2024 3:00AM 22hrs Rs. 35000" << endl;
                        cout << "3. EU 508 - 26-01-2024 6:00PM 19hrs Rs. 42000" << endl;
                        cout << "\nSelect the flight you want to book: ";
                        cin >> choice1;

                        if (choice1 == 1) {
                            charges = 37000;
                            cout << "\nYou have successfully booked the flight EU 798" << endl;
                        } else if (choice1 == 2) {
                            charges = 35000;
                            cout << "\nYou have successfully booked the flight EU 658" << endl;
                        } else if (choice1 == 3) {
                            charges = 42000;
                            cout << "\nYou have successfully booked the flight EU 508" << endl;
                        } else {
                            cout << "Invalid input, shifting to the previous menu" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the main menu" << endl;
                        cin >> back;
                        if (back == 1) {
                            mainMenu();
                        } else {
                            mainMenu();
                        }
                        break;
                    }
                default:
                    {
                        cout << "Invalid choice, returning to main menu..." << endl;
                        mainMenu();
                        break;
                    }
            }
        }
};

float registration::charges;
int registration::choice;

class ticket : public registration, public Details {
    public:
        void Bill() {
            string destination = "";
            ofstream outf("records.txt");

            outf << " Air India Airlines " << endl;
            outf << " Ticket " << endl;
            outf << endl;

            outf << "Customer ID: " << Details::cId << endl;
            outf << "Name: " << Details::name << endl;
            outf << "Gender: " << Details::gender << endl;
            outf << "Destination: ";

            if (registration::choice == 1) {
                destination = "Dubai";
            } else if (registration::choice == 2) {
                destination = "Canada";
            } else if (registration::choice == 3) {
                destination = "USA";
            } else if (registration::choice == 4) {
                destination = "UK";
            } else if (registration::choice == 5) {
                destination = "Australia";
            } else if (registration::choice == 6) {
                destination = "EU";
            }

            outf << destination << endl;
            outf << "Flight cost: " << registration::charges << endl;
            outf.close();
        }

        void displayBill() {
            ifstream ifs("records.txt");
            if (!ifs) {
                cout << "File error!" << endl;
            }
            while (!ifs.eof()) {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
            ifs.close();
        }
};

void mainMenu() {
    int lchoice;
    int schoice;
    int back;

    cout << "\t               Air India Airlines \n" << endl;
    cout << "\t______________Main Menu__________________" << endl;

    cout << "\t|\t\t\t\t       |" << endl;
    cout << "\t|\t Press 1 to add the Customer Details     |" << endl;
    cout << "\t|\t Press 2 for Flight Registration        |" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges         |" << endl;
    cout << "\t|\t Press 4 to Exit                        |" << endl;
    cout << "\t|\t\t\t\t       |" << endl;

    cout << "Enter your choice: ";
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice) {
        case 1:
            {
                cout << "_____________Customers____________\n" << endl;
                d.information();
                cout << "Press any key to go back to Main Menu" << endl;
                cin >> back;
                mainMenu();
                break;
            }
        case 2:
            {
                cout << "__________Book a Flight using this System_________\n" << endl;
                r.flights();
                break;
            }
        case 3:
            {
                cout << "______Get your Ticket______\n" << endl;
                t.Bill();
                cout << "Your ticket is printed, you can collect it \n" << endl;
                cout << "Press 1 to display your ticket: ";
                cin >> schoice;

                if (schoice == 1) {
                    t.displayBill();
                    cout << "Press any key to go back to the main menu: ";
                    cin >> back;
                    mainMenu();
                } else {
                    mainMenu();
                }
                break;
            }
        case 4:
            {
                cout << "\n\n\t_________Thank you__________" << endl;
                break;
            }
        default:
            {
                cout << "Invalid input, please try again!\n" << endl;
                mainMenu();
                break;
            }
    }
}

int main() {
    Management Mobj;
    return 0;
}
