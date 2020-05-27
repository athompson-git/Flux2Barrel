// particle.h

// class for particle construction
// Particle has state vars and quantum numbers
// inhertied classes of specific particles
// ...neutrinos
// ...alps
// ...photons
// ...dm
// etc.

#include "physics.h"
#include "pid.h"


class Particle {
private:
    PID m_pid;
    Lorentz m_P;
    // todo: add (t,x,y,z)

    double m_Tau;
    
    double m_weight;


public:
    Particle();
    Particle(Lorentz);  // constructor
    Particle(Lorentz, double);
    Particle(Lorentz, double, enum PID pid);
    ~Particle(); // destructor

    double Tau() const { return m_Tau; };
    PID PID() const { return m_pid; };

    void SetTau(double);
    void SetPID(enum PID pid);

    double Mass();
    double Energy();
    double Px();
    double Py();
    double Pz();
};