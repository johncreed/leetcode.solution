# leetcode.solution

id | prob_name | try | time | topics | err_note | read_sol | todo | ext
 -----|-----|-----|-----|-----|-----|-----|-----|-----
 1 | Two Sum | 1 | - | Hash Table | - | done | - | -
 7 | Reverse Integer | 5 | 1h | Math | 1. c++ operator precedence <br> 2. Read instruction carefully | done | - | - | -
 14 | Longest Common Prefix | 3 | 27m | String | use min\<T\>() instead of min() | done | - | - | -
 15 | 3Sum | 3 | 59m47s | 3sum | tle | none | read other's code | -
 33 | Search in Rotated Sorted Array | 2 | 2h | Binary search | Overlook corner case arr size == 0 | done | try while loop for search | - 
 36 | Valid Sudoku | 5 | 30m00s | hash table | 1. missing ; <br> 2. wrong input  | done | - | -
 68 | Text Justification | 7 | 1h24m55s | String | 1. Compile err <br> 2. Ambiguous Q description.... | none | - | learn an even divide trick ('w')
 128 | Longest Consecutive Sequence | 2 | 43m07s | Hash Table | corner case arr = [] | done | - | -
 160 | Intersection of Two Linked Lists | 2 | 30m | Linked List | typo | done | - | -
 162 | Find Peak Element | 7 | 1h | Binary Search | 1. Wrong proof <br> 2. Miss INT_MIN corner case | done | try iterative bi search  | - 
 202 | Happy Number | 2 | 27m00s | Hash Table & Math | misused %= as /= | done | Floyd's Cycle-Finding Algorithm | -
 221\* | Maximal Square | nan | 2h | Dynamic Programming | Not come up solution | done | - | -
 222 | Count Complete Tree Nodes | 2 | 30m | 1. binary search <br> 2. tree | - | done | - | -
 271 | Encode and Decode Strings | nan | 2h | encoding | 1. char vs unsigned char | done | - | -
 295 | Find Median from Data Stream | nan | 2h00m | 1. head 2. design | avl tree subtree may be null | - | - | -
 297 | Serialize and Deserialize Binary Tree | nan | 1h | tree, design | 1. pointer is pass by copy <br> 2. intToS sToInt | done | - | -
 299 | Bulls and Cows | 2 | 20m | hash table | - | - | - | -
 322 | Coin Change | 2 | 1h | Dynamic Programming | wrong init vec size | done | try bottom-up approach  | - 
 329 | Longest Increasing Path in a Matrix | 5 | 45m | dfs, topological sort, memorization | 1. Class does not support pass ref object to member object. 2. Invalid array access | done | DP (Peeling Onion) | -
 334 | Increasing Triplet Subsequence | 3 | 1h30m | - | 1. Read instruction carefully | none | -  | We can extends to more than 3 seq
 336 | Palindrome Pairs | nan | 1h | string | missing cases | done | try trie tree | -
 359 | Logger Rate Limiter | 3 | 45min | 1. hash table <br> 2. design | 1. priority queue use "push" <br> 2. class mycmp{ bool operator()() const {}} | done | - | -
 362 | Design Hit Counter | nan | ?? | Design | array indexing | none | - | -
 459\* | Repeated Substring Pattern | nan | nan | string | 1. try too complicated method | none | - | built longest proper prefix
 465 | Optimal Account Balancing | 3 | 1h05m | dfs | - | - | - | -
 489 | Robot Room Cleaner | 1 | 1h | dfs | - | done | - | -
 552 | Student Attendance Record II | 5 | 1h30m | dp | 1. miss understand Q | - | - | -
 659\* | Split Array into Consecutive Subsequences | nan | 3h | greedy | 1. i++ vs ++i <br> 2. Miss end case <br> 3. if( a- b ) not equiv if( a > b ) | done | - | -
 727 | Minimum Window Subsequence | 3 | 27m | 1. dp 2. sliding window | - | done | - | -
 752 | Open the Lock | nan | 1h12m | bfs | 1. fail on dp | done | - | two-end bfs speed up
 767 | Reorganize String | nan | 1h30m | 1. greedy 2. string | no idea | done | - | -
 809 | Expressive Words | 1 | 30m | string | 1. vector use push_back... | done | try 2 pointer | -
 833 | Find And Replace in String | 2 | 30m | string | index update rule miss | done | - | -
 843 | Guess the Word | 2 | 30m | minimax | - | done | - | -
 862\* | Shortest Subarray with Sum at Least K | 2 | 1h25m | deque, binary search | - | done | - | -
 889 | Construct Binary Tree from Preorder and Postorder Traversal | 5 | 1h | tree | see note | read O(n) | - | -
 951 | Flip Equivalent Binary Trees | 3 | 45m | tree | 1. miss tree traverse NULL leaf detection | done | - | -
 1007 | Minimum Domino Rotations For Equal Row | 3 | 25m | greedy | 1. miss the Q requirement | done | - | -
 1031\* | Maximum Sum of Two Non-Overlapping Subarrays | nan | 3h | array | 1. segmentation tree implementation 2. indexing array | done | - | -
 1032\* | Stream of Characters | nan | nan | ac automaton | - | - | - | -
 1110 | Delete Nodes And Return Forest | 1 | 1h | dfs | none | none | - | -
 1048 | Longest String Chain | 3 | 1h26m | Hash Table, DP | 1. wrong vector initialization <br> 2. update maxH err | none | - | -
 1074\* | Number of Submatrices That Sum to Target | 3 | 1h | dp | tle | none | - | -
 1088 | Confusing Number II | 2 | 2h | backtracing | see note | none | - | -
 1146\* | Snapshot Array | nan | nan | ? | 1. don't use memset .... 2. begin case | none | - | -
 1197\* | Minimum Knight Moves | nan | 2h | bfs | 1. time limited exceeded 2. unordered_map does not support pair 3. miss 0,0 case | none | - | -
 1219 | Path with Maximum Gold | 2 | 30m | backtracking | 1. m\*n arr not L * L arr | none | - | -
 1231 | Divide Chocolate | 2 | 1h | 1. binary search 2. greedy | iterative biseach implementation err | - | - | -
375 | Guess Number Higher or Lower II | nan | 1h20m | dp | 1. wrong thinking direction. | done | - | -
1438 | Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit | 4 | 45min | 1. array 2. sliding window | 1. empty map access  | done | try deque | - 
 743 | Network Delay Time | 3 | 22m | Dijkstra's algorithm | 1. forget init original cost to zero. | done | - | -
 76\* | Minimum Window Substring | 3 | 45m | 1. two pointer 2. hash table | Not familiar with hash tricks. | done | do more hash problems | -
 560 | Subarray Sum Equals K | 2 | 20m | 1. hash table | indexing error | done | - | -
 253 | Meeting Rooms II | 2 | 20m | interval overlap count | 1. input array may be empty | done | - | -
 846 | Hand of Straights | 2 | 15m | 1. ordered map | 1. map.begin()->first 2. map.find() | done | - | -
 1296 | Divide Array in Sets of K Consecutive Numbers (same as 846) | 2 | 15m | 1. ordered map | 1. map.begin()->first 2. map.find() | done | - | -
 1140\* | Stone Game II | nan | nan | dp | - | - | do more dp | -
 346 | Moving Average from Data Stream | 1 | 7m | queue | - | done | - | -
 946 | Validate Stack Sequences | 2 | 15m | stack | 1. miss stack is empty case. | done | - | -
 679\* | 24 Game | nan | 1h25m | dfs | - | done | 1. do more permutation problem | -
 410\* | Split Array Largest Sum | nan | 45m | dp or bisearch | infinite bisearch loop | done | list all some invalid bisearch case | -
 315\* | Count of Smaller Numbers After Self | nan | nan | merge sort with status | do not have sol | done | done | done
 1153\* | String Transforms Into Another String | 4 | 1h15m | 1. graph 2. union set | 1. logic error (write down pseudo-code / double check pseudo code) | none | - | -
 1345 | Jump Game IV | nan | 1h | bfs | 1. Create unneccesary arry with length N | - | - | -
 593 | Valid Square | 2 | 20m | geometry | miss 0, 0, 0, 0 case | - | - | -
399 | Evaluate Division | 3 | 50m | dfs | 1. unordered_map using pair need its own hash function. | - | try using union_set method | -
394\* | Decode String | nan | 1h20m | parser | 1. Not clear about LL parser | - | - | -
85 | Maximal Rectangle | 2 | 40m | dp | 1. input data is a char not int value. | done | todo | ext
914 | X of a Kind in a Deck of Cards | 2 | 9m | 1. math (gcd) | map.begin()->second | done | - | -
1376 | Time Needed to Inform All Employees | nan | 20m | bfs | 1. access queue element after pop | - | - | -
1320\* | Minimum Distance to Type a Word Using Two Fingers| nan | 1h | dp | 1. matrix access before initialization | - | - | -
1060 | Missing Element in Sorted Array | 1 | 10m | binary search | - | done | - | -
270 | Closest Binary Search Tree Value| 2 | 20m | binary search tree traversal | type unmatched errer | done | - | -
301\* | Remove Invalid Parentheses | nan | nan | backtracing | unfamiliar with backtracing implementation | done | - | -
199 | Binary Tree Right Side View | 2 | 12m | 1. Tree 2. BFS | missing a case that root is NULL. | done | - | -
273 | Integer to English Words | 6 | 1h | Implementation | 1. string merge | done | - | -
23 | Merge k Sorted Lists | 4 | 30m | 1. merge sort | 1. logic error | done | - | -
67 | Add Binary | 2 | 16m | 1. math | 1. Forget to clear register after while loop | done | - | -
398 | Random Pick Index | 1 | 9m | reservoir sampling | - | none | - | -
269\* | Alien Dictionary | nan | 2h30m | 1. Graph 2. Topology sort | Not familiar with problem | done | - | -
88 | Merge Sorted Array | 1 | 12m | 1. two pointer | - | done | - | -
415 | Add Strings | 1 | 10m | 1. two pointer | - | done | - | -
124\* | Binary Tree Maximum Path Sum | nan | 1h40m | 1. tree 2. dfs | - | read_sol | todo | ext
| try | time | topics | err_note | read_sol | todo | ext
