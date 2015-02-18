#ifndef RECOAKLHIT_HH
#define RECOAKLHIT_HH

#include "TObject.h"

namespace fne
{
    class RecoAKLhit : public TObject
    {
        public:
            void Clear( Option_t * /*option*/ );

            Int_t pocket;
            Int_t layer;
            Int_t counter;
            Double_t mips;
            Double_t time;
            Int_t ONTflag;

        private:
            ClassDef( RecoAKLhit, 1 );
    };

}
#endif
