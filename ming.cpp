#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// /*
// int Fun(int i) {
//   int res = 0;
//   if(i == 0) return res;
//   res++;
//   while((i & (i-1)) > 0) {
//     res++;
//     i = i&(i-1);
//   }
//   // do {
//   //   res++;
//   //   i &= (i-1);
//   // }while(i);
//   // while(i>0) {
//   //   res++;
//   //    i = i&(i-1);
//   // }
//   return res;
// }

// int Fun(int num) {
//   int res = 0;
//   while(num) {
//     res++;
//     num = num&(num-1);
//   }
//   return res;
// }
// int Fun(int num) {
//   int res = 0;
//   while(num>0){
//     if(num&1)
//     res++;
//     num >>= 1;
//   }
//   return res;
// }
// int main() {
// cout<<(NumofOne(5) == Onebyone(5))<<endl;
// cout<<(NumofOne(242) == Onebyone(242))<<endl;
// return 0;

// }

// /*
// struct Node {
// int num;
// Node* left;
// Node* right;
// Node(int digit):num(digit),left(NULL),right(NULL){}
// };
// void preOrder(Node* root)
// {
//   if(!root)
//   {
//     return;
//   }
//   cout<<root->num;
//   preOrder(root->left);
//   preOrder(root->right);
// }
// bool Search(Node* root, int num) //root is a BST
// {
//   if(!root) {
//     return false;
//   }
//   if(root->num >num) {
//    return Search(root->left,num);
//   } else if(root->num<num)
//   {
//     return Search(root->right,num);
//   }
//   else{
//     return true;
//   }
// }
// bool func1()
// {
//   return true;
// }

// bool func()
// {
//   bool result=func1();
//   double d = 1.2;
// }
// int main()
// {
//   Node *root=new Node(2);
//   Node *l =new Node(1);
//   Node *r = new Node(3);
//  root->left =l;
//  root->right =r;
//  //bool x= Search(root,3);
//  cout<< Search(root,1.5)<<endl;
//  cout<<func()<<endl;
// return 0;
// }*/

//  /* while(root)
//   {
//     if(root->num >num)
//     {
//       root=root->left;
//     }
//     else if(root->num< num)
//     {
//       root= root->right;
//     }
//     else{
//       return true;
//     }
//   }
// return false;*/

// /*
//           1
//        2      3
//      4    5  9    8
//    6   7                                    */

// /*
// void p1(Node* root, Node* n, vector<Node*>& vec, bool& found) {
// if(!root) return;
// vec.push_back(root);
// if(root==n) {
// found = true;
// return;
// }
// p1(root->left, n, vec, found);
// if(found) return;
// p1(root->right, n, vec, found);
// if(!found) {
// vec.pop_back();
// }
// }

// void p(Node* root, Node* n, vector<Node*>& vec, bool& found)
// {
// if(!root) return;
// if(!found)
//   p(root->left, n, vec, found);
// if(!found)
//   p(root->right, n, vec, found);
// if(!found && root==n) {
// vec.push_back(n);
// found = true;
// return;
// }
// if(found) {
// vec.push_back(root);
// }
// }

// Node* fun(Node*root, Node* n1, Node* n2) {
// if(!root) return NULL;
// vector<Node*>v1;
// bool found1 = false;
//  p(root, n1, v1, found1);
// vector<Node*>v2;
// bool found2 = false;
//  p(root, n2, v2, found2);
// for(int i = 0; i<v1.size(); i++) {
// for(int j = 0; j<v2.size(); j++)
// if(v1[i] == v2[j])
// return v1[i];
// }
// return NULL;
// }
// */
#include <vector>
#include <map>
#include <unordered_map>
// /*int main()
// {
// Node* n1=new Node(1);
// Node* n2=new Node(2);
// Node* n3=new Node(3);
// Node* n4=new Node(4);
// Node* n5=new Node(5);
// Node* n8=new Node(8);
// Node* n9=new Node(9);
// Node* n10=new Node(10);
// Node* n11=new Node(11);
// n1->left=n2;
// n1->right=n3;
// n2->left=n4;
// n2->right=n5;
// n4->left=n8;
// n4->right=n9;
// n5->left=n10;
// n5->right=n11;
// Node*res=fun(n1,n9,n10);
// cout<<res->num<<endl;
// map<Node*,int> mm;
// mm[n1] = 8;
// unordered_map<Node*,int> um;
// um[n2] = 1;
// delete n1;
// delete n2;
// delete n3;
// delete n4;
// delete n5;
// delete n8;
// delete n9;
// delete n10;
// delete n11;

// string s[] = {"good","morning"};
// map<string,vector<int>> m;
// m[s[0]].push_back(1);
// cout<<m[s[0]][0]<<endl;
// return 0;

// }

// vector<vector<int>> twoSum(vector<int>& vec,int sum)
// {
//   vector<vector<int>> pair;
//   vector<int> temp;
//   for(auto it=vec.begin();it!=vec.end()-1;it++)
//   {
//       for(auto itI=it+1;itI!=vec.end();itI++)
//       {
//           if(*itI+*it==sum)
//           {
//               temp.push_back(*it);
//               temp.push_back(*itI);
//               pair.push_back(temp);
//               temp.clear();
//               break;
//           }
//       }
//   }
//   return pair;
// }

// int main()
// {
//   vector<int> vec{1,2,3,4};
//   auto res = twoSum(vec, 5);
//   for(int i = 0; i<res.size();i++) {
//     cout<<"["<<res[i][0]<<","<<res[i][1]<<"]"<<endl;
//   }
//   return 0;
// }

// typedef struct LinkedList {
//   char c;
//   LinkedList* next;
//   LinkedList(char input):c(input), next(NULL){}
// }LL;

// LL* ex(LL* head)
// {
//   LL* p1 = head;
//   if(!p1 || !p1->next) return head;
//   LL* p2 = p1->next;
//   LL* p3= p2->next;
//   p2->next = p1;
//   head = p2;
//   while(p3 && p3->next) {
//     LL* p4 = p3->next;
//     LL* p5 = p4->next;
//     p4->next = p3;
//     p1->next = p4;
//     p1 = p3;
//     p3 = p5;
//   }
//   p1->next = p3;
//   return head;
// }

// LL* InverseList(LL* head)
// {
//   if(!head||!head->next)
//   {
//     return head;
//   }
//   stack<LL*> s;
//   while(head) {
//     s.push(head);
//     head=head->next;
//   }
//     LL* h= s.left();
//     LL* h1=h;
//     s.pop();
//   while(!s.empty())
//   {
//     h->next=s.left();
//     h=h->next;
//     s.pop();
//   }
//   h->next = NULL;
//   return h1;
// */

//   /*LL* p1=head;
//   LL* p2=p1->next;
//   head->next=NULL;
//   while(p2){
//     LL*p3=p2->next;
//     p2->next=p1;
//     //c->b->a->null,接下来d->next=c;
//     p1=p2;
//     p2=p3;
//   }
//   return p1;*/

// /*
// a->b->c->d->e
// a->b->c
// a pre
// a->next p1
// lst
// e->d->c->b->a

// */
// /*
// DP
// 1,23,35,45
// 1,2,3,-4,-3,-2,-1,0

// int LIS(vector<int>& a) {
//   int ret = 0;
//   int size = a.size();
//   vector<int> val(size);
//   for(int i = 0; i<size; i++) {
//     val[i] = 1;
//     for(int j = 0; j<i; j++) {
//       if(a[i]>a[j]) {
//         val[i] = val[i] >= (val[j]+1) ? val[i] : (val[j]+1);
//       }
//     }
//     ret = ret>= val[i] ? ret : val[i];
//   }
//   return ret;
// }

#include <string>
#include <algorithm>
#include <deque>
#include <forward_list>
// auto TheOneBeforeLast(forward_list<int> &fl)
// {
//   auto it1 = fl.begin();
//   if(fl.empty()) return it1;
//   auto it2 = it1;
//   it2++;
//   while(it2!=fl.end()) {
//     it1++;
//     it2++;
//   }
//   return it1;
// }

// void RemoveAValue(forward_list<int> & fl, int value)
// {
//   for (auto it = fl.begin(); it!=fl.end();it++) {
//     if(*it == value) {
//       before.next = it.next;
//     }
//   }
// }
// abc
// bacbc
// 0 1 2
// remove(0) 1 2 3
// remove(1)
// 2 3 4
// abnc   onabnc oabnc

// fgzbkjfgzg
//    bkjf

//    dcbacabcd
//          abcd
//          //f h j k
//         fhjk

//    ddccbbaa
// fgzbkjfzg
// fgbkjfzg
// fbkjfzg
// fbkjfgz

//      fzbkjfgazg
//      abedb  aefdwef

// string func0(string &s)
// {
//   unordered_map<char, vector<int>> um;
//   vector<int> v;
//   int size = s.size();
//   for (int index = 0; index < size; index++)
//   {
//     um[s[index]].push_back(index);
//   }
//   int start = 0;
//   for (int index = 0; index < size; index++)
//   {
//     int pos = index;
//     while(pos<size && um[s[pos]].size()>1) pos++;
//     vector<char> vec;
//     for(int i = index; i<pos; i++) vec.push_back(s[i]);
//     sort(vec.begin(),vec.end());
//     if(vec.front()>=s[pos]) {
//       for(int j = index; j<pos; j++) {
//         um[s[j]].erase(um[s[j]].begin());
//         v.push_back(j);
//       }
//     } else {

//       auto it = vec.begin();
//       for(int i = start; i<pos; i++) {
//         if(s[i]!=vec.front()) {
//           um[s[i]].erase(um[s[i]].begin());
//           v.push_back(i);
//           continue;
//         }
//         int first = i;
//         for(int j = first+1; j<pos; j++) {
//           if(s[j]>s[pos]) {
//             um[s[j]].erase(um[s[j]].begin());
//             v.push_back(j);
//           }
//           else {

//           }
//         }

//       }

//       int A = index;
//       int B = pos;
//       while(A < B) {
//         char ch = s[A];
//         int loc = A;
//         for(int k = A+1; k<B; k++) {
//            if(ch>s[k]) {
//             ch = s[k];
//             loc = k;
//            }
//         }
//         if(ch>=s[pos]) {
//           for(int k = A+1; k<B; k++) {
//             um[s[k]].erase(um[s[k]].begin());
//             v.push_back(k);
//           }
//           break;
//         } else {
//           for(int l = A; l<loc; l++) {
//             um[s[l]].erase(um[s[l]].begin());
//             v.push_back(l);
//           }
//           A = loc + 1;
//         }
//       }
//     }
//     while(pos<size && um[s[pos]].size() == 1) pos++;
//     start = pos;
//     index = pos;

//   }

//   string res;
//   sort(v.begin(), v.end());
//   auto it = v.begin();
//   for (int i = 0; i < size; i++)
//   {
//     if (it != v.end())
//     {
//           if (i < *it)
//           {
//               res += s[i];
//           }
//           else
//           {
//               it++;
//           }
//     }
//     else
//     {
//           res += s[i];
//     }
//   }
//   return res;
// }

// string func1(string &s)
// {
//   unordered_map<char, vector<int>> um;
//   vector<int> v;
//   int size = s.size();
//   for (int index = 0; index < size; index++)
//   {
//     um[s[index]].push_back(index);
//   }
//   int start = 0;
//   for (int index = 0; index < size; index++)
//   {
//     int pos = index;
//     while(pos<size && um[s[pos]].size()>1) pos++;
//     vector<char> vec;
//     for(int i = index; i<pos; i++) vec.push_back(s[i]);
//     sort(vec.begin(),vec.end());
//     if(vec.front()>=s[pos]) {
//       for(int j = index; j<pos; j++) {
//         um[s[j]].erase(um[s[j]].begin());
//         v.push_back(j);
//       }
//     } else {
//       int A = index;
//       int B = pos;
//       while(A < B) {
//         char ch = s[A];
//         int loc = A;
//         for(int k = A+1; k<B; k++) {
//            if(ch>s[k]) {
//             ch = s[k];
//             loc = k;
//            }
//         }
//         if(ch>=s[pos]) {
//           for(int k = A+1; k<B; k++) {
//             um[s[k]].erase(um[s[k]].begin());
//             v.push_back(k);
//           }
//           break;
//         } else {
//           for(int l = A; l<loc; l++) {
//             um[s[l]].erase(um[s[l]].begin());
//             v.push_back(l);
//           }
//           A = loc + 1;
//         }
//       }
//     }
//     while(pos<size && um[s[pos]].size() == 1) pos++;
//     start = pos;
//     index = pos;

//   }

//   string res;
//   sort(v.begin(), v.end());
//   auto it = v.begin();
//   for (int i = 0; i < size; i++)
//   {
//     if (it != v.end())
//     {
//           if (i < *it)
//           {
//               res += s[i];
//           }
//           else
//           {
//               it++;
//           }
//     }
//     else
//     {
//           res += s[i];
//     }
//   }
//   return res;
// }

// string func(string &s)
// {
//   unordered_map<char, int> um;
//   vector<int> v;
//   int size = s.size();
//   for (int index = size - 1; index >= 0; index--)
//   {
//     if (um.find(s[index]) != um.end())
//     {
//           if (s[index + 1] < s[index])
//           {
//               v.push_back(index);
//           }
//           else
//           {
//               v.push_back(um[s[index]]);
//               um[s[index]] = index;
//           }
//     }
//     else
//     {
//           um[s[index]] = index;
//     }
//   }
//   string res;
//   sort(v.begin(), v.end());
//   auto it = v.begin();
//   for (int i = 0; i < size; i++)
//   {
//     if (it != v.end())
//     {
//           if (i < *it)
//           {
//               res += s[i];
//           }
//           else
//           {
//               it++;
//           }
//     }
//     else
//     {
//           res += s[i];
//     }
//   }
//   return res;
// }

// string RandS(string& s)
// {
//   int arr[26] = {0};
//   for(int i = 0; i<26; i++) arr[i] = -1;
//   bool f[26] = {false};
//   forward_list<int> d;
//   for(int index = 0; index<s.size();index++) {
//     int idx = s[index]-'a';
//     if(arr[idx] != -1) {
//         if(f[idx]) {
//           //d.remove(arr[idx]);
//           d.remove_if([](int value) {});
//           //d.erase(d.find(arr[idx]));
//           arr[idx] = index;
//           f[idx] = false;
//           if (d.empty()) {
//             d.push_front(index);
//             // insert(idx)
//           } else {
//             // auto itit = prev(d.end());
//             auto itit = TheOneBeforeLast(d);
//             d.begin //bcabhuic
//             d.insert_after(itit, 1, index);
//           }
//         }
//     } else {
//       arr[idx] = index;
//       f[idx] = false;
//       if(d.empty()) {
//         d.push_front(index);
//         //insert(idx)
//       } else {
//         //auto itit = prev(d.end());
//         auto itit = TheOneBeforeLast(d);
//         d.insert_after(itit, 1, index);
//       }
//       for(auto it = d.begin(); it!=d.end();it++) {
//         if(s[*it] > s[index] && !f[s[*it]-'a']) {
//           f[s[*it]-'a'] = true;
//         }
//       }

//       for(int j = idx++; j<26; j++) {
//         if(arr[j] != -1 && !f[j])
//             f[j] = true;
//       }

//     }
//   }

//   vector<int> vec;
//   for (int k = 0; k<26; k++) {
//     if(arr[k] != -1) {
//          vec.push_back(arr[k]);
//     }
//   }
//   sort(vec.begin(),vec.end());

//   string res;
//   for(auto it = d.begin(); it!=d.end();it++) { //(int & val:d) {
//     res.push_back(s[*it]);
//   }
//   return res;
// }

// // bca b c
// //   1 2

// void PrintList(LL* head)
// {
//   LL* p = head;
//   while(p) {
//     cout<<p->c<<"->";
//     p=p->next;
//   }
//   cout<<endl;
// }
// */
// /*
// b c a b c
// 0 1 2 3 4
// b->[0,3]  0 0 3 3
// c->[1,4]  1 4 1 4
// a->[2]    2 2 2 2

// cgec

// c->[0,3]
// e->[2]
// g->[1]
// */
// /*
// void FFF(string vv) {
//   vector<int> res;
//   vector<int> vec[26];
//   int begin = 0;
//   for(int i=0; i <vv.size(); i++) {
//     vec[vv[i]-'a'].push_back(i);
//   }`
//   for(int j=0;j<26;j++)
//   {
//     if(vec[j].size()>=1)
//     {
//       for(int k=0;k<vec[j].size();k++)
//       {

//       }
//     }
//   }

// }

// void GetAllCombi1(vector<int>& vec, int begin, int M, int N, vector<bool>& flag, vector<int>& tempVec, vector<vector<int>>& res){
//   if(tempVec.size() == M) {
//     res.push_back(tempVec);
//     return;
//   }
//   for(int i = begin; i<N; i++) {
//     if(flag[i]) continue;
//     flag[i] = true;
//     tempVec.push_back(vec[i]);
//     GetAllCombi1(vec, i+1, M, N, flag, tempVec, res);
//     flag[i] = false;
//     tempVec.pop_back();
//   }
// }
// vector<vector<int>> AllCombi1(vector<int>& vec, int M, int N) {
//   vector<vector<int>> res;
//   vector<bool> flag(N, false);
//   vector<int> tempVec;
//   int begin = 0;
//   GetAllCombi1(vec, begin, M, N, flag, tempVec, res);
//   return res;
// }

// #include <set>

// void GetAllCombi(vector<int>& vec, int M, int N, vector<bool>& flag, vector<int>& tempVec, set<vector<int>>& uset, vector<vector<int>>& res){
//   if(tempVec.size() == M) {
//     vector<int> temp = tempVec;
//     sort(temp.begin(), temp.end());
//     if(uset.empty() || uset.find(temp) == uset.end()) {
//       res.push_back(temp);
//       uset.insert(temp);
//     }
//     return;
//   }
//   for(int i = 0; i<N; i++) {
//     if(flag[i]) continue;
//     flag[i] = true;
//     tempVec.push_back(vec[i]);
//     GetAllCombi(vec, M, N, flag, tempVec, uset, res);
//     flag[i] = false;
//     tempVec.pop_back();
//   }
// }
// vector<vector<int>> AllCombi(vector<int>& vec, int M, int N) {
//   vector<vector<int>> res;
//   vector<bool> flag(N, false);
//   vector<int> tempVec;
//   set<vector<int>> uset;
//   GetAllCombi(vec, M, N, flag, tempVec, uset, res);
//   return res;
// }

// void GetPatialCombi(vector<int>& vec, int M, int N, vector<bool>& flag, vector<int>& tempVec, vector<vector<int>>& res){
//   if(tempVec.size() == M) {
//     res.push_back(tempVec);
//   }
//   for(int i = 0; i<N; i++) {
//     if(flag[i]) continue;
//     flag[i] = true;
//     tempVec.push_back(vec[i]);
//     GetPatialCombi(vec, M, N, flag, tempVec, res);
//     flag[i] = false;
//     tempVec.pop_back();
//   }
// }
// vector<vector<int>> PartialOrder(vector<int>& vec, int M, int N) {
//   vector<vector<int>> res;
//   vector<bool> flag(N, false);
//   vector<int> tempVec;
//   GetPatialCombi(vec, M, N, flag, tempVec, res);
//   return res;
// }

// void GetAll(vector<int>& vec, vector<bool>& flag, vector<int>& tempVec, vector<vector<int>>& res){
//   int N = vec.size();
//   if(tempVec.size() == N) {
//     res.push_back(tempVec);
//     return;
//   }
//   for(int i = 0; i<N; i++) {
//     if(flag[i]) continue;
//     flag[i] = true;
//     tempVec.push_back(vec[i]);
//     GetAll(vec, flag, tempVec, res);
//     flag[i] = false;
//     tempVec.pop_back();
//   }
// }
// vector<vector<int>> AllOrders(vector<int>& vec) {
//   int N = vec.size();
//   vector<vector<int>> res;
//   vector<bool> flag(N, false);
//   vector<int> tempVec;
//   GetAll(vec, flag, tempVec, res);
//   return res;
// }

// vector<vector<int>> Analyze(string& s) {
//   map<char,vector<int>> mymap;
//   int N = s.size();
//   for(int i = 0; i<N; i++) {
//     mymap[s[i]].push_back(i);
//   }
//   vector<vector<int>> res;
//   for(auto it = mymap.begin(); it!= mymap.end();it++) {
//     cout<<it->first<<"->";
//     for(int & ref:it->second)
//       cout<<ref<<" ";
//     cout<<endl;
//     res.push_back(it->second);
//   }
//   return res;
// }

// void GetMaybeCombination(vector<vector<int>>& vecvec, int index, vector<int>& tempVec, vector<vector<int>>& maybeRes) {
//   int N = vecvec.size();
//   if(index == N) {
//     maybeRes.push_back(tempVec);
//     return;
//   }
//   int size = vecvec[index].size();
//   if(index==0) {
//     size = 1;
//   }

//   if(index>0 && vecvec[index].back() > val && vecvec[index].front() < val) {
//       auto iter = vecvec[index].end();
//       iter--;
//       while(*iter > val) {
//          iter--;
//       }
//       vecvec[index].erase(vecvec[index].begin(), iter+1);
//   }

//   for(int idx = 0; idx<size; idx++) {
//     tempVec.push_back(vecvec[index][idx]);
//     GetMaybeCombination(vecvec, index+1, tempVec, maybeRes);
//     tempVec.pop_back();
//   }
// }
// string FirstAids(string& s) {
//     string res;
//     int N = s.size();
//     int i = 0;
//     while(i<N) {
//         res+=s[i];
//         i++;
//         while(i<N && s[i-1] == s[i]) i++;
//     }
//     return res;
// }
// string DelDupSmallest2(string s) {
//   vector<unordered_map<char,int>> vm;
//   s=FirstAids(s);
//   int N = s.size();
//   for(int i = 0; i<N; i++) {
//     int M = vm.size();
//     char c = s[i];
//     if(vm.empty()) {
//     unordered_map<char,int> m;
//     m.insert(make_pair(c,i));
//     vm.push_back(m);
//     } else {
//       if(vm[0].find(c)!=vm[0].end()) {
//         for(int j = 0; j<M; j++) {
//           unordered_map<char,int> m = vm[j];
//           m[c] = i;
//           vm.push_back(m);
//         }
//       } else {
//           for(int j = 0; j<M; j++) {
//           vm[j].insert(make_pair(c,i));
//         }
//       }
//     }
//   }
//   string res;
//   int M= vm.size();
//   for(int j = 0; j<M; j++) {
//     auto it =vm[j].begin();
//     vector<int> vec;
//     for(;it!=vm[j].end();it++) {
//       vec.push_back(it->second);
//     }
//     sort(vec.begin(), vec.end());
//     string temp;
//     for(auto & ref:vec) temp+=s[ref];
//     if(res.empty()) {
//       res = temp;
//     } else {
//       res = res<temp?res:temp;
//     }
//   }
//   return res;
// }

// string DelDupSmallest(string s) {
//   s = FirstAids(s);
//   vector<vector<int>> vecvec = Analyze(s);
//   int index = 0;
//   int N = vecvec.size();
//   vector<int> tempVec;
//   vector<vector<int>> maybeRes;
//   GetMaybeCombination(vecvec, index, tempVec, maybeRes);
//   string finalRes;
//   for (int i = 0; i<maybeRes.size(); i++) {
//     vector<int> myvec = maybeRes[i];
//     sort(myvec.begin(), myvec.end());
//     string tempString;
//     for(int & j : myvec) {
//       tempString += s[j];
//     }
//     if(finalRes.empty()) {
//       finalRes = tempString;
//     } else {
//       finalRes = finalRes < tempString? finalRes : tempString;
//     }
//   }
//   return finalRes;
// }

// int AAAAA()
// {

//   cout<<DelDupSmallest("bcabc")<<endl;  //abc
//   cout<<DelDupSmallest("courteseyseat")<<endl;  //couresyat

//   cout<<DelDupSmallest("bxshkpdwcsjdbikywvioxrypfzfbppydfilfxxtouzzjxaymjpmdoevv")<<endl;

//  cout<<DelDupSmallest("bxshkpdwcsjdbikywvioxrypfzfbppydfilfxxtouzzjxaymjpmdoevv")<<endl;

//  vector<int> vec = {1,2,3,4,5};
//   vector<vector<int>> res = AllCombi1(vec,3,5);//PartialOrder(vec,3,5);//AllOrders(vec);
//   for(int i = 0; i<res.size(); i++) {
//     for(int j = 0; j<res[i].size(); j++)
//     cout<<res[i][j]<<" ";
//     cout<<endl;
//   }
//   vector<vector<int>> res1 = AllCombi(vec,3,5);
//   cout<<(res==res1)<<endl;

//   return 0;
// }

//   //vector<bool> flag(N, false);
//   //vector<int> pos(N, 0);
// /*
// string DelDupSmallest(string s) {
//   string finalRes;
//   vector<vector<int>> vecvec = Analyze(s);
//   int N = vecvec.size();
//   vector<bool> flag(N, false);
//   vector<int> pos(N, 0);
//   vector<int> maybeRes;
//   for(int i = 0; i<N; i++) {
//     int M = vecvec[i].size();
//     for(; pos[i]<M; pos[i]++) {
//       if(flag[i]) break;
//       flag[i] = true;
//       maybeRes.push_back(vecvec[i][pos[i]]);
//       if(maybeRes.size() == N) {
//         sort(maybeRes.begin(), maybeRes.end());
//         string temp;
//         for(int idx = 0; idx <maybeRes.size(); idx++) {
//           temp += s[idx];
//         }
//         if(finalRes.size() == 0) {
//            finalRes = temp;
//         } else {
//           finalRes = finalRes < temp? finalRes: temp;
//         }
//       }
//       maybeRes.pop_back();
//       flag[i] = false;
//     }
//   }
//   return finalRes;
// }

// #include <deque>
// int Biggest(string s) {
//   unordered_map<char, int> um;
//   int res = 0;
//   int begin = 0;
//   for(int i = 0; i<s.size();i++) {
//     if(um.size()==2 && um.find(s[i])== um.end()) {
//       while(begin<i) {
//         um[s[begin]]--;
//         if(um[s[begin]] == 0) {
//           um.erase(um.find(s[begin]));
//           begin++;
//           break;
//         }
//         begin++;
//       }
//     }
//     um[s[i]]++;
//     res = res > (i - begin +1) ? res:(i - begin +1);
//   }
//   return res;
// }
// int totalFruit(vector<int> vec) {
//   int begin, idx, res = 0;
//   int N = vec.size();
//   unordered_map<int, int> um;
//   while(idx<N) {
//     um[vec[idx]]++;
//     while(um.size()>2) {
//       um[vec[begin]]--;
//       if(um[vec[begin]] == 0) {
//         um.erase(vec[begin]);
//       }
//       begin++;
//     }
//     idx++;
//     res = res>(idx -begin)? res: (idx-begin);
//   }
//   return res;
// }
// #include<cstring>
// const char* strfindchar(const char* src, char c) {
//     int N = strlen(src);
//     int i = 0;
//     while(i<N && src[i++] != c);
//     if(i==N&& src[N-1] != c) return NULL;
//     const char* ptr = src + (i-1);
//     return ptr;
// }
// char* strfindchar2(const char* src, char c) {
//     int N = strlen(src);
//     int i = 0;
//     while(i<N && src[i++] != c);
//     if(i==N&& src[N-1] != c) return NULL;
//     char* ptr = const_cast<char*>(src + (i-1));
//     return ptr;
// }
// char* strfindchar3(const char* src, char c) {
//     int N = strlen(src);
//     int i = 0;
//     while(i<N && src[i++] != c);
//     if(i==N&& src[N-1] != c) return NULL;

//     char* ptr = (char*)src;
//     return ptr+(i-1);
// }
// /*
// 1 2
// 3 4
// 00 01 11 10 00
// 3 1
// 4 2
// 01 11 10 00 01
// 4 3
// 2 1

// 1 2 3
//     1
//     2
//     3
// ij
// [j][N-1-i]

//         1
//         2
//         3
// 3   2   1
// ij

// [j][N-1-i]
// 3
// 2
// 1
// 3   2   1
// ij
// [j][N-1-i]
// 01
// 12
// 21
// 10
// 01

//     void rotate(vector<vector<int>>& vv) {
//     int N = vv.size();
//     for(int i = 0 ; i<N/2; i++) {
//         for(int j = i; j<N-i; j++) {
//             int num1 = vv[j][N-1-i];
//             vv[j][N-1-i] = vv[i][j];
//             int num2 = vv[N-1-i][N-1-j];
//             vv[N-1-i][N-1-j] = num1;
//             int num3 = vv[N-1-j][i];
//             vv[N-1-j][i] = num2;
//             vv[i][j] = num3;
//         }
//     }

// void Rotate1(vector<vector<int>>& vv) {
//     int N = vv.size();
//     for(int i = 0 ; i<N/2; i++) {
//         for(int j = i; j<N-i; j++) {
//             int num1 = vv[j][N-1-i];
//             vv[j][N-1-i] = vv[i][j];
//             int num2 = vv[N-1-i][N-1-j];
//             vv[N-1-i][N-1-j] = num1;
//             int num3 = vv[N-1-i][N-1-j];
//             vv[N-1-j][i] = num2;
//             vv[i][j] = num3;
//         }
//     }
// }

//     void rotate(vector<vector<int>>& vv) {
//     int N = vv.size();
//     for(int i = 0 ; i<N/2; i++) {
//         for(int j = i; j<N-i; j++) {
//             int num1 = vv[j][N-1-i];
//             vv[j][N-1-i] = vv[i][j];
//             vv[i][j]= vv[N-1-j][i];
//             vv[N-1-j][i] = vv[N-1-i][N-1-j];
//             vv[N-1-i][N-1-j] = num1;
//         }
//     }
//     }
// /*
// 01
// 12
// 21
// 10
// 01
// N-1-l-i
// N-1-l
// N-1-r+i;bottom
// N-1-r, top+i

//     */
//    /*
// void FF(vector<vector<int>>& vv) {
//   int N = vv.size();
//   int left = 0;
//   int right = N-1;
//   while(left<right) {
//     for(int i = 0; i<right-left; i++) {
//       int temp = vv[left][left+i];
//       vv[left][left+i] = vv[N-1-left-i][left];
//       vv[N-1-left-i][left] = vv[N-1-left][N-1-left-i];
//       vv[N-1-left][N-1-left-i] = vv[left+i][N-1-left];
//       vv[left+i][N-1-left] = temp;
//     }
//     left++;
//     right--;
//   }
// }

// class A{
// private:
// int num;
// string s;
// public:
// int GetNum(){return num;}
// string GetS(){return s;}
// };
// void RemoveOnes(unordered_map<int,set<int>>& um0,unordered_map<int,set<int>>& um1) {
//     for(auto it = um0.begin();it!=um0.end();) {
//       if(it->second.size()  <2 ) {
//         auto it1 = it;
//         it++;
//         um0.erase(it1);
//     } else it++;
// }
//     for(auto it = um1.begin();it!=um1.end();) {
//       if(it->second.size() <2 ) {
//         auto it1=it;
//         it++;
//         um1.erase(it1);
//     }else it++;
//     }
// }
// */
// /*
// um0:[x,{i,j}]
// um1:[y,{i,j}]
// */
// /*
// int removeMost(vector<vector<int>> vv) {
//     unordered_map<int,set<int>> um0;
//     unordered_map<int,set<int>> um1;
//     int N = vv.size();
//     for(int i = 0;i<N;i++) {
//       um0[vv[i][0]].insert(i);
//       um1[vv[i][1]].insert(i);
//     }
//     RemoveOnes(um0,um1);
//     int res = 0;
//     set<int> visited;
//     for(auto it = um0.begin();it!=um0.end();it++){
//       //res += (*it).second.size()-1;
//       bool flag = false;
//       for(auto itit = (*it).second.begin();itit!=(*it).second.end();) {
//         if (visited.find(*itit) == visited.end()) {
//           res++;
//           visited.insert(*itit);
//         }
//         if( um1.find(vv[*itit][1]) != um1.end()) {
//             flag = true;
//             auto it1= itit;
//             itit++;
//             if(um1[vv[*it1][1]].size() <= 2) {
//               um1.erase(vv[*it1][1]);
//               continue;
//             }
//             um1[vv[*it1][1]].erase(*it1);
//         } else itit++;
//       }
//       if(flag) {
//         res += 1;
//       }
//     }
//         for(auto it = um1.begin();it!=um1.end();it++){
//         res+=(it->second).size()-1;

//     }
//     return res;
// }

// */
// //#include "unistd/stdc++"
// #include <queue>
// #include <set>
// using namespace std;
// /*
// int numOfIslands(vector<vector<int>>& vv)
// {
//   int N = vv.size();
//   int M = vv[0].size();
//   set<vector<int>> s;
//   int res = 0;
//   for(int i = 0; i<N; i++) {
//   for(int j = 0; j<N && s.find({i,j}) == s.end(); j++) {
//     if(vv[i][j]) {
//       s.insert({i,j});
//       res++;
//       int x = i;
//       int y = j;
//       queue<vector<int>> q;
//       q.push({x,y});
//       while(!q.empty()) {
//         q.pop();
//         if(x+1<N) {
//           if(s.find({x+1,y})==s.end())
//           x++;
//           s.insert({x,y});
//           q.push({x,y});
//         }
//         if(y+1<M) {
//           if(s.find({x,y+1})==s.end())
//           y++;
//           s.insert({x,y});
//           q.push({x,y});
//         }
//       }
//     }
//   }

//   }

//   return res;
// }

// int numIslands(vector<vector<char>>& vv)
// {
//   int N = vv.size();
//   int M = vv[0].size();
//   set<vector<int>> s;
//   int res = 0;
//   for(int i = 0; i<N; i++) {
//   for(int j = 0; j<N && vv[i][j] == '1'; j++) {
//     if(s.find({i,j}) == s.end()) {
//       s.insert({i,j});
//       res++;
//       queue<vector<int>> q;
//       q.push({i,j});
//       while(!q.empty()) {
//         vector<int> vec = q.front();
//         int x = vec[0];
//         int y = vec[1];
//         q.pop();
//         if(x+1<N && vv[x+1][y]=='1') {
//           if(s.find({x+1,y})==s.end()) {
//           s.insert({x+1,y});
//           q.push({x+1,y});
//           }
//         }
//         if(y+1<M&& vv[x][y+1]=='1') {
//           if(s.find({x,y+1})==s.end()) {
//           s.insert({x,y+1});
//           q.push({x,y+1});
//           }
//         }
//         if(x-1>-1 && vv[x-1][y]=='1') {
//           if(s.find({x-1,y})==s.end()) {
//           s.insert({x-1,y});
//           q.push({x-1,y});
//           }
//         }
//         if(y-1>-1&& vv[x][y-1]=='1') {
//           if(s.find({x,y-1})==s.end()) {
//           s.insert({x,y-1});
//           q.push({x,y-1});
//           }
//         }
//       }
//     }
//    }
//  }
//   return res;
// }
// bool hasCircle(ListNode* head) {
//   if(!head) return true;
//   ListNode* ptr1= head;
//   ListNode* ptr2 = head;
//   ptr1 += 1;
//   ptr2 += 2;
//   while(!ptr1 && !ptr2) {
//     if(ptr1 == ptr2) return true;
//       ptr1 += 1;
//       ptr2 += 2;
//   }
//   return false;
// }
// */
// /*
//         1
//     2        3
//   6   4          5

//  void GetVector(TreeNode* root, TreeNode* p, vector<TreeNode*>&v1, bool& flag){
//   if(!root) return;
//   if(root == p) {v1.push_back(p);flag = true;return;}
//   v1.push_back(root);
//   if(!flag){
//     GetVector(root->left, p, v1,flag);
//   }
//   if(!flag){
//     GetVector(root->right, p, v1,flag);
//   }
//   if(!flag) {v1.pop_back();}
//  }

// TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//     vector<TreeNode*> v1;
//     vector<TreeNode*> v2;
//     bool flag1 = false;
//     bool flag2 = false;
//     GetVector(root, p, v1, flag1);
//     GetVector(root, q, v2, flag2);
//     unordered_set<TreeNode*>myset;
//     for(int i = v1.size()-1; i>-1;i--) {
//       myset.insert(v1[i]);
//     }
//     for(int i = v2.size()-1; i>-1;i--) {
//       if(myset.find(v2[i])!=myset.end()){
//         return v2[i];
//       }
//     }
//     return NULL;

// }

//         1
//     2        3
//   6   4          5

// #include<unordered_set>
// #include <vector>
// using namespace std;
//   struct TreeNode {
// int num;
// TreeNode* left;
// TreeNode* right;
// };
// void GetVector(TreeNode* root, TreeNode* p, vector<TreeNode*>&v1, bool& flag){
//   if(!root) return;
//   if(!flag){
//     GetVector(root->left, p, v1,flag);
//   }
//   if(!flag){
//     GetVector(root->right, p, v1,flag);
//   }
//   if(flag) {v1.push_back(p);return;}
//   if(!flag&& root==p) {v1.push_back(p);flag = true;return;}
//   //if(!flag) {}//v1.pop_back();}
//  }

// TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//     vector<TreeNode*> v1;
//     vector<TreeNode*> v2;
//     bool flag1 = false;
//     bool flag2 = false;
//     GetVector(root, p, v1, flag1);
//     GetVector(root, q, v2, flag2);
//     unordered_set<TreeNode*>myset;
//     for(int i = v1.size()-1; i>-1;i--) {
//       myset.insert(v1[i]);
//     }
//     for(int i =0; i<v2.size();i++) {
//       if(myset.find(v2[i])!=myset.end()){
//         return v2[i];
//       }
//     }
//     return NULL;

// }

// int main(){
// TreeNode t1;
// TreeNode t2;
// TreeNode t3;
// t1.num =1;
// t2.num =2;
// t3.num =3;
// t1.left = &t2;
// t1.right = &t3;
// t2.left = NULL;
// t2.right = NULL;
// t3.left = NULL;
// t3.right = NULL;

// TreeNode* p = lowestCommonAncestor(&t1,&t2,&t3);
// return 0;
// }

// bool hasCycle(ListNode* head) {
//   if(!head) return false;
//   ListNode* ptr1= head;
//   ListNode* ptr2 = head;
//   while(ptr1 && ptr2->next) {
//     ptr1 = ptr1->next;
//     ptr2=ptr2->next->next;
//     if(ptr1 == ptr2) return true;
//   }
//   return false;
// }

//  struct TreeNode {
// int num;
// TreeNode* left;
// TreeNode* right;
// };
// #include<vector>

//     int widthOfBinaryTree(TreeNode* root) {

//   if(!root) return 0;
//   deque<TreeNode*> d1;
//   deque<TreeNode*> d2;
//   d1.push_back(root);
//   int MAX = 1;
// while(!d1.empty()) {
//   bool flag = false;
//   while(!d1.empty()) {
//     TreeNode* first = d1.front();
//     if(flag) {
//       if(first) {
//         d2.push_back(first->left);
//         d2.push_back(first->right);
//       } else {
//         d2.push_back(NULL);
//         d2.push_back(NULL);
//       }
//     }
//     if (!flag && first) {
//        if(first->left) {
//         d2.push_back(first->left);
//         d2.push_back(first->right);
//         flag = true;
//        }
//        else if(first->right) {
//         d2.push_back(first->right);
//         flag = true;
//        }
//     }
//     d1.pop_front();
//   }
//   while(!d2.empty() && !d2.back()) d2.pop_back();
//   d1=d2;
//   d2.clear();
//   MAX = max(MAX, (int)d1.size());
// }
// return MAX;

//     }
// */
// /*
// int main() {
// vector<char> v1({'1','1','0','0','0'});
// vector<char> v2({'1','1','0','0','0'});
// vector<char> v3({'0','0','1','0','0'});
// vector<char> v4({'0','0','0','1','1'});
//   vector<vector<char>> vv(4,v1);//({v1,v2,v3,v4});//({{'1','1','0','0','0'},{'1','1','0','0','0'},{'0','0','1','0','0'},{'0','0','0','1','1'}});
//  vv[1] = v2;
//  vv[2] = v3;
//  vv[3] = v4;

//   cout<<numIslands(vv)<<endl;
//   /*
//   stack<char>*psk = new stack<char>;
//   psk->push('a');
//   cout<< Biggest("eceba")<<endl;
//   cout<<Biggest("ccaabbb")<<endl;

//  int num =5;
//  int &ref = num;
//  cout<<&(ref)<<"+"<<&(num)<<endl;
//      char cPtr[5] = "good";
//     cPtr[3] = 'D';
//     cout<<cPtr<<endl;
//     const char* p1= cPtr;
//     cPtr[3]='E';
//     cout<<p1<<endl;

// //vector<vector<int>> vv = {{0,0},{0,1},{1,0},{1,2},{2,1},{2,2}};
// //cout<<removeMost({{0,0},{0,1},{1,0},{1,2},{2,1},{2,2}})<<endl;
// //cout<<removeMost( {{0,0},{0,1},{1,0},{1,1},{2,1},{2,2},{3,2},{3,3},{3,4},{4,3},{4,4}})<<endl;

// map<int, string> mymap{{0,"Tom"},{1,"Jack"},{2,"Sam"}};
// for(auto it = mymap.begin();it!=mymap.end();) {
//   if(it->second == "Jack"){
//     auto temp = it;
//     it++;
//     mymap.erase(temp->first);
//   }else it++;
// }
// cout<<"test"<<endl;

// for(auto mypair:mymap){
//   cout<<mypair.first<<":"<<mypair.second<<endl;
// }

//  // cout<<removeMost( {{0,1},{1,2},{1,3},{3,3},{2,3},{0,2}})<<endl;
//   return 0;
// }

// #include <queue>
// int BiggestS(vector<int> vec, int S) {
//   priority_queue<int, vector<int>, std::greater<int>> myqueue;
//   //上面的叫小堆，把堆(不是vec中)中最小的数放在堆的top；
//   //默认的构造函数是priority_queue<int> myqueue; 这时候它使用的是std::less<int>这个比较函数
//   //默认的构造函数生成的叫大堆，把堆(不是vec中)中最大的放在堆的top；
//   for(int i = 0; i<S; i++) {
//     myqueue.push(vec[i]);
//   }
//   for(int i = S; i<vec.size(); i++) {
//     if(myqueue.top()<vec[i]) {
//       myqueue.pop();
//       myqueue.push(vec[i]);
//     }
//   }
//   return myqueue.top();
// }

// int G(int num)
// {
//   int res =1;
//   num /= 10;
//   while(num) {
//     //cnt++;
//     num /= 10;
//     res *= 10;
//   }
//   return  res;

// }

// #include <string>
// unordered_map<string, unordered_map<string, double>>mymap;
// void BuildUnitsMap(unordered_map<string, unordered_map<string, double>>& mymap, vector<vector<string>>& vv) {
//   int N = vv.size();
//   for(double i = 0; i<N; i++) {
//     string first = vv[i][0];
//     string second = vv[i][1];
//     string third = vv[i][2];
//     if(mymap.find(first) == mymap.end()) {
//       unordered_map<string, double> um {{third, stod(second)}};
//       mymap.insert({first, um});
//     } else {
//       if(mymap[first].find(third) == mymap[first].end()) {
//         mymap[first].insert({third, stod(second)});
//       }
//     }
//     if(mymap.find(third) == mymap.end()) {
//       unordered_map<string, double> um {{first, 1/stod(second)}};
//       mymap.insert({third, um});
//     } else {
//       if(mymap[first].find(third) == mymap[first].end()) {
//         mymap[first].insert({third, 1/stod(second)});
//       }
//     }
//   }

// }

// double translateUnits(string from, string to, double rate) {
//   if(mymap.find(from) != mymap.end())
//   {
//     if(mymap[from].find(to) != mymap[from].end())
//     {
//       return rate * mymap[from][to];
//     }
//   }
//   return -1;
// }

// int fff(){
// vector<int>vec{47,5,9,8};
// //cout<<BiggestS(vec, 3)<<endl;
// cout<<G(5)<<"+"<<G(0)<<"+"<<G(39872)<<endl;
// return 0;
// }

// int Add(int * ptr, int size)
// {
//   int sum = 0;
//   for(int i  = 0; i<size; i++) {
//     sum += ptr[i];
//   }
//   return sum;
// }

// struct LinkNode {
//   int num;
//   LinkNode* next;
// };

// class MyClass {
// LinkNode* head;
// public:
// MyClass() {head = new LinkNode;}
// };
// int vvvvmain()
// {
// LinkNode root;
// LinkNode* head = new LinkNode;
// head->num = 6;
// head->next = nullptr;
//   int arr[5] = {0,1,2,3,4};

// int * ptr = &arr[0];
// int ** pptr = &(ptr);
// // int ** pptr1 = &(&(arr[0]));
// int (*ptrtoarr)[5] = &arr;
// int res = 0;
// for(int i = 0; i<5; i++) {
//   res += (*ptrtoarr)[i];
// }
// cout<<res<<endl;

//   //int * ptrf = &arr[0]; //Notice: Not &arr !!!
//   int sum = Add(arr, sizeof(arr)/sizeof(int));
//   cout<<sum<<endl;
//   return 0;
// }
// */

// // #include<iostream>
// // #include<windows.h>
// // using namespace std;
// // int main()
// // {
// // 	DWORD start_time = GetTickCount();
// // 	{
// // 		//此处为被测试代码
// // 		/*sync_with_stdio(bool turnc);，其中 turnc 默认为 true*/
// // 		std::ios::sync_with_stdio(false);
// // 		for (int i = 0; i < 100000; i++){
// // 			cout << i << endl;
// // 		}
// // 	}
// // 	DWORD end_time = GetTickCount();
// // 	cout << "The run time is:" << (end_time - start_time)*1.0 / 1000 << "s!" << endl;//输出运行时间
// // 	system("pause");
// // 	return 0;
// // }

// int main() {
//   //int a =9;
//   //vector<int>v;
//   //int cnt =0;
//   //while(cin>>v[cnt]) cnt++;
//   char arr[] = "hello";
//   char arr2[] = {'h','e','l','l','o','\0'};
//    char* p =arr;
//   printf("%s\n",arr);
//   const char* pstr = "hello";
//   pstr=arr;
//   int num[]={1};
//   int val = 9;
//   int* pint = &val;
//   num = pint;
//   char *s= arr2;
//   //*pstr = 'G';
// cout<<sizeof arr<<" "<<sizeof arr2 <<" "<<sizeof pstr <<" "<<sizeof(int*) <<endl;

//   return 0;
// }
#include <iostream>
#include <vector>
#include <cstring>
#include <memory>
// #include <cassert>
/*
template <typename A>
class shared_ptr
{
public:
  shared_ptr()
  {
    data = NULL;
    ref_cnt = NULL;
  }
  shared_ptr(A *ptr)
  {
    data = ptr;
    ref_cnt = new int(1);
  }
  shared_ptr(const shared_ptr<A> &obj)
  {
    data = obj.data;
    *(obj.ref_cnt) = *(obj.ref_cnt) + 1;
    ref_cnt = obj.ref_cnt;
  }
  shared_ptr<A> &operator=(const shared_ptr<A> &obj)
  {
    if (this == &obj)
      return *this;
    if (ref_cnt)
    {
      (*ref_cnt)--;
      if (*ref_cnt == 0)
        delete data;
    }
    data = obj.data;
    *(obj.ref_cnt) = *(obj.ref_cnt) + 1;
    ref_cnt = obj.ref_cnt;
    return *this;
  }
  ~shared_ptr()
  {
    (*ref_cnt)--;
    if (*ref_cnt == 0)
    {
      delete ref_cnt;
      ref_cnt = NULL;
      delete data;
      data = NULL;
    }
  }

  A *get() { return data; }

private:
  int *ref_cnt;
  A *data;
};

class Shape
{
public:
  Shape(const char *id, const char *name)
  {
    char *shapeName1 = new char[strlen(name) + strlen(id) + 1];
    strcpy(shapeName1, name);
    strcpy(shapeName1 + strlen(name), id);
    shapeName = make_shared<char, char*&>(shapeName1);
    //shapeName = (shared_ptr<char>(shapeName1));
  }
  virtual ~Shape()
  {
    // delete shapeName;
  }
  const char *getName()
  {
    return shapeName.get();
  }

private:
  shared_ptr<char> shapeName;
};

void PrintShape(Shape *shape, const char **p)
{
  *p = shape->getName();
  cout << "name: " << shape->getName() << endl;
}
void TestTheShapeClass(const char **p)
{
  vector<Shape> shapes;
  shapes.push_back(Shape("1", "Rect: "));
  shapes.push_back(Shape("2", "Circle: "));
  for (size_t i = 0; i < shapes.size(); ++i)
  {
    PrintShape(&shapes[i], p);
  }
  shapes.clear();
}

int fdsaf()
{
  // cout << "Case3: TestTheShapeClass()..." << endl;
  const char **p;
  TestTheShapeClass(p);
  cout << *p << endl;
  // assert(3==5);
  // cout<<"good"<<endl;
  return 0;
}
*/
/*
void func(char&& ptr)
{
   cout<<"here";
}
class Shape
{
public:
  Shape(const char *id, const char *name)
  {
    char *shapeName1 = new char[strlen(name) + strlen(id) + 1];
    strcpy(shapeName1, name);
    strcpy(shapeName1 + strlen(name), id);
    char c = 'a';
    func(move(c));
    func('a');
    shapeName = make_shared<char>(move(*shapeName1));
    //shapeName = shared_ptr<char>(shapeName1);
  }
  virtual ~Shape()
  {
  }
  const char *getName()
  {
    return shapeName.get();
  }

private:
  shared_ptr<char> shapeName;
};

void PrintShape(Shape *shape, const char **p)
{
  *p = shape->getName();
  cout << "name: " << shape->getName() << endl;
}
void TestTheShapeClass(const char **p)
{
  vector<Shape> shapes;
  shapes.push_back(Shape("1", "Rect: "));
  shapes.push_back(Shape("2", "Circle: "));
  for (size_t i = 0; i < shapes.size(); ++i)
  {
    PrintShape(&shapes[i], p);
  }
  shapes.clear();
}
#include <algorithm>
vector<vector<int>> inter(vector<vector<int>>& v) {
  sort(v.begin(), v.end());
  int size = v.size();
  vector<vector<int>> vv;
  int index = 0;
  for(int i = 0; i<size-1;i++){
    if(v[i][1] < v[i+1][0]){
         vv.push_back(v[i]);
    } else {
      int temp = max(v[i][1], v[i+1][1]);
      v[i+1][0] = v[i][0];
      v[i+1][1] = temp;
    }
    vv.push_back(v[size-1]);
  }
    return vv;
}

    vector<vector<int>> merge(vector<vector<int>>& v) {
      //sort(v.begin(), v.end());
      if(v.empty()) return vector<vector<int>>();
      int size = v.size();
      multimap<int,int> mymap;
      for(int i = 0; i<size;i++){
       mymap.insert({v[i][0], v[i][1]});
      }

      vector<vector<int>> vv;
  
      auto iter=mymap.begin();
      auto iterNext = mymap.begin();
      iterNext++;
      int flag = false;
      int value = 0;
      for(; iterNext!=mymap.end();){
        if(iter->second < iterNext->first){
            if(!flag)
            vv.push_back({iter->first, iter->second});
            else
             vv.push_back({value, iter->second});
             flag = false;
        } else {
          int temp = max(iter->second, iterNext->second);
          //iterNext->first = iter->first;
          if(!flag) {
          flag = true;
          value = iter->first;
          }
          //*iterNext={iter->first, temp};
          iterNext->second = temp;
        }
        iter=iterNext; iterNext++;
      }

      if(!flag)
      vv.push_back({iter->first, iter->second});
      else
      vv.push_back({value, iter->second});
      return vv;
  }

class MyClass{
public:
  MyClass(int i) {mem = i;}
  MyClass& operator =(MyClass& obj) {mem = obj.mem; return *this;}//assignment operator
void operator()(int val) { cout<< "This is my value "<< val<<endl; }
MyClass& operator+(MyClass & obj) {int temp =this->mem+obj.mem;return MyClass(temp); }

private:
  int  mem=9;  
};



int jovepwmain()
{
  MyClass myObj1(8);
  myObj1(55);
  MyClass myObj2(9);
  MyClass myObj3= myObj1 + (myObj2);

myObj1 = myObj2;
MyClass obj=myObj2;

  myObj1(888);
 return 0; 
}

*/



















/*
  cout << "Case3: TestTheShapeClass()..." << endl;
  const char c = 'q';
  const char * ptr = &c;
  TestTheShapeClass(&ptr);
  //cout << ptr << endl;
  
// vector<vector<int>> v = {{2,3},{5,5},{2,2},{3,4},{3,4}};
// vector<vector<int>> vv = merge(v);
  return 0;
}
*/
/*
void GetMem(char** p) 
{
  *p = (char*)malloc(100);
  memset(*p, 0, 100);
}
int main()
{
  char **ptr = NULL;
  GetMem(ptr);
  memcpy(*ptr, "good morning.", 13);
  cout<<*ptr<<endl;
  free(*ptr);
  *ptr = NULL;
  return 0;
}

int main()
{
  char *ptr = NULL;
  GetMem(&ptr);
  memcpy(ptr, "good morning.", 13);
  cout<<ptr<<endl;
  free(ptr);
  ptr = NULL;
  return 0;
}
*/






/*
struct Person;

struct Team{
    shared_ptr<Person> goalKeeper;
    ~Team(){cout<<"Team destructed.";}
};
struct Person{
    shared_ptr<Team> team;
    ~Person(){cout<<"Person destructed.";}
};
class Solution {
  public:
void  preorderTraversal(TreeNode* root) {
vector<int>res;
auto helper = [&](TreeNode* root) {
   if(!root) return;
   res.push_back(root->num);
   helper(root->left);
   helper(root->right);
}
}
};
*/

struct TreeNode {
  int num;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int n, TreeNode* l, TreeNode* r):num(n),left(l),right(r){}
};
typedef void (*FuncPtr)(TreeNode* node);
void preorderTraverse(TreeNode* root, FuncPtr&& func) {
   if(!root) return;
   func(root);
   preorderTraverse(root->left, std::move(func));
   preorderTraverse(root->right, std::move(func));
}
void FuncFunc(TreeNode* root, vector<int>& res){
  res.push_back(root->num);
}
using namespace std;
int main() {
int num = 9;
[=] (int i) mutable {
  num = 10;
  cout<<i<<endl;
}(7);
cout<<num<<endl;

/*

  string str = "0.01-DFX401A-20240102";
  size_t pos1 = str.find('-');
  size_t pos2 = str.find('.');
  size_t pos3 = str.find('-');
  size_t pos4 = str.find("-");
  int a = '-';
  int b = '-';
cout<<pos1<<"+"<<pos2<<"+"<<pos3<<"+"<<pos4<<endl;
cout<<a<<"+"<<b<<endl;
cout<<str.find((char)a)<<"+"<<str.find((char)b)<<endl;
int val = (size_t pos = str.find('-'));

    if ((val) != std::string::npos)
    {
      cout<<"good morning"<<endl;
    }
    */
  /*
  TreeNode b1(76,nullptr,nullptr);
  TreeNode b2(32,nullptr,nullptr);
  TreeNode b3(9,nullptr,nullptr);
  b1.left=&b2;
  b2.right=&b3;
  vector<int> ans;
  preorderTraverse(&b1, [&](TreeNode* root) {
    ans.push_back(root->num);
  });
  for(int i = 0; i<ans.size();i++) {
    cout<< ans[i]<<endl;
  }
  */
}

/*
int main__(){
    shared_ptr<Team> Barca = make_shared<Team>();  
    //上面行，new了一个Team对象，为了讲解，称其为tt。接着构造了一个局部变量Barca，他是一个shared_ptr的类型。
    //此时tt对应的引用计数ref_count是1.由shared_ptr的构造函数决定的。
    shared_ptr<Person> Valdes = make_shared<Person>();
    //上面行，new了一个Person对象，为了讲解，权且称其为pp。接着构造了一个局部变量Valdes，他是一个shared_ptr的类型。
    //此时pp对应的引用计数ref_count是1.
    Barca->goalKeeper = Valdes;
    //上面行，因为Valdes是一个shared_ptr, Barca->goalKeeper是一个shared_ptr，上面行的=调用的是shared_ptr的赋值运算符（operator=）
    //因为Valdes指向的是pp，Barca->goalKeeper也将指向pp，会使pp对应的引用计数ref_count++，变为2。该操作是赋值运算符（operator=）决定的
    Valdes->team = Barca;
    //上面行，因为Barca是一个shared_ptr, Valdes->team是一个shared_ptr，上面行的=调用的是shared_ptr的赋值运算符（operator=）
    //因为Barca指向的是tt，Valdes->team也将指向tt，会使tt对应的引用计数ref_count++，变为2。该操作是赋值运算符（operator=）决定的
    return 0;
//此处，函数结束，局部变量开始回收。
//回收局部变量Valdes，调用shared_ptr的析构函数，该函数内部会做2件事。
//1.首先pp的ref_count--，之后，pp的ref_count为1;
//2.接着检查pp的ref_count是不是0,如果是0，就调用delete pp；否则不调用。因为此时pp的ref_count为1;所以不调用。
//tt同理没有被delete tt。导致了内存泄漏。
}

*/