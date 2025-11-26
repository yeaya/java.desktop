#ifndef _sun_awt_geom_Edge_h_
#define _sun_awt_geom_Edge_h_
//$ class sun.awt.geom.Edge
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GROW_PARTS")
#undef GROW_PARTS
#pragma push_macro("INIT_PARTS")
#undef INIT_PARTS

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

class Edge : public ::java::lang::Object {
	$class(Edge, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Edge();
	void init$(::sun::awt::geom::Curve* c, int32_t ctag);
	void init$(::sun::awt::geom::Curve* c, int32_t ctag, int32_t etag);
	int32_t compareTo(::sun::awt::geom::Edge* other, $doubles* yrange);
	::sun::awt::geom::Curve* getCurve();
	int32_t getCurveTag();
	int32_t getEdgeTag();
	int32_t getEquivalence();
	bool isActiveFor(double y, int32_t etag);
	void record(double yend, int32_t etag);
	void setEdgeTag(int32_t etag);
	void setEquivalence(int32_t eq);
	virtual $String* toString() override;
	static const int32_t INIT_PARTS = 4;
	static const int32_t GROW_PARTS = 10;
	::sun::awt::geom::Curve* curve = nullptr;
	int32_t ctag = 0;
	int32_t etag = 0;
	double activey = 0.0;
	int32_t equivalence = 0;
	::sun::awt::geom::Edge* lastEdge = nullptr;
	int32_t lastResult = 0;
	double lastLimit = 0.0;
};

		} // geom
	} // awt
} // sun

#pragma pop_macro("GROW_PARTS")
#pragma pop_macro("INIT_PARTS")

#endif // _sun_awt_geom_Edge_h_