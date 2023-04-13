// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find a solved Sudoku
    // const int n=9;
    bool isvalid(vector<vector<int>> grid,int i,int j,int val)
    {
        for(int x=0;x<9;x++)
        {
            if(grid[i][x]==val)return false;
            else if(grid[x][j]==val)return false;
            else if(grid[3*(i/3)+x/3][3*(j/3)+x%3]==val)return false;
            
        }
        return true;
    }
    bool SolveSudoku(vector<vector<int>> &grid)  
    {
        bool ok=true;
         for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(grid[i][j]==0)
                {
                    for(int val=1;val<=9;val++)
                    {
                        if(isvalid(grid,i,j,val))
                        {
                            grid[i][j]=val;
                            if(SolveSudoku(grid))
                            {
                                return true;
                            }
                            else
                            grid[i][j]=0;
                        }
                    }
                    return false;
                }
            }
        }
        
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (vector<vector<int>> grid) 
    {
        // Your code here 
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            cout<<grid[i][j]<<" ";
            cout<<endl;
        }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		vector<vector<int>> grid(N,vector<int>(N,0));
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends

struct node{
        int key;
        int val;
        int cnt;
        node *prev,*next;
        node(int k,int value)
        {
            key=k;val=value;prev=NULL;next=NULL;
            cnt=1;
        }
    };
    
    
    struct list{
        node *head,*tail;
        int size;
        list()
        {
            head=new node(0,0);
            tail=new node(0,0);
            head->next=tail;
            tail->prev=head;
            head->prev=tail;
            size=0;
        }

        void add(node* temp)
        {
            temp->next=head->next;
            temp->next->prev=temp;
            temp->prev=head;
            head->next=temp;
            size++;
        }
        node *remove()
        {
            node *tt=tail->prev;
            tail->prev->prev->next=tail;
            tail->prev=tail->prev->prev;
            size--;
            return tt;
        }
    };
    unordered_map<int,list*> listmap;
    unordered_map<int,node*>  nodemap;
    int freq;
    int maxsize,currsize;
    LFUCache(int capacity) {
        maxsize=capacity;
        freq=0;
        currsize=0;
    }
    
    int get(int key) {
        if(nodemap.find(key)==nodemap.end())
        return -1;
        list *l1=new list();
        node* temp=nodemap[key];
        int rr=temp->val;
        int f1=temp->cnt;
        temp->cnt+=1;
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        if(listmap[f1]->size==0 && freq==f1)
        freq++;
        if(listmap.find(f1+1)!=listmap.end())
        l1=listmap[f1+1];
        l1->add(temp);
        listmap[f1+1]=l1;
        cout<<temp->cnt<<endl;
        return rr;
    }
    
    void put(int key, int value) {
        if(nodemap.find(key)==nodemap.end())
        {
            if(currsize==maxsize)
            {
                // cout<<freq<<endl;
                node* kk=listmap[freq]->remove();
                // cout<<kk->val<<endl;
                nodemap.erase(kk->val);
                currsize--;
            }
            list* l1=new list();
            if(listmap.find(1)!=listmap.end())
            l1=listmap[1];
            node* temp=new node(key,value);
            nodemap[key]=temp;
            l1->add(temp);
            listmap[1]=l1;
            currsize++;
            freq=1;
        }
        else
        {
            list *l1=new list();
            node* temp=nodemap[key];
            temp->val=value;
            int f1=temp->cnt;
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            temp->cnt+=1;
            if(listmap[f1]->size==0 && freq==f1)
            freq++;
            if(listmap.find(f1+1)!=listmap.end())
            l1=listmap[f1+1];
            l1->add(temp);
            listmap[f1+1]=l1;
        }
    }