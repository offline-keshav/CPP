#include <cstdlib>
#include <iostream>
#include <ctime>
#include <io.h>
using namespace std;

// Function to get the current date and time as a string
string getCurrentDateTime() {
    time_t now = time(0);
    struct tm *timeinfo;
    char buffer[80];

    timeinfo = localtime(&now);
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %I:%M:%S %p", timeinfo);

    return buffer;
}

int main() {
    // Execute the git add command
    if (system("git add .") != 0) {
        perror("Error running 'git add'");
        return 1;
    }

    // Form the commit message with the current date and time
    std::string commitMessage = "Auto commit on " + getCurrentDateTime();

    // Execute the git commit command
    string gitCommitCommand = "git commit -m \"" + commitMessage + "\"";
    if (system(gitCommitCommand.c_str()) != 0) {
        perror("Error running 'git commit'");
        return 1;
    }

    // Execute the git push command
    if (system("git push") != 0) {
        perror("Error running 'git push'");
        return 1;
    }

    // Success message
    std::cout << "Git add, commit, and push commands executed successfully." << endl;

    return 0;
}
