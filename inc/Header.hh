#ifndef HEADER_HH
#define HEADER_HH

#include "TObject.h"

namespace fne
{
	class Header : public TObject
	{
		public:
            bool mc;

			int run;
			int burst_time;

			int time_stamp;
			int trig_word;

			int compact_number;

		private:
			ClassDef(Header, 3)
	};

	class Conditions : public TObject
	{
		public:
			int MNP33_current;
            double dch_toffst;

            double alpha;
            double beta;

            double mkp;
            double mkperr;
            double mkn;
            double mknerr;

            double pkp;
            double pkdxdzp;
            double pkdydzp;
            double pkxoffp;
            double pkyoffp;

            double pkm;
            double pkdxdzm;
            double pkdydzm;
            double pkxoffm;
            double pkyoffm;

		private:
			ClassDef(Conditions, 1)
	};

}
#endif
