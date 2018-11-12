#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include <iostream>
using namespace std;



int randombild(int dim1 = 10, int dim2 = 10, std::string p = "") {  // 2.c
    int i,j;



    ofstream myfile1;
    myfile1.open (p);




    int A3[100][100] = { 0 };
    for (i = 0; i < dim1; i++) {
        std::string t = "";
        for (j = 0; j < dim2; j++) {
            A3[i][j] = rand() % 2;


            std::string s = std::to_string(A3[i][j]);
            t = t+s;


        }
        printf("\n");

        myfile1 << t + " \n";

    }

    myfile1.close();
    return 0;




}






int row(std::string x) {

    ifstream myfile;
    int f;


    string line;
    myfile.open(x);
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            f = line.length() -1;

        }

        myfile.close();

        return f;

    }}
    int column(std::string x) {

        ifstream myfile;
        int i = 0;

        string line;
        myfile.open(x);
        if (myfile.is_open())
        {
            while ( getline (myfile,line) )
            {

                i = i + 1;


            }


            myfile.close();

            return i;

        }




}


int overlay (std::string a, std::string b, std::string c = "result.txt"){

    string line1;
    string line2;

    ofstream myfile;
    myfile.open (c);
    ifstream myfile1;
    myfile1.open (a);
    ifstream myfile2;
    myfile2.open (b);
    int k = 0;
    int i = 0 ;
    int j = 0 ;
    int l;
    k = row (a);

    j = column (b);

    if (myfile1.is_open())
    {
        while ( i < k )
        {
            string result = "";


            getline (myfile1,line1);
            getline (myfile2,line2);
            i = i + 1;

            for (l=0;l<j;l++){
                string m = "";
                string n = "";
                string h = "";



                m = std::to_string(line1[l]);
                n = std::to_string(line2[l]);
                h = m + n;


                if ((h == "4848")) {   // OR
                    result = result + "0";
                } else {

                    result = result + "1";
                }




            }
            myfile << result + " \n";






        }
        myfile1.close();
        myfile2.close();
        myfile.close();
    }









    return 0;
}


int encode (std::string a, std::string b, std::string c = "result.txt"){

    string line1;
    string line2;

    ofstream myfile;
    myfile.open (c);
    ifstream myfile1;
    myfile1.open (a);
    ifstream myfile2;
    myfile2.open (b);
    int k = 0;
    int i = 0 ;
    int j = 0 ;
    int l;
    k = row (a);

    j = column (b);

    if (myfile1.is_open())
    {
        while ( i < k )
        {
            string result = "";


            getline (myfile1,line1);
            getline (myfile2,line2);
            i = i + 1;

            for (l=0;l<j;l++){
                string m = "";
                string n = "";
                string h = "";



                m = std::to_string(line1[l]);
                n = std::to_string(line2[l]);
                h = m + n;


                if ((h == "4848") || (h == "4949")) {   // XOR
                    result = result + "0";
                } else {

                    result = result + "1";
                }




            }
            myfile << result + " \n";






        }
        myfile1.close();
        myfile2.close();
        myfile.close();
    }









    return 0;
}

int decode (std::string a, std::string b, std::string c = "result1.txt"){

    string line1;
    string line2;

    ofstream myfile;
    myfile.open (c);
    ifstream myfile1;
    myfile1.open (a);
    ifstream myfile2;
    myfile2.open (b);
    int k = 0;
    int i = 0 ;
    int j = 0 ;
    int l;
    k = row(a);

    j = column (b);

    if (myfile1.is_open())
    {
        while ( i < k )
        {
            string result = "";


            getline (myfile1,line1);
            getline (myfile2,line2);
            i = i + 1;

            for (l=0;l<j;l++){
                string m = "";
                string n = "";
                string h = "";



                m = std::to_string(line1[l]);
                n = std::to_string(line2[l]);
                h = m + n;


                if ((h == "4848") || (h == "4949")) {   // XOR
                    result = result + "0";
                } else {

                    result = result + "1";
                }




            }
            myfile << result + " \n";






        }
        myfile1.close();
        myfile2.close();
        myfile.close();
    }









    return 0;
}


void show (std:: string k){

    string line;
    ifstream myfile (k);
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << "-------------------- " << line << " --------------------- "<< '\n';




        }
        myfile.close();
    }

    cout << '\n';
}


int main () {
    cout << "-------------------------------------------------" << '\n';
    cout << "-------------------------------------------------" << '\n';
    cout << "-------------------------------------------------" << '\n';
    cout << "--------------- Welcome to VisualCrypt ----------" << '\n';
    cout << "-------------------------------------------------" << '\n';
    cout << "----------------------- Menu --------------------" << '\n';
    cout << "-------------------------------------------------" << '\n';
    cout << "------------------- 1. Randombild ---------------" << '\n';
    cout << "-------------------------------------------------" << '\n';
    cout << "------------------- 2. Overlay ------------------" << '\n';
    cout << "-------------------------------------------------" << '\n';
    cout << "------------------- 3. Encode -------------------" << '\n';
    cout << "-------------------------------------------------" << '\n';
    cout << "------------------- 4. Decode -------------------" << '\n';
    cout << "-------------------------------------------------" << '\n';






    string z = "";
    string x = "";
    string y = "";
    int k = 0 ;
    int m = 0 ;
    int n = 0 ;
    cout << "-------------------  Mode : ";

    cin >> k;


    if( k == 1 ) {
        cout << "Row : ";

        cin >> m;
        cout << '\n';
        cout << "Column : ";

        cin >> n;
        cout << '\n';
        cout << "File : ";

        cin >> z;
        cout << '\n';



        randombild(m,n,z);
        cout << '\n';
        show(z);
        main();

    } else if( k == 2 ) {

        cout << "File 1 : ";

        cin >> x;
        cout << '\n';

        show(x);
        cout << '\n';


        cout << "File 2 : ";

        cin >> y;
        cout << '\n';
        show(y);
        cout << '\n';





        overlay(x,y,"result.txt");
        show("result.txt");
        main();
    } else if( k == 3) {
        cout << "File : ";

        cin >> x;
        cout << '\n';
        cout << "Key : ";

        cin >> y;
        cout << '\n';




        encode(x,y,"result.txt");
        show("result.txt");
        main();




    } else {
        cout << "File : ";

        cin >> x;
        cout << '\n';
        cout << "Key : ";

        cin >> y;
        cout << '\n';




        decode(x,y,"result1.txt");
        show("result1.txt");
        main();
    }
















    return 0;
}

