#ifndef _java_awt_geom_GeneralPath_h_
#define _java_awt_geom_GeneralPath_h_
//$ class java.awt.geom.GeneralPath
//$ extends java.awt.geom.Path2D$Float

#include <java/awt/geom/Path2D$Float.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Shape;
	}
}

namespace java {
	namespace awt {
		namespace geom {

class $import GeneralPath : public ::java::awt::geom::Path2D$Float {
	$class(GeneralPath, $NO_CLASS_INIT, ::java::awt::geom::Path2D$Float)
public:
	GeneralPath();
	using ::java::awt::geom::Path2D$Float::append;
	using ::java::awt::geom::Path2D$Float::getPathIterator;
	void init$();
	void init$(int32_t rule);
	void init$(int32_t rule, int32_t initialCapacity);
	void init$(::java::awt::Shape* s);
	void init$(int32_t windingRule, $bytes* pointTypes, int32_t numTypes, $floats* pointCoords, int32_t numCoords);
	static const int64_t serialVersionUID = (int64_t)0x8C7035B43D543BFA;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_GeneralPath_h_