#ifndef _sun_java2d_marlin_RendererStats$RendererStatsHolder$1_h_
#define _sun_java2d_marlin_RendererStats$RendererStatsHolder$1_h_
//$ class sun.java2d.marlin.RendererStats$RendererStatsHolder$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace java2d {
		namespace marlin {
			class RendererStats$RendererStatsHolder;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class RendererStats$RendererStatsHolder$1 : public ::java::lang::Runnable {
	$class(RendererStats$RendererStatsHolder$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	RendererStats$RendererStatsHolder$1();
	void init$(::sun::java2d::marlin::RendererStats$RendererStatsHolder* this$0);
	virtual void run() override;
	::sun::java2d::marlin::RendererStats$RendererStatsHolder* this$0 = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_RendererStats$RendererStatsHolder$1_h_