#ifndef _sun_java2d_marlin_DMarlinRenderingEngine$2_h_
#define _sun_java2d_marlin_DMarlinRenderingEngine$2_h_
//$ class sun.java2d.marlin.DMarlinRenderingEngine$2
//$ extends sun.java2d.ReentrantContextProviderCLQ

#include <sun/java2d/ReentrantContextProviderCLQ.h>

namespace sun {
	namespace java2d {
		class ReentrantContext;
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class DMarlinRenderingEngine$2 : public ::sun::java2d::ReentrantContextProviderCLQ {
	$class(DMarlinRenderingEngine$2, $NO_CLASS_INIT, ::sun::java2d::ReentrantContextProviderCLQ)
public:
	DMarlinRenderingEngine$2();
	void init$(int32_t refType);
	virtual ::sun::java2d::ReentrantContext* newContext() override;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_DMarlinRenderingEngine$2_h_