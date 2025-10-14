#ifndef _sun_java2d_pipe_TextPipe_h_
#define _sun_java2d_pipe_TextPipe_h_
//$ interface sun.java2d.pipe.TextPipe
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace font {
			class GlyphVector;
		}
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

class TextPipe : public ::java::lang::Object {
	$interface(TextPipe, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void drawChars(::sun::java2d::SunGraphics2D* g2d, $chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) {}
	virtual void drawGlyphVector(::sun::java2d::SunGraphics2D* g2d, ::java::awt::font::GlyphVector* g, float x, float y) {}
	virtual void drawString(::sun::java2d::SunGraphics2D* g2d, $String* s, double x, double y) {}
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_TextPipe_h_