#pragma once
#include "Header.h"
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<windows.h>

using namespace std;

int shopID = 1000;
int custumID = 0;
 
void loading(int zx);
class AdministratorModule
{
private:
    string firstname, lastname;
    string email, registrationdate, gender, bloodgroup, contact, address;
    int product;
    bool billPaid;
    string category;
    string productname;

public:
    AdministratorModule();
    AdministratorModule(string fName, string lName, string username,
        string email, string password, string registrationDate,
        string gender, string bloodGroup, string contactNo,
        string address);
    void inputShopkeeper();
    void textFileOpen();
    void EditShopkeeper();
    void DeleteShopkeeper();
    void inputCustomer();
    void textFileOpen1();
    void EditCustomer();
    void newproduct();
    void textFileOpen2();
    void EditProduct();

};
class Shopkeeper
{
    AdministratorModule obj11;
public:
    Shopkeeper();
    void addproduct();
    void editproduct();
    void registration();

};
class Customer
{
    AdministratorModule obj11;
public:
    string cart;
    Customer();
    void registration();
    void purchaseProduct();
    void saveCartToFile();
    void addToCart(const string& product, const string& price);
    bool checkout();




};



