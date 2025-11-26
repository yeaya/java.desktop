#ifndef _sun_awt_geom_AreaOp_h_
#define _sun_awt_geom_AreaOp_h_
//$ class sun.awt.geom.AreaOp
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CTAG_LEFT")
#undef CTAG_LEFT
#pragma push_macro("CTAG_RIGHT")
#undef CTAG_RIGHT
#pragma push_macro("ETAG_ENTER")
#undef ETAG_ENTER
#pragma push_macro("ETAG_EXIT")
#undef ETAG_EXIT
#pragma push_macro("ETAG_IGNORE")
#undef ETAG_IGNORE
#pragma push_macro("RSTAG_INSIDE")
#undef RSTAG_INSIDE
#pragma push_macro("RSTAG_OUTSIDE")
#undef RSTAG_OUTSIDE

namespace java {
	namespace util {
		class Comparator;
		class Vector;
	}
}
namespace sun {
	namespace awt {
		namespace geom {
			class ChainEnd;
			class CurveLink;
			class Edge;
		}
	}
}

namespace sun {
	namespace awt {
		namespace geom {

class AreaOp : public ::java::lang::Object {
	$class(AreaOp, 0, ::java::lang::Object)
public:
	AreaOp();
	void init$();
	static void addEdges(::java::util::Vector* edges, ::java::util::Vector* curves, int32_t curvetag);
	virtual ::java::util::Vector* calculate(::java::util::Vector* left, ::java::util::Vector* right);
	virtual int32_t classify(::sun::awt::geom::Edge* e) {return 0;}
	static void finalizeSubCurves(::java::util::Vector* subcurves, ::java::util::Vector* chains);
	virtual int32_t getState() {return 0;}
	virtual void newRow() {}
	static bool obstructs(double v1, double v2, int32_t phase);
	::java::util::Vector* pruneEdges(::java::util::Vector* edges);
	static void resolveLinks(::java::util::Vector* subcurves, ::java::util::Vector* chains, ::java::util::Vector* links);
	static const int32_t CTAG_LEFT = 0;
	static const int32_t CTAG_RIGHT = 1;
	static const int32_t ETAG_IGNORE = 0;
	static const int32_t ETAG_ENTER = 1;
	static const int32_t ETAG_EXIT = (-1);
	static const int32_t RSTAG_INSIDE = 1;
	static const int32_t RSTAG_OUTSIDE = (-1);
	static ::java::util::Comparator* YXTopComparator;
	static $Array<::sun::awt::geom::CurveLink>* EmptyLinkList;
	static $Array<::sun::awt::geom::ChainEnd>* EmptyChainList;
};

		} // geom
	} // awt
} // sun

#pragma pop_macro("CTAG_LEFT")
#pragma pop_macro("CTAG_RIGHT")
#pragma pop_macro("ETAG_ENTER")
#pragma pop_macro("ETAG_EXIT")
#pragma pop_macro("ETAG_IGNORE")
#pragma pop_macro("RSTAG_INSIDE")
#pragma pop_macro("RSTAG_OUTSIDE")

#endif // _sun_awt_geom_AreaOp_h_