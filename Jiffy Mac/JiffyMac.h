#pragma once

#include <iostream>
#include <vector>

#define in ,
#define for_each(x, y) for(auto x : y){
#define is ==
#define is_not !=
#define isnt != 
#define do_many_(x) for(int _it_=0; _it_<x; ++_it_){
#define _end ;}
#define then_ ){
#define when if(
#define and &&
#define or ||
#define also ;
#define elif else if
#define otherwise_when else if(
#define otherwise else{
#define println(x) std::cout<<x<<std::endl
#define let auto
#define be =
#define getp ->
#define get .
#define set  
#define to =
#define as(i, t) (t)i
#define nc_p(x, y) (x != nullptr ? x : y)
#define nc(x, y) (y == NULL ? x : y)
#define less_than <
#define greater_than >
#define less_than_or_equal <=
#define greater_than_or_equal >=
#define array_of(x) std::vector<x>
#define declare