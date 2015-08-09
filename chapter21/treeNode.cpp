/*********************************************
> File  : treeNode.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Tue 30 Jun 2015 01:41:13 PM CST
********************************************/

#include<iostream>

class TreeNode
{
    public:
    TreeNode()
    :value_(""), count_(1), left(nullptr), right(nullptr)
    {}

    TreeNode(std::string& s = std::string(), TreeNode* lchild = nullptr, TreeNode* right = nullptr)
    :value_(s), count(1), left_(lchild), right_(right)
    {
    }
    void CopyTree(void);
    TreeNode(const TreeNode& tn);
    ~TreeNode();
    int ReleaseTree(void);

    private:
    std::string value_;
    int count_;
    TreeNode* left_;
    TreeNode* rigtht_;
};

int TreeNode::ReleaseTree(void)
{
    if(left_)
    {
        if(!left_->CopyTree())
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
}

class BinStrTree
{
    public:
    BinStrTree()
    :root(nullptr)
    {}
    BinStrTree(TreeNode* t = nullptr)
    :root(t)
    {
    }
    BinStrTree(const BinStrTree& bst);
    ~BinStrTree();
    private:
    TreeNode* root_;
};

void TreeNode::CopyTree(void)
{
    if(left)
    {
        left->CopyTree();
    }
    if(right)
    {
        right->CopyTree();
    }
    count++;
}

TreeNode::TreeNode(const TreeNode& tn)
    :value_(tn.value_), count_(1), left_(tn.left_), right_(tn.right_)
{
    if(left_)
    {
        left->CopyTree();
    }
    if(right_)
    {
        right->CopyTree();
    }
}

BinStrTree::BinStrTree(const BinStrTree& bst)
    :root_(bst.root_)
{
    root->CopyTree();    
}

~BinStrTree()
{
    if(count_)
    {
        ReleaseTree();
    }
}
