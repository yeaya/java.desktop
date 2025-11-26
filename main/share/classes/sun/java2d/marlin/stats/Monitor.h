#ifndef _sun_java2d_marlin_stats_Monitor_h_
#define _sun_java2d_marlin_stats_Monitor_h_
//$ class sun.java2d.marlin.stats.Monitor
//$ extends sun.java2d.marlin.stats.StatLong

#include <sun/java2d/marlin/stats/StatLong.h>

#pragma push_macro("INVALID")
#undef INVALID

namespace sun {
	namespace java2d {
		namespace marlin {
			namespace stats {

class Monitor : public ::sun::java2d::marlin::stats::StatLong {
	$class(Monitor, $NO_CLASS_INIT, ::sun::java2d::marlin::stats::StatLong)
public:
	Monitor();
	void init$($String* name);
	void start();
	void stop();
	static const int64_t INVALID = (int64_t)-1;
	int64_t start$ = 0;
};

			} // stats
		} // marlin
	} // java2d
} // sun

#pragma pop_macro("INVALID")

#endif // _sun_java2d_marlin_stats_Monitor_h_