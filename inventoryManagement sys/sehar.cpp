//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//class SignInn
//{
//private:
//	 string username, password;
//	static int shopkeeprID;
//public:
//	SignInn() {}
//	SignInn(string username, string password) :username(username), password(password)
//	{
//		shopkeeprID++;
//	}
//	void getUsernameAndPassword()
//	{
//		cout << "Enter a Suitable Username:";
//		cin >> username;
//		cout << "Enter a strong password:";
//		cin >> password;
//	}
//	
//};
//int SignInn::shopkeeprID = 0001;
//
//
//class AdministratorModule
//{
//private:
//	string firstname, lastname;
//	string email, registrationdate, gender, bloodgroup, contact, address;
//	int product;
//	bool billPaid;
//	string productname,category;
//
//public:
//	AdministratorModule(){} 
//	void inputShopkeeper()
//	{
//		cout << "Enter your First Name : ";
//		cin >> firstname;
//		cout << "Enter your Last Name : ";
//		cin >> lastname;
//		cout << "Enter your Mail : ";
//		cin >> email;
//		cout << "Enter the registration date : ";
//		cin >> registrationdate;
//		cout << "Enter your gender : ";
//		cin.ignore();
//		getline(cin, gender);
//		cout << "Enter your blood group : ";
//		getline(cin, bloodgroup);
//		cout << "Enter your contact : ";
//		getline(cin, contact);
//		cout << "Enter your address : ";
//		getline(cin, address);
//	}
//	void textFileOpen()
//	{
//		ofstream file("shopkeeper.txt", ios::app);
//		if (file.is_open())
//		{
//			//file << "Customer Number : " << shopkeeperID;
//			file << firstname << " " << lastname << " " << email;
//			file << " " << registrationdate << " " << gender << " " << bloodgroup;
//			file << " " << contact << " " << address;
//			file.close();
//		}
//		else
//		{
//			cout << "Unable to open file";
//		}
//	}
//	void inputCustomer()
//	{
//		cout << "Enter your First Name : ";
//		cin >> firstname;
//		cout << "Enter your Last Name : ";
//		cin >> lastname;
//		cout << "Enter your Mail : ";
//		cin >> email;
//		cout << "Enter the registration date : ";
//		cin >> registrationdate;
//		cout << "Enter your gender : ";
//		cin.ignore();
//		getline(cin, gender);
//		cout << "Enter your blood group : ";
//		getline(cin, bloodgroup);
//		cout << "Enter your contact : ";
//		getline(cin, contact);
//		cout << "Enter your address : ";
//		getline(cin, address);
//		cout << "Enter the number product selected : ";
//		cin >> product;
//		//cout << "Did u pay the bill? (0/1)";
//		
//	}
//	void textFileOpen1()
//	{
//		ofstream file("customer.txt", ios::app);
//		if (file.is_open())
//		{
//			//file << "Customer Number : " << shopkeeperID;
//			file << firstname << " " << lastname << " " << email;
//			file << " " << registrationdate << " " << gender << " " << bloodgroup;
//			file << " " << contact << " " << address << " " << product;
//			file.close();
//		}
//		else
//		{
//			cout << "Unable to open file";
//		}
//	}
//	void newproduct()
//	{
//		//count
//		cout << "Enter category : ";
//		//cout << "1)sports";// menu add krna hai
//		cin >> category;
//		if (category=="Sports")
//		{
//			cout << "Enter what sports good u want ";
//			cin >> productname;
//		}
//		else if (category == "Garments") 
//		{
//			cout << "Enter Garment type";
//			cin >> productname;
//		}
//		else if (category == "Eatables")
//		{
//			cout << "Enter Eatable type";
//			cin >> productname;
//		}
//		else if (category == "Medicine")
//		{
//			cout << "Enter Medicine type";
//			cin >> productname;
//		}
//		else if (category == "Fashion")
//		{
//			cout << "Enter Fashion type";
//			cin >> productname;
//		}
//
//	}
//	/*void NewCustomer()
//	{
//
//		cout << "Enter your First Name : ";
//		cin >> firstname;
//		cout << "Enter your Last Name : ";
//		cin >> lastname;
//		cout << "Enter your Mail : ";
//		cin >> email;
//		cout << "Enter the registration date : ";
//		cin >> registrationdate;
//		cout << "Enter your gender : ";
//		cin.ignore();
//		getline(cin, gender);
//		cout << "Enter your blood group : ";
//		getline(cin, bloodgroup);
//		cout << "Enter your contact : ";
//		getline(cin, contact);
//		cout << "Enter your address : ";
//		getline(cin, address);
//		cout << "Enter the number product selected : ";
//		cin >> product;
//	}*/
//	void textFileOpen2()
//	{
//		ofstream file("products.txt", ios::app);
//		if (file.is_open())
//		{
//			//file << "Customer Number : " << shopkeeperID;
//			file << category << " " << productname;
//			file.close();
//		}
//		else
//		{
//			cout << "Unable to open file";
//		}
//	}
//};
//class ShopkeeperModule
//{
//private:
//	string firstname, lastname;
//	string email, registrationdate, gender, bloodgroup, contact, address;
//	int ShopkeeperId;
//	SignInn sign;
//	AdministratorModule AM;
//public:
//	ShopkeeperModule() 
//	{
//		ShopkeeperId = 0000;
//	}
//	void RegisterShopkeeper()
//	{
//		ShopkeeperId++;
//		cout << "Enter First Name:";
//		cin >> firstname;
//		cout << "Enter Last Name:";
//		cin >> lastname;
//		cout << "Shopkeeper Id:" << ShopkeeperId << endl;
//		cout << "Enter your Mail : ";
//		cin >> email;
//		cout << "Enter the registration date : ";
//		cin >> registrationdate;
//		cout << "Enter your gender : ";
//		cin.ignore();
//		getline(cin, gender);
//		cout << "Enter your blood group : ";
//		getline(cin, bloodgroup);
//		cout << "Enter your contact number : ";
//		getline(cin, contact);
//		cout << "Enter your address : ";
//		getline(cin, address);
//		AM.textFileOpen();
//	}
//	void UserNameAndPassword()
//	{
//		sign.getUsernameAndPassword();
//	}
//	void AddNewProduct()
//	{
//	}
//	void EditProductDetails()
//	{
//	}
//	void ViewProduct()
//	{
//	}
//	
//};
//
//
//int main()
//{
//	int num;
//	string password, username;
//	cout << "Welcome to Inventory Management System.";
//	cout << endl << "Press 1 for Admin.";
//	cout << endl << "Press 2 for Shopkeeper.";
//	cout << endl << "Press 3 for Customer." << endl;
//	cout << "Choose your option." << endl;
//	cin >> num;
//	switch (num)
//	{
//	case 1:
//	{
//		AdministratorModule obj;
//		cout << "Enter your username and password : " << endl;
//		cin >> username;//>> password;
//		const char* filename = "pass.txt";
//		ifstream fileStream(filename);
//		if (!fileStream.is_open())
//		{
//			cout << "Error opening file: " << filename << endl;
//			return 1;
//		}
//		string line;
//		if (getline(fileStream, line))
//		{
//			if (line == username)//&& line == password)
//			{
//				cout << "Your password and username is valid.";
//				//cout << line << std::endl;
//				while (true)
//				{
//					cout << "Press 1 to add shopkeeper." << endl;
//					cout << "Press 2 to add customer." << endl;
//					cout << "Press 3 to add product." << endl;
//					cout << "Press 4 to edit shopkeeper details." << endl;
//					cout << "Press 5 to edit Customer details." << endl;
//					cout << "Press 6 to edit product details." << endl;
//					cout << "Press 7 to Exit.";
//					int n;
//					cin >> n;
//					switch (n) {
//					case 1:
//						obj.inputShopkeeper();
//						obj.textFileOpen();
//						break;
//					case 2:
//						obj.inputCustomer();
//						obj.textFileOpen1();
//						break;
//					case 3:
//						obj.newproduct();
//						obj.textFileOpen2();
//						break;
//					case 7:
//						break;
//					}
//
//				}
//			}
//
//		}
//	}
//	case 2:
//	{
//		ShopkeeperModule shopkeeper;
//		cout << "1. Register Shopkeeper\n" << "2. Sign in\n" << "3. Add new Product\n" << "4. Edit Product Details\n" << "5. View Products\n" << "6. Exit";
//		int choice;
//		cout << endl;
//		cout << "Enter your choice:";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//		{
//			shopkeeper.RegisterShopkeeper();
//		}
//		case 2:
//		{
//			shopkeeper.UserNameAndPassword();
//		}
//		}
//
//	}
//	}
//}
