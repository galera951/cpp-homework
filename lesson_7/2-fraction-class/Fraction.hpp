#pragma once
#include <iostream>

/*!
 * \namespace math
 *
 * \brief Namespace that contains math tools like fractions etc
 *
*/
namespace math {

  /*!
   * \class Fraction
   *
   * \bried Custom fraction implementation
   *
  */
  class Fraction {
  private:

    unsigned int  numerator;
    unsigned int  denominator;
    bool          minus;

  public:

    Fraction () = default;

    Fraction (int number);

    Fraction (double number);

    Fraction (int num, int den);

    ~Fraction () = default;

    friend std::ostream & operator<< (std::ostream & stream, const Fraction & frac);
    friend std::istream & operator>> (std::istream & stream, Fraction & frac);

    unsigned int get_numerator () const {
      return minus ? -numerator : numerator;
    }
    unsigned int get_denominator () const {
      return denominator;
    }

    void simplify ();

    Fraction reverse () const
    {
      return Fraction(get_denominator(), get_numerator());
    };

    int integer_part () const {
      return (int)(get_numerator() / get_denominator());
    };

    operator double () {
      return get_numerator() / get_denominator();
    };

    Fraction & operator+= (const Fraction & other);
    Fraction & operator-= (const Fraction & other);
    Fraction & operator*= (const Fraction & other);
    Fraction & operator/= (const Fraction & other);

    friend Fraction operator+ (const Fraction & lhs, const Fraction & rhs);
    friend Fraction operator- (const Fraction & lhs, const Fraction & rhs);
    friend Fraction operator* (const Fraction & lhs, const Fraction & rhs);
    friend Fraction operator/ (const Fraction & lhs, const Fraction & rhs);

    friend bool operator== (const Fraction & lhs, const Fraction & rhs);
    friend bool operator!= (const Fraction & lhs, const Fraction & rhs);

    friend bool operator< (const Fraction & lhs, const Fraction & rhs);
    friend bool operator> (const Fraction & lhs, const Fraction & rhs);

    friend bool operator<= (const Fraction & lhs, const Fraction & rhs);
    friend bool operator>= (const Fraction & lhs, const Fraction & rhs);

    Fraction& operator++();
    Fraction& operator--();

    Fraction operator++(int);
    Fraction operator--(int);
  };
}
