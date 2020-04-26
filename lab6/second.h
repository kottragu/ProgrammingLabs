#ifndef LAB6_SECOND_H
#define LAB6_SECOND_H
#include <string>

template<typename iter, typename ob>
bool all_of(const iter &begin, const iter &end, bool cond(ob)){
    for (auto it = begin; it != end; it = std::next(it)){
        if(!cond(*it)){
            return false;
        }
    }
    return true;

}

template <typename iter, typename ob>
bool is_sorted(const iter &begin, const iter &end, bool cond(ob, ob)){ //по возрастанию, для точек - по удалению от центра
    for(auto it = begin+1; it != end; it = std::next(it)){
        if(!cond(*(it-1), *it)){
            return false;
        }
    }
    return true;
}

template <typename iter, typename ob>
bool is_palindrome(const iter &begin, const iter &end, bool cond(ob, ob)){
    for(auto itl = begin, itr = prev(end); itl != end, itr != begin; itl = std::next(itl), itr = std::prev(itr)){
        if(!cond(*itl, *itr)){
            return false;
        }
    }
    return true;
}

struct Dot;
bool func_1(int it);
bool func_2(Dot dot);
bool func_sort_2(Dot a, Dot b);
bool func_sort_1(int a, int b);
bool is_palindrome_1(char s1, char s2);
bool is_palindrome_2(Dot a, Dot b);


#endif
