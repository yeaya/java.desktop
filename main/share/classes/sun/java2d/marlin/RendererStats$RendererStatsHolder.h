#ifndef _sun_java2d_marlin_RendererStats$RendererStatsHolder_h_
#define _sun_java2d_marlin_RendererStats$RendererStatsHolder_h_
//$ class sun.java2d.marlin.RendererStats$RendererStatsHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SINGLETON")
#undef SINGLETON

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentLinkedQueue;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace marlin {
			class RendererStats;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class RendererStats$RendererStatsHolder : public ::java::lang::Object {
	$class(RendererStats$RendererStatsHolder, 0, ::java::lang::Object)
public:
	RendererStats$RendererStatsHolder();
	void init$();
	void add(Object$* parent, ::sun::java2d::marlin::RendererStats* stats);
	void dump();
	static void dumpStats();
	static ::sun::java2d::marlin::RendererStats$RendererStatsHolder* getInstance();
	void lambda$add$1(::sun::java2d::marlin::RendererStats* stats);
	::java::lang::Void* lambda$new$0();
	void remove(::sun::java2d::marlin::RendererStats* stats);
	static $volatile(::sun::java2d::marlin::RendererStats$RendererStatsHolder*) SINGLETON;
	::java::util::concurrent::ConcurrentLinkedQueue* allStats = nullptr;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("SINGLETON")

#endif // _sun_java2d_marlin_RendererStats$RendererStatsHolder_h_