#include <bits/stdc++.h>
using namespace std;

//  calculating mean for serial function
void meanserial()
{
    ofstream fout;
    fout.open("meanserial.txt");
    int n, a[100];
    float sum = 0;
    cout << "enter the value of elements= ";
    fout << "enter the value of elements= ";
    cin >> n;
    fout << n;
    cout << "\nfrequancy=\n";
    fout << "\nfrequancy=\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fout << a[i] << "\n";
        sum += a[i];
    }
    cout << "\nmean for serial data=" << sum / n << "\n";
    fout << "mean for serial data=" << sum / n << "\n";
    fout.close();
}

//  calculating mean for discreat function

void meandis()
{
    ofstream fout;
    fout.open("meandis.txt");
    int a[100], b[100], n, count = 0;
    float sum = 0;
    cout << "enter the value of n =";
    fout << "enter the value of n =";
    cin >> n;
    fout << n << "\n";
    cout << "\nf (x)=\n";
    fout << "\nf (x)=\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fout << a[i] << "\n";
    }
    cout << "\n f=\n";
    fout << "\n f=\n";
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
        fout << b[j] << "\n";
        count += b[j];
    }
    for (int k = 0; k < n; k++)
    {
        sum += a[k] * b[k];
    }
    float m = sum / count;
    cout << "\nMean for discrete data is=" << m << "\n";
    fout << "\nmean for discrete data is=" << m << "\n";
    fout.close();
}

// calculating  mean for continous function
void meancontinous()
{
    ofstream fout;
    fout.open("meancontinous.txt");
    int a[100], b[100], c[100], mid[100], n;
    float sum = 0, fre = 0, s;
    cout << "enter the value of n= ";
    fout << "enter the value of n= ";
    cin >> n;
    fout << n << "\n";
    cout << "\nlower value= \n";
    fout << "\nlower value= \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fout << a[i];
    }
    cout << "\nupper value=\n";
    fout << "\nupper value=\n";
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
        fout << b[j];
    }
    cout << "\nfrequancy=\n";
    fout << "\nfrequancy=\n";
    for (int k = 0; k < n; k++)
    {
        cin >> c[k];
        fout << c[k] << "\n";
    }
    for (int q = 0; q < n; q++)
    {
        mid[q] = (a[q] + b[q]) / 2;
        sum += (mid[q] * c[q]);
        fre += c[q];
    }
    s = sum / fre;
    cout << "mean for continous data=" << s << "\n";
    fout << "\nmean for continous data= " << s;
    fout.close();
}

//  calculating median for serial function
void medianserial()
{
    ofstream fout;
    fout.open("medianserial.txt");
    int a[100], n;
    float even, odd;
    cout << "enter the value of n= ";
    fout << "enter the value of n= ";
    cin >> n;
    fout << n << "\n";
    cout << "\nenter the numbers:\n";
    fout << "\nenter the numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fout << a[i] << "\n";
    }
    cout << "\n median for serial data=";
    fout << "\n median for serial data=";
    if (n % 2 == 0)
    {
        even = ((a[(n - 1) / 2]) + a[(n + 1) / 2]) / 2;
        cout << even;
    }
    else
    {
        odd = a[(n + 1) / 2];
        cout << odd;
        fout << odd << "\n";
    }
    fout.close();
}

//  calculating median for discrete function
void mediandis()
{
    ofstream fout;
    fout.open("mediandis.txt");
    int a[100], b[100], n, m, count = 0;
    cout << "\nenter the value of n= ";
    fout << "\nenter the value of n= ";
    cin >> n;
    fout << n << "\n";
    cout << "\nx= \n";
    fout << "\nx= \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fout << a[i] << "\n";
    }
    cout << "\nf=\n";
    fout << "\nf=\n";
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
        fout << b[j] << "\n";
        count++;
    }
    m = a[count / 21];
    cout << "median for discrete data is=" << m << "\n";
    fout << "median for discrete data is=" << m << "\n";
    fout.close();
}

// median for continous function
void mediancontinous()
{
    ofstream fout;
    fout.open("mediancontinous.txt");
    int a[100], b[100], c[100], d[100], n;
    float med, sum = 0, l, g, f;
    cout << "enter the value of n= ";
    fout << "enter the value of n= ";
    cin >> n;
    fout << n << "\n";
    cout << "\nlower value=\n";
    fout << "\nSlower value=\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fout << a[i] << "\n";
    }
    cout << "\nupper value=\n";
    fout << "\nupper value=\n";
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
        fout << b[j] << "\n";
    }
    cout << "\nfrequancy=\n";
    fout << "\nfrequancy=\n";
    for (int k = 0; k < n; k++)
    {
        cin >> c[k];
        fout << c[k] << "\n";
    }
    f = c[0];
    for (int o = 0; o < n; o++)
    {
        if (f < c[o])
        {
            f = c[o];
        }
    }
    for (int p = 0; p < n; p++)
    {
        if (f == c[p])
        {
            l = a[p];
        }
    }
    for (int q = 0; q < n; q++)
    {
        sum += c[q];
        d[q] = sum;
    }
    g = d[1];
    float h = b[0] - a[0];
    med = 1 + ((((n / 2) - g) * h) / f);
    cout << "median for continous data= " << med;
    fout << "median for continous data= " << med;
    fout.close();
}

//  calculating mode for serial function
void modeserial()
{
    ofstream fout;
    fout.open("modeserial.txt");
    int a[100], n, counter = 0;
    cout << "enter the value of n= ";
    fout << "enter the value of n= ";
    cin >> n;
    fout << n << "\n";
    cout << "\nenter the numbers=\n";
    fout << "\nenter the numbers=\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fout << a[i] << "\n";
    }
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (a[k] == a[j])
            {
                counter++;
            }
        }
    }
    cout << "mode for serial data=" << counter << "\n";
    fout << "mode for serial data=" << counter << "\n";
    fout.close();
}

// calculating mode for discrete function
void modedis()
{
    ofstream fout;
    fout.open("modedis.txt");
    int a[100], b[100], n;
    cout << "\nenter the value of n= ";
    fout << "\nenter the value of n= ";
    cin >> n;
    fout << n << "\n";
    cout << "\nterms=\n";
    fout << "\nterms=\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fout << a[i] << "\n";
    }
    cout << "\nfrequancy=\n";
    fout << "\nfrequancy=\n";
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
        fout << b[j] << "\n";
    }
    int max = b[0];
    for (int k = 0; k < n; k++)
    {
        if (max < b[k])
        {
            max = b[k];
        }
    }
    int mode = b[0];
    for (int l = 0; l < n; l++)
    {
        if (mode == b[l])
        {
            mode = a[l];
        }
    }
    cout << "mode for discrete data is= " << mode;
    fout << "mode for discrete data is= " << mode;
    fout.close();
}

// calculating  mode for continous function
void modecontinous()
{
    ofstream fout;
    fout.open("modecontinous.txt");
    int a[100], b[100], c[100], n;
    float mode, f1, f2, f0, l;
    cout << "lower values=\n";
    fout << "lower value =\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fout << a[i] << "\n";
    }
    cout << "\nupper value=\n";
    fout << "\nupper value=\n";
    for (int j = 0; j < n; j++)
    {
        cin >> b[j];
        fout << b[j] << "\n";
    }
    cout << "\nfrequancy=\n";
    fout << "\nfrequancy=\n";
    for (int k = 0; k < n; k++)
    {
        cin >> c[k];
        fout << c[k] << "\n";
    }
    f1 = c[0];
    for (int m = 0; m < n; m++)
    {
        if (f1 < c[m])
        {
            f1 = c[m];
        }
    }
    f0 = c[0];
    for (int o = 0; o < n; o++)
    {
        if (f0 == f1)
        {
            f0 = c[o - 1];
        }
    }
    f2 = c[0];
    for (int p = 0; p < n; p++)
    {
        if (f1 == c[p])
        {
            f2 = c[p + 1];
        }
    }
    l = c[0];
    for (int q = 0; q < n; q++)
    {
        if (l < c[q])
        {
            l = a[q];
        }
    }
    int w = b[0] - a[0];
    mode = l + (((f1 - f0)) / ((2 * f1) - (f0 + f2)));
    cout << "mode for continous data=" << mode;
    fout << "mode for continous data=" << mode;
    fout.close();
}

/* main code which calls all the function for calculating mean , median ,
 and mode for serial data using file handing */

int main()
{
    int n;
    cout << "\tWELCOME TO STATISTICAL CALCULATION......\n\n\n";
    cout << "what do you want to do?\n";
    cout << "1. mean \n 2.median \n 3.mode \n 4.exit\n";
    cout << "\nenter your choice = ";
    cin >> n;

    switch (n)
    {
    case 1:
    {
        int datatype1;
        cout << "\nseries data for mean?\n";
        cout << "\n1 serial \n 2.discrete \n 3.continous\n4.exit \n";
        cout << "enter your choice = ";
        cin >> datatype1;
        switch (datatype1)
        {
        case 1:
            meanserial();
            break;
        case 2:
            meandis();
            break;
        case 3:
            meancontinous();
            break;
        case 4:
            cout << "exit";
            break;
        default:
            cout << "Invalid choice...\n";
        }
        break;
    }

    case 2:
    {
        int datatype2;
        cout << "series data for median?\n";
        cout << "\n1 serial \n 2.discrete \n 3.continous\n4.exit\n";
        cout << "enter your choice = ";
        cin >> datatype2;
        switch (datatype2)
        {
        case 1:
            medianserial();
            break;
        case 2:
            mediandis();
            break;
        case 3:
            mediancontinous();
            break;
        case 4:
            cout << "exit\n";
            break;
        default:
            cout << "Invalid choice..\n";
        }
        break;
    }

    case 3:
    {
        int datatype3;
        cout << "series data for mode?";
        cout << "\n1 serial \n 2.discrete \n 3.continous \n4.exit \n";
        cout << "enter your choice = ";
        cin >> datatype3;
        switch (datatype3)
        {
        case 1:
            modeserial();
            break;
        case 2:
            modedis();
            break;
        case 3:
            modecontinous();
            break;
        case 4:
            cout << "exit\n";
            break;
        default:
            cout << "Invalid choice... \n";
        }
        break;
    }

    case 4:
    {
        cout << "exit\n";
        break;
    }

    default:
    {
        cout << "\ninvalid choice... !\n";
        break;
    }
    }
}
