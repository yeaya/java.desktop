#ifndef _sun_java2d_pipe_GlyphListLoopPipe_h_
#define _sun_java2d_pipe_GlyphListLoopPipe_h_
//$ class sun.java2d.pipe.GlyphListLoopPipe
//$ extends sun.java2d.pipe.GlyphListPipe
//$ implements sun.java2d.pipe.LoopBasedPipe

#include <sun/java2d/pipe/GlyphListPipe.h>
#include <sun/java2d/pipe/LoopBasedPipe.h>

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

class GlyphListLoopPipe : public ::sun::java2d::pipe::GlyphListPipe, public ::sun::java2d::pipe::LoopBasedPipe {
	$class(GlyphListLoopPipe, $NO_CLASS_INIT, ::sun::java2d::pipe::GlyphListPipe, ::sun::java2d::pipe::LoopBasedPipe)
public:
	GlyphListLoopPipe();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::java2d::pipe::GlyphListPipe::drawGlyphList;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void drawGlyphList(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl, int32_t aaHint) override;
	void drawGlyphListSegment(::sun::java2d::SunGraphics2D* sg2d, ::sun::font::GlyphList* gl, int32_t fromglyph, int32_t toGlyph, int32_t aaHint, bool isColor);
	virtual $String* toString() override;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_GlyphListLoopPipe_h_