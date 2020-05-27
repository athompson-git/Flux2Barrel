// cross_sections.cc
// constructor class for generic 2->2 cross-section
// child classes of specific cross-sections



// Total cross-sections (Lorentz-invariants).
namespace XS {


double Primakoff() {
    return 0;
}

double InversePrimakoff() {
    return 0;
}






}  // namespace XS




// Differential cross-sections in the lab frame.
namespace DiffXSLab {


double Primakoff() {
    return 0;
}

double InversePrimakoff() {
    return 0;
}


double WimpNucleus() {
    return 0;
}


double WimpElectron() {
    return 0;
}


}  // namespace DiffXSLab





// Differential cross-sections in the center-of-momentum frame.
namespace DiffXSCOM {





}  // namespace DiffXSCOM