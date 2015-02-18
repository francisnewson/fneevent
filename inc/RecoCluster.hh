#ifndef RECOCLUSTER_HH
#define RECOCLUSTER_HH

#include "TObject.h"

namespace fne
{
    class RecoCluster : public TObject
    {
        public:
            void Clear( Option_t * /*option*/ );
            Double_t energy;
            Double_t x;
            Double_t y;
            Double_t time;
            Double_t hacTime;
            Double_t hodTime;
            Double_t aklTime;
            Double_t aklTime67;
            Int_t aklflag;
            Double_t dDeadCell;
            Int_t status;
            Int_t iTrack;
            Double_t rmsx;
            Double_t rmsy;
            Double_t mctailcorr;

            ClassDef( RecoCluster, 1 );
    };
}

#endif
