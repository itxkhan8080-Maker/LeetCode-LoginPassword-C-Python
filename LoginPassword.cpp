#include<iostream>
#include<fstream> // header file for file handling 
#include<string>  // for string values 

using namespace std;

int main(){ // main function

    string  appname , name, password;  // Declare String's
    string  app , n, p;
    
    cout<<"================================="<<endl;
    cout<<"           Create Account        "<<endl;
    cout<<"================================="<<endl;
    cout<<"Enter Application Name:"<<endl;
    getline(cin, appname);
    cout<<"Enter Username:"<<endl;
    getline(cin, name);                // using getline function to get input from user only for string
    cout<<"Enter Password:"<<endl;
    getline(cin, password);

    cout<<"================================="<<endl;
    cout<<"           Login Account         "<<endl;
    cout<<"================================="<<endl;
    cout<<"Enter Application Name:"<<endl;
    getline(cin ,app);
    cout<<"Enter Username:"<<endl;
    getline(cin, n);
    cout<<"Enter Password:"<<endl;
    getline(cin, p);

    if(n == name && p == password && app == appname){       // Program Logic
        cout<<"Login Successfully!"<<endl;
    } else {
        cout<<"Invalid Credentials!"<<endl;
    }

    ofstream file("Login_Saved.txt", ios::app);  // Use file hanldin to saved login passwords
    
    if(file.is_open()) {

        file<<"================================="<<endl;
        file<<"         Password Manager        "<<endl;
        file<<"================================="<<endl;
        file<<"Application Name:\n"<<app<<endl;
        file<<"Username:\n"<<n<<endl;  
        file<<"Password:\n"<<p<<endl; 
        file.close();
    } else {
        cout<<"Unable to open file!"<<endl;
    }

    return 0;
}