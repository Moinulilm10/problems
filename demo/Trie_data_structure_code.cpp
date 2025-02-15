#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    bool isWord;
    TrieNode *next[26];
    TrieNode()
    {
        isWord = false;
        for (int i = 0; i < 26; i++)
        {
            next[i] = NULL;
        }
    }
    void printNode()
    {
        cout << "status: " << isWord << endl;
        for (int i = 0; i < 26; i++)
        {
            if (next[i])
            {
                cout << (char)(i + 'a') << endl;
            }
        }
        cout << endl;
    }
};

void insertString(string &str, TrieNode *root)
{
    TrieNode *currNode = root;
    for (auto c : str)
    {
        int order = c - 'a';
        if (currNode->next[order] == NULL)
        {
            currNode->next[order] = new TrieNode();
        }
        currNode = currNode->next[order];
    }
    currNode->isWord = true;
}

// word search
bool exists(string str, TrieNode *root, bool isPrefixSearch = false)
{
    TrieNode *currNode = root;
    for (auto c : str)
    {
        int order = c - 'a';
        if (currNode->next[order] == NULL)
        {
            return false;
        }
        currNode = currNode->next[order];
    }
    return currNode && (currNode->isWord || isPrefixSearch);
}

prefix search bool existsAsPrefix(string str, TrieNode *root)
{
    return exists(str, root, true);
}

int main()
{
    TrieNode *root = new TrieNode();
    string str = "rat";
    insertString(str, root);
    cout << exists("rab", root) << endl;

    str = "rab";
    insertString(str, root);
    cout << exists("rab", root) << endl;

    // root->printNode();
    // root->next['r' - 'a']->printNode();
    // root->next['r' - 'a']->next['a' - 'a']->printNode();
    // root->next['r' - 'a']->next['a' - 'a']->next['t' - 'a']->printNode();

    return 0;
}