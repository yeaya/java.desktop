#ifndef _sun_awt_geom_CurveLink_h_
#define _sun_awt_geom_CurveLink_h_
//$ class sun.awt.geom.CurveLink
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace geom {
			class Curve;
		}
	}
}

namespace sun {
	namespace awt {
		namespace geom {

class CurveLink : public ::java::lang::Object {
	$class(CurveLink, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CurveLink();
	void init$(::sun::awt::geom::Curve* curve, double ystart, double yend, int32_t etag);
	bool absorb(::sun::awt::geom::CurveLink* link);
	bool absorb(::sun::awt::geom::Curve* curve, double ystart, double yend, int32_t etag);
	::sun::awt::geom::Curve* getCurve();
	int32_t getEdgeTag();
	::sun::awt::geom::Curve* getMoveto();
	::sun::awt::geom::CurveLink* getNext();
	::sun::awt::geom::Curve* getSubCurve();
	double getX();
	double getXBot();
	double getXTop();
	double getYBot();
	double getYTop();
	bool isEmpty();
	void setNext(::sun::awt::geom::CurveLink* link);
	::sun::awt::geom::Curve* curve = nullptr;
	double ytop = 0.0;
	double ybot = 0.0;
	int32_t etag = 0;
	::sun::awt::geom::CurveLink* next = nullptr;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_CurveLink_h_