/*

MIT License

Copyright (c) 2017 André L. Maravilha

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#include <unistd.h>

#include <iostream>
#include <string>

#include "cxxtimer.hpp"

using namespace std;
using namespace std::chrono;

int main(int argc, char** argv) {
  // Instantiate cxxtimer::Timer object
  cxxtimer::Timer timer;

  // Start the timer
  timer.start();

  // Wait for the users
  string input_1;
  cout << "Please, type something and press ENTER to continue: ";
  std::getline(std::cin, input_1);

  // Stop/pause the timer
  // timer.stop();

  // Get the elapsed time
  cout << "You took " << timer.count<seconds>() << " seconds." << endl;
  cout << "You took " << timer.count<milliseconds>() << " milliseconds."
       << endl;
  cout << "You took " << timer.count<nanoseconds>() << " nanoseconds." << endl;

  sleep(3);

  // Get the elapsed time
  cout << "You took " << timer.gap<milliseconds>() << " milliseconds." << endl;

  // Stop/pause the timer
  timer.stop();
  sleep(1);
  timer.start();
  sleep(2);
  cout << "You took " << timer.gap<milliseconds>() << " milliseconds." << endl;

  return 0;
}
