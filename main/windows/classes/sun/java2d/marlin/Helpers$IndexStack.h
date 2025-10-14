#ifndef _sun_java2d_marlin_Helpers$IndexStack_h_
#define _sun_java2d_marlin_Helpers$IndexStack_h_
//$ class sun.java2d.marlin.Helpers$IndexStack
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INITIAL_COUNT")
#undef INITIAL_COUNT

namespace sun {
	namespace java2d {
		namespace marlin {
			class DPathConsumer2D;
			class IntArrayCache$Reference;
			class RendererContext;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace marlin {
			namespace stats {
				class Histogram;
				class StatLong;
			}
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class Helpers$IndexStack : public ::java::lang::Object {
	$class(Helpers$IndexStack, 0, ::java::lang::Object)
public:
	Helpers$IndexStack();
	void init$(::sun::java2d::marlin::RendererContext* rdrCtx);
	void init$(::sun::java2d::marlin::RendererContext* rdrCtx, ::sun::java2d::marlin::stats::StatLong* stat_idxstack_indices, ::sun::java2d::marlin::stats::Histogram* hist_idxstack_indices, ::sun::java2d::marlin::stats::StatLong* stat_array_idxstack_indices);
	void dispose();
	bool isEmpty();
	void pullAll($doubles* points, ::sun::java2d::marlin::DPathConsumer2D* io);
	void push(int32_t v);
	void reset();
	static int32_t INITIAL_COUNT;
	int32_t end = 0;
	$ints* indices = nullptr;
	::sun::java2d::marlin::IntArrayCache$Reference* indices_ref = nullptr;
	int32_t indicesUseMark = 0;
	::sun::java2d::marlin::stats::StatLong* stat_idxstack_indices = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_idxstack_indices = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_idxstack_indices = nullptr;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("INITIAL_COUNT")

#endif // _sun_java2d_marlin_Helpers$IndexStack_h_