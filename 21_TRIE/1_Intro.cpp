#include<iostream>
using namespace std;

class TrieNode
{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch)
        {
            data = ch;
            for(int i=0; i<26; i++)
                children[i] = NULL;
                
            isTerminal = false;
        }
};

class Trie
{
    public:
    TrieNode* root;

    Trie() // creating a constructor
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word)
    {
        // base case -> we have traversed the whole string so mark the last character as terminal
        if(word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        //assumption -> word will be in capital letter
        int index = word[0] - 'A';
        TrieNode* child;

        // present so move to the next character
        if(root->children[index] != NULL)
            child = root->children[index];

        else
        {
            // absent so create a new node and insert 
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // RECURSION
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word)
    {
        // base case
        if(word.length() == 0) return root->isTerminal;

        int index = word[0] - 'A';
        TrieNode* child;

        // present
        if(root->children[index] != NULL) child = root->children[index];
        // absent
        else return false;
        // recursion
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }

};

int main()
{
    Trie *t = new Trie();

    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");

    cout<<"present or Not: "<<t->searchWord("TIME")<<endl;
    cout<<"present or Not: "<<t->searchWord("TIM")<<endl;
    cout<<"present or Not: "<<t->searchWord("ARM")<<endl;
    cout<<"present or Not: "<<t->searchWord("ARMY")<<endl;
       
}

