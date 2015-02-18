#ifndef EVENT_HH
#define EVENT_HH

#include "TObject.h"
#include "Rtypes.h"
#include "Header.hh"
#include "Detector.hh"
#include "Mc.hh"

namespace fne
{
    struct PatternUnitChannel
    {
        Int_t tslice[10];
        ClassDef( PatternUnitChannel , 1 );
    };

    struct PatternUnit
    {
        PatternUnitChannel channel[16];
        ClassDef( PatternUnit , 1 );
    };

    class Event : public TObject
    {
        public:
            void Clear( Option_t * /*option*/ );
            Header header;
            Conditions conditions;
            Detector detector;
            PatternUnit pattern_unit;
            Mc mc;

            ClassDef(Event, 3 );
    };

    class FileInfo : public TObject
    {
        public:
            std::string filename;
            bool mc;

            ClassDef( FileInfo, 1 );
    };
}
#endif
