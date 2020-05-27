// physics.cc
// Definitions for physics.h


#include "../include/physics.h"
using namespace std;


// Default constructor.
Lorentz::Lorentz() {
   m_p0 = 0.;
   m_p1 = 0.;
   m_p2 = 0.;
   m_p3 = 0.;
}

// Constructor.
Lorentz::Lorentz(float x0, float x1, float x2, float x3) {
   m_p0 = x0;
   m_p1 = x1;
   m_p2 = x2;
   m_p3 = x3;
}


// destructor
Lorentz::~Lorentz() {}


void Lorentz::Set(float x0, float x1, float x2, float x3) {
    m_p0 = x0;
    m_p1 = x1;
    m_p2 = x2;
    m_p3 = x3;
}


