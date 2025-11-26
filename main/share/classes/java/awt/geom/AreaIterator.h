#ifndef _java_awt_geom_AreaIterator_h_
#define _java_awt_geom_AreaIterator_h_
//$ class java.awt.geom.AreaIterator
//$ extends java.awt.geom.PathIterator

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace sun {
	namespace awt {
		namespace geom {
			class Curve;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class AreaIterator : public ::java::awt::geom::PathIterator {
	$class(AreaIterator, $NO_CLASS_INIT, ::java::awt::geom::PathIterator)
public:
	AreaIterator();
	void init$(::java::util::Vector* curves, ::java::awt::geom::AffineTransform* at);
	virtual int32_t currentSegment($floats* coords) override;
	virtual int32_t currentSegment($doubles* coords) override;
	virtual int32_t getWindingRule() override;
	virtual bool isDone() override;
	virtual void next() override;
	::java::awt::geom::AffineTransform* transform = nullptr;
	::java::util::Vector* curves = nullptr;
	int32_t index = 0;
	::sun::awt::geom::Curve* prevcurve = nullptr;
	::sun::awt::geom::Curve* thiscurve = nullptr;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_AreaIterator_h_