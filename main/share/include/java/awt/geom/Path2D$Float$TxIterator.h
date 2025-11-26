#ifndef _java_awt_geom_Path2D$Float$TxIterator_h_
#define _java_awt_geom_Path2D$Float$TxIterator_h_
//$ class java.awt.geom.Path2D$Float$TxIterator
//$ extends java.awt.geom.Path2D$Iterator

#include <java/awt/geom/Path2D$Iterator.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Path2D$Float;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class $import Path2D$Float$TxIterator : public ::java::awt::geom::Path2D$Iterator {
	$class(Path2D$Float$TxIterator, $NO_CLASS_INIT, ::java::awt::geom::Path2D$Iterator)
public:
	Path2D$Float$TxIterator();
	void init$(::java::awt::geom::Path2D$Float* p2df, ::java::awt::geom::AffineTransform* at);
	virtual int32_t currentSegment($floats* coords) override;
	virtual int32_t currentSegment($doubles* coords) override;
	$floats* floatCoords = nullptr;
	::java::awt::geom::AffineTransform* affine = nullptr;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Path2D$Float$TxIterator_h_