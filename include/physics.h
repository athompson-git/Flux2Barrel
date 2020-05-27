// P4.h
// Class for lorentz 4-vectors
#ifndef PHYSICS_H_
#define PHYSICS_H_

#include <math.h>


class Lorentz {
private:
   double m_p0;
   double m_p1;
   double m_p2;
   double m_p3;

public:

   //P4();  // default constructor
   Lorentz();
   Lorentz(float x0, float x1, float x2, float x3);  // constructor
   ~Lorentz(); // destructor


   //P4& operator = (P4 const & v);
   //P4& operator += (P4 const & v);
   //P4& operator -= (P4 const & v);
   //Double_t operator *= (P4 const & v);
   //P4& operator *= (P4 s);
   //P4& operator /= (P4 s);


   void Set(float x0, float x1, float x2, float x3);

   double Mag() const { return sqrt(m_p0*m_p0+m_p1*m_p1+m_p2*m_p2+m_p3*m_p3); };
   double Mag2() const { return m_p0*m_p0+m_p1*m_p1+m_p2*m_p2+m_p3*m_p3; };

   double M() const { return sqrt(m_p0*m_p0-m_p1*m_p1+m_p2*m_p2+m_p3*m_p3); };
   double M2() const { return m_p0*m_p0-m_p1*m_p1+m_p2*m_p2+m_p3*m_p3; };
   
   double E() const { return m_p0; };
   double Px() const { return m_p1; };
   double Py() const { return m_p2; };
   double Pz() const { return m_p3; };

   

};



#endif  // PHYSICS_H_