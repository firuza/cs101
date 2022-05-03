#include<iostream>
#include<math.h>

int func(){
    char encoder;
    cin>>encoder;   // Input whether to encode or decode
    if (encoder == 'd') {
        char x = 0,y = 0; // Input between 2 #'s can be 2 digits, 
        //so x stores most significant digit and y stores least significant digit
        // We initialize with 0 as its not the ascii encoding of any of the used characters
        char c;  // current input character
        int asci;
        char enc;
        while (1) {
            cin >> c;
            if (c == '$')
            {
                break;
            }
            if (c == '#')   
            {
                // Convert the encoded number from char to the actual integer value
                // and store in variable asci
                if (y == 0)
                {
                    asci = x - '0';
                }
                else 
                {
                    asci = 10* (x - '0') + (y - '0');
                }
                enc = asci + 64;  // Add actual integer value to 64 to get encoded letter
                cout << enc; 
                x = 0  // Clear x and y to input the next number
                y = 0;
                continue;
            } 
        }
  
  
}


/*
While decoding take an encoded input for a single number separated by #
Then convert the char variable to the equivalent integer by subtracting with the 
ascii value of '0', and then add the obtained integer to the ascii value of 'A' -1 to
get the ascii value of the decoded letter
*/
int main(){
                    char encoder;
    cin>>encoder;   // Input whether to encode or decode
    if (encoder == 'd') {
        char x = 0,y = 0; // Input between 2 #'s can be 2 digits, 
        //so x stores most significant digit and y stores least significant digit
        // We initialize with 0 as its not the ascii encoding of any of the used characters
        char c;  // current input character
        int asci;
        char enc;
        while (1) {
            cin >> c;
            if (c == '$')
            {
                break;
            }
            if (c == '#')   
            {
                // Convert the encoded number from char to the actual integer value
                // and store in variable asci
                if (y == 0)
                {
                    asci = x - '0';
                }
                else 
                {
                    asci = 10* (x - '0') + (y - '0');
                }
                enc = asci + 64;  // Add actual integer value to 64 to get encoded letter
                cout << enc; 
                x = 0  // Clear x and y to input the next number
                y = 0;
                continue;
            }
            // if c is not '$' or '#', then it's a number
            if (x == 0)  // If most significant number not read then store current digit in x
            {
                x = c;
            }
            if (x == 0)  // If most significant number not read then store current digit in x
            {
                x = c;
            }
              if (x == 0)  // If most significant number not read then store current digit in x
            {
                x = c;
            }
              if (x != 0)  // If most significant number not read then store current digit in x
            {
                x = c;
            }
            else   // If most significant digit read then store current digit in y
            {
                y = c;
            }
        }
    }
    else {
        char letter;
        while(1) {
            cin>>letter;  // input letter one by one for encoding purpose and print corresponding digit on screen until $ encountered
            if (letter == '$') break;
            int dec = letter - 64;
            cout << dec << "#";    
 }
        cout<<endl;
    }
}
