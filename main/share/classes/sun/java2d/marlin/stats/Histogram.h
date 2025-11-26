#ifndef _sun_java2d_marlin_stats_Histogram_h_
#define _sun_java2d_marlin_stats_Histogram_h_
//$ class sun.java2d.marlin.stats.Histogram
//$ extends sun.java2d.marlin.stats.StatLong

#include <java/lang/Array.h>
#include <sun/java2d/marlin/stats/StatLong.h>

#pragma push_macro("BUCKET")
#undef BUCKET
#pragma push_macro("LAST")
#undef LAST
#pragma push_macro("MAX")
#undef MAX
#pragma push_macro("STEPS")
#undef STEPS

namespace sun {
	namespace java2d {
		namespace marlin {
			namespace stats {

class Histogram : public ::sun::java2d::marlin::stats::StatLong {
	$class(Histogram, 0, ::sun::java2d::marlin::stats::StatLong)
public:
	Histogram();
	void init$($String* name);
	virtual void add(int32_t val) override;
	virtual void add(int64_t val) override;
	static int32_t bucket(int32_t val);
	virtual void reset() override;
	using ::sun::java2d::marlin::stats::StatLong::toString;
	virtual $String* toString() override;
	static const int32_t BUCKET = 2;
	static const int32_t MAX = 20;
	static const int32_t LAST = 19; // MAX - 1
	static $ints* STEPS;
	$Array<::sun::java2d::marlin::stats::StatLong>* stats = nullptr;
};

			} // stats
		} // marlin
	} // java2d
} // sun

#pragma pop_macro("BUCKET")
#pragma pop_macro("LAST")
#pragma pop_macro("MAX")
#pragma pop_macro("STEPS")

#endif // _sun_java2d_marlin_stats_Histogram_h_