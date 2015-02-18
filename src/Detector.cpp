#include "Detector.hh"

ClassImp(fne::Detector);

namespace fne
{
    Detector::Detector()
        :tracks( "fne::RecoTrack", 40 ),
        muons( "fne::RecoMuon", 12 ),
        muon_hits( "fne::MuonHit", 56 ),
        clusters( "fne::RecoCluster", 25 ),
        aklhits( "fne::RecoAKLhit", 100 )
    {}

    void Detector::Clear( Option_t * /*option*/ )
    {
        tracks.Clear();
        muons.Clear();
        muon_hits.Clear();
        clusters.Clear();
        aklhits.Clear();
    };
}
