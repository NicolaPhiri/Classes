#include <iostream>
using namespace std;
class Client{ //Point of sale system. It's a template/ model
public: 
string ClientNumber;
string Firstname;
string Surname;
string Contact;
string Email;
//Constructers are used to intialise a variable hat helps in not allowing the programm to 
//crash if the user doesn't enter the require information
Client(string ClientNumber,string Firstname,string Surname,string Contact,string Email)
{ //parameter - An input to a function
this->ClientNumber=ClientNumber;
this->Firstname=Firstname;
this->Surname=Surname;
this->Contact=Contact;
this->Email=Email;
}
};

int main()
{
    /*Your are now specifying the clients using the client class to specifiy which clients and use the 
    different public classes you created to gain the information for each indivitual client*/
    Client client1("CLI100","Someday","Programming","0758426468","someday@falsebay.co.za");
    Client client2("CLI200","Someway","Programmed","0869537579","someway@falsebay.co.za");
    cout<<client1.Contact+"\n";
    cout<<client2.Email + "\n";
    return 0;
}