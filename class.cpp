#include<iostream>
using namespace std;

class AbstractEmployee{//abstraction
  virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{    //class declaration
private:
  //string Name;  //objects
  string company;
  int age;
protected:
  string Name;
public: //access modifier
  void setName(string name){//setter
    Name = name;
  }
  string getName(){//getter
    return Name;
  }
  void setcompany(string Company){
    company = Company;
  }
  string getcompany(){
    return company;
  }
  void setage(int Age){
    if(Age >= 18)
    age = Age;
  }
  int getage(){
    return age;
  }


  void IntroduceYourself() { //methods
    cout<<"Name = "<< Name << endl;
    cout<<"company = "<< company <<endl;
    cout<<"age = "<<age<<endl;
  }
  Employee(string name, string Company, int Age){ //constructor
    Name = name;
    company = Company;
    age = Age;
  }
  void AskForPromotion(){
    if(age > 30){
      cout<<Name<<" got promoted "<<endl;
    }
    else{
      cout<<Name<<" sorry, no promotion"<<endl;
    }
  }
  virtual void Work()
  {
    cout<<Name<<" is checking email, task backlog."<<endl;
  }
};
class Developer:public Employee{//inheritance
public:
  string FavProgrammingLanguage;
  Developer(string name, string Company, int Age, string favProgrammingLanguage)
    :Employee(name, Company, Age)
  {
    FavProgrammingLanguage = favProgrammingLanguage;
  }
  void FixBug(){
    cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;
  }
  void Work(){
    cout<<Name<<" is writing "<<FavProgrammingLanguage<<endl;
  }
};
class Teacher:public Employee{
public:
  string Subject;
  Teacher(string name, string Company, int Age, string subject)
    :Employee(name, Company, Age)//constructor call
  {
    Subject = subject;
  }
  void PrepareLesson(){
    cout<<Name<<" is preparing "<<Subject<<" lesson. "<<endl;
  }
  void Work(){
    cout<<Name<<" is teaching "<<Subject<<endl;
  }
};
int main()
{
  Employee employee1 = Employee("Sonica", "Empire", 23); //class and constructor call
/*  employee1.Name = "Sonica";
  employee1.age = 23;
  employee1.company = "Empire";*/
//  employee1.IntroduceYourself();

 Employee employee2 = Employee("Seikh", "Empire", 21);
/*  employee2.Name = "Seikh";
  employee2.age = 21;
  employee2.company = "Empire";*/
  //employee2.IntroduceYourself();

  employee1.setage(31);
  cout<<employee1.getName()<<" is "<<employee1.getage()<< " years old. ";
  employee1.AskForPromotion();
  employee2.AskForPromotion();
  Developer d = Developer("Suman", "Empire", 23, "Meow");
  //d.FixBug();
  //d.AskForPromotion();
  Teacher t = Teacher("Saurabh", "Empire", 21, "Clash Royale");
//  t.PrepareLesson();
//  t.AskForPromotion();
  //d.Work();
  //t.Work();
  Employee *e1 = &d;
  Employee *e2 = &t;

  e1->Work();
  e2->Work();


}
