#ifndef _java_awt_geom_ArcIterator_h_
#define _java_awt_geom_ArcIterator_h_
//$ class java.awt.geom.ArcIterator
//$ extends java.awt.geom.PathIterator

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Arc2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class ArcIterator : public ::java::awt::geom::PathIterator {
	$class(ArcIterator, $NO_CLASS_INIT, ::java::awt::geom::PathIterator)
public:
	ArcIterator();
	void init$(::java::awt::geom::Arc2D* a, ::java::awt::geom::AffineTransform* at);
	static double btan(double increment);
	virtual int32_t currentSegment($floats* coords) override;
	virtual int32_t currentSegment($doubles* coords) override;
	virtual int32_t getWindingRule() override;
	virtual bool isDone() override;
	virtual void next() override;
	double x = 0.0;
	double y = 0.0;
	double w = 0.0;
	double h = 0.0;
	double angStRad = 0.0;
	double increment = 0.0;
	double cv = 0.0;
	::java::awt::geom::AffineTransform* affine = nullptr;
	int32_t index = 0;
	int32_t arcSegs = 0;
	int32_t lineSegs = 0;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_ArcIterator_h_