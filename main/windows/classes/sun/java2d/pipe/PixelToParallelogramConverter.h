#ifndef _sun_java2d_pipe_PixelToParallelogramConverter_h_
#define _sun_java2d_pipe_PixelToParallelogramConverter_h_
//$ class sun.java2d.pipe.PixelToParallelogramConverter
//$ extends sun.java2d.pipe.PixelToShapeConverter
//$ implements sun.java2d.pipe.ShapeDrawPipe

#include <sun/java2d/pipe/PixelToShapeConverter.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>

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
			class ParallelogramPipe;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class PixelToParallelogramConverter : public ::sun::java2d::pipe::PixelToShapeConverter, public ::sun::java2d::pipe::ShapeDrawPipe {
	$class(PixelToParallelogramConverter, $NO_CLASS_INIT, ::sun::java2d::pipe::PixelToShapeConverter, ::sun::java2d::pipe::ShapeDrawPipe)
public:
	PixelToParallelogramConverter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::pipe::ShapeDrawPipe* shapepipe, ::sun::java2d::pipe::ParallelogramPipe* pgrampipe, double minPenSize, double normPosition, bool adjustfill);
	virtual void draw(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s) override;
	virtual bool drawGeneralLine(::sun::java2d::SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2);
	virtual void drawLine(::sun::java2d::SunGraphics2D* sg2d, int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual void drawRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void drawRectangle(::sun::java2d::SunGraphics2D* sg2d, double rx, double ry, double rw, double rh, double lw);
	virtual void fill(::sun::java2d::SunGraphics2D* sg2d, ::java::awt::Shape* s) override;
	virtual void fillOuterParallelogram(::sun::java2d::SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double px, double py, double dx1, double dy1, double dx2, double dy2, double len1, double len2, double lw1, double lw2);
	virtual void fillRect(::sun::java2d::SunGraphics2D* sg2d, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void fillRectangle(::sun::java2d::SunGraphics2D* sg2d, double rx, double ry, double rw, double rh);
	static double len(double x, double y);
	virtual double normalize(double v);
	virtual $String* toString() override;
	::sun::java2d::pipe::ParallelogramPipe* outrenderer = nullptr;
	double minPenSize = 0.0;
	double normPosition = 0.0;
	double normRoundingBias = 0.0;
	bool adjustfill = false;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_PixelToParallelogramConverter_h_