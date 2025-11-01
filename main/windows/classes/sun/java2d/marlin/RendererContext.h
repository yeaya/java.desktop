#ifndef _sun_java2d_marlin_RendererContext_h_
#define _sun_java2d_marlin_RendererContext_h_
//$ class sun.java2d.marlin.RendererContext
//$ extends sun.java2d.ReentrantContext
//$ implements sun.java2d.marlin.MarlinConst

#include <java/lang/Array.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/marlin/MarlinConst.h>

#pragma push_macro("CTX_COUNT")
#undef CTX_COUNT

namespace java {
	namespace awt {
		namespace geom {
			class Path2D$Double;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}
namespace sun {
	namespace java2d {
		namespace marlin {
			class ByteArrayCache;
			class ByteArrayCache$Reference;
			class CollinearSimplifier;
			class Curve;
			class DMarlinRenderingEngine$NormalizingPathIterator;
			class Dasher;
			class DoubleArrayCache;
			class DoubleArrayCache$Reference;
			class IntArrayCache;
			class IntArrayCache$Reference;
			class MarlinCache;
			class MarlinTileGenerator;
			class OffHeapArray;
			class PathSimplifier;
			class Renderer;
			class RendererContext$PathConsumer2DAdapter;
			class RendererStats;
			class Stroker;
			class TransformingPathConsumer2D;
			class TransformingPathConsumer2D$CurveBasicMonotonizer;
			class TransformingPathConsumer2D$CurveClipSplitter;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class RendererContext : public ::sun::java2d::ReentrantContext, public ::sun::java2d::marlin::MarlinConst {
	$class(RendererContext, 0, ::sun::java2d::ReentrantContext, ::sun::java2d::marlin::MarlinConst)
public:
	RendererContext();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name);
	static ::sun::java2d::marlin::RendererContext* createContext();
	void dispose();
	::java::awt::geom::Path2D$Double* getPath2D();
	::sun::java2d::marlin::IntArrayCache$Reference* newCleanIntArrayRef(int32_t initialSize);
	::sun::java2d::marlin::ByteArrayCache$Reference* newDirtyByteArrayRef(int32_t initialSize);
	::sun::java2d::marlin::DoubleArrayCache$Reference* newDirtyDoubleArrayRef(int32_t initialSize);
	::sun::java2d::marlin::IntArrayCache$Reference* newDirtyIntArrayRef(int32_t initialSize);
	::sun::java2d::marlin::OffHeapArray* newOffHeapArray(int64_t initialSize);
	::sun::java2d::marlin::RendererStats* stats();
	virtual $String* toString() override;
	static ::java::util::concurrent::atomic::AtomicInteger* CTX_COUNT;
	$Object* cleanerObj = nullptr;
	bool dirty = false;
	$doubles* double6 = nullptr;
	::sun::java2d::marlin::Curve* curve = nullptr;
	::sun::java2d::marlin::DMarlinRenderingEngine$NormalizingPathIterator* nPCPathIterator = nullptr;
	::sun::java2d::marlin::DMarlinRenderingEngine$NormalizingPathIterator* nPQPathIterator = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D* transformerPC2D = nullptr;
	::java::lang::ref::WeakReference* refPath2D = nullptr;
	::sun::java2d::marlin::Renderer* renderer = nullptr;
	::sun::java2d::marlin::Stroker* stroker = nullptr;
	::sun::java2d::marlin::CollinearSimplifier* simplifier = nullptr;
	::sun::java2d::marlin::PathSimplifier* pathSimplifier = nullptr;
	::sun::java2d::marlin::Dasher* dasher = nullptr;
	::sun::java2d::marlin::MarlinTileGenerator* ptg = nullptr;
	::sun::java2d::marlin::MarlinCache* cache = nullptr;
	int32_t stroking = 0;
	bool doClip = false;
	bool closedPath = false;
	$doubles* clipRect = nullptr;
	double clipInvScale = 0.0;
	::sun::java2d::marlin::TransformingPathConsumer2D$CurveBasicMonotonizer* monotonizer = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$CurveClipSplitter* curveClipSplitter = nullptr;
	::sun::java2d::marlin::IntArrayCache* cleanIntCache = nullptr;
	::sun::java2d::marlin::IntArrayCache* dirtyIntCache = nullptr;
	::sun::java2d::marlin::DoubleArrayCache* dirtyDoubleCache = nullptr;
	::sun::java2d::marlin::ByteArrayCache* dirtyByteCache = nullptr;
	::sun::java2d::marlin::RendererStats* stats$ = nullptr;
	::sun::java2d::marlin::RendererContext$PathConsumer2DAdapter* p2dAdapter = nullptr;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("CTX_COUNT")

#endif // _sun_java2d_marlin_RendererContext_h_