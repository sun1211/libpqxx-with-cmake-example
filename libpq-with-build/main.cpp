#include <iostream>
#include <pqxx/pqxx>

using namespace std;
using namespace pqxx;

int main(int argc, char *argv[])
{
    try
    {
        connection C("dbname = postgres user = postgres password = mysecretpassword \
      hostaddr = 127.0.0.1 port = 5433");
        if (C.is_open())
        {
            cout << "Opened database successfully: " << C.dbname() << endl;
        }
        else
        {
            cout << "Can't open database" << endl;
            return 1;
        }
    }
    catch (const std::exception &e)
    {
        cerr << e.what() << std::endl;
        return 1;
    }
}
