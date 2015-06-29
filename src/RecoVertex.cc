#include "RecoVertex.hh"

namespace fne
{

    void RecoVertexTrack::Clear( Option_t * /*option*/ ){} 

    RecoVertex::RecoVertex()
        :vertex_tracks( "fne::RecoVertexTrack", 7 );

    void RecoVertex::Clear( Option_t * /*option*/ )
    {
        vertex_tracks.clear();
    }
}
