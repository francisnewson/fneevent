#ifndef MC_HH
#define MC_HH
#include "TVector3.h"
#include "TLorentzVector.h"
#include "TClonesArray.h"

namespace fne
{

    class McParticle : public TObject
    {
        public:
            void Clear( Option_t * /*option*/ );
            Int_t type;

            TLorentzVector momentum;
            TVector3 production_vertex;
            TVector3 decay_vertex;
            TVector3 spin;

        private:
            ClassDef( McParticle, 1  );
    };

    class McDecay : public TObject
    {
        public:
            Int_t kaon_type;
            Int_t decay_type;
            TVector3 decay_vertex;
            TLorentzVector kaon_momentum;

        private:
            ClassDef( McDecay, 1  );
    };

    class Mc : public TObject
    {
        public:
            Mc();
            void Clear( Option_t * /*Option*/ );
            Int_t npart;
            TClonesArray particles;
            McDecay decay;

        private:
            ClassDef( Mc, 1  );
    };
}
#endif
