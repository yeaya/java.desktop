#ifndef _java_awt_geom_RoundRectIterator_h_
#define _java_awt_geom_RoundRectIterator_h_
//$ class java.awt.geom.RoundRectIterator
//$ extends java.awt.geom.PathIterator

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>
#include <java/lang/Math.h>

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class RoundRectangle2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class RoundRectIterator : public ::java::awt::geom::PathIterator {
	$class(RoundRectIterator, 0, ::java::awt::geom::PathIterator)
public:
	RoundRectIterator();
	void init$(::java::awt::geom::RoundRectangle2D* rr, ::java::awt::geom::AffineTransform* at);
	virtual int32_t currentSegment($floats* coords) override;
	virtual int32_t currentSegment($doubles* coords) override;
	virtual int32_t getWindingRule() override;
	virtual bool isDone() override;
	virtual void next() override;
	double x = 0.0;
	double y = 0.0;
	double w = 0.0;
	double h = 0.0;
	double aw = 0.0;
	double ah = 0.0;
	::java::awt::geom::AffineTransform* affine = nullptr;
	int32_t index = 0;
	static double angle;
	static double a;
	static double b;
	static double c;
	static double cv;
	static double acv;
	static $Array<double, 2>* ctrlpts;
	static $ints* types;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_RoundRectIterator_h_