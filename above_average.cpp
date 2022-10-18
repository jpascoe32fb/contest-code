

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    vector<float> answers;

    for(int test = 0; test < cases; test++) {
        vector<int> grades;
        int students = 0, above_avg = 0, avg = 0;
        cin >> students;
        for(int stdnt = 0; stdnt < students; stdnt++) {
            int grade;
            cin >> grade;
            avg += grade;
            grades.push_back(grade);
        }
        avg = avg/students;   /////may need to be changed

        for(int index = 0; index < grades.size(); index++) {
            if(grades[index] > avg) {
                above_avg++;
            }
        }
        float buff = 100.000000001;
        float ans = (float) above_avg / (float) students;
        ans *= (float) buff;
        answers.push_back(ans);
        //cout << fixed << setprecision(3) << ans << "%" << endl;
    }

    for(int index = 0; index < answers.size(); index++) {
            cout << fixed << setprecision(3) << answers[index] << "%" << endl;
        }
}