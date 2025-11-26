#ifndef _sun_java2d_pipe_BufferedTextPipe$1_h_
#define _sun_java2d_pipe_BufferedTextPipe$1_h_
//$ class sun.java2d.pipe.BufferedTextPipe$1
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace sun {
	namespace font {
		class GlyphList;
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class BufferedTextPipe;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class BufferedTextPipe$1 : public ::java::lang::Runnable {
	$class(BufferedTextPipe$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	BufferedTextPipe$1();
	void init$(::sun::java2d::pipe::BufferedTextPipe* this$0, int32_t val$totalGlyphs, ::sun::font::GlyphList* val$gl, ::sun::java2d::SunGraphics2D* val$sg2d, float val$glyphListOrigX, float val$glyphListOrigY, $longs* val$images);
	virtual void run() override;
	::sun::java2d::pipe::BufferedTextPipe* this$0 = nullptr;
	$longs* val$images = nullptr;
	float val$glyphListOrigY = 0.0;
	float val$glyphListOrigX = 0.0;
	::sun::java2d::SunGraphics2D* val$sg2d = nullptr;
	::sun::font::GlyphList* val$gl = nullptr;
	int32_t val$totalGlyphs = 0;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_BufferedTextPipe$1_h_