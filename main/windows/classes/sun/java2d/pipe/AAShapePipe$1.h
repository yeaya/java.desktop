#ifndef _sun_java2d_pipe_AAShapePipe$1_h_
#define _sun_java2d_pipe_AAShapePipe$1_h_
//$ class sun.java2d.pipe.AAShapePipe$1
//$ extends sun.java2d.ReentrantContextProviderTL

#include <sun/java2d/ReentrantContextProviderTL.h>

namespace sun {
	namespace java2d {
		class ReentrantContext;
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class AAShapePipe$1 : public ::sun::java2d::ReentrantContextProviderTL {
	$class(AAShapePipe$1, $NO_CLASS_INIT, ::sun::java2d::ReentrantContextProviderTL)
public:
	AAShapePipe$1();
	void init$(int32_t refType);
	virtual ::sun::java2d::ReentrantContext* newContext() override;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_AAShapePipe$1_h_