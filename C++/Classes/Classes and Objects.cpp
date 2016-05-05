// Write your Student class here
class Student {
public:
    void input();
    int calculateTotalScore();
private:
    int scores[5];
};

void Student::input() {
    for (int i = 0; i < 5; i++) {
        cin >> scores[i];
    }
}

int Student::calculateTotalScore() {
    int sum = 0;
    for (int score : scores) {
        sum += score;
    }
    return sum;
}
