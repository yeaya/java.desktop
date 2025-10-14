#ifndef _sun_java2d_marlin_stats_StatLong_h_
#define _sun_java2d_marlin_stats_StatLong_h_
//$ class sun.java2d.marlin.stats.StatLong
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {
			namespace stats {

class StatLong : public ::java::lang::Object {
	$class(StatLong, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StatLong();
	void init$($String* name);
	virtual void add(int32_t val);
	virtual void add(int64_t val);
	virtual void reset();
	virtual $String* toString() override;
	::java::lang::StringBuilder* toString(::java::lang::StringBuilder* sb);
	static double trimTo3Digits(double value);
	$String* name = nullptr;
	int64_t count = 0;
	int64_t sum = 0;
	int64_t min = 0;
	int64_t max = 0;
};

			} // stats
		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_stats_StatLong_h_