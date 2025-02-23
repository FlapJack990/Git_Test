// Ask the user to input the number of students in a class. Then ask the user to input the names of each student. Store the names in an array of strings. Print the names of the students in the class.
#include <iostream>
using namespace std;
int main()
{
    string grade[5] = {"A", "B", "C", "D", "F"};
    
 
    cout << "Enter grade for students 1: 100"<< endl;
    int n_of_students;
    cin >> n_of_students;
    if (n_of_students <= 59)
    {
        cout <<"Student " <<n_of_students<<": "<< grade[4] << endl;
    }
     else if (n_of_students >= 60 && n_of_students <= 69)
     {
      cout << "Student " <<n_of_students<<": "<<grade[3] << endl;  
     }
     else if (n_of_students >= 70 && n_of_students <= 79)
     {
      cout << "Student " <<n_of_students<<": "<<grade[2] << endl;  
     }
     else if (n_of_students >= 80 && n_of_students <= 89)
     {
      cout << "Student " <<n_of_students<<": "<<grade[1] << endl;  
     }
     else if (n_of_students >= 90 && n_of_students <= 100)
     {
      cout << "Student " <<n_of_students<<": "<<grade[0] << endl;  
     }
    return 0;
}



