#include <iostream>
using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int* ptr = array;  // Pointer to the first element of the array
    cout<<*ptr<<endl;

    int firstElement = *ptr;          // Accessing the value of the first element
    cout<<firstElement<<endl;

    int thirdElement = *(ptr + 2);    // Accessing the value of the third element
    cout<<thirdElement<<endl;

    *ptr = 10;                       // Modifying the value of the first element
    cout<<*ptr<<endl;

    int* ptr1 = &array[3];  // Pointer to the first element of the array
    cout<<*ptr1<<endl;
    
}



// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int& p = a;

//     p = 200;
//     cout<<p;
//     cout<<a;
    
// }


// #include <iostream>
// using namespace std;

// int main() {
//     string s = "Rna Dna";

//     char* p = &s[0];

//     while (*p !='\0') {
//         cout<<*p<<endl;
//         p++;
//     }
// }



// #include <iostream>
// #include <sstream>
// using namespace std;
// int main() {
//     string s = "Rana Ahamed k";
//     stringstream sobj(s);

//     string temp;

//     while (sobj >> temp) {
//         cout<< temp << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <sstream>
// using namespace std;
// int main() {
//     string str = "123";
//     int num;

//     stringstream ss(str);
//     ss >> num;

//     cout << "The integer value is: " << num << endl;

//     return 0;
// }




// #include <iostream>
// #include <sstream>

// int main() {
//     std::string str = "123";
//     int num;

//     std::stringstream ss(str);
//     ss >> num;

//     std::cout << "The integer value is: " << num << std::endl;

//     return 0;
// }




// // C++ Program to demonstrate string input using cin
// #include <iostream>
// using namespace std;

// int main() {

// 	string s;
	
// 	cout<<"Enter String"<<endl;
// 	cin>>s;

// 	cout<<"String is: "<<s<<endl;
// 	return 0;
// }



// // C++ Program to demonstrate C-style string declaration
// #include <iostream>
// using namespace std;

// int main()
// {

// 	char s1[] = { 'g', 'f', 'g', '\0' };
// 	char s2[4] = { 'g', 'f', 'g', '\0' };
// 	char s3[4] = "gfg";
// 	char s4[] = "gfg";

// 	cout << "s1 = " << s1 << endl;
// 	cout << "s2 = " << s2 << endl;
// 	cout << "s3 = " << s3 << endl;
// 	cout << "s4 = " << s4 << endl;

// 	return 0;
// }




// // C++ Program to demonstrate use of string keyword
// #include <iostream>
// using namespace std;

// int main()
// {

// 	string s = "GeeksforGeeks";
// 	string str("GeeksforGeeks");

// 	cout << "s = " << s << endl;
// 	cout << "str = " << str << endl;

// 	return 0;
// }





// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string r = "Rana Ahamed";
//     string s = "Anwar Hossain";
    
//     char c[15];

//     r.copy(c,4,0);

//     r.swap(s);

//     cout<<r<<endl;
//     cout<<s<<endl;
// }




// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string s = "Rana Ahamed";

//     string::iterator i ;
//     string::reverse_iterator i1 ;

//     cout<<"Forward iterator: ";
//     for (i=s.begin(); i!=s.end(); i++) {
//         if (i==s.begin()) *i='G';
//         cout<<*i;
//     }
//     cout<<endl;
//     cout<<endl;
//     cout<<"Main string: "<<s<<endl;

//     cout<<"Reverse iterator: ";
//     for (i1=s.rbegin(); i1!=s.rend(); i1++) {
//         if (i1==s.rbegin()) *i1='K';
//         cout<<*i1;
//     }
//     cout<<endl;
//     cout<<endl;

//     cout<<"Main string: "<<s<<endl;
//     cout<<"Constant forward iterator: ";
//     for (auto i2=s.cbegin(); i2!=s.cend(); i2++) {
//         cout<<*i2;
//     }
//     cout<<endl;
//     cout<<endl;

//     cout<<"Main string: "<<s<<endl;
//     cout<<"Constant reverse iterator: ";
//     for (auto i3=s.crbegin(); i3!=s.crend(); i3++) {
//         cout<<*i3;
//     }
//     cout<<endl;
//     cout<<endl;
//     cout<<"Main string: "<<s<<endl;

// }






// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string s = "Anwar Hossain";
//     cout<< s.length()<<endl;
//     cout<< s.capacity()<<endl;

// }



// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string f = "Rana Ahamed";
//     cout<< f.length()<<endl;
//     cout<< f.capacity()<<endl;
//     f.resize(15);
//     cout<< f << "Nai"<<endl;
// }