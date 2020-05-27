// flux.cc
// Flux class
#include "particle.cc"
#include <vector>

// base class, child classes have specific processes
class Process {
public:
    // 1 -> N scattring process
    // fixed targets are spectator particles
    // take in 1 particle and transform it
    std::vector<Particle> transform(Particle &p);

    Process();
    ~Process();
};

// default constructor
Process::Process() {}

// destructor
Process::~Process() {}


class PhaseSpace {
private:
    std::vector<Particle> m_particles;

public:
    // can take in base class or anything that inherits from Process
    // responsible for looping through the vector of particles and
    // transforming them, pushing back, or deleting elements.

    // Looks for the transform method of process to transform 1-> 1
    // Looks for decay method to decay 1 -> 2
    // Looks for scatter method to scatter 1 -> 2 on F.T.
    // in loop...
    //   if proc->has_transform() {proc->transform(&m_particles[i])}
    //   ... but don't modify particle in m_particles until the end.
    //   ... grab the weight and use it to decay/scatter etc.
    void Evolve(const Process &proc);

    void Propagate();

    void GetStats() const;
};



void PhaseSpace::Evolve(const Process &proc) {
    // Only handle prompt processes
    // Decays are handled by propagate step
    
    
}


void PhaseSpace::Propagate() {}
