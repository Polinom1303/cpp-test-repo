int IsPowOfTwo(int num) {
    if (num == 1) {
        return 1;
    }
    else {
        if (num% 2 != 0) { 
            return 0;
        }
        else {
            return IsPowOfTwo(num / 2 );
        }
    }
}