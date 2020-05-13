#ifndef LAB6_SECOND_H
#define LAB6_SECOND_H
template<typename iter, typename ob>
bool all_of(const iter &begin, const iter &end, bool (*cond)(ob)){
    for (auto it = begin; it != end; it = std::next(it)){
        if(cond(*it) != 1){
            return false;
        }
    }
    return true;
}

template <typename iter, typename ob>
bool is_sorted(const iter &begin, const iter &end, bool (*cond)(ob)){
    for(auto it = begin; it != end; it = std::next(it)){
        if(cond(*it) != 1){   
            return false;
        }
    }
    return true;
}

template <typename iter, typename ob>
bool is_palindrome(const iter &begin, const iter &end, bool (*cond)(ob)){
    for(auto itl = begin, itr = prev(end); itl != end, itr != begin; itl = std::next(itl), itr = std::prev(itr)){
        if(cond(*itl)&&cond(*itr)){
            return false;
        }
    }
    return true;
}
