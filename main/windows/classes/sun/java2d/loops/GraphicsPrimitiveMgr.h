#ifndef _sun_java2d_loops_GraphicsPrimitiveMgr_h_
#define _sun_java2d_loops_GraphicsPrimitiveMgr_h_
//$ class sun.java2d.loops.GraphicsPrimitiveMgr
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AT")
#undef AT
#pragma push_macro("CT")
#undef CT
#pragma push_macro("GP")
#undef GP
#pragma push_macro("SG2D")
#undef SG2D
#pragma push_macro("ST")
#undef ST

namespace java {
	namespace util {
		class Comparator;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class CompositeType;
			class GraphicsPrimitive;
			class GraphicsPrimitiveMgr$PrimitiveSpec;
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class $export GraphicsPrimitiveMgr : public ::java::lang::Object {
	$class(GraphicsPrimitiveMgr, 0, ::java::lang::Object)
public:
	GraphicsPrimitiveMgr();
	void init$();
	static void initIDs($Class* GP, $Class* ST, $Class* CT, $Class* SG2D, $Class* Color, $Class* AT, $Class* XORComp, $Class* AlphaComp, $Class* Path2D, $Class* Path2DFloat, $Class* SHints);
	static ::sun::java2d::loops::GraphicsPrimitive* locate(int32_t primTypeID, ::sun::java2d::loops::SurfaceType* dsttype);
	static ::sun::java2d::loops::GraphicsPrimitive* locate(int32_t primTypeID, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	static ::sun::java2d::loops::GraphicsPrimitive* locate(::sun::java2d::loops::GraphicsPrimitiveMgr$PrimitiveSpec* spec);
	static ::sun::java2d::loops::GraphicsPrimitive* locateGeneral(int32_t primTypeID);
	static ::sun::java2d::loops::GraphicsPrimitive* locatePrim(int32_t primTypeID, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	static void main($StringArray* argv);
	static void register$($Array<::sun::java2d::loops::GraphicsPrimitive>* newPrimitives);
	static void registerGeneral(::sun::java2d::loops::GraphicsPrimitive* gen);
	static void registerNativeLoops();
	static void testPrimitiveInstantiation();
	static void testPrimitiveInstantiation(bool verbose);
	static void writeLog($String* str);
	static const bool debugTrace = false;
	static $Array<::sun::java2d::loops::GraphicsPrimitive>* primitives;
	static $Array<::sun::java2d::loops::GraphicsPrimitive>* generalPrimitives;
	static bool needssort;
	static ::java::util::Comparator* primSorter;
	static ::java::util::Comparator* primFinder;
};

		} // loops
	} // java2d
} // sun

#pragma pop_macro("AT")
#pragma pop_macro("CT")
#pragma pop_macro("GP")
#pragma pop_macro("SG2D")
#pragma pop_macro("ST")

#endif // _sun_java2d_loops_GraphicsPrimitiveMgr_h_