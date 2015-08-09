/*********************************************
> File  : TreeNode.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 30 Jun 2015 03:00:45 PM CST
********************************************/

#include<iostream>

class TreeNode
{
    public:
    TreeNode()
    :value_(""), count(1), left_(nullptr), right_(nullptr)
    {
    }
    TreeNode(std::string& str = std::string(), TreeNode* left = nullptr, TreeNode* right = nullptr)
    :value_(str), count_(1), left_(left), right_(right)
    {

    }
    TreeNode(const TreeNode& tn);
    ~TreeNode();
    int ReleaseTree(void);

    private:
    std::string value_;
    int count_;
    TreeNode* left_;
    TreeNode* right_;
};

class BinStrTree
{
public:
    BinStrTree()
        :root(nullptr)
    {

    }
    BinStrTree(TreeNode* root = nullptr)
        :root_(root)
    {}
    ~BinStrTree();
private:
    TreeNode* root_;
};
BinStrTree::~BinStrTree()
{
    if(!root->ReleaseTree())
    {
        delete root;
    }
}
TreeNode::TreeNode(const TreeNode& tn)
    :value_(tn->value_), count_(1), left_(tn->left_), right_(tn->right_)
{
    if(left_)
    {
        left_->CopyTree();
    }
    if(right_)
    {
        right_->CopyTree();
    }
}
int TreeNode::ReleaseTree(void)
{
    if(left_)
    {
        if(!left_->CopyTree)
        {
            delete left_;
        }
    }
    if(right_)
    {
        if(!right_->CopyTree())
        {
            delete right_;
        }
    }
    count_--;
    return count_;
}
TreeNode::~TreeNode()
{
    if(count_)
    {
        ReleaseTree();
    }
}
