#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <string>

using namespace std;

const string VERSION = "0.0.1";

int init();

int main() {
	string cmd; string PS1 = "tsh-" + VERSION;
    bool running = true;
	while (running) {
		cout << PS1 << "$ ";
		getline(cin, cmd);
		// execvp();
		cout << cmd << endl;
		running = false;
	} return 0;
}
