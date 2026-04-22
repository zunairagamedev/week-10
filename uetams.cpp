
#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    const int SIZE = 100;

    // store service requests
    string requestUser[SIZE];
    string requestService[SIZE];
    int requestCount = 0;

    while (true)
    {
        // main header of ams
        system("cls");
        cout << "==================================================" << endl;
        cout << "======Appartment Management System of UET=========" << endl;
        cout << "==================================================" << endl;

        cout << "User category " << endl;
        cout << "1 Admin " << endl;
        cout << "2 Customer" << endl;
        cout << "3 Guest " << endl;
        cout << "4 to Exit" << endl;
        cout << "Choose Option : " << endl;
        int userOption;
        cin >> userOption;

        cout << "You choose " << userOption << endl;
        if (userOption == 1)
        {
            // write here the admin code
            system("cls");

            cout << "This is admin menu " << endl;
            cout << "1 Administration " << endl;
            cout << "2 Service Providers" << endl;
            int userOption;
            cin >> userOption;

            cout << "You choose" << userOption << endl;
            if (userOption == 1)
            {
                cout << "Administration" << endl;
                string userid;
                cout << " Enter you user id " << endl;
                cin >> userid;
                string password;
                cout << "Enter you Password " << endl;
                cin >> password;

                if (userid == "admin" && password == "1234")
                {

                    for (int i = 0; i < requestCount; i++)
                    {
                        cout << i + 1 << "  User: " << requestUser[i] << " Services: " << requestService[i] << endl;
                    }
                }
                else
                {
                    cout << "Invalid userid or password " << endl;
                    getch();
                }
                getch();
            }

            else if (userOption == 2)
            {

                cout << "Service Providers" << endl;
                string userid;
                cout << " Enter you user id " << endl;
                cin >> userid;
                int password;
                cout << "Enter you Password " << endl;
                cin >> password;

                system("cls");

                if (userid == "Electric" && password == 123)
                {
                    cout << " Electrician Department " << endl;
                    bool found = false;
                    for (int i = 0; i < requestCount; i++)
                    {
                        if (requestService[i] == "Electrician Request")
                        {
                            cout << requestUser[i] << " -> Electrician Request\n";
                            found = true;
                        }
                    }
                    if (found == false)
                    {
                        cout << "No Electrician requests found. " << endl;
                    }
                    getch();
                }

                system("cls");

                if (userid == "Plumber" && password == 123)
                {
                    cout << " Plumber Department " << endl;
                    bool found = false;
                    for (int i = 0; i < requestCount; i++)
                    {
                        if (requestService[i] == "Plumber Request")
                        {
                            cout << requestUser[i] << " -> Plumber Request\n";
                            found = true;
                        }
                    }
                    if (found == false)
                    {
                        cout << "No Plumber requests found. " << endl;
                    }
                    getch();
                }

                system("cls");

                if (userid == "Carpent" && password == 123)
                {
                    cout << " Carpenter Department " << endl;
                    bool found = false;
                    for (int i = 0; i < requestCount; i++)
                    {
                        if (requestService[i] == "Carpanter")
                        {
                            cout << requestUser[i] << " -> Carpanter Request\n";
                            found = true;
                        }
                    }
                    if (found == false)
                    {
                        cout << "No Carpanter requests found. " << endl;
                    }
                    getch();
                }

                system("cls");

                if (userid == "Gasss" && password == 123)
                {
                    cout << " Gas Department " << endl;
                    bool found = false;
                    for (int i = 0; i < requestCount; i++)
                    {
                        if (requestService[i] == "Gas Maintainer")
                        {
                            cout << requestUser[i] << " -> Gas Maintainer Request\n";
                            found = true;
                        }
                    }
                    if (found == false)
                    {
                        cout << "No Gas requests found. " << endl;
                    }
                    getch();
                }

                system("cls");

                system("cls");

                if (userid == "Grocceries" && password == 123)
                {
                    cout << " Groccery Department " << endl;
                    bool found = false;
                    for (int i = 0; i < requestCount; i++)
                    {
                        if (requestService[i] == "Groccery")
                        {
                            cout << requestUser[i] << " -> Groccery Request\n";
                            found = true;
                        }
                    }
                    if (found == false)
                    {
                        cout << "No Groccery requests found. " << endl;
                    }
                    getch();
                }

                getch();
            }
        }
        else if (userOption == 2)
        {
            // write here the consumer code
            system("cls");
            cout << "This is customer menu" << endl;
            cout << "Enter username :   " << endl;
            string username;
            cin >> username;
            cout << "Enter pasword :  " << endl;
            string pasword;
            cin >> pasword;
            if (username == "1234" && pasword == "abc" ||
                username == "1235" && pasword == "abd" ||
                username == "1236" && pasword == "abd" ||
                username == "1237" && pasword == "abf" ||
                username == "1238" && pasword == "abg" ||
                username == "1239" && pasword == "abh" ||
                username == "1240" && pasword == "abi" ||
                username == "1241" && pasword == " abj " ||
                username == "1242" && pasword == "abk" ||
                username == "1243" && pasword == "abl")
            {
                cout << "Successfully" << endl;
                cout << "Press any key to continue" << endl;
            }

            else
            {
                cout << "Username or password invalied " << endl;
                break;
                getch();
                continue;
            }

            getch();

            // Services
            system("cls");
            cout << " Welcome to our Premium Services " << endl;
            cout << "1 Flat Services" << endl;
            cout << "2 Consumer Services" << endl;
            cout << "3 Schedule and Subscriptions" << endl;
            cout << "4 Security" << endl;
            cout << "5 Bills" << endl;
            cout << "6 Guest " << endl;
            cout << "7 Emergencey Services" << endl;
            cout << "8 Notifications" << endl;
            cout << "9 Complaint and Feedback" << endl;
            cout << "Choose option : ";
            int userOption;
            cin >> userOption;

            cout << "You choose " << userOption << endl;
            system("cls");
            if (userOption == 1)
            {
                // write here the code of flat services
                cout << " Welcome to flat services " << endl;
                cout << "1 Request for Electrician" << endl;
                cout << "2 Request for Plumber" << endl;
                cout << "3 Request for Carpanter" << endl;
                cout << "4 Request for Gas Maintainer " << endl;
                cout << "5 Request for Sewerage Maintainer" << endl;

                cout << "Choose Option : ";
                int userOption;
                cin >> userOption;

                if (userOption == 1)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Electrician Request";
                    requestCount++;
                    cout << " Your request for the Electrician has been sent. Please wait a while we are on it " << endl;
                }
                else if (userOption == 2)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Plumber Request";
                    requestCount++;
                    cout << "  Your request for the Plumber has been sent. Please wait a while we are on it" << endl;
                }
                if (userOption == 3)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Carpanter";
                    requestCount++;
                    cout << "  Your request for the Carpanter has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 4)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Gas Maintainer";
                    requestCount++;
                    cout << "  Your request for the Gas maintainer has been sent. Please wait a while we are on it " << endl;
                }
                if (userOption == 5)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Sewerage Maintainer";
                    requestCount++;
                    cout << "  Your request for the Sewerage Maintainer has been sent. Please wait a while we are on it" << endl;
                }

                cout << "Press any key to go to main menu" << endl;

                getch();
            }

            else if (userOption == 2)
            {
                // write here the code consumer services
                cout << " Welcome to Consumer services " << endl;
                cout << "1 Request for Groccery " << endl;
                cout << "2 Request for Pharmacy" << endl;
                cout << "3 Request for Carefour" << endl;
                cout << "4 Request for Gym" << endl;
                cout << "5 Request for Resturant " << endl;

                if (userOption == 1)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Groccery";
                    requestCount++;
                    cout << " Your order for Groccery has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 2)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Pharmacy";
                    requestCount++;
                    cout << " Your order for medicine has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 3)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Carefour";
                    requestCount++;
                    cout << " Your order from Carefour has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 4)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Gym";
                    requestCount++;
                    cout << " Your request for the subscription of Gym has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 5)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Resturant";
                    requestCount++;
                    cout << " Your request for the food from Resturant has been sent. Please wait a while we are on it " << endl;
                }

                getch();
            }

            if (userOption == 3)
            {
                // write here the code of schudule and subscription services
                cout << "Welcome to schudule and subscription " << endl;
                cout << "1 Request for water filter " << endl;
                cout << "2 Request for play area" << endl;
                cout << "3 Request for swimming pool" << endl;
                cout << "4 Request for Gym" << endl;
                cout << "5 Request for Parlor" << endl;
                cout << "6 Request for kitty party" << endl;
                cout << "7 Request for Mosque" << endl;
                cout << "8 Request for parking " << endl;

                if (userOption == 1)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "water filter  ";
                    requestCount++;
                    cout << " Your request for water filteration has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 2)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "play area  ";
                    requestCount++;
                    cout << " Your request for the play area slot has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 3)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "swimming pool  ";
                    requestCount++;
                    cout << " Your request for the swimming pool slot has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 4)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = " Gym  ";
                    requestCount++;
                    cout << " Your request for  Gym subscription has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 5)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Parlor  ";
                    requestCount++;
                    cout << " Your request for Parlor slot has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 6)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "kitty party";
                    requestCount++;
                    cout << " Your request for kitty party has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 7)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Mosque";
                    requestCount++;
                    cout << " Your request for schedule of prayer has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 8)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "parking";
                    requestCount++;
                    cout << " Your request for parking has been sent. Please wait a while we are on it " << endl;
                }

                getch();
            }

            if (userOption == 4)
            {
                // write here the code of security
                cout << "Welcome to security services " << endl;
                cout << "1 Request for CCTV " << endl;
                cout << "2 Request for Alerts" << endl;
                if (userOption == 1)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "CCTV  ";
                    requestCount++;
                    cout << " Your request for the CCTV photage has been sent. Please wait a while we are on it " << endl;
                }
                if (userOption == 2)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Alerts  ";
                    requestCount++;
                    cout << " Your request for the latest Alerts has been sent. Please wait a while we are on it " << endl;
                }
                getch();
            }

            if (userOption == 5)
            {
                // write here the code of bills service
                cout << "Welcome to bills service " << endl;
                cout << "1 Pay for Electricity bills" << endl;
                cout << "2 Pay for Gas bills" << endl;
                cout << "3 Pay for Water bills" << endl;
                cout << "4 Pay for PTCL bills" << endl;
                cout << "5 Pay for Cable and internet bills" << endl;

                if (userOption == 1)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Pay for Electricity bills  ";
                    requestCount++;
                    cout << " Your request to Pay for Electricity bills has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 2)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Pay for Gas bills  ";
                    requestCount++;
                    cout << " Your request to Pay for Gas bills has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 3)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Pay for Water bills  ";
                    requestCount++;
                    cout << " Your request for water bill has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 4)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Pay for PTCL bills  ";
                    requestCount++;
                    cout << " Your request for Pay for PTCL bills has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 5)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Pay for Cable and internet bills  ";
                    requestCount++;
                    cout << " Your request for the Pay for Cable and internet bills has been sent. Please wait a while we are on it " << endl;
                }

                getch();
            }

            if (userOption == 6)
            {
                // write here the code of Emergencey services
                cout << "Welcome to emergencey services " << endl;
                cout << "1 Request for Doctor" << endl;
                cout << "2 Request for Robbery  " << endl;
                cout << "3 Request for Fire Alarm" << endl;
                cout << "4 Request for Harrasment" << endl;

                if (userOption == 1)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Doctor  ";
                    requestCount++;
                    cout << " Your request for the Doctor has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 2)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Robbery  ";
                    requestCount++;
                    cout << " Your request for Anti-Robbery alarm has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 3)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Fire Alarm  ";
                    requestCount++;
                    cout << " Your request for the Fire Alarm has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 4)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Harrasment  ";
                    requestCount++;
                    cout << " Your request for the anti-Harrasment team has been sent. Please wait a while we are on it " << endl;
                }

                getch();
            }

            if (userOption == 7)
            {
                // write here the code of Notifications
                cout << "Welcome to the notifications " << endl;
                cout << "1 Request for updates" << endl;
                cout << "2 Request for Anouncement" << endl;

                if (userOption == 1)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = " Request for updates  ";
                    requestCount++;
                    cout << " Your request for  Request for updates has been sent. Please wait a while we are on it " << endl;
                }

                if (userOption == 2)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "Request for Anouncement  ";
                    requestCount++;
                    cout << " Your request for Request for Anouncement has been sent. Please wait a while we are on it " << endl;
                }

                getch();
            }

            if (userOption == 8)
            {
                // write here the code of Complainets and feedback
                cout << "Welcome to complainets and feedbacks " << endl;
                cout << " 1 Request for complainets" << endl;

                if (userOption == 5)
                {
                    requestUser[requestCount] = username;
                    requestService[requestCount] = "complaints  ";
                    requestCount++;
                    string feedback;
                    cout << "Write your feedback and complaints: " << endl;
                    cin >> feedback;
                    cout << " Thank you for your feedback we will work on it " << endl;
                }

                getch();
            }
        }

        if (userOption == 3)
        {
            // write here the code Guest service
            cout << "Welcome to guest services " << endl;
            cout << "1 Request for Avaliability" << endl;
            cout << "2 Request for Waiting in waiting area" << endl;
            cout << "3 Request for Parking system" << endl;

            string username;
            cout << "Enter you name: ";
            cin >> username;

            if (userOption == 5)
            {

                requestUser[requestCount] = username;
                requestService[requestCount] = "Avaliability";
                requestCount++;
                cout << " You Request for asking the Avaliability has been sent. Please wait a while we are on it " << endl;
            }

            if (userOption == 5)
            {

                requestUser[requestCount] = username;
                requestService[requestCount] = "Waiting in waiting area";
                requestCount++;
                cout << " Your request Waiting in waiting area has been sent. Please wait a while we are on it " << endl;
            }

            if (userOption == 5)
            {
                requestUser[requestCount] = username;
                requestService[requestCount] = "Parking system  ";
                requestCount++;
                cout << " Your request for the Parking system has been sent. Please wait a while we are on it " << endl;
            }

            getch();
        }
        else if (userOption == 4)
        {
            break;
        }
        else
        {
            cout << "You Entered wrong Option" << endl;
        }
    }

    cout << endl
         << "Thanks for using this Software" << endl;
}