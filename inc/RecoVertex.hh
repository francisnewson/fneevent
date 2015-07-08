#ifndef RECOVERTEX_HH
#define RECOVERTEX_HH

#include "TObject.h"
#include "TClonesArray.h"

namespace fne
{
    class RecoVertexTrack : public TObject
    {
        public:
            void Clear( Option_t * /*option*/ );
            Int_t iTrack;
            Double_t bdxdz;
            Double_t bdydz;

        private:
            ClassDef( RecoVertexTrack, 1 );
    };

    class RecoVertex : public TObject
    {
        public:
            RecoVertex();
            void Clear( Option_t * /*option*/ );

            Int_t nvertextracks;
            TClonesArray vertex_tracks;

            Int_t charge;
            Double_t cda;
            Double_t cog;
            Double_t chi2;
            Double_t x;
            Double_t y;
            Double_t z;
            Double_t tVtx;
            Double_t tVtxHodo;
            Double_t hacTime;
            Double_t aklTime;
            Double_t aklTime67;
            Double_t aklflag;

        private:
            ClassDef( RecoVertex, 1 );
    };
}
#endif
