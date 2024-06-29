//#include<iostream>
//#include<string>
//#include<fstream>
//#include<iomanip>
//#include<windows.h>
//
//using namespace std;
//
//int shopID = 1000;
//int custumID = 0;
//
//void loading(int zx)
//{   
//    system("cls");
//    int xy = 0;
//    while (!(xy == 2))
//    {
//        system("color 6");
//        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t INVENTORY MANAGEMENT SYSTEM";
//        Sleep(0700);
//        cout << ".";
//        Sleep(0700);
//        cout << ".";
//        Sleep(0700);
//        cout << ".";
//        Sleep(0700);
//        system("cls");
//        xy++;
//    }
//}
//class AdministratorModule
//{
//private:
//    string firstname, lastname;
//    string email, registrationdate, gender, bloodgroup, contact, address;
//    int product;
//    bool billPaid;
//    string category;
//    string productname;
//
//public:
//    AdministratorModule() {} //default krna h
//    void inputShopkeeper()
//    {
//        ++shopID;
//        cout << "AUTO GENERATED ID : " << shopID;
//        cout << endl << "ENTER YOUR FIRST NAME: ";
//        cin >> firstname;
//        cout << "ENTER YOUR LAST NAME: ";
//        cin >> lastname;
//        cout << "ENTER YOUR MAIL: ";
//        cin >> email;
//        cout << "ENTER THE REGISTRATION DATE: ";
//        cin >> registrationdate;
//        cout << "ENTER YOUR GENDER: ";
//        cin >> gender;
//        cout << "ENTER YOUR BLOOD GROUP: ";
//        cin >> bloodgroup;
//        cout << "ENTER YOUR CONTACT: ";
//        getline(cin, contact);
//        cin.ignore();
//        cout << "ENTER YOUR ADDRESS: ";
//        getline(cin, address);
//        cin.ignore();
//        system("cls");
//    }
//    void textFileOpen()
//    {
//        ofstream file("shopkeeper.txt", ios::app);
//        if (file.is_open())
//        {
//            file << firstname << " " << lastname << " " << email << " " << registrationdate << " " << gender << " " << bloodgroup << " " << contact << " " << address << endl;
//            cout << endl;
//            file.close();
//        }
//    }
//    void EditShopkeeper()
//    {
//        int id;
//        ifstream file("shopkeeper.txt");
//        if (file.is_open())
//        {
//            string line;
//            while (getline(file, line))
//            {
//                cout << "ENTER THE ID TO CHECK: ";
//                cin >> id;
//                if (shopID == id)
//                {
//                    cout << "id found" << endl;
//                    ofstream file("shopkeeper.txt", ios::app);
//                    if (file.is_open())
//                    {
//                        cout << "ENTER DETAILS TO EDIT";
//                        cout << endl << "ENTER YOUR FIRST NAME: ";
//                        cin >> firstname;
//                        cout << "ENTER YOUR LAST NAME: ";
//                        cin >> lastname;
//                        cout << "ENTER YOUR MAIL: ";
//                        cin >> email;
//                        cout << "ENTER THE REGISTRATION DATE: ";
//                        cin >> registrationdate;
//                        cout << "ENTER YOUR GENDER: ";
//                        cin.ignore();
//                        getline(cin, gender);
//                        cout << "ENTER YOUR BLOOD GROUP: ";
//                        getline(cin, bloodgroup);
//                        cout << "ENTER YOUR CONTACT: ";
//                        getline(cin, contact);
//                        cout << "ENTER YOUR ADDRESS: ";
//                        getline(cin, address);
//                        file << " " << "UPDATED DETAILS OF : " << shopID << " " << firstname << " " << lastname << " " << email << " " << registrationdate << " " << gender << " " << bloodgroup << " " << contact << " " << address;
//                        cout << endl;
//                    }
//                }
//            }
//        }
//    }
//    void DeleteShopkeeper()
//    {
//        cout << "Now id count is :" << shopID;
//        cout << endl;
//        ifstream file("shopkeeper.txt");
//        string line;
//        if (file.is_open())
//        {
//            int shopID = 0;
//            while (getline(file, line))
//            {
//                cout << shopID << " " << line << '\n';
//                ++shopID;
//            }
//            file.close();
//        }
//        int delid;
//        cout << "Enter id number to Delete ";
//        cin >> delid;
//        ifstream inFile("shopkeeper.txt");
//        ofstream outFile("shopkeeper.txt");
//        if (inFile.is_open())
//        {
//            string line;
//            while (getline(inFile, line))
//            {
//                size_t pos = line.find(delid);
//
//                if (pos == string::npos)
//                {
//                    outFile << line << '\n';
//                }
//            }
//            inFile.close();
//            outFile.close();
//        }
//    }
//    void inputCustomer()
//    {
//        ++custumID;
//        cout << "AUTO GENERATED ID FOR CUSTOMER IS: " << custumID;
//        cout << endl;
//        cout << "ENTER YOUR FIRST NAME: ";
//        cin >> firstname;
//        cout << "ENTER YOUR LAST NAME: ";
//        cin >> lastname;
//        cout << "ENTER YOUR MAIL: ";
//        cin >> email;
//        cout << "ENTER THE REGISTRATION DATE: ";
//        cin >> registrationdate;
//        cout << "ENTER YOUR GENDER: ";
//        cin.ignore();
//        getline(cin, gender);
//        cout << "ENTER YOUR BLOOD GROUP: ";
//        getline(cin, bloodgroup);
//        cout << "ENTER YOUR CONTACT: ";
//        getline(cin, contact);
//        cout << "ENTER YOUR ADDRESS: ";
//        getline(cin, address);
//        cout << "ENTER THE NUMBER OF PRODUCTS SELECTED: ";
//        cin >> product;
//    }
//    void textFileOpen1()
//    {
//        ofstream file("customerr.txt", ios::app);
//        if (file.is_open())
//        {
//            file << firstname << " " << lastname << " " << email << " " << registrationdate << " " << gender << " " << bloodgroup << " " << contact << " " << address << " " << product;
//            file.close();
//        }
//    }
//    void EditCustomer()
//    {
//        int cID;
//        ifstream file("customerr.txt");
//        if (file.is_open())
//        {
//            string line;
//            while (getline(file, line))
//            {
//                cout << "ENTER THE ID TO CHECK: ";
//                cin >> cID;
//                if (custumID == cID)
//                {
//                    cout << "ID FOUND" << endl;
//                    ofstream file("customerr.txt", ios::app);
//                    if (file.is_open())
//                    {
//                        cout << "ENTER DETAILS TO EDIT";
//                        cout << endl << "ENTER YOUR FIRST NAME: ";
//                        cin >> firstname;
//                        cout << "ENTER YOUR LAST NAME: ";
//                        cin >> lastname;
//                        cout << "ENTER YOUR MAIL: ";
//                        cin >> email;
//                        cout << "ENTER THE REGISTRATION DATE: ";
//                        cin >> registrationdate;
//                        cout << "ENTER YOUR GENDER: ";
//                        cin.ignore();
//                        getline(cin, gender);
//                        cout << "ENTER YOUR BLOOD GROUP: ";
//                        getline(cin, bloodgroup);
//                        cout << "ENTER YOUR CONTACT: ";
//                        getline(cin, contact);
//                        cout << "ENTER YOUR ADDRESS: ";
//                        getline(cin, address);
//                        file << " " << "UPDATED DETAILS OF : " << shopID << " " << firstname << " " << lastname << " " << email << " " << registrationdate << " " << gender << " " << bloodgroup << " " << contact << " " << address;
//                        cout << endl;
//                    }
//                }
//            }
//        }
//    }
//    void newproduct()
//    {
//        cout << "Enter the category/type of product : ";
//        cout << endl << "1. Sports" << endl << "2. Garments" << endl << "3. Eatables" << endl << "4. Medicines" << endl << "5. Fashion" << endl;
//        cin >> category;
//        if (category == "Sports" || category == "sports")
//        {
//            cout << endl << "We have 5 things in sports category!" << endl;
//            cout << "1.Bat\n2.Ball\n3.FootBall\n4.Gloves\n5.Wickets\n";
//            cout << "Enter what sports good u want ";
//            cin >> productname;
//        }
//        else if (category == "Garments" || category == "garments")
//        {
//            cout << endl << "We have 3 types of Garments!\n";
//            cout << "\n1.Boxer\n2.West\n3.UnderPants\n";
//            cout << "Enter Garment type";
//            cin >> productname;
//        }
//        else if (category == "Eatables" || category == "eatables")
//        {
//            cout << "\nWe have 4 Eatable items!\n";
//            cout << "\nFrozenProducts\nFreshFruits\nDryFruits\nVegetables";
//            cout << "Enter your Eatable";
//            cin >> productname;
//        }
//        else if (category == "Medicine" || category == "medicine")
//        {
//            cout << "\nWe have 3 types of Medicine in stock!\n";
//            cout << "\nLiverMedicine\nHeartMedicine\nKidenyMedicine\n";
//            cout << "Enter Medicine type";
//            cin >> productname;
//        }
//        else if (category == "Fashion" || category == "fashion")
//        {
//            cout << "\nWe have Eastern and Western clothes!\n";
//            cout << "\nEasteren\nWesteren\n";
//            cout << "Enter Fashion type";
//            cin >> productname;
//        }
//    }
//    void textFileOpen2()
//    {
//        ofstream file("products.txt", ios::app);
//        if (file.is_open())
//        {
//            file << category << setw(10) << productname;
//            file.close();
//        }
//    }
//    void EditProduct()
//    {
//        int std_num;
//        ifstream file("products.txt");
//        if (file.is_open())
//        {
//            string line;
//            while (getline(file, line))
//            {
//                cout << "\nSTD NUMBER OF\nSports:100\nGarments:200\nEatables:300\nMedicine:400\nFashion:500\n";
//                cout << endl << "Enter the std_number to check!" << endl;
//                cin >> std_num;
//                ofstream file("products.txt", ios::app);
//                if (std_num == 100 && file.is_open())
//                {
//                    cout << "\nYou have selected sports category to edit!\n";
//                    cout << "\nEnter the product u want to replace from given Choices : \n1.Bat\n2.Ball\n3.FootBall\n4.Gloves\n5.Wickets\n";
//                    cin >> productname;
//                    file << "   " << "UPDATED PRODUCT : " << setw(5) << productname;
//                }
//                else if (std_num == 200 && file.is_open())
//                {
//                    cout << "\nYou have selected Garments category to edit!\n";
//                    cout << "Enter what garments u want to replace from given Choices : \n1.Boxer\n2.West\n3.UnderPants\n";
//                    cin >> productname;
//                    file << "   " << "UPDATED PRODUCT : " << setw(5) << productname;
//                }
//                else if (std_num == 300 && file.is_open())
//                {
//                    cout << "\nYou have selected Eatable category to edit!\n";
//                    cout << "Enter what Eatables u want to replace from given Choices : \nFrozenProducts\nFreshFruits\nDryFruits\nVegetables\n";
//                    cin >> productname;
//                    file << "   " << "UPDATED PRODUCT : " << setw(5) << productname;
//                }
//                else if (std_num == 400 && file.is_open())
//                {
//                    cout << "\nYou have selected the Medicine category to edit!\n";
//                    cout << "Enter what Medicines u want to replace from given Choices : \nLiverMedicine\nHeartMedicine\nKidenyMedicine\n";
//                    cin >> productname;
//                    file << "   " << "UPDATED PRODUCT : " << setw(5) << productname;
//                }
//                else if (std_num == 500 && file.is_open())
//                {
//                    cout << "\nYou have selected the Fashion category to edit!\n";
//                    cout << "Enter what type of Fashion u want Choices : \nEasteren\nWesteren\n";
//                    cin >> productname;
//                    file << "   " << "UPDATED PRODUCT : " << setw(5) << productname;
//                }
//
//            }
//        }
//    }
//};
//class Shopkeeper
//{
//    AdministratorModule obj11;
//public:
//    Shopkeeper() {}
//    void addproduct()
//    {
//        obj11.newproduct();
//        obj11.textFileOpen2();
//    }
//    void editproduct()
//    {
//        obj11.EditProduct();
//    }
//    void registration()
//    {
//        obj11.inputShopkeeper();
//        obj11.textFileOpen();
//    }
//
//};
//class Customer
//{
//    AdministratorModule obj11;
//public:
//    string cart;
//    void registration()
//    {
//        obj11.inputShopkeeper();
//        obj11.textFileOpen();
//    }
//    void purchaseProduct()
//    {
//        int price = 50, bats = 5, balls = 5, wickets = 5, tshirts = 5, jeans = 5, pringles = 5, ketchup = 5, brufen = 5, panadol = 5, lipStick = 5, hairBands = 5;
//        bool end = false;
//        while (!end)
//        {
//            int option;
//            cout << "CHOOSE YOUR CATEGORY FROM THE STOCK: " << endl;
//            cout << "1. Sports" << endl;
//            cout << "2. Garments" << endl;
//            cout << "3. Eatables" << endl;
//            cout << "4. Medicines" << endl;
//            cout << "5. Fashion" << endl;
//            cin >> option;
//            switch (option)
//            {
//            case 1:
//                int subOption;
//                cout << "CHOOSE YOUR PRODUCT FROM THE STOCK: " << endl;
//                cout << "1. Bats (AVAILABLE: " << bats << ")(PRICE: " << price << ")" << endl;
//                cout << "2. Balls (AVAILABLE: " << balls << ")(PRICE: " << price << ")" << endl;
//                cout << "3. Wickets(AVAILABLE: " << wickets << ")(PRICE: " << price << ")" << endl;
//                cin >> subOption;
//                if (subOption == 1 && bats > 0)
//                {
//                    bats--;
//                    addToCart("Bats", "100");
//                }
//                else if (subOption == 2 && balls > 0)
//                {
//                    balls--;
//                    addToCart("Balls", "100");
//                }
//                else if (subOption == 3 && wickets > 0)
//                {
//                    wickets--;
//                    addToCart("Wickets", "100");
//                }
//                else
//                {
//                    cout << "INVALID OPTION, ENTER AGAIN!";
//                    cin >> subOption;
//                }
//                break;
//
//            case 2:
//                cout << "CHOOSE YOUR PRODUCT FROM THE STOCK: " << endl;
//                cout << "1. tshirts(AVAILABLE: " << tshirts << ")(PRICE: " << price << ")" << endl;
//                cout << "2. jeans(AVAILABLE: " << jeans << ")(PRICE: " << price << ")" << endl;
//                cin >> subOption;
//                if (subOption == 1 && tshirts > 0)
//                {
//                    tshirts--;
//                    addToCart("Tshirts", "100");
//                }
//                else if (subOption == 2 && jeans > 0)
//                {
//                    jeans--;
//                    addToCart("Jeans", "100");
//                }
//                else
//                {
//                    cout << "INVALID OPTION, ENTER AGAIN!";
//                    cin >> subOption;
//                }
//                break;
//            case 3:
//                cout << "CHOOSE YOUR PRODUCT FROM THE STOCK: " << endl;
//                cout << "1. Pringles(AVAILABLE: " << pringles << ")(PRICE: " << price << ")" << endl;
//                cout << "2. Ketchup(AVAILABLE: " << ketchup << ")(PRICE: " << price << ")" << endl;
//                cin >> subOption;
//                if (subOption == 1 && pringles > 0)
//                {
//                    pringles--;
//                    addToCart("Pringles", "100");
//                }
//                else if (subOption == 2 && ketchup > 0)
//                {
//                    ketchup--;
//                    addToCart("Ketchup", "100");
//                }
//                else
//                {
//                    cout << "INVALID OPTION, ENTER AGAIN!";
//                    cin >> subOption;
//                }
//                break;
//
//            case 4:
//                cout << "CHOOSE YOUR PRODUCT FROM THE STOCK: " << endl;
//                cout << "1. Brufen(AVAILABLE: " << brufen << ")(PRICE: " << price << ")" << endl;
//                cout << "2. Panadol(AVAILABLE: " << panadol << ")(PRICE: " << price << ")" << endl;
//                cin >> subOption;
//                if (subOption == 1 && brufen > 0)
//                {
//                    brufen--;
//                    addToCart("Brufen", "100");
//                }
//                else if (subOption == 2 && panadol > 0)
//                {
//                    panadol--;
//                    addToCart("Panadol", "100");
//                }
//                else
//                {
//                    cout << "INVALID OPTION, ENTER AGAIN!";
//                    cin >> subOption;
//                }
//                break;
//            case 5:
//                cout << "CHOOSE YOUR PRODUCT FROM THE STOCK: " << endl;
//                cout << "1. Lipstick(AVAILABLE: " << lipStick << ")(PRICE: " << price << ")" << endl;
//                cout << "2. Hair Bands(AVAILABLE: " << hairBands << ")(PRICE: " << price << ")" << endl;
//                cin >> subOption;
//                if (subOption == 1 && lipStick > 0)
//                {
//                    lipStick--;
//                    addToCart("Lipstick", "100");
//                }
//                else if (subOption == 2 && hairBands > 0)
//                {
//                    hairBands--;
//                    addToCart("Hair Bands", "100");
//                }
//                else
//                {
//                    cout << "INVALID OPTION, ENTER AGAIN!";
//                    cin >> subOption;
//                }
//                break;
//
//            default:
//                cout << "INVALID OPTION, ENTER AGAIN!\n";
//                break;
//            }
//            cout << "Do you want to continue shopping? (N to exit): ";
//            char choice;
//            cin >> choice;
//            if (choice == 'N' || choice == 'n')
//            {
//                end = true;
//            }
//            else
//            {
//                end != true;
//            }
//        }
//        cout << "Items added to cart!!!" << endl;
//    }
//    void saveCartToFile()
//    {
//        ofstream file("prod.txt", ios::app);
//        if (file.is_open())
//        {
//            file << cart << " ";
//            file.close();
//            cout << "Cart items saved.\n";
//        }
//    }
//
//    void addToCart(const string& product, const string& price)
//    {
//        if (!cart.empty())
//        {
//            cart += "\n";
//        }
//        cart += product + product + "," + price;
//        saveCartToFile();
//    }
//    bool checkout()
//    {
//        int totalAmount = 100;
//        string product, price;
//        double availableCash;
//        cout << "Enter your available cash: ";
//        cin >> availableCash;
//
//        if (totalAmount > availableCash)
//        {
//            cout << "Not enough cash available for checkout.\n";
//            return false;
//        }
//        else
//        {
//            cout << "proceed to checkout!";
//            cout << endl;
//        }
//        string shipmentAddress;
//        cout << "Enter your shipment address: ";
//        cin >> shipmentAddress;
//        cout << "Thank you for shopping!\n";
//        cout << "Your purchased items:\n";
//        cout << cart << endl;
//        return true;
//    }
//};
//
//int main()
//{
//    loading(5);
//    int num;
//    string password, username;
//    system("color 6");
//
//oper:cout << "\n\n\n\n\t\t\t\t~MAIN MENU";
//    cout << endl << "\n\t\t1)LOGIN AS ADMIN.";
//    cout << endl << "\t\t2)LOGIN AS SHOPKEEPER.";
//    cout << endl << "\t\t3)LOGIN AS CUSTOMER." << endl;
//    cout << "\n\t\tENTER YOUR MODULE TYPE : ";
//    cin >> num;
//    system("cls");
//    if (num == 1)
//    {
//        system("color 3");
//        AdministratorModule obj;
//        cout << "\n\n\n\n\t\t\t\tENTER USERNAME AND PASSWORD FOR THE ADMIN: ";
//        cin >> username >> password;
//        cout << endl;
//        const char* filename = "pass.txt";
//        ifstream fileStream(filename);
//        string line;
//        if (getline(fileStream, line))
//        {
//            if (line == username)//&& line == password)
//            {
//                cout << "ADMIN LOGIN SUCCESS.";
//                cout << endl;
//                while (true)
//                {
//                    cout << endl;
//                    system("color 4");
//                    cout << "ADMIN HAS THE FOLLOWING AUTHORITIES" << endl;
//                    cout << endl;
//                    cout << "1)ADD SHOPKEEPER." << endl;
//                    cout << "2)ADD CUSTOMER." << endl;
//                    cout << "3)ADD PRODUCT." << endl;
//                    cout << "\n4)EDIT SHOPKEEPERS DETAILS." << endl;
//                    cout << "5)EDIT CUSTOMER DETAILS." << endl;
//                    cout << "6)EDIT PRODUCT DETAILS." << endl;
//                    cout << endl;
//                    cout << "8)EXIT ADMIN MODULE AND RETURN TO MAIN MENU.";
//                    cout << endl;
//                    int n;
//                    cout << "\nENTER YOUR CHOICE : ";
//                    cin >> n;
//                    cout << endl;
//                    switch (n)
//                    {
//                    case 1:
//                        obj.inputShopkeeper();
//                        obj.textFileOpen();
//                        break;
//                    case 2:
//                        obj.inputCustomer();
//                        obj.textFileOpen1();
//                        break;
//                    case 3:
//                        obj.newproduct();
//                        obj.textFileOpen2();
//                        break;
//                    case 4:
//                        obj.EditShopkeeper();
//                        goto oper;
//                        break;
//                    case 5:
//                        obj.EditCustomer();
//                        goto oper;
//                        break;
//                    case 6:
//                        obj.EditProduct();
//                        goto oper;
//                        break;
//                    case 7:
//                        obj.DeleteShopkeeper();
//                        break;
//                    case 8:
//                        system("cls");
//                        goto oper;
//                        break;
//                    }
//
//                }
//            }
//        }
//    }
//    else if (num == 2)
//    {
//        system("color 3");
//        Shopkeeper obj1;
//        int choice1;
//        cout << "\n\n\n\n\t\t\t\tENTER USERNAME AND PASSWORD FOR THE SHOPKEEPER: ";
//        cin >> username >> password;
//        cout << endl;
//        const char* filename1 = "shopkeeperPass.txt";
//        ifstream fileStream(filename1);
//        string line1;
//        if (getline(fileStream, line1))
//        {
//            if (line1 == username && line1 == password)
//            {
//                cout << "SHOPKEEPER LOGIN SUCCESS.";
//                cout << endl;
//                while (true)
//                {
//                    cout << "SHOPKEEPER HAS THE FOLLOWING AUTHORITIES" << endl;
//                    cout << endl;
//                    cout << "1)REGISTRATION" << endl;
//                    cout << "2)ADD PRODUCT" << endl;
//                    cout << "3)EDIT PRODUCT" << endl;
//                    cout << "4)EXIT" << endl;
//                    cout << "\nENTER YOUR CHOICE : ";
//                    cin >> choice1;
//                    cout << endl;
//                    if (choice1 == 1)
//                    {
//                        obj1.registration();
//                        cout << "SUCCESFULLY REGISTERED!";
//                    }
//                    else if (choice1 == 2)
//                    {
//                        obj1.addproduct();
//                    }
//                    else if (choice1 == 3)
//                    {
//                        obj1.editproduct();
//                    }
//                    else if (choice1 == 4)
//                    {
//                        system("cls");
//                        goto oper;
//                    }
//                    else
//                    {
//                        cout << "INVALID USERNAME OR PASSWORD!TRY AGAIN";
//                        system("pause");
//                        goto oper;
//                    }
//                }
//            }
//        }
//    }
//    else if (num == 3)
//    {
//        Customer obj2;
//        int choice2;
//        cout << "\n\n\n\n\t\t\t\tENTER USERNAME AND PASSWORD FOR THE SHOPKEEPER: ";
//        cin >> username >> password;
//        cout << endl;
//        
//        const char* filename2 = "customerPass.txt";
//        ifstream fileStream(filename2);
//        string line2;
//        if (getline(fileStream, line2))
//        {
//            if (line2 == username && line2 == password)
//            {
//                cout << "CUSTOMER LOGIN SUCCESS.";
//                cout << endl;
//                while (true)
//                {
//                    cout << "CUSTOMER HAS THE FOLLOWING AUTHORITIES" << endl;
//                    cout << endl;
//                    cout << "1)REGISTRATION" << endl;
//                    cout << "2)PURCHASE PRODUCT" << endl;
//                    cout << "3)ADD TO CART" << endl;
//                    cout << "4)CHECK OUT" << endl;
//                    cout << "5)EXIT" << endl;
//                    cout << "\nENTER YOUR CHOICE : ";
//                    cin >> choice2;
//                    cout << endl;
//                    if (choice2 == 1)
//                    {
//                        obj2.registration();
//                        cout << "SUCCESFULLY REGISTERED!";
//                    }
//                    else if (choice2 == 2)
//                    {
//                        obj2.purchaseProduct();
//                        obj2.saveCartToFile();
//                    }
//                    else if (choice2 == 3)
//                    {
//                       // obj2.addToCart(product,price);
//                    }
//                    else if (choice2 == 4)
//                    {
//                        obj2.checkout();
//                    }
//                    else
//                    {
//                        goto neechay;
//                    }
//                }
//            }
//        }
//    }
//neechay:cout << "THANKS FOR VISITING OUR SHOP!";
//}