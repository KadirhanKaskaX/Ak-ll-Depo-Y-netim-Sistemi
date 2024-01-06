#include <iostream>
#include <vector>
#include "Customer.h"
#include "Products.h"
#include "Sales.h"
#include "Stocks.h"
#include "Suppliers.h"
#include "Transaction.h"
#include <string>
#include <ctime>
#include "Liquid.h"
#include "Solid.h"
using namespace std;

int main() {
    vector<Products> productVector;
    vector<Customer> customerVector;
    vector<Sales> salesVector;
    vector<Suppliers> suppliersVector;
    vector<Liquid> liquidsVector;
    vector<Solid> solidsVector;

    Stocks* stocksArray = new Stocks[5];
    Transaction* transactionsArray = new Transaction[5];

    transactionsArray[0] = Transaction(1, "Satis", "2023-01-01", true);
    transactionsArray[1] = Transaction(2, "Alis", "2023-01-02", true);


    stocksArray[0] = Stocks(1, "Meyve Suyu", "S001", "Seftali",100);
    stocksArray[1] = Stocks(2, "Un", "S002", "Misir", 150);
    stocksArray[2] = Stocks(3, "Seker", "S003", "Pancar", 200);
    stocksArray[3] = Stocks(4, "Sut", "S004", "Pastorize", 250);
    stocksArray[4] = Stocks(5, "Yag", "S005", "Zeytin", 100);


    int secim;
    do {
        cout << "*MENU*" << endl;
        cout << "1- Urun Cikar\n2- Urun Ekle\n"
            << "3- Musteri Ekle\n4- Musteri Cikar\n"
            << "5- Satis Ekle\n"
            << "6- Tedarikci Ekle\n"
            << "7- Bilgileri Goster\n8- Cikis\nSeciminizi Yapiniz: ";

        cin >> secim;

        switch (secim) {
        case 1:
            int firstsecim;
            cout << "Bir Secim Yapiniz\n1-Sivi Urun\n2-Kati Urun\n3-Diger Urun: ";
            cin >> firstsecim;

            switch (firstsecim) {
            case 1:
                if (!liquidsVector.empty()) {
                    int id;
                    cout << "Cikarmak istediginiz sivi urunun index'ini giriniz: ";
                    cin >> id;

                    if (id >= 0 && id < liquidsVector.size()) {
                        liquidsVector.erase(liquidsVector.begin() + id);
                        cout << "Sivi urun cikarildi." << endl;
                    }
                    else {
                        cout << "Gecersiz index. Lutfen gecerli bir index giriniz." << endl;
                    }
                }
                else {
                    cout << "Sivi urun bulunamadi. Liste bos." << endl;
                }
                break;

            case 2:
                if (!solidsVector.empty()) {
                    int id;
                    cout << "Cikarmak istediginiz kati urunun index'ini giriniz: ";
                    cin >> id;

                    if (id >= 0 && id < solidsVector.size()) {
                        solidsVector.erase(solidsVector.begin() + id);
                        cout << "Kati urun cikarildi." << endl;
                    }
                    else {
                        cout << "Gecersiz index. Lutfen gecerli bir index giriniz." << endl;
                    }
                }
                else {
                    cout << "Kati urun bulunamadi. Liste bos." << endl;
                }
                break;

            case 3:
                if (!productVector.empty()) {
                    int id;
                    cout << "Cikarmak istediginiz diger urunun index'ini giriniz: ";
                    cin >> id;

                    if (id >= 0 && id < productVector.size()) {
                        productVector.erase(productVector.begin() + id);
                        cout << "Diger urun cikarildi." << endl;
                    }
                    else {
                        cout << "Gecersiz index. Lutfen gecerli bir index giriniz." << endl;
                    }
                }
                else {
                    cout << "Diger urun bulunamadi. Liste bos." << endl;
                }
                break;

            default:
                cout << "Gecersiz secim. Lutfen gecerli bir secim yapiniz." << endl;
                break;
            }
            break;

        case 2:
        {
            int secondSecim, litre, kilogram;
            string name, price;
            int firstId, secondId,Id; // Declare firstId and secondId outside the switch statement

            cout << "Bir Secim Yapiniz\n1-Sivi Urun\n2-Kati Urun\n3-Diger Urun";
            cin >> secondSecim;

            switch (secondSecim)
            {
            case 1:
                cout << "Urun bilgilerini giriniz:" << endl;
                cout << "Ad: ";
                cin >> name;
                cout << "Fiyat: ";
                cin >> price;
                cout << "Litre: ";
                cin >> litre;
                firstId = liquidsVector.size() + 1;
                liquidsVector.push_back(Liquid(firstId, name, price, litre));
                cout << "Yeni urun eklendi." << endl;
                break;
            case 2:
                cout << "Urun bilgilerini giriniz:" << endl;
                cout << "Ad: ";
                cin >> name;
                cout << "Fiyat: ";
                cin >> price;
                cout << "Kilogram: ";
                cin >> kilogram;
                secondId = solidsVector.size() + 1;
                solidsVector.push_back(Solid(secondId, name, price, kilogram));
                cout << "Yeni urun eklendi." << endl;
                break;

            case 3:
                cout << "Urun bilgilerini giriniz:" << endl;
                cout << "Ad: ";
                cin >> name;
                cout << "Fiyat: ";
                cin >> price;
                cout << "Kilogram: ";
                cin >> kilogram;
                Id = productVector.size() + 1;
                productVector.push_back(Products(Id, name, price));
                cout << "Yeni urun eklendi." << endl;
                break;
            }

        }
        break;

        case 3:
        {
            string customerAddress, customerRole;
            cout << "Musteri bilgilerini giriniz:" << endl;
            cout << "Adres: ";
            cin.ignore();
            getline(cin, customerAddress);
            cout << "Rol: ";
            getline(cin, customerRole);
            int id = customerVector.size() + 1;
            int mathRandom = (rand() % 2);
            customerVector.push_back(Customer(id, customerAddress, transactionsArray[mathRandom], customerRole));
            cout << "Yeni musteri eklendi." << endl;
        }
        break;

        case 4:
            if (!customerVector.empty()) {
                int id;
                cout << "Cikarmak istediginiz musteri index'ini giriniz: ";
                cin >> id;

                if (id >= 0 && id < customerVector.size()) {
                    customerVector.erase(customerVector.begin() + id);
                    cout << "Musteri cikarildi." << endl;
                }
                else {
                    cout << "Gecersiz index. Lutfen gecerli bir index giriniz." << endl;
                }
            }
            else {
                cout << "Musteri bulunamadi. Liste bos." << endl;
            }
            break;

        case 5:
        {
            int salesAmount,Id;
            string salesDate;
            cout << "Satis bilgilerini giriniz:" << endl;
            cout << "Almak istediginiz urunun stok id'sini giriniz.";
            cin >> Id;
            cout << "Adet Sayisi Giriniz. ";
            cin >> salesAmount;
            cout << "Tarih: ";
            cin.ignore();
            getline(cin, salesDate);
            int newId = salesVector.size() + 1;
            int mathRandom = (rand() % 2);
            if (stocksArray[Id - 1].getNumber() > 0 && salesAmount <= stocksArray[Id - 1].getNumber())
            {
                stocksArray[Id - 1].setStockAmount(stocksArray[Id - 1].getNumber() - salesAmount);
                salesVector.push_back(Sales(newId, salesAmount, salesDate, transactionsArray[mathRandom]));
                cout << "Yeni satis eklendi." << endl;

            }
            else {
                cout << "Bu miktarda urunumuz bulunmamaktadir o yuzden satis eklenememistir.";

            }
        }
        break;


        case 6:
        {
            string supplierName, supplierAddress, supplierPhoneNumber;
            cout << "Tedarikci bilgilerini giriniz:" << endl;
            cout << "Ad: ";
            cin.ignore();
            getline(cin, supplierName);
            cout << "Adres: ";
            getline(cin, supplierAddress);
            cout << "Telefon Numarasi: ";
            getline(cin, supplierPhoneNumber);
            int id = suppliersVector.size() + 1;
            suppliersVector.push_back(Suppliers(id, supplierName, supplierAddress, supplierPhoneNumber));
            cout << "Yeni tedarikci eklendi." << endl;
        }
        break;

        case 7:
            cout << "Default Urun Bilgileri:" << endl;
            for (const auto& product : productVector) {
                product.print(); 
            }
            cout << "Kati Urun Bilgileri:" << endl;

            for (const auto& solid : solidsVector) {
                solid.print();
            }
            cout << "Sivi Urun Bilgileri : " << endl;

            for (const auto& liquid : liquidsVector) {
                liquid.print();
            }

            cout << "Musteri Bilgileri:" << endl;
            for (const auto& customer : customerVector) {
                customer.print();
            }

            cout << "Satis Bilgileri:" << endl;
            for (const auto& sales : salesVector) {
                sales.print();
            }

            cout << "Stok Bilgileri:" << endl;
            for (int i = 0; i < 5; ++i) {
                stocksArray[i].print();
            }
            cout << "Tedarikci Bilgileri:" << endl;
            for (const auto& suppliers : suppliersVector) {
                suppliers.print();
            }
            break;

        case 8:
            break;

        default:
            cout << "Gecersiz secim. Lutfen gecerli bir secim yapiniz." << endl;
            break;
        }
    } while (secim != 8);

    delete[] transactionsArray;
    delete[] stocksArray;
    return 0;
}