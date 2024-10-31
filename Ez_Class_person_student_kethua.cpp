
/*
Bài 1:
    Xây dựng lớp Person mô tả thông tin về người gồm các thuộc tính: Họ đệm,tên,tuổi
    - Phương thức :
        + Các hàm tạo của lớp
        + Các phương thức thiết lập và lấy thông tin của các thuộc tính 
        + Phương thức nhập dữ liệu cho các thuộc tính 
        + Phương thức hiển thị thông tin về người được quản lý bao gồm họ tên, tuổi 
        + Toán tử tài bội > để so sánh hai đối tượng của lớp Person theo họ tên (Ưu tiên tên, sau đó họ đệm)
Bài 2:
    Xây dựng Lớp Student mô tả thông tin về sinh viên , Lớp kế thừa từ lớp Person và bổ sung thêm
    các thuộc tính : mã sinh viên ,nghành đào tạo, điểm trung bình .
    - Phương thức:
        + Các hàm tạo của lớp
        + Các phương thức thiết lập và lấy thông tin của các thuộc tính 
        + Phương thức nhập dữ liệu cho các thuộc tính 
        + Phương thức hiển thị thông tin của sinh viên bao gồm: mã sinh viên , họ tên,tuổi , nghành đào tạo,
        điểm trung bình, xếp loại,(Xếp loại "Đạt" với những sinh viên có điểm trung bình lớn hơn 5.0 , xếo loại không đạt 
        đối với sinh viên có điểm trung bình nhỏ hơn 5.0)
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include<algorithm>

using namespace std;

class Person
{
private:
    int age;
    string first_name;
    string last_name;

public:
    Person() = default;
    //input emlement in person
    Person(int age, const string &first_name, const string &last_name)
        : age(age), first_name(first_name), last_name(last_name) {}

    void set_age(int age_temp)
    {
        age = age_temp;
    }

    int get_age()
    {
        return age;
    }

    void set_first_name(string first_name_temp)
    {
        first_name = first_name_temp;
    }

    string get_first_name()
    {
        return first_name;
    }

    void set_last_name(string last_name_temp)
    {
        last_name = last_name_temp;
    }

    string get_last_name()
    {
        return last_name;
    }

    string to_string()
    {
        stringstream ss;
        ss << age << ", " << first_name << ", " << last_name;
        return ss.str();
    }

    // compare two people in person
    bool operator>(const Person &other) const {
        if (first_name != other.first_name) {
            return first_name > other.first_name;
        } else {
            return last_name > other.last_name;
        }
    }
};

class Student : public Person
{
private:
    string student_id;
    string majors;
    float medium_score;
    string classification;

public:
    Student() = default;

    Student(int age, const string &first_name, const string &last_name,
            const string &student_id, const string &majors, float medium_score)
        : Person(age, first_name, last_name), student_id(student_id),
          majors(majors), medium_score(medium_score) {}

    void set_student_id(string student_id_temp)
    {
        student_id = student_id_temp;
    }

    string get_student_id()
    {
        return student_id;
    }

    void set_majors(string majors_temp)
    {
        majors = majors_temp;
    }

    string get_majors()
    {
        return majors;
    }

    void set_medium_score(float medium_score_temp)
    {
        medium_score = medium_score_temp;
    }

    float get_medium_score()
    {
        return medium_score;
    }

    // Function to get classification
    string get_classification() const
    {
        return (medium_score >= 5.0) ? "You passed the subject" : "you did not pass the subject";
    }

    string to_string()
    {
        stringstream ss;
        ss << get_student_id() << ", " << get_first_name() << ", " << get_last_name() << ", "
           << get_age() << ", " << get_majors() << ", " << get_medium_score() << ", ";
        return ss.str();
    }
};

int main()
{
    vector<Student> students;
    
    int num_student;
    cout << "Enter numbers people: ";
    cin >> num_student;

    for (int i = 1; i <= num_student; i++)
    {
        Student s;

        int age;
        float medium_score;
        string first_name, last_name, student_id, majors;

        cout << "\nWrite student: " << i << ":\n";
        cout << "Enter Student_id:" << i << ":";
        cin.ignore(); // Clear the newline character from the previous input
        getline(cin, student_id);
        cout << "Enter first_name " << i << ":";
        getline(cin, first_name);
        cout << "Enter last_name: " << i << ":";
        getline(cin, last_name);
        cout << "Enter age " << i << ":";
        cin >> age;
        cout << "Enter majors:" << i << ":";
        cin.ignore(); // Clear the newline character from the previous input
        getline(cin, majors);
        cout << "Enter medium_score:" << i << ":";
        cin >> medium_score;

        // s.set_age(age);
        // s.set_first_name(first_name);
        // s.set_last_name(last_name);
        // s.set_student_id(student_id);
        // s.set_majors(majors);
        // s.set_medium_score(medium_score);

        // people.emplace_back(age, first_name, last_name);
        students.emplace_back(age, first_name, last_name, student_id, majors, medium_score);
    }

    // // Print the information in the order they were entered
    // cout << "\nPeople Information (in order entered):\n";
    // for ( auto person : people)
    // {
    //     cout << person.to_string() << endl;
    // }

    // Print the student information in the order they were entered
    cout << "\nStudents Information:\n";
    for ( auto student : students)
    {
        cout << student.to_string() << student.get_classification()<<"\n";
    }

    cout << endl;
    return 0;
}
