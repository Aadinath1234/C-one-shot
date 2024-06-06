// #1 starting of the codes 

// #include <iostream>

// int main() {
//     std::cout << "hello babe"  << std::endl << "hey bhai " << std::endl;
//     std::cout << "hey strivers";
//        return 0;

// }   











// #include <iostream> 
// using namespace std;

// int main(){
//       cout << "Hey strivers" << endl << "hey babe " << endl;
//       cout << "hey striver!";
//       return 0;
// }











// #include <iostream> 
// using namespace std;
    
// int main() {
//       int x, y;
//       cin >> x >> y;
//       cout << "value of x:  " << x << "and y : " << y;
//       return 0; 
// }









// basic syntax to write a simple c++ code having all the libraries at one time .
// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
     
//      return 0;
// }












// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
//     float x = 5.6;
//     float y = 5;
//     cout << "value of y : " << y;
//      return 0;
// }










// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
//    float x = 5.6;
//    double y = 5;

//    cout << "value of y " << y;
//    return 0;

// }










// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
//    string str;
//    getline(cin, str);  
//    cout << str;
//    return 0;

// }















// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
//       string ch = "g";
//       cout << ch;


//    return 0;

// }










//if else statement : 
// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
//        int age;

//        cin >> age;

//        if(age >= 18){
//          cout << "YOU are an adult ";
//        }
//        else{
//            cout << "you are not an adult! ";
//        }

//    return 0;

// }













// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
//        int age;

//        cin >> age;

//        if(age >= 18){
//          cout << "YOU are an adult ";
//        }
//        else if(age < 10){
//            cout << "you are not an adult! ";
//        }

//    return 0;

// }









// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
//         int  marks;
//         cin >> marks;

//         if(marks < 25){
//               cout << "f";
//         }
//         else if(marks <= 44){
//              cout << "E";
//         }
//         else if(marks <= 49){
//              cout << "d";
//         }
//         else if(marks <= 69){
//              cout << "c";
//         }
//         else if(marks <= 79){
//              cout << "b";
//         }
//         else if(marks <= 100){
//               cout << "A";
//         }
//         else{
//              cout << "nothing found";
//         }
//         return 0;
// }










//nested if else statement : 
// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
        
//       int age;
//       cin >> age;

//       if(age < 18){
//          cout << "not eligible for jobs";
//       }

//       else if(age <= 57){
//           cout << "eligible for job"; 
//             if(age >= 55){
//                  cout << ", but retirement soon";
//             }
//       }

//        else{
//              cout << "retirement time";
//        }


//         return 0;
// }









// switch case statement: 
// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
        
//       int day;
//       cin >> day;
       
//         switch(day){
//            case 1: 
//                 cout << "Monday";
//                 break;
//            case 2: 
//                 cout << "Tuesday";
//                 break;
//             case 3: 
//                cout << "Wednesday";
//                  break;
//             case 4:
//                 cout << "Thursday";
//                  break;
//             case 5:
//                 cout << "Friday";
//                 break;
//             case 6: 
//                cout << "Saturday";
//                break;
//             case 7: 
//                cout << "Sunday";


//         }
//         return 0;



        
// }













// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
        
//       int day;
//       cin >> day;
       
//         switch(day){
//            case 1: 
//                 cout << "Monday";
//                 break;
//            case 2: 
//                 cout << "Tuesday";
//                 break;
//             case 3: 
//                cout << "Wednesday";
//                  break;
//             case 4:
//                 cout << "Thursday";
//                  break;
//             case 5:
//                 cout << "Friday";
//                 break;
//             case 6: 
//                cout << "Saturday";
//                break;
//             case 7: 
//                cout << "Sunday";
//                break;
//             default : 
//                cout << "Invalid";


//         }
//         cout << "Check";
//         return 0;



        
// }
















// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
        
//          int arr[5];
//          cin >> arr[0]  >> arr[1] >> arr[2]  >> arr[3] >> arr[4];

//          cout << arr[0];


//         return 0;     
// }















// arrays : 2d arrays 
// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
        
//         int arr[3][5];

//         arr[1][3] = 78;

//         cout << arr[1][2];
          
//         return 0;     
// }












// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
        
//         string s = "Strivers";
//         cout << s[0];

          
//         return 0;     
// }









// strings: 
// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
        
//         string s = "Strivers";
//         int len = s.size();
//         cout << len;
//         s[len - 1] = 'z';

//         cout << s[len - 1];
//         cout << s;

          
//         return 0;     
// }










// for loop: 
// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
        
//         for (int i = 1; i<=5; i= i+1) {
//               cout << "Strivers" << endl;
//         }
         
          
//         return 0;     
// }










// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
//          int i;
//         for (int i = 5; i>0; i= i-1) {
//               cout << "Striver" << i << endl;
//         }
//         cout << i << endl;
         
          
//         return 0;     
// }









// while loop: 
//  #include <bits/stdc++.h> 
// using namespace std;

// int main(){
//          int i = 1;
//          while(i<=5) {
//                cout << "striver"  << i << endl;
//                i = i+ 1;
               
//          }
          
//         return 0;     
// }










// do while loop : 

// #include <bits/stdc++.h> 
// using namespace std;

// int main(){
//          int i = 2;

//          do{
//                 cout << "Striver" << i << endl;
//                 i = i+ 1;

//          } while(i<=1);
//          cout << i << endl;
//         return 0;     
// }










// functions : 
// #include <bits/stdc++.h> 
// using namespace std;


// void printName(){
//         cout << "hey strivers";
// }



// int main(){
//       int name;
//       cin >> name;
//       printName();
//       return 0;  
// }






// #include <bits/stdc++.h> 
// using namespace std;


// void printName(string name){
//         cout << "hey "  << name;
// }



// int main(){
//       string name;
//       cin >> name;
//       printName(name);
//       return 0;  
// }













// #include <bits/stdc++.h> 
// using namespace std;
// void printName(string name){
//         cout << "hey "  << name << endl;
// }
// int main(){
//       string name;
//       cin >> name;                                       
//       printName(name);
//       string name2;
//       cin >> name2;
//       printName(name2);
//       return 0;  
// }











// #include <bits/stdc++.h> 
// using namespace std;
// int sum(int num1 , int num2){
//         int num3 = num1 + num2;
//          return num3;
// }
// int main(){
//          int num1, num2;
//          cin >> num1 >> num2;
//          int res = sum(num1, num2);
//          cout << res;


//       return 0;  
// }









// #include <bits/stdc++.h> 
// using namespace std;


// void  sum(int num1 , int num2){
//         int num3 = num1 + num2;
//         cout << num3;
// }



// int main(){
//          int num1, num2;
//          cin >> num1 >> num2;
//          sum(num1, num2);
//       return 0;  
// }










// #include <bits/stdc++.h> 
// using namespace std;


// int maxx (int num1, int num2){
//           if(num1 >= num2){
//               return num1;
//           }
//           // should return a value otherwise it will produce a garbage value .
//           return num2;
// }

// int main(){

//       int num1, num2;
//       cin >> num1 >> num2;
//       int maximum = maxx(num1, num2);
//       cout << maximum;
//       return 0;

     
// }















// #include <bits/stdc++.h>
// using namespace std;

// void doSomething(int num)
// {
//       cout << num << endl;
//       num += 5;
//       cout << num << endl;
//       num += 5;
//       cout << num << endl;
// }

// int main()
// {
//       int num = 10;
//       doSomething(num);
//       cout << num << endl;

//       return 0;
// }









//pass by value: 
// #include <bits/stdc++.h>
// using namespace std;

// void doSomething(string s)
// {
//        s[0] = 't';
//        cout << s << endl;
    
// }

// int main()
// {
//       string s = "raj";
//       doSomething(s);
//       cout << s<< endl;
     
//       return 0;
// }












// pass by reference: 
// #include <bits/stdc++.h>
// using namespace std;

// void doSomething(string &s)
// {
//    s[0] = 't';
//    cout << s << endl;  
    
// }

// int main()
// {
//       string s = "raj";
//       doSomething(s);
//       cout << s << endl;
    
//       return 0;
// }







// #include <bits/stdc++.h>
// using namespace std;


// void doSomething(int arr[], int n){
//         arr[0] += 100;
//         cout << "Value inside function:  " << arr[0] << endl;
// }

// int main()
// {
//        int n = 5;
//        int arr[n];
//        for(int  i = 0 ; i<n; i=i+1){
//               cin >> arr[i];
//        }
      
//          doSomething(arr, n);

//          cout << "value indise int main: " << arr[0] << endl;
    
//       return 0;
// }











