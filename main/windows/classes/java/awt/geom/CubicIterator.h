#ifndef _java_awt_geom_CubicIterator_h_
#define _java_awt_geom_CubicIterator_h_
//$ class java.awt.geom.CubicIterator
//$ extends java.awt.geom.PathIterator

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class CubicCurve2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class CubicIterator : public ::java::awt::geom::PathIterator {
	$class(CubicIterator, $NO_CLASS_INIT, ::java::awt::geom::PathIterator)
public:
	CubicIterator();
	void init$(::java::awt::geom::CubicCurve2D* q, ::java::awt::geom::AffineTransform* at);
	virtual int32_t currentSegment($floats* coords) override;
	virtual int32_t currentSegment($doubles* coords) override;
	virtual int32_t getWindingRule() override;
	virtual bool isDone() override;
	virtual void next() override;
	::java::awt::geom::CubicCurve2D* cubic = nullptr;
	::java::awt::geom::AffineTransform* affine = nullptr;
	int32_t index = 0;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_CubicIterator_h_