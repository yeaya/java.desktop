#ifndef _sun_java2d_pipe_PixelToShapeConverter_h_
#define _sun_java2d_pipe_PixelToShapeConverter_h_
//$ class sun.java2d.pipe.PixelToShapeConverter
//$ extends sun.java2d.pipe.PixelDrawPipe
//$ implements sun.java2d.pipe.PixelFillPipe

#include <java/lang/Array.h>
#include <sun/java2d/pipe/PixelDrawPipe.h>
#include <sun/java2d/pipe/PixelFillPipe.h>

namespace java {
	namespace awt {
		class Shape;
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
			class ShapeDrawPipe;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class PixelToShapeConverter : public ::sun::java2d::pipe::PixelDrawPipe, public ::sun::java2d::pipe::PixelFillPipe {
	$class(PixelToShapeConverter, $NO_CLASS_INIT, ::sun::java2d::pipe::PixelDrawPipe, ::sun::java2d::pipe::PixelFillPipe)
public:
	PixelToShapeConverter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::pipe::ShapeDrawPipe* pipe);
	virtual void drawArc(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h, int32_t start, int32_t extent) override;
	virtual void drawLine(::sun::java2d::SunGraphics2D* sg, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawOval(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void drawPolygon(::sun::java2d::SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawPolyline(::sun::java2d::SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void drawRect(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void drawRoundRect(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h, int32_t aW, int32_t aH) override;
	virtual void fillArc(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h, int32_t start, int32_t extent) override;
	virtual void fillOval(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void fillPolygon(::sun::java2d::SunGraphics2D* sg, $ints* xPoints, $ints* yPoints, int32_t nPoints) override;
	virtual void fillRect(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void fillRoundRect(::sun::java2d::SunGraphics2D* sg, int32_t x, int32_t y, int32_t w, int32_t h, int32_t aW, int32_t aH) override;
	::java::awt::Shape* makePoly($ints* xPoints, $ints* yPoints, int32_t nPoints, bool close);
	virtual $String* toString() override;
	::sun::java2d::pipe::ShapeDrawPipe* outpipe = nullptr;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_PixelToShapeConverter_h_