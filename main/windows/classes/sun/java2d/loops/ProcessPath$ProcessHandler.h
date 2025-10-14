#ifndef _sun_java2d_loops_ProcessPath$ProcessHandler_h_
#define _sun_java2d_loops_ProcessPath$ProcessHandler_h_
//$ class sun.java2d.loops.ProcessPath$ProcessHandler
//$ extends sun.java2d.loops.ProcessPath$EndSubPathHandler

#include <java/lang/Array.h>
#include <sun/java2d/loops/ProcessPath$EndSubPathHandler.h>

namespace sun {
	namespace java2d {
		namespace loops {
			class ProcessPath$DrawHandler;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class ProcessPath$ProcessHandler : public ::sun::java2d::loops::ProcessPath$EndSubPathHandler {
	$class(ProcessPath$ProcessHandler, $NO_CLASS_INIT, ::sun::java2d::loops::ProcessPath$EndSubPathHandler)
public:
	ProcessPath$ProcessHandler();
	void init$(::sun::java2d::loops::ProcessPath$DrawHandler* dhnd, int32_t clipMode);
	virtual void processFixedLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $ints* pixelInfo, bool checkBounds, bool endSubPath) {}
	::sun::java2d::loops::ProcessPath$DrawHandler* dhnd = nullptr;
	int32_t clipMode = 0;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_ProcessPath$ProcessHandler_h_