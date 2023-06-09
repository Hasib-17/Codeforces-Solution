/*Author: Hasib; Date:06/01/23*/
#include <bits/stdc++.h>
#define ii_65                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define ul unsigned long long
#define dec greater<int>()
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define all(x) (x).begin(), (x).end()
using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void pre_order(struct Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    pre_order(root->left);
    pre_order(root->right);
}
void inorder(struct Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void post_order(struct Node *root)
{
    if (root == NULL)
        return;
    post_order(root->left);
    post_order(root->right);
    cout << root->data << " ";
}
void solve()
{
    //*@[START]*//
    struct Node *root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
    pre_order(root);
    cout << '\n';
    inorder(root);
    cout << '\n';
    post_order(root);
}
int main()
{
    ii_65;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}