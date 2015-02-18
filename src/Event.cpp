#include "Event.hh"

ClassImp(fne::Event);

namespace fne
{
    void Event::Clear( Option_t * /*option*/ )
    {
        detector.Clear( "" );
        mc.Clear( "" );
    };
}
