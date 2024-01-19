#include<iostream>

#include<string>

using namespace std;

class inf {

public:

	int no;

	string accname;

	char type;

	int iniamount;

	bool cc = true;


};

inf acc[100];

int i = 0;

void exit()

{

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	cout << "                                            ++++++++++++++++++++++++++++++++++++++++++++";

	cout << endl << "                                            + THANKS FOR USING BANK MANAGEMENT SYSTEM  + " << endl;

	cout << "                                            ++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

}

int indexacc(int h)

{

	for (int f = 0; f < i; f++)

	{

		if (h == acc[f].no)

		{

			return f;

		}

	}

	return -1;

}

void transfer_amount_from_account_to_another(int nooQ, string nameacccQ, char typeeQ, int iniQ , int cd)

{

		cout << endl << endl << endl << endl << endl;

		cout << "                                                  ENTER THE SENDER ACCOUNT NO. :  ";

		cin >> nooQ;

		int z = indexacc(nooQ);

		nooQ = acc[z].no;

		nameacccQ = acc[z].accname;

		typeeQ = acc[z].type;

		iniQ = acc[z].iniamount;

		cd = acc[z].cc;

		if (acc[z].cc == 1 )

		{

			if (nooQ == acc[z].no)

			{
				int acn;

				cout << endl << endl << endl;

				cout << "                                 TO TRANSFER AMOUNT " << endl << endl;

				cout << "                              THE RECEIVING ACCOUNT NO. : ";

				cin >> acn;

				int x = indexacc(acn);

				cout << endl << endl;

				if (acc[z].cc == 0)

				{

						cout << endl << endl << endl;

						cout << "                                                    ********* " << endl;

						cout << "                THE RECEIVING ACCOUNT NO. IS  ==>   * WRONG * " << endl;

						cout << "                                                    ********* " << endl << endl << endl << endl;

				}

					else if (acn == acc[x].no)

					{

						cout << endl << endl << endl << "                ACCOUNT NO. : " << acc[z].no << endl << endl;

						cout << "                ACCOUNT HOLDER NAME : " << acc[z].accname << endl << endl;

						cout << "                TYPE OF THE ACCOUNT : " << acc[z].type << endl << endl;

						cout << "                BALANCE AMOUNT : " << acc[z].iniamount << endl << endl << endl << endl << endl;

						int trans;

						cout << "                     ENTER THE AMOUNT TO BE TRANSFER : ";

						cin >> trans;

						cout << endl << endl;

						if ((acc[z].iniamount > 0) && (acc[z].iniamount >= trans))

						{

							acc[z].iniamount -= trans;

							acc[x].iniamount += trans;

							cout << endl << endl;

							cout << "                                      ******************" << endl;

							cout << "                                      * IT'S BEEN DONE * " << endl;

							cout << "                                      ******************" << endl;
						}

						else

						{

							cout << "                   /////////////////////////////" << endl;

							cout << "                   !! THE MONEY IS NOT ENOUGH !!" << endl;

							cout << "                   /////////////////////////////" << endl;

						}

					}

			}

		}

		else

		{


			cout << endl << endl << endl;

			cout << "                                                 ********* " << endl;

			cout << "                THE SENDER ACCOUNT NO. IS  ==>   * WRONG * " << endl;

			cout << "                                                 ********* " << endl << endl << endl << endl;


		}

		system("pause");

		if (cin.get() == '\n')

		{

			system("cls");

		}

}

void modify_an_account(int nroooo, string nameaccr, char typr, int iniiir , int cz)

{

	string newname;

	char newtyp;

	int newini;

	for (int j = 0; j < i; j++)

	{

		cout << endl << endl << endl << endl << endl;

		cout << "                                                  ENTER THE ACCOUNT NO. :  ";

		cin >> nroooo;

		int z = indexacc(nroooo);

		nroooo = acc[z].no;

		nameaccr = acc[z].accname;

		typr = acc[z].type;

		iniiir = acc[z].iniamount;

		cz = acc[z].cc;

		if (acc[z].cc == 1)

		{

			if (nroooo == acc[z].no)

			{

				cout << endl << endl << endl;

				cout << "                -------------------" << endl;

				cout << "                - BALANCE DETAILS -" << endl;

				cout << "                -------------------" << endl;

				cout << endl << endl << endl << "                ACCOUNT NO. : " << acc[z].no << endl << endl;

				cout << "                ACCOUNT HOLDER NAME : " << acc[z].accname << endl << endl;

				cout << "                TYPE OF THE ACCOUNT : " << acc[z].type << endl << endl;

				cout << "                BALANCE AMOUNT : " << acc[z].iniamount << endl << endl << endl << endl << endl;

				cout << "                                 ENTER THE NEW DETAILS OF ACCOUNT  " << endl << endl;

				cout << "                ACCOUNT NO. : " << nroooo << endl << endl;

				cout << "                MODIFY ACCOUNT HOLDER NAME : ";

				getline(cin, newname);

				getline(cin, newname);

				cout << endl;

				cout << "                MODIFY TYPE OF ACCOUNT : ";

				cin >> newtyp;

				cout << endl;

				cout << "                MODIFY BALANCE OF ACCOUNT : ";

				cin >> newini;

				cout << endl;

				cout << "                                  RECORD UPTADET" << endl;

				acc[z].accname = newname;

				acc[z].type = newtyp;

				acc[z].iniamount = newini;

				system("pause");

				if (cin.get() == '\n')

				{

					system("cls");

				}

			}

			else
			{

				cout << endl << endl << endl;

				cout << "                                     ********* " << endl;

				cout << "                THE ACCOUNT NO. IS   * WRONG * " << endl;

				cout << "                                     ********* " << endl << endl << endl << endl;

				system("pause");

				if (cin.get() == '\n')

				{

					system("cls");

				}
			}

		}

		else

		{

			cout << endl << endl << endl;

			cout << "                                     ********* " << endl;

			cout << "                THE ACCOUNT NO. IS   * WRONG * " << endl;

			cout << "                                     ********* " << endl << endl << endl << endl;

			system("pause");

			if (cin.get() == '\n')

			{

				system("cls");

			}

		}

		break;

	}

}

void close_an_account(int nrooooi, string nameaccri, char typri, int iniiiri , int cx)

{

		cout << endl << endl << endl << endl << endl;

		cout << "                                                  ENTER THE ACCOUNT NO. :  ";

		cin >> nrooooi;

		int z = indexacc(nrooooi);

		nrooooi = acc[z].no;

		nameaccri = acc[z].accname;

		typri = acc[z].type;

		iniiiri = acc[z].iniamount;

		acc[z].cc = 0;

		cx = acc[z].cc;

		if (cx == 0)

		{

			if (nrooooi == acc[z].no)

			{

				cout << endl << endl << endl;

				cout << "                -------------------" << endl;

				cout << "                - ACCOUNT DELETED -" << endl;

				cout << "                -------------------" << endl << endl;

			}

			else

			{

				cout << endl << endl << endl;

				cout << "                                     ********* " << endl;

				cout << "                THE ACCOUNT NO. IS   * WRONG * " << endl;

				cout << "                                     ********* " << endl << endl << endl << endl;

			}

			system("pause");

			if (cin.get() == '\n')

			{

				system("cls");

			}

		}

}

void all_account_holder_list(int noo, string nameaccc, char typee, int ini , int cm)

{


	cout << endl << endl << endl << endl << endl;

	cout << "                                                  ACCOUNT HOLDER LIST " << endl << endl;

	cout << "           *==============================================================================================* " << endl;

	cout << "           *    A/c No.        *             NAME             *         TYPE        *          BALANCE    *" << endl;

	cout << "           *==============================================================================================*" << endl;

	cout << "           *==============================================================================================*" << endl;


	for (int j = 0; j < i; j++)

	{

			noo = acc[j].no;

			nameaccc = acc[j].accname;

			typee = acc[j].type;

			ini = acc[j].iniamount;

			cm = acc[j].cc;

			if (cm == 1)

			{

				cout << "                 " << noo << "                    " << nameaccc;

				cout << "                 " << typee << "                     " << ini << endl;

				cout << "           *==============================================================================================*" << endl;
			}

	}

	system("pause");




	if (cin.get() == '\n')

	{

		system("cls");

	}

}

void balance_enquiry(int nooo, string nameacccc, char typeee, int inii , int cn)

{

		for (int j = 0; j < i; j++)

		{


				cout << endl << endl << endl << endl << endl;

				cout << "                                                  ENTER THE ACCOUNT NO. :  ";

				cin >> nooo;

				int z = indexacc(nooo);

				nooo = acc[z].no;

				nameacccc = acc[z].accname;

				typeee = acc[z].type;

				inii = acc[z].iniamount;

				cn = acc[z].cc;

				if (cn ==1)

				{

					if (nooo == acc[z].no)

					{

						cout << endl << endl << endl;

						cout << "                -------------------" << endl;

						cout << "                - BALANCE DETAILS -" << endl;

						cout << "                -------------------" << endl;

						cout << endl << endl << endl << "                ACCOUNT NO. : " << acc[z].no << endl << endl;

						cout << "                ACCOUNT HOLDER NAME : " << acc[z].accname << endl << endl;

						cout << "                TYPE OF THE ACCOUNT : " << acc[z].type << endl << endl;

						cout << "                BALANCE AMOUNT : " << acc[z].iniamount << endl << endl << endl << endl << endl;

						system("pause");

						if (cin.get() == '\n')

						{

							system("cls");

						}

					}

				}

				else

				{

					cout << endl << endl << endl;

					cout << "                                     ********* " << endl;

					cout << "                THE ACCOUNT NO. IS   * WRONG * " << endl;

					cout << "                                     ********* " << endl << endl << endl << endl;

					system("pause");

					if (cin.get() == '\n')

					{

						system("cls");

					}

				}

			break;

		}

}

void withdraw_amount(int noioo, string nameaccicc, char typieee, int iinii,int cb)

{

	    int neewbalance;

		cout << endl << endl << endl << endl << endl;

		cout << "                                                  ENTER THE ACCOUNT NO. :  ";

		cin >> noioo;

		int z = indexacc(noioo);

		noioo = acc[z].no;

		nameaccicc = acc[z].accname;

		typieee = acc[z].type;

		iinii = acc[z].iniamount;

		cb = acc[z].cc;

		if (cb==1)
		{


			if (noioo == acc[z].no)

			{

				cout << endl << endl << endl;

				cout << "                -------------------" << endl;

				cout << "                - ACCOUNT DETAILS -" << endl;

				cout << "                -------------------" << endl;

				cout << endl << endl << endl << "                ACCOUNT NO. : " << acc[z].no << endl << endl;

				cout << "                ACCOUNT HOLDER NAME : " << acc[z].accname << endl << endl;

				cout << "                TYPE OF THE ACCOUNT : " << acc[z].type << endl << endl;

				cout << "                BALANCE AMOUNT : " << acc[z].iniamount << endl << endl << endl << endl << endl;

				cout << "                                 TO WITHDRAW AMOUNT " << endl << endl;

				cout << "                ENTER THE AMOUNT TO BE WITHDRAW : ";

				cin >> neewbalance;


				if ((acc[z].iniamount > 0) && (acc[z].iniamount >= neewbalance))

				{

					acc[z].iniamount -= neewbalance;

					cout << endl;

					cout << "                                 RECORD UPTADET" << endl;
				}

				else

				{

					cout << endl ;

					cout << "                         /////////////////////////////" << endl;

					cout << "                         !! THE MONEY IS NOT ENOUGH !!" << endl;

					cout << "                         /////////////////////////////" << endl;
					 
				}


				system("pause");

				if (cin.get() == '\n')

				{

					system("cls");

				}

			}

			else
			{

				cout << endl << endl << endl;

				cout << "                                     ********* " << endl;

				cout << "                THE ACCOUNT NO. IS   * WRONG * " << endl;

				cout << "                                     ********* " << endl << endl << endl << endl;

				system("pause");

				if (cin.get() == '\n')

				{

					system("cls");

				}
			}

		}

		else
		{

			cout << endl << endl << endl;

			cout << "                                     ********* " << endl;

			cout << "                THE ACCOUNT NO. IS   * WRONG * " << endl;

			cout << "                                     ********* " << endl << endl << endl << endl;

			system("pause");

			if (cin.get() == '\n')

			{

				system("cls");

			}
		}

}

void deposit_amount(int noooo, string nameacc, char typ, int iniii , int cv)

{

    	int newbalance;

		cout << endl << endl << endl << endl << endl;

		cout << "                                                  ENTER THE ACCOUNT NO. :  ";

		cin >> noooo;

		int z = indexacc(noooo);

		noooo = acc[z].no;

		nameacc = acc[z].accname;

		typ = acc[z].type;

		iniii = acc[z].iniamount;

		cv = acc[z].cc;

		if (cv == 1)

		{


			if (noooo == acc[z].no)

			{

				cout << endl << endl << endl;

				cout << "                -------------------" << endl;

				cout << "                - ACCOUNT DETAILS -" << endl;

				cout << "                -------------------" << endl;

				cout << endl << endl << endl << "                ACCOUNT NO. : " << acc[z].no << endl << endl;

				cout << "                ACCOUNT HOLDER NAME : " << acc[z].accname << endl << endl;

				cout << "                TYPE OF THE ACCOUNT : " << acc[z].type << endl << endl;

				cout << "                BALANCE AMOUNT : " << acc[z].iniamount << endl << endl << endl << endl << endl;

				cout << "                                 TO DEPOSIT AMOUNT " << endl << endl;

				cout << "                ENTER THE AMOUNT TO BE DEPOSITED : ";

				cin >> newbalance;

				cout << endl;

				cout << "                                  RECORD UPTADET" << endl;

				acc[z].iniamount += newbalance;

				system("pause");

				if (cin.get() == '\n')

				{

					system("cls");

				}

			}

			else
			{

				cout << endl << endl << endl;

				cout << "                                     ********* " << endl;

				cout << "                THE ACCOUNT NO. IS   * WRONG * " << endl;

				cout << "                                     ********* " << endl << endl << endl << endl;

				system("pause");

				if (cin.get() == '\n')

				{

					system("cls");

				}
			}

		}

		else

		{

			cout << endl << endl << endl;

			cout << "                                     ********* " << endl;

			cout << "                THE ACCOUNT NO. IS   * WRONG * " << endl;

			cout << "                                     ********* " << endl << endl << endl << endl;

			system("pause");

			if (cin.get() == '\n')

			{

				system("cls");

			}

		}

}

void new_account()

{

	cout << endl << endl << "                      ENTER THE ACCOUNT NO. : ";

	cin >> acc[i].no;

	cout << endl << endl << "                      ENTER THE NAME OF ACCOUNT HOLDER : ";

	getline(cin, acc[i].accname);

	getline(cin, acc[i].accname);

	cout << endl << endl << "                      ENTER TYPE OF ACCOUNT ( c / s ) : ";

	cin >> acc[i].type;

	cout << endl << endl << "                      ENTER THE INITIAL AMOUNT ( >=  '500' FOR SAVING AND >= '1000' FOR CURRENT ) : ";

	cin >> acc[i].iniamount;

	i++;

	cout << endl << endl << endl << endl << "                     -> ACCOUNT CREATED <-" << endl << endl << endl << endl;

	system("pause");

	if (cin.get() == '\n')

	{

		system("cls");

	}

}

void menu()

{

	do{

		cout << endl << "                                                          *************** ";

		cout << endl << "                                                          *  MAIN MENU  * ";

		cout << endl << "                                                          *************** ";

		cout << endl << endl << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 01- NEW ACCOUNT.                                ~" << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 02- DEPOSIT AMOUNT.                             ~" << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 03- WITHDRAW AMOUNT.                            ~" << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 04- BALANCE ENQUIRY.                            ~" << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 05- ALL ACCOUNT HOLDER LIST.                    ~" << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 06- CLOSE AN ACCOUNT.                           ~" << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 07- MODIFY AN ACCOUNT.                          ~" << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 08- TRANSFER AMOUNT FROM ACCOUNT TO ANPTHER.    ~" << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 09- EXIT.                                       ~" << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;

		cout << "                                                 SELECT YOUR OPTION ( 1 - 9 ) : ";

		int num;

		cin >> num;

		cout << endl << endl << endl;

		system("cls");

		if (num == 1)

		{

			new_account();

		}

		else if (num == 2)

		{
			deposit_amount(acc[i].no, acc[i].accname, acc[i].type, acc[i].iniamount ,acc[i].cc);

		}

		else if (num == 3)

		{

			withdraw_amount(acc[i].no, acc[i].accname, acc[i].type, acc[i].iniamount, acc[i].cc);

		}

		else if (num == 4)

		{

			balance_enquiry(acc[i].no, acc[i].accname, acc[i].type, acc[i].iniamount, acc[i].cc);

		}

		else if (num == 5)

		{



			all_account_holder_list(acc[i].no, acc[i].accname, acc[i].type, acc[i].iniamount, acc[i].cc);

		}

		else if (num == 6)

		{

			close_an_account(acc[i].no, acc[i].accname, acc[i].type, acc[i].iniamount, acc[i].cc);

		}

		else if (num == 7)

		{

			modify_an_account(acc[i].no, acc[i].accname, acc[i].type, acc[i].iniamount, acc[i].cc);

		}

		else if (num == 8)

		{

			transfer_amount_from_account_to_another(acc[i].no, acc[i].accname, acc[i].type, acc[i].iniamount, acc[i].cc);

		}

		else if (num == 9)

		{

			exit();

			break;
		}

	} while (true);


}

void welcome()

{

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	cout << "                                                         **~**~**~**~**~**" << endl;

	cout << "                                                         ~*   WELCOME   *~" << endl;

	cout << "                                                         **~**~**~**~**~**" << endl;

	cout << endl << endl << endl;

	cout << endl << "                                                               BANK " << endl;

	cout << endl << "                                                            MANAGEMENT " << endl;

	cout << endl << "                                                              SYSTEM " << endl;

	cout << endl << endl << endl << endl << endl << endl;

	cout << endl << "                                                    CLICK  :ENTER:  TO CONTINUE " << endl;

	cout << endl << endl << endl << "           *-*-*-*-*-*-*-*-*-* ";

	cout << endl << "MADE BY :  *   W i L L L y   * " << endl;

	cout << "           *-*-*-*-*-*-*-*-*-* " << endl;

	if (cin.get() == '\n')

	{

		system("cls");

	}

}

int main()

{

	welcome();

	menu();

	system("pause");

	return 0;
}
