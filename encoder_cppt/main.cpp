//
//  main.cpp
//  encoder_cppt
//
//  Created by senior on 29/01/24.
//
/**
 Character types    char    Exactly one byte in size.            At least 8 bits.
 
char16_t                                                                              //Not smaller than char. At least 16 bits.
char32_t                                                                              //Not smaller than char16_t. At least 32 bits.
wchar_t                                                                               //Can represent the largest supported character set.
Integer types (signed)    signed char                                  //Same size as char. At least 8 bits.
signed short int                                                                   //Not smaller than char. At least 16 bits.
signed int                                                                            //Not smaller than short. At least 16 bits.
signed long int                                                                    //Not smaller than int. At least 32 bits.
signed long long int                                                            //Not smaller than long. At least 64 bits.
Integer types (unsigned)    unsigned char                         //(same size as their signed counterparts)
unsigned short int
unsigned int
unsigned long int
unsigned long long int
Floating-point types    float
double                                                                                 //Precision not less than float
long double                                                                        //Precision not less than double
Boolean type    bool
Void type    void                                                                 //no storage
Null pointer    decltype(nullptr)
 */

//#include <iostream>
//#include <string>
//#include <sstream>
//using namespace std;
//void func1();
//void func2();
//
//#define NEWLINE '\n';
//int main () {
//    string mystr;
//    int task_price;
//    int task_quantity;
//    cout << "Ask me, how much your work ? \n";
//    getline(cin, mystr);
//    stringstream(mystr) >> task_price;
//    cout << "Yeah! Your task price is " << task_price << " \n";
//    cout << "Then, ask me your task quantity \n";
//    getline(cin, mystr);
//    stringstream(mystr) >> task_quantity;
//    cout << "Your task quantitys is " << task_quantity << " \n";
//    
//    cout << "Your task price is ---- " << task_price << "and your task quantity " << task_quantity;
//    cout << "Total price: " << task_price * task_quantity << " \n";
//        return 0;
//}
//#include <iostream>
//#include <string>
//#include <sstream>
//using namespace std;
//int main(){
//    
//    // The while method;
//    
//    int n = 10;
//    while (n>0) {
//        cout << n << ", ";
//        --n;
//    }
//    cout << "liftoff!\n";
//    return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//    string str;
//    do{
//        cout << "Enter text: ";
//        getline(cin,str);
//        cout << "You entered: " << str << "\n";
//    }while(str != "stop it");
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//    for (int n=0, i=100 ; n!=i ; ++n, --i) {
//        cout << "[" << i << "]" << n << "\n";
//    }
//    cout << "\n";
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//    for (int i =0; i <= 10; i++){
//        cout << "24 * " << i << "\t=\t" << 24 * i << "\n";
//        cout << "[50] * [" << i << "]\t=\t[" << 50 * i << "]\n";
//    }
//}


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//int main(){
//    int sum = 0;
//    for (int i = 0; i < 10; i++) {
//        int x;
//        cout << "Enter a number\n";
//        cin>>x;
//        sum += x;
//    }
//    cout << "Sum:" << sum << "The average value is " << sum/10.0 << '\n';
//    return 0;
//}



//
//int main(){
//    int i,j;
//    for (j=1; j<=4; j++) {
//        for (i=1; i<=j; i++) {
//            cout << "*";
//        }
//        cout << "\n";
//    }
//}


//int main(){
//    int n = 3;
//    for (int i =0; i < 2 * n + 1; i++) {
//        cout << abs(i -n) << " | ";
//        for (int j = 0; j < 2 * n + 1; j++) {
//            
//            if (abs(j -n) + abs(i -n) <= n) {
////                cout << "-";
//            }else{
////                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//}
//int main(){
//    int n = 3;
//    for (int i =0; i <= n * 2 + 1; i++) {
//        for (int j = 0; j <= n * 2 + 1; j++) {
//            if (abs(j -n) + abs(i -n) <= n) {
//                cout << "*";
//            }else{
//                cout << " ";
//            }
//        }
//        cout << "\n";
//    }
//    cout << "\n";
//    return 0;
//}
//int main() {
//    int n = 7;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < i; ++j) {
//            cout << " ";
//        }
//        for (int k = 0; k < n - i; ++k) {
//            if (k % 2 == 0) {
//                cout << "0";
//            } else {
//                cout << "1";
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}
//int main (){
//    for (int i = 0; i <= 6; ++i) {
//           for (int j = 0; j < 10; ++j) {
//               if (j % 2 == 0 || i % 2 == 0) {
//                   cout << 0 << " " ;
//               }else{
//                   cout << 1 << " ";
//               }
//           }
//           cout << endl;
//       }
//    return 0;
//}
//int main(){
//    // Define the size of the square
//        int n = 4;
//
//        // Use nested loops to print the pattern
//        for (int i = 0; i < n; i++) { // This loop is for rows
//            for (int j = 0; j < n; j++) { // This loop is for columns
////                cout << (i == n - 1); break;
////                cout << (j == n - 1) << " ----  ";
//                // Print 1 if we're on the border, otherwise print 0
//                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
//                    std::cout << "1 ";
//                } else {
//                    std::cout << "0 ";
//                }
//            }
//            // After each row, print a newline character
//            std::cout << std::endl;
//        }
//
//        return 0;
//}


//int main (){
//    int n = 6;
//    for (int i = 0; i <= n; ++i) {
//        for (int j =0; j <= n; ++j) {
////            cout << i + j << " ";
//            if (i == 0 || i == n || j == n) {
//                cout << 0 << " " ;
//            }else{
//                if (j == (n /2) || i == (n /2) || j == 0) {
//                    cout << 0 << " ";
//                }else{
//                    cout << 1 << " ";
//                }
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}


// FUNCTIONS IN C++

void echo(auto string_value, bool endline = true){
    (endline == false) ? cout << string_value : cout << string_value << endl;
}
string concatenate(const string a, const string b){
    return a + b;
}
void odd(int x);
void even(int x);


void odd(int x){
    if ((x % 2) !=0) echo("This is odd: ");
    else even(x);
}
void even(int x){
    if ( ( x % 2 ) == 0) echo("This is even: ");
    else odd(x);
}
int add_func(){
    int i;
    do{
        echo ("Plese enter a number (0 to exit)");
        cin >> i;
        odd(i);
    }
    while (i!=0);
    return 0;
}

long factorial(long a){
    if (a > 1) {
        return (a * factorial(a -1));
    }else{
        return 1;
    }
}

int loop_1(){
    int i,j,k;
    i = 5;
    for (j = 0; j <= i; ++j) {
        for (k =0; k <= i; ++k) {
            if (k ==0 || j == 0 || k == i || j == i) {
                cout << 0 << " ";
            }else{
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// Templates

namespace encoder {
    int echo(auto string_value, bool endline = true){
        endline == true ? cout << string_value << endl : cout << string_value;
    }
}
template <class Encoder>
Encoder ovrld(Encoder a, Encoder b){
    return a + b;
}

int cryptography(){
    unsigned char a, b, tmp, c1, c2;
        scanf("%c", &a); //Первый ключ
        scanf("%c", &c1); //Пробел
        scanf("%c", &b); //Второй ключ
        scanf("%c", &c1); //Пробел
        while (EOF != scanf("%c", &c1)) //Пока не кончатся входные данные
        {
            scanf("%c", &c2);
            tmp=round((c1-b+256*c2)*1.0/a);
            printf("%c", tmp);
        }
        return 0;
}

 
#define WIDTH 5

#define HEIGHT 3



int jimmy [HEIGHT][WIDTH];

int n,m;



int main ()

{

    char myword[] = {'A','b','d','u','q','o','d','i','r','\0'};
    auto arr = "E";
     auto addr = *arr;
    cout << addr << " - " << endl;
        return 0;
}
