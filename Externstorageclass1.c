#include<stdio.h>//comile and run both files togather
//translation unit
extern int A=99;//should not initialised here(throws warning beacuse compiler can generate ambiguity at 
// timie of its use)