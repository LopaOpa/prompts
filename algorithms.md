# Algorithms

*Binary Tree Traversals*

1.	Start 
2.	Read the values of ch
3.	If ch=1 then it traverse through Inorder
	    Inorder(T-left)
	    Print(T->data)
	    Inorder(T->right)
4.	if ch=2 then it traverse through Postorder         
      Postorder(T->left)
			Postorder(T->right)
			Preorder(T->right)
5.	if ch=2 then it traverse through Postorder	
      postorder(T->left)
			Postorder(T->right)
			Print(T->data)
6.	Print the element
7.	Stop the process.

*Binary Search Tree*

1.	Start
2.	Read the option value
3.	If option=1 then read x
	    And check if root is Null then assign root as t
4.	Else store current data as x and print it
	    If (curr->data=x) then assign left child to curr and check if(curr=null)
	     Prev->lchild=t
5.	Else     
      Prev=curr, curr=curr->rchild 
        check if(curr==Null)then pre-> rchild=t
6.	Print the value of x
7.	Enter the no of deleted x
	   Check p is not null and then assign lchild as p
8.	If p is null then print x	
	    Check P as root then assign c as root
      delete the node p
9.	Stop

*Hashing Techniques*

1.	Start the program
2.	Get the array size.
3.	Get the elements of the array.
4.	Get the key value of the element to be searched.
5.	Find the position of the element by taking the remainder of the division of the array size by the key.
6.	Print the element in that position.
7.	Terminate the program

*Heap Sort*

1.	Start
2.	Read the value of n
3.	check while(n>=2) then item =delete heap(a,n)
	    a[n]=item, n--
4.	Insert heap(assigning int var) while (i>1) && (item>a[par]) then 
	    A[i]=a[par], i=par, par=i/2
5.	Check if (par<1) then par=1
	   Delete heap (assign value)
6.	Check while (right<=n) then if (Last ) = a[left]&&
	    [last]=a[right] then a[i]=last
7.	Else if [a(left)]=a[right] then
	    A[i]=a[left], i=left; else a[i]=a[right]
8.	Stop

*Depth First Search*

1.	Start
2.	Read the value of n
3.	Set for loop as i<n as i=0
4.	Set for loop as j>n as j=0
5.	Read adjacency of adj[i][j]
	    Read dfs(s)
6.	Set for loop i<n and execute check whether (!vis[i]) then
	    Dfs(i)
7.	Stop

*Breadth First Search*

1.	Start
2.	Read the size value in choice=1 and get the vertex value
3.	Set for loop of condition i=1 and i<n
4.	Read the number of edges
5.	Set for loop of condition j<= no. of edges and j=1
6.	Read the edge position
7.	if Ch=2 then check a[i][j]==1
	    then check v[j]=0
	      printf v[j]
8.	If ch==3 for display set for loop i<=n and  print vt[i]
9.	Set for loop j<=n and then print the a[i][j]
10.	Stop


