#include <vector>
#include <iostream>

template <typename DataType, template <class> class ContainerType = std::vector>
class priority_queue{
    private:
    typedef ContainerType<DataType> ContainerWithType;
    ContainerWithType array;

    void swap(unsigned int i, unsigned int j){
        DataType temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    void fixUp(){
        int k = array.size() - 1; 
        while(k > 0 && array[k/2] < array[k]){
            swap(k, k/2);
            k = k/2; 
        } 
    }

    void fixDown(){
        int k = 0; 
        int N = array.size() - 2; 
        while(2*k <= N){
            int j = 2*k;
            if(j < N && array[j] < array[j+1]){
                j++;
            } 
            if(!(array[k] < array[j])) {
                break; 
            }
            swap(k, j); 
            k = j;
        }
    }

    public: 

    int getSize(){
        return array.size(); 
    }

    void insert(DataType data){
        array.push_back(data);
        fixUp(); 
    }

    void del(){
        swap(0,array.size() - 1);
        fixDown();
        array.pop_back();
    }

    DataType getMax(){
        return array.front();
    }

    bool isEmpety(){
        return array.empty() == 0;
    }

    void print(){
        for(auto i : array){
            std::cout << i << " "; 
        }
        std::cout << std::endl; 
    }
};
