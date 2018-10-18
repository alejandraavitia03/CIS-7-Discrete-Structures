                    #include <iostream>
                    #include <vector>
                    #include <string>
                    using namespace std;


                    class Tower
                    {
                    private:
                      vector<char> disks;
                    public:
                      Tower(string name, int size)
                      {
                        this -> name = name;
                        for (int i = 0; i <= size; i++)
                        {
                          this->pushDisk('-');
                        }
                      }
                      string name;
                      void pushDisk(char val)
                      {
                        this->disks.push_back(val);
                      }
                      void popDisk()
                      {
                        this->disks.pop_back();
                      }
                      string print()
                      {
                        string output = "Tower: " + this->name + " : ";
                        for (auto disk : disks)
                        {
                          output += disk + ", ";
                        }
                        return output;
                      }
                    };

                    void TOH(int, Tower*, Tower*, Tower*);

                    int main()
                    {
                      auto A = new Tower("A",3);
                      auto B = new Tower("B", 3);
                      auto C = new Tower("C", 3);
                      TOH(3, A, B, C);
                      system("pause");
                      return 0;
                    }

                    void TOH(int disks, Tower* source, Tower* target, Tower* spare)
                    {
                      if (disks > 0)
                      {
                        TOH(disks - 1, source, spare, target);
                        cout << "Moce disk " << disks << " from " << source->name << " to " << target->name << endl;
                        source->popDisk();
                        target->pushDisk(disks);
                        cout << source->print() << endl;
                        cout << target->print() << endl;
                        cout << spare->print() << endl;
                        system("pause");
                        TOH(disks - 1, spare, target, source);
                      }
                    }
                    //#include<iostream>
                    //using namespace std;
                    //
                    ////tower of HANOI function implementation
                    //void TOH(int n, char Sour, char Aux, char Des)
                    //{
                    //	if (n == 1)
                    //	{
                    //		cout << "Move Disk " << n << " from " << Sour << " to " << Des << endl;
                    //		return;
                    //	}
                    //
                    //	TOH(n - 1, Sour, Des, Aux);
                    //	cout << "Move Disk " << n << " from " << Sour << " to " << Des << endl;
                    //	TOH(n - 1, Aux, Sour, Des);
                    //}
                    //
                    ////main program
                    //int main()
                    //{
                    //	int n;
                    //
                    //	cout << "Enter no. of disks:";
                    //	cin >> n;
                    //	//calling the TOH 
                    //	TOH(n, 'A', 'B', 'C');
                    //	system("pause");
                    //	return 0;
                    //}
