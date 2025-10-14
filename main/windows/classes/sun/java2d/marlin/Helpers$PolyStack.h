#ifndef _sun_java2d_marlin_Helpers$PolyStack_h_
#define _sun_java2d_marlin_Helpers$PolyStack_h_
//$ class sun.java2d.marlin.Helpers$PolyStack
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INITIAL_CURVES_COUNT")
#undef INITIAL_CURVES_COUNT
#pragma push_macro("INITIAL_TYPES_COUNT")
#undef INITIAL_TYPES_COUNT
#pragma push_macro("TYPE_CUBICTO")
#undef TYPE_CUBICTO
#pragma push_macro("TYPE_LINETO")
#undef TYPE_LINETO
#pragma push_macro("TYPE_QUADTO")
#undef TYPE_QUADTO

namespace sun {
	namespace java2d {
		namespace marlin {
			class ByteArrayCache$Reference;
			class DPathConsumer2D;
			class DoubleArrayCache$Reference;
			class RendererContext;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace marlin {
			namespace stats {
				class Histogram;
				class StatLong;
			}
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class Helpers$PolyStack : public ::java::lang::Object {
	$class(Helpers$PolyStack, 0, ::java::lang::Object)
public:
	Helpers$PolyStack();
	void init$(::sun::java2d::marlin::RendererContext* rdrCtx);
	void init$(::sun::java2d::marlin::RendererContext* rdrCtx, ::sun::java2d::marlin::stats::StatLong* stat_polystack_types, ::sun::java2d::marlin::stats::StatLong* stat_polystack_curves, ::sun::java2d::marlin::stats::Histogram* hist_polystack_curves, ::sun::java2d::marlin::stats::StatLong* stat_array_polystack_curves, ::sun::java2d::marlin::stats::StatLong* stat_array_polystack_curveTypes);
	void dispose();
	void ensureSpace(int32_t n);
	void popAll(::sun::java2d::marlin::DPathConsumer2D* io);
	void pullAll(::sun::java2d::marlin::DPathConsumer2D* io);
	void pushCubic(double x0, double y0, double x1, double y1, double x2, double y2);
	void pushLine(double x, double y);
	void pushQuad(double x0, double y0, double x1, double y1);
	virtual $String* toString() override;
	static const int8_t TYPE_LINETO = (int8_t)0;
	static const int8_t TYPE_QUADTO = (int8_t)1;
	static const int8_t TYPE_CUBICTO = (int8_t)2;
	static int32_t INITIAL_CURVES_COUNT;
	static int32_t INITIAL_TYPES_COUNT;
	$doubles* curves = nullptr;
	int32_t end = 0;
	$bytes* curveTypes = nullptr;
	int32_t numCurves = 0;
	::sun::java2d::marlin::DoubleArrayCache$Reference* curves_ref = nullptr;
	::sun::java2d::marlin::ByteArrayCache$Reference* curveTypes_ref = nullptr;
	int32_t curveTypesUseMark = 0;
	int32_t curvesUseMark = 0;
	::sun::java2d::marlin::stats::StatLong* stat_polystack_types = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_polystack_curves = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_polystack_curves = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_polystack_curves = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_polystack_curveTypes = nullptr;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("INITIAL_CURVES_COUNT")
#pragma pop_macro("INITIAL_TYPES_COUNT")
#pragma pop_macro("TYPE_CUBICTO")
#pragma pop_macro("TYPE_LINETO")
#pragma pop_macro("TYPE_QUADTO")

#endif // _sun_java2d_marlin_Helpers$PolyStack_h_