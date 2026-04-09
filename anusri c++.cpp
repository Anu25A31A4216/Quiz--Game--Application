#include <iostream>
using namespace std;

// Function to display a question
int askQuestion(string question, string optionA, string optionB, string optionC, string optionD, char correctAnswer) {
    char userAnswer;

    cout << "\n" << question << endl;
    cout << "A. " << optionA << endl;
    cout << "B. " << optionB << endl;
    cout << "C. " << optionC << endl;
    cout << "D. " << optionD << endl;

    cout << "Enter your answer (A/B/C/D): ";
    cin >> userAnswer;

    // Convert to uppercase if user enters lowercase
    userAnswer = toupper(userAnswer);

    if (userAnswer == correctAnswer) {
        cout << "Correct Answer!\n";
        return 1;
    } else {
        cout << "Wrong Answer! Correct answer is: " << correctAnswer << endl;
        return 0;
    }
}

int main() {
    int score = 0;

    cout << "===== QUIZ GAME =====\n";

    // Questions
    score += askQuestion(
        "1. What is the capital of India?",
        "Mumbai", "Delhi", "Kolkata", "Chennai", 'B'
    );

    score += askQuestion(
        "2. Which language is used for C++?",
        "High-level", "Low-level", "Assembly", "Machine", 'A'
    );

    score += askQuestion(
        "3. Who developed C++?",
        "Dennis Ritchie", "Bjarne Stroustrup", "James Gosling", "Guido van Rossum", 'B'
    );

    score += askQuestion(
        "4. What does OOP stand for?",
        "Object Oriented Programming", "Only One Program", "Object Ordered Process", "None", 'A'
    );

    score += askQuestion(
        "5. Which symbol is used for comments in C++?",
        "//", "/* */", "#", "--", 'A'
    );

    // Final Score
    cout << "\n===== QUIZ COMPLETED =====\n";
    cout << "Your Score: " << score << " / 5" << endl;

    if (score == 5) {
        cout << "Excellent! ??\n";
    } else if (score >= 3) {
        cout << "Good Job! ??\n";
    } else {
        cout << "Better Luck Next Time! ??\n";
    }

    return 0;
}
