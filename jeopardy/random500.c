int main(){
    int array[] = {1,2,3,4,5};

    for(int * ptr = array; ptr < array + 5; ptr += 2){
        printf("%d ", *ptr);
    }
    return 0;
}
