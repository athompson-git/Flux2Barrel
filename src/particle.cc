// particle.cc



#include "../include/particle.h"


// Default constructor.
Particle::Particle() {
    m_P = Lorentz(0., 0., 0., 0.);
    m_Tau = -1.;
    m_pid = ANY;
}

// Constructors.
Particle::Particle(Lorentz p) {
    m_Tau = -1.;
    m_pid = ANY;
    m_P = p;
}

Particle::Particle(Lorentz p, double tau) {
    m_pid = ANY;
    m_Tau = tau;
    m_P = p;
}


Particle::Particle(Lorentz p, double tau, enum PID pid) {
    m_Tau = tau;
    m_P = p;
    m_pid = pid;
}

// destructor
Particle::~Particle() {}


// Set methods
void Particle::SetTau(double tau) {
    m_Tau = tau;
}


void Particle::SetPID(enum PID pid) {
    m_pid = pid;
}

// Get methods.
double Particle::Mass(){
    return m_P.M();
}

double Particle::Energy(){
    return m_P.E();
}

double Particle::Px(){
    return m_P.Px();
}

double Particle::Py(){
    return m_P.Py();
}

double Particle::Pz(){
    return m_P.Pz();
}