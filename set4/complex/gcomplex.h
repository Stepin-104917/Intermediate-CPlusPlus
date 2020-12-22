#ifndef __GCOMPLEX_H
#define __GCOMPLEX_H

template<typename T>
class Complex {
  T m_real;
  T m_image;
  public:
  Complex();
  Complex(T,T);
  void display();
};

#endif
