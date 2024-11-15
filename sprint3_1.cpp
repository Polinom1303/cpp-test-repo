    Rational& operator/=(Rational right) {
       if (right.denominator_ == 0) {
            throw invalid_argument("Деление на ноль!");
        } else {
        numerator_ *= right.denominator_;
        denominator_ *= right.numerator_;
        Normalize();
        return *this;
       }
    }
	Rational operator/(Rational left, Rational right) {
 if (right.Denominator() == 0 ||left.Denominator() == 0) {
            throw invalid_argument("Деление на ноль!");
 }else{
        return left /= right;
 }
}