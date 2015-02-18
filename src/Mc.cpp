#include "Mc.hh"

ClassImp(fne::McParticle);
ClassImp(fne::McDecay);
ClassImp(fne::Mc);

namespace fne
{
            void McParticle::Clear( Option_t * /*option*/ ){}

    Mc::Mc()
        :particles( "fne::McParticle", 20 )
    {}

    void Mc::Clear( Option_t * /*option*/ )
    {
        particles.Clear("C");
    };
}
