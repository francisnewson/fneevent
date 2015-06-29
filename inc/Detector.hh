#ifndef DETECTOR_HH
#define DETECTOR_HH

#include "TObject.h"
#include "TClonesArray.h"

namespace fne
{
    class Detector : public TObject
    {
        public:
            Detector();
            void Clear( Option_t * /*option*/ );
            Int_t ntracks;
            TClonesArray tracks;

            Int_t nmuons;
            TClonesArray muons;

            Int_t nmuonhits;
            TClonesArray muon_hits;

            Int_t nclusters;
            TClonesArray clusters;

            Int_t naklhits;
            TClonesArray aklhits;

            Int_t nvertexs;
            TClonesArray vertexs;

            ClassDef( Detector, 3 );
    };
}

#endif
