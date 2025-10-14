#ifndef _sun_java2d_loops_ProcessPath$DrawProcessHandler_h_
#define _sun_java2d_loops_ProcessPath$DrawProcessHandler_h_
//$ class sun.java2d.loops.ProcessPath$DrawProcessHandler
//$ extends sun.java2d.loops.ProcessPath$ProcessHandler

#include <java/lang/Array.h>
#include <sun/java2d/loops/ProcessPath$ProcessHandler.h>

#pragma push_macro("PROCESS_LINE")
#undef PROCESS_LINE
#pragma push_macro("PROCESS_POINT")
#undef PROCESS_POINT

namespace sun {
	namespace java2d {
		namespace loops {
			class ProcessPath$DrawHandler;
			class ProcessPath$EndSubPathHandler;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class ProcessPath$DrawProcessHandler : public ::sun::java2d::loops::ProcessPath$ProcessHandler {
	$class(ProcessPath$DrawProcessHandler, $NO_CLASS_INIT, ::sun::java2d::loops::ProcessPath$ProcessHandler)
public:
	ProcessPath$DrawProcessHandler();
	void init$(::sun::java2d::loops::ProcessPath$DrawHandler* dhnd, ::sun::java2d::loops::ProcessPath$EndSubPathHandler* processESP);
	virtual void PROCESS_LINE(int32_t fX0, int32_t fY0, int32_t fX1, int32_t fY1, bool checkBounds, $ints* pixelInfo);
	virtual void PROCESS_POINT(int32_t fX, int32_t fY, bool checkBounds, $ints* pixelInfo);
	virtual void processEndSubPath() override;
	virtual void processFixedLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $ints* pixelInfo, bool checkBounds, bool endSubPath) override;
	::sun::java2d::loops::ProcessPath$EndSubPathHandler* processESP = nullptr;
};

		} // loops
	} // java2d
} // sun

#pragma pop_macro("PROCESS_LINE")
#pragma pop_macro("PROCESS_POINT")

#endif // _sun_java2d_loops_ProcessPath$DrawProcessHandler_h_