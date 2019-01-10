Thuật toán lazy update.
đề bài: cho mảng n phần tử và q truy vấn. 
truy vấn: 1 x y val  update từ x->y lên val giá trị

truy vấn: 2 x y      in ra min trong đoạn x->y.


Mô tả:/https://www.geeksforgeeks.org/lazy-propagation-in-segment-tree/
Lazy Propagation in Segment Tree
Segment tree is introduced in previous post with an example of range sum problem. We have used the same “Sum of given Range” problem to explain Lazy propagation

How does update work in Simple Segment Tree?
In the previous post, update function was called to update only a single value in array. Please note that a single value update in array may cause multiple updates in Segment Tree as there may be many segment tree nodes that have a single array element in their ranges.

Below is simple logic used in previous post.
1) Start with root of segment tree.
2) If array index to be updated is not in current node’s range, then return
3) Else update current node and recur for children.

Below is code taken from previous post.
Lazy Propagation – An optimization to make range updates faster

When there are many updates and updates are done on a range, we can postpone some updates (avoid recursive calls in update) and do those updates only when required.

Please remember that a node in segment tree stores or represents result of a query for a range of indexes. And if this node’s range lies within the update operation range, then all descendants of the node must also be updated. For example consider the node with value 27 in above diagram, this node stores sum of values at indexes from 3 to 5. If our update query is for range 2 to 5, then we need to update this node and all descendants of this node. With Lazy propagation, we update only node with value 27 and postpone updates to its children by storing this update information in separate nodes called lazy nodes or values. We create an array lazy[] which represents lazy node. Size of lazy[] is same as array that represents segment tree, which is tree[] in below code.

The idea is to initialize all elements of lazy[] as 0. A value 0 in lazy[i] indicates that there are no pending updates on node i in segment tree. A non-zero value of lazy[i] means that this amount needs to be added to node i in segment tree before making any query to the node.
// To update segment tree for change in array
// values at array indexes from us to ue.
updateRange(us, ue)
1) If current segment tree node has any pending
   update, then first add that pending update to
   current node.
2) If current node's range lies completely in 
   update query range.
....a) Update current node
....b) Postpone updates to children by setting 
       lazy value for children nodes.
3) If current node's range overlaps with update 
   range, follow the same approach as above simple
   update.
...a) Recur for left and right children.
...b) Update current node using results of left 
      and right calls.

Below is modified update method.
