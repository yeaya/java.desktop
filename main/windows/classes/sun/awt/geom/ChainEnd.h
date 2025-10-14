#ifndef _sun_awt_geom_ChainEnd_h_
#define _sun_awt_geom_ChainEnd_h_
//$ class sun.awt.geom.ChainEnd
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace geom {
			class CurveLink;
		}
	}
}

namespace sun {
	namespace awt {
		namespace geom {

class ChainEnd : public ::java::lang::Object {
	$class(ChainEnd, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ChainEnd();
	void init$(::sun::awt::geom::CurveLink* first, ::sun::awt::geom::ChainEnd* partner);
	void addLink(::sun::awt::geom::CurveLink* newlink);
	::sun::awt::geom::CurveLink* getChain();
	::sun::awt::geom::ChainEnd* getPartner();
	double getX();
	::sun::awt::geom::CurveLink* linkTo(::sun::awt::geom::ChainEnd* that);
	void setOtherEnd(::sun::awt::geom::ChainEnd* partner);
	::sun::awt::geom::CurveLink* head = nullptr;
	::sun::awt::geom::CurveLink* tail = nullptr;
	::sun::awt::geom::ChainEnd* partner = nullptr;
	int32_t etag = 0;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_ChainEnd_h_