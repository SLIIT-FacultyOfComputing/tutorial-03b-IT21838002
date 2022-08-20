#include <iostream>
using namespace std;

// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
struct Box{
  int height;
  int width;
  int length;
};
int volume(Box x);

int main() {
    struct Box box1;
    struct Box box2;
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1.height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2.height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(box1)
             + volume(box2);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
int volume(Box x)
{
  int vol=x.height * x.width * x.length;
  return vol;
}
// Implement the functions here
