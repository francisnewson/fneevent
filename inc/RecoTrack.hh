#ifndef RECOTRACK_HH
#define RECOTRACK_HH

#include "TObject.h"

namespace fne
{
    class RecoTrack : public TObject
    {
        public:
            void Clear( Option_t * /*option*/ );

            //momentum
            Double_t p;
            Double_t perr;

            //charge
            Double_t q;

            //quality
            Double_t quality;
            Double_t chi2;

            //upstream track
            Double_t bx;
            Double_t by;

            Double_t bdxdz;
            Double_t bdydz;

            //downstream track
            Double_t x;
            Double_t y;

            Double_t dxdz;
            Double_t dydz;

            //errors
            Double_t sigxx;
            Double_t sigyy;
            Double_t sigdxdx;
            Double_t sigdydy;
            Double_t sigxdx;
            Double_t sigxy;
            Double_t sigdxy;
            Double_t sigxdy;
            Double_t sigdxdy;
            Double_t sigydy;

            Int_t aklflag;

            //timing
            Double_t time;
            Double_t hodTime;
            Int_t hodstatus;
            Double_t aklTime;
            Double_t aklTime67;

            Double_t dDeadCell;
            Int_t hitPattern;

            Int_t iMuon;
            Int_t iClus;
            Int_t id;

        private:
            ClassDef( RecoTrack, 1 );
    };
}
#endif
