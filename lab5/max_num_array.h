#ifndef LAB5_MAX_NUM_ARRAY_H
#define LAB5_MAX_NUM_ARRAY_H

template <typename T>
T my_temp(T *arr, int n){
    T rez = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > rez){
            rez = arr[i];
        }
    }
    return rez;
}

#endif
