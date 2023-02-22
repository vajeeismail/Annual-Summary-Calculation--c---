



#include <iostream>
using namespace std;



void AnnualSummary ()
{
    int sum = 0;
    string month[12] = {"January  ", "February ", "March    ", "April    ", "May      ", "June     ", "July     ", "August   ", "September", "October  ", "November ", "December "};
    int amount[12];
    int cost;
    int sale;

    cout << endl;
    cout << "        _______________________________________________" << endl << endl;
    cout << "                        Annual Calculation             " << endl;
    cout << "        _______________________________________________" << endl << endl;
    cout << "* You can enter only int values" << endl << endl << endl;

    cout << "___________________________________________________________________________________________________________________" << endl;
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl << endl << endl;

    for (int a=0; a<12; a++)
    {
        cout << "    " << month [a] << endl;
        cout << "                                                        - - - - - - - - - -" << endl;
        cout << "    Enter Cost of Sale :                                    Rs.";
        cin  >> cost;
        cout << "    Enter Sale Amount  :                                    Rs.";
        cin  >> sale;
        cout << "                                                        - - - - - - - - - -" << endl;
        cout << "___________________________________________________________________________________________________________________" << endl << endl;
        amount[a] = sale - cost;
    }

    for (int i=0; i<12; i++)
    {

        cout << endl;
        cout << "___________________________________________________________________________________________________________________" << endl;
        cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl << endl;

        cout << "                                                        - - - - - - - - - -" << endl;
        cout << "    Finalize Amount of " << month [i] << "                            Rs." << amount[i] <<endl;
        cout << "                                                        - - - - - - - - - -" << endl << endl;


        sum = sum + amount[i];
    }
        cout << endl <<endl;

        if (sum > 0)
        {
            cout << "  You have gotten profit amount -*-*-*-*-*-         Congratulations" << endl;
            cout << "___________________________________________________________________________________________________________________" << endl << endl;
            cout << "                                                        - - - - - - - - - -" << endl;
            cout << "  Your Annual Business Summary is Profit                    Rs." << sum << endl;
            cout << "                                                        - - - - - - - - - -" << endl << endl << endl;
        }


        else if (sum < 0)
        {
            cout << "  You have gotten loss amount   -?-?-?-?-?-           Work Hard...!" << endl;
            cout << "___________________________________________________________________________________________________________________" << endl << endl;
            cout << "                                                        - - - - - - - - - -" << endl;
            cout << "  Your Annual Business Summary is Lost                      Rs." << sum << endl;
            cout << "                                                        - - - - - - - - - -" << endl << endl << endl;
        }

        else
        {
            cout << "  You have gotten zero amount   -!-!-!-!-!-           Increase Work" << endl;
            cout << "___________________________________________________________________________________________________________________" << endl << endl;
            cout << "                                                         - - - - - - - - - -" << endl;
            cout << "  Your Annual Business Summary is Zero                       Rs." << sum << endl;
            cout << "                                                         - - - - - - - - - -" << endl << endl << endl << endl << endl;
        }


}

void Calculator ()
{
    cout << endl;
    cout << "        _______________________________________________" << endl << endl;
    cout << "                           Calculator                  " << endl;
    cout << "        _______________________________________________" << endl << endl;
    cout << "   * You can input only 20 operator in a time..." << endl << endl;
    cout << "   * Aim of this calculator that you can enter multi amount of calculation" << endl << endl;

    int i = 0;
    int amount[21];
    int total = 0;

    while (i < 21)
    {
        cout << "___________________________________________________________________________________________________________________" << endl;
        cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl << endl;
        char ope;
        cout << "    Enter a Amount                   :   ";
        cin >> amount[i];
        cout << "    Enter Operation (+ - * /)        :   ";
        cin >> ope ;
        cout << endl;
        cout << "___________________________________________________________________________________________________________________" << endl << endl;

        switch (ope)
        {
            case '+' :
            {
                total = total + amount[i];
                break;
            }
            case '-' :
            {
                total = total - amount[i];
                break;
            }
            case '*' :
            {
                total = total * amount[i];
                break;
            }
            case  '/' :
            {
                total = total / amount[i];
                break;
            }


            default :
                cout << "___________________________________________________________________________________________________________________" << endl;
                cout << "/////////////////////////// !!!!!!!!!!!!!!!!!! Entered wrong input !!!!!!!!!!!!!!!!! \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
                cout << "___________________________________________________________________________________________________________________" << endl;
        }
        i= i + 1;


        cout << endl << endl;
        cout << "                                                        - - - - - - - - - -" << endl;
        cout << "          Total                                             Rs." << total << endl;
        cout << "                                                        - - - - - - - - - -" << endl << endl;
    }

    cout << endl << endl;
    cout << "                                                        - - - - - - - - - -" << endl;
    cout << "       Finalize Total                                       Rs." << total << endl;
    cout << "                                                        - - - - - - - - - -" << endl << endl << endl << endl << endl;
}

int main()
{
    //AnnualSummary ();
    Calculator ();
}
