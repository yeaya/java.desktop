#ifndef _java_awt_geom_EllipseIterator_h_
#define _java_awt_geom_EllipseIterator_h_
//$ class java.awt.geom.EllipseIterator
//$ extends java.awt.geom.PathIterator

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Ellipse2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class EllipseIterator : public ::java::awt::geom::PathIterator {
	$class(EllipseIterator, 0, ::java::awt::geom::PathIterator)
public:
	EllipseIterator();
	void init$(::java::awt::geom::Ellipse2D* e, ::java::awt::geom::AffineTransform* at);
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
	static double CtrlVal;
	static double pcv;
	static double ncv;
	static $Array<double, 2>* ctrlpts;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_EllipseIterator_h_