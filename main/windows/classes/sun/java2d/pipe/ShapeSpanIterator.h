#ifndef _sun_java2d_pipe_ShapeSpanIterator_h_
#define _sun_java2d_pipe_ShapeSpanIterator_h_
//$ class sun.java2d.pipe.ShapeSpanIterator
//$ extends sun.java2d.pipe.SpanIterator
//$ implements sun.awt.geom.PathConsumer2D

#include <java/lang/Array.h>
#include <sun/awt/geom/PathConsumer2D.h>
#include <sun/java2d/pipe/SpanIterator.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class PathIterator;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class ShapeSpanIterator : public ::sun::java2d::pipe::SpanIterator, public ::sun::awt::geom::PathConsumer2D {
	$class(ShapeSpanIterator, 0, ::sun::java2d::pipe::SpanIterator, ::sun::awt::geom::PathConsumer2D)
public:
	ShapeSpanIterator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool adjust);
	void addSegment(int32_t type, $floats* coords);
	void appendPath(::java::awt::geom::PathIterator* pi);
	void appendPoly($ints* xPoints, $ints* yPoints, int32_t nPoints, int32_t xoff, int32_t yoff);
	virtual void closePath() override;
	virtual void curveTo(float x1, float y1, float x2, float y2, float x3, float y3) override;
	void dispose();
	virtual int64_t getNativeConsumer() override;
	virtual int64_t getNativeIterator() override;
	virtual void getPathBox($ints* pathbox) override;
	static void initIDs();
	virtual void intersectClipBox(int32_t lox, int32_t loy, int32_t hix, int32_t hiy) override;
	virtual void lineTo(float x, float y) override;
	virtual void moveTo(float x, float y) override;
	virtual bool nextSpan($ints* spanbox) override;
	virtual void pathDone() override;
	virtual void quadTo(float x1, float y1, float x2, float y2) override;
	void setNormalize(bool adjust);
	void setOutputArea(::java::awt::Rectangle* r);
	void setOutputArea(::sun::java2d::pipe::Region* r);
	void setOutputAreaXYWH(int32_t x, int32_t y, int32_t w, int32_t h);
	void setOutputAreaXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy);
	void setRule(int32_t rule);
	virtual void skipDownTo(int32_t y) override;
	virtual $String* toString() override;
	int64_t pData = 0;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_ShapeSpanIterator_h_