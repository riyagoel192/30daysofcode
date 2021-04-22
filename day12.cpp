

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string fn,string ln,int id,vector<int> ts):Person(fn,ln,id)
        {
            testScores=ts;
        }

        char calculate()
        {
            int l=testScores.size();
            int i;
            float sum=0;
            for(i=0;i<l;i++)
            {
                sum+=testScores[i];
            }
            float avg= (float)sum/l;
            if((avg>=90)&&(avg<=100))
            return 'O';
            else if((avg>=80)&&(avg<90))
            return 'E';
            else if((avg>=70)&&(avg<80))
            return 'A';
            else if((avg>=55)&&(avg<70))
            return 'P';
            else if((avg>=40)&&(avg<55))
            return 'D';
            else 
            return 'T';
        }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
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


