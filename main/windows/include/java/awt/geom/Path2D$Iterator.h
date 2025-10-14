#ifndef _java_awt_geom_Path2D$Iterator_h_
#define _java_awt_geom_Path2D$Iterator_h_
//$ class java.awt.geom.Path2D$Iterator
//$ extends java.awt.geom.PathIterator

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class Path2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class $import Path2D$Iterator : public ::java::awt::geom::PathIterator {
	$class(Path2D$Iterator, 0, ::java::awt::geom::PathIterator)
public:
	Path2D$Iterator();
	void init$(::java::awt::geom::Path2D* path);
	virtual int32_t getWindingRule() override;
	virtual bool isDone() override;
	virtual void next() override;
	int32_t typeIdx = 0;
	int32_t pointIdx = 0;
	::java::awt::geom::Path2D* path = nullptr;
	static $ints* curvecoords;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Path2D$Iterator_h_