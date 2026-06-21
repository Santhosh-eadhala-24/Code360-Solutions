pattern1

class Solution:
    def pattern1(self, n):
       for i in range(1,n+1):
            for j in range(1,n+1):
                print("*",end="")
            print()
			
			
			
pattern 2

class Solution:
    def pattern2(self, n):
        for i in range(n):
            for j in range(i+1):
                print("*",end="")
            print()
			

pattern 3

class Solution:
    def pattern3(self, n):
        for i in range(1,n+1):
            for j in range(1,i+1):
                print(j,end="")
            print()
			
			
pattern 4

class Solution:
    def pattern4(self, n):
        for i in range(1,n+1):
            for j in range(1,i+1):
                print(i,end="")
            print()
			

pattern 5

class Solution:
    def pattern5(self, n):
        for i in range(n):
            for j in range(n-i):
                print("*",end="")
            print()
			
pattern 6

class Solution:
    def pattern6(self, n):
        for i in range(1,n+1):
            for j in range(1,n-i+2):
                print(j,end="")
            print()
			
patterrn 7

class Solution {
public:
    void pattern7(int n) 
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            for(j=0;j<2*i+1;j++)
            {
                cout<<"*";
            }
            for(j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            cout<<endl;
        }
        

    }
};



pattern 8

int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                cout<<" ";
            }
            for(j=0;j<2*n-(2*i +1);j++)
            {
                cout<<"*";
            }
            for(j=0;j<i;j++)
            {
                cout<<" ";
            }
            cout<<endl;
        }
		
		
		
pattern 9 is comb of pattern 7,8



pattern 10

void pattern1(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern2(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}


pattern 11

void pattern1(int n)
{
    int i,j,s=1;
    
    for(i=0;i<n;i++)
    {
        if(i % 2 == 0){
            s=1;
        }
        else{
            s=0;
        }
        for(j=0;j<=i;j++)
        {
            cout<<s;
            s=1-s;
        }
        cout<<"\n";
    }
}


pattern 12

int sp=2*(n-1);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(j=1;j<=sp;j++)
        {
            cout<<" ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
        sp -=2;
    }
	
	
pattern 13

int sp=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<sp<<" ";
            sp +=1;
        }
        cout<<endl;
    }


pattern 14

for(i=1;i<=n;i++)
    {
        for(char ch='a';ch<='a'+ i;ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
	
	
pattern 15

for(i=1;i<=n;i++)
    {
        for(j='a';j<=('a'+n)-i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
	
	
pattern 16

for(i=0;i<n;i++)
    {
        char ch='a'+i;
        for(j=0;j<=i;j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
	
pattern 17

		for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            char ch='a';
            int bp=(2*i+1)/2;
            for(j=0;j<2*i+1;j++)
            {
                cout<<ch;
                if(j <bp)   ch++;
                else ch--;
            }
            for(j=0;j<n-i-1;j++)
            {
                cout<<" ";
            }
            cout<<endl;
        }
		
		
pattern 18

for(i=1;i<=n;i++)
    {
        char ch='a'+n;
        for(j=1;j<=i;j++)
        {
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
	
	
pattern 19

    int insp=0;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        for(j=0;j<insp;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        insp +=2;
    }
    insp=8;
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
      

	  for(j=0;j<insp;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        insp -=2;
    }


pattern 20

int insp=8;
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(j=0;j<insp;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        insp -=2;
    }
    insp=0;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        for(j=0;j<insp;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        insp +=2;
    }

pattern 21

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }

pattern 21

for(i=0;i<2*n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            int t=i;
            int b=j;
            int r=(2*n-2)-j;
            int l=(2*n-2)-i;
            cout<<(n-min(min(t,b),min(r,l)));
        }
        cout<<endl;
    }	