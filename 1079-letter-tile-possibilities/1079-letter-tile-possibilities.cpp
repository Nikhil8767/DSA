#include<set> 
#include<vector>  
#include<cmath> 

class Solution {
public:    
    int factorial(int digit){
        int initial = 1 ; 
        for(int fc=1;fc<=digit;fc++){
            initial = initial*fc ; 
        }  
        return initial ; 
    }
    int evaluate(const std::string& value){
        std::map<char,int> mappy  ;  
        int width = value.length () ;
        for( int fe=0;fe<value.length();fe++){
            char temps = value[fe] ; 
            if(mappy.find(temps)==mappy.end()){
                std::pair<char,int> paired = {temps,1} ;
                mappy.insert(paired) ;
             }else{
                int& initial = mappy.find (temps)->second ;  
                initial =initial+1 ;  
             }  
        }  
        int product =  factorial(width) ;  
        std::map<char,int>::iterator iterator = mappy.begin() ; 
        while(iterator!=mappy.end()){
           const char& check = iterator-> first ; 
            int& digit =  iterator->second  ; 
            iterator++ ;  
            int verse = factorial(digit) ; 
            product = product/verse ;  
        }  
        return product ; 
    }  
    void sort(std::string& initial){
        for(int fc=0;fc<initial.length();fc++){
            for(int fe=0 ;fe<fc;fe++){
                if(initial[fe]>initial[fc]){
                    char prevs = initial[fe]  ;
                    initial[fe] = initial[fc] ; 
                    initial[fc] =  prevs ;  
                }
            }
        }
    }
    void determine(int index,std::string& phase , 
    std::string& initial,std::set<std::string>& values){
        if(index>=initial.length()){
            std::string clone (phase)  ;    
            sort (clone) ;
            if(clone.length()>=1){
            values.insert(clone) ; } 
            return ;
        }  
        char temps= initial[index] ; 
        determine(index+1 ,phase,initial,values) ;  
        phase.append(1,temps) ;  
        determine(index+1,phase,initial,values) ; 
        phase.erase(--phase.end()) ; 
    }
    int numTilePossibilities(string tiles) {
        int width = tiles.length(); 
        std::string begin  ; 
        std::set<std::string> kami ; 
        determine (0,begin,tiles,kami) ;
        int totals = 0  ; 
        std::set<std::string>::iterator iterator = 
        kami.begin( ) ; 
        while(iterator!=kami.end()){
            const std::string& phase = *iterator ; 
        //    std::cout<<phase<<" " ; 
             iterator++ ;  
             int digit = evaluate(phase)  ;  
            totals = totals+digit ; 
        }  
        return totals ;  
    }
};