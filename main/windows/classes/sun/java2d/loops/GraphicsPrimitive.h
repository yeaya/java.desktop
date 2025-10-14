#ifndef _sun_java2d_loops_GraphicsPrimitive_h_
#define _sun_java2d_loops_GraphicsPrimitive_h_
//$ class sun.java2d.loops.GraphicsPrimitive
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TRACECOUNTS")
#undef TRACECOUNTS
#pragma push_macro("TRACELOG")
#undef TRACELOG
#pragma push_macro("TRACETIMESTAMP")
#undef TRACETIMESTAMP

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class Blit;
			class CompositeType;
			class GraphicsPrimitive$GeneralBinaryOp;
			class GraphicsPrimitive$GeneralUnaryOp;
			class SurfaceType;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class GraphicsPrimitive : public ::java::lang::Object {
	$class(GraphicsPrimitive, 0, ::java::lang::Object)
public:
	GraphicsPrimitive();
	void init$($String* methodSignature, int32_t primTypeID, ::sun::java2d::loops::SurfaceType* sourceType, ::sun::java2d::loops::CompositeType* compositeType, ::sun::java2d::loops::SurfaceType* destType);
	void init$(int64_t pNativePrim, $String* methodSignature, int32_t primTypeID, ::sun::java2d::loops::SurfaceType* sourceType, ::sun::java2d::loops::CompositeType* compositeType, ::sun::java2d::loops::SurfaceType* destType);
	static ::sun::java2d::SurfaceData* convertFrom(::sun::java2d::loops::Blit* ob, ::sun::java2d::SurfaceData* srcData, int32_t srcX, int32_t srcY, int32_t w, int32_t h, ::sun::java2d::SurfaceData* dstData);
	static ::sun::java2d::SurfaceData* convertFrom(::sun::java2d::loops::Blit* ob, ::sun::java2d::SurfaceData* srcData, int32_t srcX, int32_t srcY, int32_t w, int32_t h, ::sun::java2d::SurfaceData* dstData, int32_t type);
	static void convertTo(::sun::java2d::loops::Blit* ob, ::sun::java2d::SurfaceData* srcImg, ::sun::java2d::SurfaceData* dstImg, ::sun::java2d::pipe::Region* clip, int32_t dstX, int32_t dstY, int32_t w, int32_t h);
	static ::sun::java2d::loops::Blit* createConverter(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::SurfaceType* dsttype);
	::sun::java2d::loops::CompositeType* getCompositeType();
	::sun::java2d::loops::SurfaceType* getDestType();
	static ::sun::java2d::loops::GraphicsPrimitive* getGeneralOp(int32_t primID, ::sun::java2d::loops::CompositeType* comptype);
	int64_t getNativePrim();
	int32_t getPrimTypeID();
	$String* getSignature();
	::sun::java2d::loops::SurfaceType* getSourceType();
	static ::java::io::PrintStream* getTraceOutputFile();
	int32_t getUniqueID();
	static int32_t makePrimTypeID();
	virtual ::sun::java2d::loops::GraphicsPrimitive* makePrimitive(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	static int32_t makeUniqueID(int32_t primTypeID, ::sun::java2d::loops::SurfaceType* src, ::sun::java2d::loops::CompositeType* cmp, ::sun::java2d::loops::SurfaceType* dst);
	bool satisfies($String* signature, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	bool satisfiesSameAs(::sun::java2d::loops::GraphicsPrimitive* other);
	virtual void setupGeneralBinaryOp(::sun::java2d::loops::GraphicsPrimitive$GeneralBinaryOp* gbo);
	virtual void setupGeneralUnaryOp(::sun::java2d::loops::GraphicsPrimitive$GeneralUnaryOp* guo);
	static $String* simplename($Array<::java::lang::reflect::Field>* fields, Object$* o);
	static $String* simplename(::sun::java2d::loops::SurfaceType* st);
	static $String* simplename(::sun::java2d::loops::CompositeType* ct);
	virtual $String* toString() override;
	static void tracePrimitive(Object$* prim);
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() {return nullptr;}
	static bool tracingEnabled();
	$String* methodSignature = nullptr;
	int32_t uniqueID = 0;
	static int32_t unusedPrimID;
	::sun::java2d::loops::SurfaceType* sourceType = nullptr;
	::sun::java2d::loops::CompositeType* compositeType = nullptr;
	::sun::java2d::loops::SurfaceType* destType = nullptr;
	int64_t pNativePrim = 0;
	static ::java::util::HashMap* traceMap;
	static int32_t traceflags;
	static $String* tracefile;
	static ::java::io::PrintStream* traceout;
	static const int32_t TRACELOG = 1;
	static const int32_t TRACETIMESTAMP = 2;
	static const int32_t TRACECOUNTS = 4;
	$String* cachedname = nullptr;
};

		} // loops
	} // java2d
} // sun

#pragma pop_macro("TRACECOUNTS")
#pragma pop_macro("TRACELOG")
#pragma pop_macro("TRACETIMESTAMP")

#endif // _sun_java2d_loops_GraphicsPrimitive_h_