#include <iostream>
#include <thread>
using namespace std;

class background_task
{
public:
        void operator()() const
        {
        }
};

int main() {
	// your code goes here
	
	background_task f;
	thread my_thread(f);
	
	thread my_thread(background_task());
	
	return 0;
}
