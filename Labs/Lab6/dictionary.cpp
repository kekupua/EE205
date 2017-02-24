#define INSERT 1
#define DELETE 2
#include <iostream>
#include "singlyLinked.h"
using namespace std;

int main(){
  SinglyLinkedList s;

  while(1){
    int input = 0, rule = 0;
    SLink* insertL = new SLink(0,NULL);
    cout << "Please enter any integer value followed by a 1 (insert) or 2 (delete)" << endl;
    cout << "(CTRL+C to quit at any time)" << endl << endl;
    cin >> input >> rule;
    insertL->value = input;

    // IF valid rule
    if(rule == INSERT || rule == DELETE){
      // Insert
      if(rule == INSERT){
        int flag = 0;
        cout << "Insert " << endl;
        if(s.getHead() == NULL) s.append(insertL);
        else{
          SLink* curr = s.getHead();
          // Look through the list
          for(int i = 0; i < s.getSize(); ++i){
            // If the curr node is greater than the input
            if(curr->value > input){
              // Input before the curr node
              s.insert(insertL, curr);
              flag = 1;
              cout << "Inserted " << input << " @ position " << i << endl;
              break;
            }
            // Otherwise keep looking
            else curr = curr->next;
          }
          // If it wasn't able to insert before larger number
          if(!flag){
            s.append(insertL);
            cout << "Inserted " << input << " @ end"<< endl;
          }
        }
      }

      // DELETE
      if(rule == DELETE){
        int flag = 0;
        SLink* curr = s.getHead();
        // Find the element to delete
        for(int i = 0; i < s.getSize(); ++i){
          if(input == curr->value){
            s.erase(curr);
            cout << "Deleted " << input << " @ position " << i << endl;
            flag = 1;
            break;
          }
          curr = curr->next;
        }
        if(!flag) cout << "Error: Element not found" << endl;
      }
    } // END IF
    else cout << "Invalid rule, try again." << endl;

    // Print out vector contents
    cout << endl << "Current List: " << endl;
    s.print_all(s.getHead());
    cout << endl << endl;
  }

  return 0;
}
