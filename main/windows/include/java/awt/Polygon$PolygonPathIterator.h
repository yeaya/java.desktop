#ifndef _java_awt_Polygon$PolygonPathIterator_h_
#define _java_awt_Polygon$PolygonPathIterator_h_
//$ class java.awt.Polygon$PolygonPathIterator
//$ extends java.awt.geom.PathIterator

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Polygon;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}

namespace java {
	namespace awt {

class $import Polygon$PolygonPathIterator : public ::java::awt::geom::PathIterator {
	$class(Polygon$PolygonPathIterator, $NO_CLASS_INIT, ::java::awt::geom::PathIterator)
public:
	Polygon$PolygonPathIterator();
	void init$(::java::awt::Polygon* this$0, ::java::awt::Polygon* pg, ::java::awt::geom::AffineTransform* at);
	virtual int32_t currentSegment($floats* coords) override;
	virtual int32_t currentSegment($doubles* coords) override;
	virtual int32_t getWindingRule() override;
	virtual bool isDone() override;
	virtual void next() override;
	::java::awt::Polygon* this$0 = nullptr;
	::java::awt::Polygon* poly = nullptr;
	::java::awt::geom::AffineTransform* transform = nullptr;
	int32_t index = 0;
};

	} // awt
} // java

#endif // _java_awt_Polygon$PolygonPathIterator_h_