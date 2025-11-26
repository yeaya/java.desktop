#ifndef _sun_java2d_loops_ProcessPath$FillProcessHandler_h_
#define _sun_java2d_loops_ProcessPath$FillProcessHandler_h_
//$ class sun.java2d.loops.ProcessPath$FillProcessHandler
//$ extends sun.java2d.loops.ProcessPath$ProcessHandler

#include <java/lang/Array.h>
#include <sun/java2d/loops/ProcessPath$ProcessHandler.h>

namespace sun {
	namespace java2d {
		namespace loops {
			class ProcessPath$DrawHandler;
			class ProcessPath$FillData;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class ProcessPath$FillProcessHandler : public ::sun::java2d::loops::ProcessPath$ProcessHandler {
	$class(ProcessPath$FillProcessHandler, $NO_CLASS_INIT, ::sun::java2d::loops::ProcessPath$ProcessHandler)
public:
	ProcessPath$FillProcessHandler();
	void init$(::sun::java2d::loops::ProcessPath$DrawHandler* dhnd);
	virtual void processEndSubPath() override;
	virtual void processFixedLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $ints* pixelInfo, bool checkBounds, bool endSubPath) override;
	::sun::java2d::loops::ProcessPath$FillData* fd = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_ProcessPath$FillProcessHandler_h_