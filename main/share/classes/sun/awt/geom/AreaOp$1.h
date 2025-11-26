#ifndef _sun_awt_geom_AreaOp$1_h_
#define _sun_awt_geom_AreaOp$1_h_
//$ class sun.awt.geom.AreaOp$1
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace sun {
	namespace awt {
		namespace geom {
			class Edge;
		}
	}
}

namespace sun {
	namespace awt {
		namespace geom {

class AreaOp$1 : public ::java::util::Comparator {
	$class(AreaOp$1, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	AreaOp$1();
	void init$();
	virtual int32_t compare(::sun::awt::geom::Edge* o1, ::sun::awt::geom::Edge* o2);
	virtual int32_t compare(Object$* o1, Object$* o2) override;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_AreaOp$1_h_