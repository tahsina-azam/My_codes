#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node* next[26];
    bool leaf;
    int total;
    Node(){
        for(int i = 0; i < 26; i++){
            next[i] = NULL;
        }
        leaf = false;
        total = 0;
    }
};

Node* head = new Node();

void add(string s){
    int n = s.size(), i = 0;
    
    Node* curr = head;
    
    while(i < n){
        int a = s[i] - 97;
        if(curr->next[a] == NULL){
            Node* temp = new Node();
            curr->next[a] = temp;
        }
        curr = curr->next[a];
        curr->total = curr->total + 1;
        i++;
    }
    
    curr->leaf = true;
}

int find(string s){
    int n = s.size(), i = 0;
    
    Node* cur = head;
    
    while(i < n){
        int a = s[i] - 97;
        if(cur->next[a] == NULL){
            return 0;
        }
        cur = cur->next[a];
        i++;
    }
    
    if(cur == NULL){
        return 0;
    }
    
    return cur->total;
}

int main(){
    int n;
    cin >> n;
    for(int a = 0; a < n; a++){
        string st;
        string contact;
        cin >> st >> contact;
        if(st == "add"){
            add(contact);
        }
        else if(st == "find"){
            cout << find(contact) << endl;
        }
    }
    return 0;
}
