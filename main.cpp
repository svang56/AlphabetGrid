#include <iostream>//Author: Sunny Vang
#include <vector>

using namespace std;

int main()
{
  int letters;

  vector <vector <char> > alphabet;
  

  do
  {
    cout<<"How many letters should there be per line? ";
    cin>>letters;
    
    if( letters < 1 || letters > 26 )
    {
      cout<<"\nPlease enter a number between 1-26.\n";
    }
  }while( letters < 1 || letters > 26 );

  int rows;
  if( 26 % letters == 0)
  {
    rows = 26 / letters;
  }
  else
  {
    rows = 26 / letters + 1;
  }

 //resize rid to have letter # of rows, and _columns_ # of columns
  alphabet.resize(rows);
  
  for (int row =0; row < alphabet.size(); row++)
  {
    alphabet[row].resize(letters);
  }
char currentLetter = 'A';

 //traverse the matric and assign it incrementings letters from A to Z
 for(int row = 0; row < alphabet.size(); row++)
 {
    for(int col = 0; col < alphabet[row].size(); col++)
    {
        alphabet[row][col] = currentLetter;
        currentLetter++;
        if(currentLetter > 'Z')
        {
            currentLetter = 'Z';//makes letter go to next lette in ASCII table
        }
    }
  }
 for(int row = 0; row < alphabet.size(); row++)//dispplay matrix
 {
    for(int col = 0; col < alphabet[row].size(); col++)
    {
    cout<<alphabet[row][col];
    }
    cout<<endl;
} 
 
  return 0;
}


