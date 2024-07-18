#include <iostream>
#include <vector>

void ShowVector(std::vector<int>& Vector); // The parameter for both functions is the address of the first array element in C++ shape.
void InvertVector(std::vector<int>& Vector); 

int main()
{
    std::vector<int> MyVector = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 10, 13, 14, 15, 16, 17, 18, 19, 20 }; // Explicit vector declaration according to C++.

    std::cout << "Original vector: ";
    
    ShowVector(MyVector);
    
    std::cout << "\n\n";

    InvertVector(MyVector); // Call of the function that will invert the vector (the original will be lost).

    std::cout << "Inverted vector: ";
   
    ShowVector(MyVector);

    std::cout << "\n";
}

void ShowVector(std::vector<int>& Vector) // This function displays all elements of the array in a line.
{
    for (int i = 0; i < Vector.size(); ++i) 
    {
        std::cout << Vector[i] << " ";
    }
}

void InvertVector(std::vector<int>& Vector)
{
    int Size = Vector.size(); // The function size gets the ammount of elements of an array.
    for (int i = 0; i < Size / 2; ++i) // Since 2 elements will be manipulated at once (ex. 0 e 19), just a loop until half the size is enough.
    {
        int temp = Vector[i];  // The elemements positions will be swaped using a temporary variable 
        Vector[i] = Vector[Size - 1 - i]; // Each element will be swaped to the element on the position (Size - 1 - i). i is the current element (the 1st is 0).
        Vector[Size - 1 - i] = temp; 
        // The function starts swapping the element in position 0 by the element in position 19, then 1 and 18, 2 and 17, 3 and 16 and so on.
    }
}