class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        int ans=0;
        if(root==NULL){
            return 0;
        }
        
        int ldepth = height(root->left);
        int rdepth = height(root->right);
        
        if(ldepth>rdepth){
            return(ldepth+1);
            
        }
        else{
            return (rdepth+1);
            
        }
        
       
    }

}; //End of Solution