#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};
class Student :  public Person{
    public:
        Student(string firstName, string lastName, int identification, vector <int> scores) : Person(firstName, lastName, identification){
            this->scores = scores;
        }
        string calculate(){
            string ans;
            for (int i = 0; i < scores.size(); ++i){
                avg = avg + scores[i];
            }
            avg = avg / scores.size();
            if (avg < 40) ans = "T";
            if (avg >= 40 && avg < 55) ans = "D";
            if (avg >= 55 && avg < 70) ans = "P";
            if (avg >= 70 && avg < 80) ans = "A";
            if (avg >= 80 && avg < 90) ans = "E";
            if (avg >= 90 && avg <= 100) ans = "O";
            return ans;
        }
    private:
        vector <int> scores;
        int avg;
};
int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
