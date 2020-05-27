// Particle ID's (PID)

typedef enum PID {
    // Common, follow standard MC PID conventions.
    ANY = 0,
    DOWN_QUARK = 1,
    UP_QUARK = 2,
    ELECTRON = 11,
    POSITRON = -11,
    ELECTRON_NEUTRINO = 12,
    ELECTRON_ANTINEUTRINO = -12,
    MUON = 13,
    ANTIMUON = -13,
    MUON_NEUTRINO = 14,
    MUON_ANTINEUTRINO = -14,
    TAU = 15,
    ANTITAU = -15,
    TAU_NEUTRINO = 16,
    TAU_ANTINEUTRINO = -16,
    PHOTON = 22,
    PI0 = 111,
    PI_PLUS = 211,
    PI_MINUS = -211,
    ETA = 221,
    PROTON = 2212,
    NEUTRON = 2112,
    
    // New Physics particles
    CHI = 1000022,
    AXION = 1000040
};