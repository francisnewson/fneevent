#ifndef MUONHIT_HH
#define MUONHIT_HH

#include "TObject.h"

namespace fne
{
    class MuonHit : public TObject
    {
        public:
            void Clear( Option_t * /*option*/ );
            Int_t channel;
            Double_t time;

        private:
            ClassDef( MuonHit, 1 );
    };
}

#endif
