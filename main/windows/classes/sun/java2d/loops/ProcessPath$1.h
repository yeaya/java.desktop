#ifndef _sun_java2d_loops_ProcessPath$1_h_
#define _sun_java2d_loops_ProcessPath$1_h_
//$ class sun.java2d.loops.ProcessPath$1
//$ extends sun.java2d.loops.ProcessPath$EndSubPathHandler

#include <sun/java2d/loops/ProcessPath$EndSubPathHandler.h>

namespace sun {
	namespace java2d {
		namespace loops {

class ProcessPath$1 : public ::sun::java2d::loops::ProcessPath$EndSubPathHandler {
	$class(ProcessPath$1, $NO_CLASS_INIT, ::sun::java2d::loops::ProcessPath$EndSubPathHandler)
public:
	ProcessPath$1();
	void init$();
	virtual void processEndSubPath() override;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_ProcessPath$1_h_