#ifndef _sun_java2d_pipe_BufferedMaskFill$1_h_
#define _sun_java2d_pipe_BufferedMaskFill$1_h_
//$ class sun.java2d.pipe.BufferedMaskFill$1
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace sun {
	namespace java2d {
		namespace pipe {
			class BufferedMaskFill;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class BufferedMaskFill$1 : public ::java::lang::Runnable {
	$class(BufferedMaskFill$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	BufferedMaskFill$1();
	void init$(::sun::java2d::pipe::BufferedMaskFill* this$0, int32_t val$x, int32_t val$y, int32_t val$w, int32_t val$h, int32_t val$maskoff, int32_t val$maskscan, $bytes* val$mask);
	virtual void run() override;
	::sun::java2d::pipe::BufferedMaskFill* this$0 = nullptr;
	$bytes* val$mask = nullptr;
	int32_t val$maskscan = 0;
	int32_t val$maskoff = 0;
	int32_t val$h = 0;
	int32_t val$w = 0;
	int32_t val$y = 0;
	int32_t val$x = 0;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_BufferedMaskFill$1_h_