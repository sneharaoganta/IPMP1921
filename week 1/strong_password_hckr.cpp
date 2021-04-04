//8.https://www.hackerrank.com/challenges/strong-password
// Status: All test cases accepted
// Code:
#include <bits/stdc++.h>
using namespace std;
// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
// Return the minimum number of characters to make the password strong
int i,p;
int digit=0;
int l,u,s;
l=0;
u=0;
s=0;
for(i=0;i<n;i++){
if(isdigit(password[i]))
digit++;if(islower(password[i]))
l++;
if(isupper(password[i]))
u++;
if(password[i]=='!'||password[i]=='@'||password[i]=='#'||password[i]=='$'||password[i]=='%'|
|password[i]=='^'||password[i]=='&'||password[i]=='*'||password[i]=='-'||password[i]=='+'||p
assword[i]=='('||password[i]==')')
s++;
}
if(n<6&&digit!=0&&l!=0&&u!=0&&s!=0)
p = 6-n;
if(digit==0&&l!=0&&u!=0&&s!=0){
if(n<6)
p = 6-n;
if(n>=6){
p = 1;
}
}
if(digit!=0&&l==0&&u!=0&&s!=0)
{
if(n<6)
p = 6-n;
if(n>=6)
p = 1;
}
if(digit!=0&&l!=0&&u==0&&s!=0)
{
if(n<6)
p = 6-n;
if(n>=6)
p = 1;
}
if(digit!=0&&l!=0&&u!=0&&s==0)
{if(n<6)
p = 6-n;
if(n>=6)
p = 1;
}
if(digit==0&&l==0&&u!=0&&s!=0){
if(n<6){
if(6-n>=2)
p = 6-n;
else if(6-n<2)
p = 2;
}
if(n>=6)
p = 2;
}
if(digit==0&&l!=0&&u==0&&s!=0)
{
if(n<6){
if(6-n>=2)
p = 6-n;
else if(6-n<2)
p = 2;
}
if(n>=6)
p = 2;
}
if(digit==0&&l!=0&&u!=0&&s==0)
{
if(n<6){
if(6-n>=2)
p = 6-n;
else if(6-n<2)
p = 2;
}if(n>=6)
p = 2;
}
if(digit!=0&&l==0&&u==0&&s!=0)
{
if(n<6){
if(6-n>=2)
p = 6-n;
else if(6-n<2)
p = 2;
}
if(n>=6)
p = 2;
}
if(digit!=0&&l==0&&u!=0&&s==0)
{
if(n<6){
if(6-n>=2)
p = 6-n;
else if(6-n<2)
p = 2;
}
if(n>=6)
p = 2;
}
if(digit!=0&&l!=0&&u==0&&s==0)
{
if(n<6){
if(6-n>=2)
p = 6-n;
else if(6-n<2)
p = 2;
}
if(n>=6)
p = 2;
}if(digit==0&&l==0&&u==0&&s!=0){
if(n<6){
if(6-n>=3)
p = 6-n;
else if(6-n<3)
p = 3;
}
if(n>=6)
p = 3;
}
if(digit==0&&l!=0&&u==0&&s==0){
if(n<6){
if(6-n>=3)
p = 6-n;
else if(6-n<3)
p = 3;
}
if(n>=6)
p = 3;
}
if(digit==0&&l==0&&u!=0&&s==0){
if(n<6){
if(6-n>=3)
p = 6-n;
else if(6-n<3)
p = 3;
}
if(n>=6)
p = 3;
}
if(digit!=0&&l==0&&u==0&&s==0){
if(n<6){
if(6-n>=3)
p = 6-n;else if(6-n<3)
p =3;
}
if(n>=6)
p = 3;
}
if(digit==0&&l==0&&u==0&&s==0){
if(n<6){
if(6-n>=4)
p = 6-n;
else if(6-n<4)
p = 4-(6-n);
}
if(n>=6)
p = 4;
}
if(digit!=0&&l!=0&&u!=0&&s!=0&&n>6)
p=0;
return p;
}
