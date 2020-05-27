// detector.h

// detectors are objects with potentially many attributes
// atomic number, dimensions, mass, chemical composition,
// threshold, etc...



class Detector {
private:
    // Position of COM
    double m_X;
    double m_Y;
    double m_Z;

    // Todo: orientation, use 3 vector class?

    // Dimensions
    double m_V;
    double m_Lx;
    double m_Ly;
    double m_Lz;

    double m_Z;  // No. protons (for now, monoatomic)
    double m_A;  // No. nucleons
    double m_NAtoms;
    double m_Mass;

    double m_threshold;




public:
    // Constructors
    Detector();
    Detector(double atomic_number, double z_distance);
    ~Detector(); // destructor


    double Mass() const { return m_Mass; };
    double NAtoms() const { return m_NAtoms; };
    double Z() const { return m_Z; };
    double Nucleons() const { return m_A; };

    double V() const { return m_V; };
    double Lx() const { return m_Lx; };
    double Ly() const { return m_Ly; };
    double Lz() const { return m_Lz; };

    double X() const { return m_X; };
    double Y() const { return m_Y; };
    double Z() const { return m_Z; };


};