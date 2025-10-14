#ifndef _java_awt_geom_RectIterator_h_
#define _java_awt_geom_RectIterator_h_
//$ class java.awt.geom.RectIterator
//$ extends java.awt.geom.PathIterator

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Rectangle2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class RectIterator : public ::java::awt::geom::PathIterator {
	$class(RectIterator, $NO_CLASS_INIT, ::java::awt::geom::PathIterator)
public:
	RectIterator();
	void init$(::java::awt::geom::Rectangle2D* r, ::java::awt::geom::AffineTransform* at);
	virtual int32_t currentSegment($floats* coords) override;
	virtual int32_t currentSegment($doubles* coords) override;
	virtual int32_t getWindingRule() override;
	virtual bool isDone() override;
	virtual void next() override;
	double x = 0.0;
	double y = 0.0;
	double w = 0.0;
	double h = 0.0;
	::java::awt::geom::AffineTransform* affine = nullptr;
	int32_t index = 0;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_RectIterator_h_