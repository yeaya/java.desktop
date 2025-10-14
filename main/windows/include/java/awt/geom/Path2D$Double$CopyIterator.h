#ifndef _java_awt_geom_Path2D$Double$CopyIterator_h_
#define _java_awt_geom_Path2D$Double$CopyIterator_h_
//$ class java.awt.geom.Path2D$Double$CopyIterator
//$ extends java.awt.geom.Path2D$Iterator

#include <java/awt/geom/Path2D$Iterator.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class Path2D$Double;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class $import Path2D$Double$CopyIterator : public ::java::awt::geom::Path2D$Iterator {
	$class(Path2D$Double$CopyIterator, $NO_CLASS_INIT, ::java::awt::geom::Path2D$Iterator)
public:
	Path2D$Double$CopyIterator();
	void init$(::java::awt::geom::Path2D$Double* p2dd);
	virtual int32_t currentSegment($floats* coords) override;
	virtual int32_t currentSegment($doubles* coords) override;
	$doubles* doubleCoords = nullptr;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Path2D$Double$CopyIterator_h_