#ifndef _java_awt_geom_Path2D$Float$CopyIterator_h_
#define _java_awt_geom_Path2D$Float$CopyIterator_h_
//$ class java.awt.geom.Path2D$Float$CopyIterator
//$ extends java.awt.geom.Path2D$Iterator

#include <java/awt/geom/Path2D$Iterator.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class Path2D$Float;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class $import Path2D$Float$CopyIterator : public ::java::awt::geom::Path2D$Iterator {
	$class(Path2D$Float$CopyIterator, $NO_CLASS_INIT, ::java::awt::geom::Path2D$Iterator)
public:
	Path2D$Float$CopyIterator();
	void init$(::java::awt::geom::Path2D$Float* p2df);
	virtual int32_t currentSegment($floats* coords) override;
	virtual int32_t currentSegment($doubles* coords) override;
	$floats* floatCoords = nullptr;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Path2D$Float$CopyIterator_h_