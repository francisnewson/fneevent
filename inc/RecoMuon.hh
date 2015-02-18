#ifndef RECOMUON_HH
#define RECOMUON_HH

#include "TObject.h"

namespace fne
{
    class RecoMuon : public TObject
    {
        public:
            void Clear( Option_t * /*option*/ );
            //position
            Double_t x;
            Double_t y;
            Double_t time;
            Double_t chi2;

            //hit planes
            Int_t status;
            Int_t plane[2];

            //track index
            Int_t iTrk;

        private:
            ClassDef(RecoMuon, 1 );
    };
}
#endif
