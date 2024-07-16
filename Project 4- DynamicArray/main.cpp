
#include <iostream>
#include "clsMyDynamicArray.h"

using namespace std;

int main()
{
    clsMyDynamicArray<int>MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);



    cout << "\nSize Of array : " << MyDynamicArray.Size();
   // cout << "\nIs Empty : " << MyDynamicArray.IsEmpty();

    cout << "\nArray Item(s) : ";
    MyDynamicArray.Print();

   // cout << "\n\nItem(2): " << MyDynamicArray.GetItem(2);

    MyDynamicArray.InsertAt(2, 500);
    cout << "\nArray after insert 500 at index 2: ";
    cout << "\nSize Of array : " << MyDynamicArray.Size();
    MyDynamicArray.Print();


    MyDynamicArray.InsertAtbeginning(100);
    cout << "\nArray after insert  at beginning: ";
    cout << "\nSize Of array : " << MyDynamicArray.Size();
    MyDynamicArray.Print();

    MyDynamicArray.InsertBefore(2,300);
    cout << "\n\nArray after insert  before: ";
    cout << "\nSize Of array : " << MyDynamicArray.Size();
    MyDynamicArray.Print();

    MyDynamicArray.InsertAfter(2,400);
    cout << "\n\nArray after insert after: ";
    cout << "\nSize Of array : " << MyDynamicArray.Size();
    MyDynamicArray.Print();


    MyDynamicArray.InsertAtEnd(1000);
    cout << "\n\nArray after insert  at end: ";
    cout << "\nSize Of array : " << MyDynamicArray.Size();
    MyDynamicArray.Print();

    /*int Index = MyDynamicArray.Find(30);
    if (Index == -1)
        cout << "\nItem was not found :-)\n";
    else
        cout << "\nItem is Found at index: "<<Index;
    MyDynamicArray.DeleteItem(30);
    cout << "\nArray after deleting item 30: ";
    MyDynamicArray.Print();

    cout << "\nSize Of array : " << MyDynamicArray.Size();*/

   /* MyDynamicArray.DeleteFirstItem();
    cout << "\n Array Delete First Item: ";
    MyDynamicArray.Print();


    MyDynamicArray.DeleteLastItem();
    cout << "\n Array Delete Last Item: ";
    MyDynamicArray.Print();*/


    /*MyDynamicArray.Reverse();
    cout << "\n\nArray after Reverse(): ";
    MyDynamicArray.Print();*/


  /*  MyDynamicArray.Clear();
    cout << "\n\nArray after Clear(): ";
    MyDynamicArray.Print();*/

    //MyDynamicArray.DeleteItemAt(2);
    //cout << "\n\nArray after Delete Item(2): ";
    //MyDynamicArray.Print();
    //cout << "\nSize Of array : " << MyDynamicArray.Size();


    /* MyDynamicArray.Resize(2);
     cout << "\nArray Items After Resize(2) : \n";
     MyDynamicArray.Print();

     MyDynamicArray.Resize(10);
     cout << "\nArray Item(s) After Resize(10) : \n";
     MyDynamicArray.Print();*/




    system("pause>0");
}

