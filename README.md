# <em>from</em> Flux <em>to</em> <strong>BARREL</strong> 🍺

## A pseudo-MCMC sampler for building quick pheno analyses.



### Design goals

* C++ backend
* python interface
* built-in plotting
* FAST

~~~~
Detector *det = new Detector(material, volume, position,...);


Source *source = new Source(material, position, ...);


PhaseSpace *flux = new PhaseSpace(photon, data, etc.,...);

flux->Process(process1);
...
...
...
flux->Process(processN);

flux->Propagate(&det);

flux->Detect(process);

// Get stats and histograms

flux->GetStats() // etc.


~~~~

