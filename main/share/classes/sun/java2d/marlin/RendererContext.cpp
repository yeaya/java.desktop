#include <sun/java2d/marlin/RendererContext.h>

#include <java/awt/geom/Path2D$Double.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/marlin/ArrayCacheConst$CacheStats.h>
#include <sun/java2d/marlin/ByteArrayCache$Reference.h>
#include <sun/java2d/marlin/ByteArrayCache.h>
#include <sun/java2d/marlin/CollinearSimplifier.h>
#include <sun/java2d/marlin/Curve.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator.h>
#include <sun/java2d/marlin/Dasher.h>
#include <sun/java2d/marlin/DoubleArrayCache$Reference.h>
#include <sun/java2d/marlin/DoubleArrayCache.h>
#include <sun/java2d/marlin/IntArrayCache$Reference.h>
#include <sun/java2d/marlin/IntArrayCache.h>
#include <sun/java2d/marlin/MarlinCache.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinTileGenerator.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <sun/java2d/marlin/OffHeapArray.h>
#include <sun/java2d/marlin/PathSimplifier.h>
#include <sun/java2d/marlin/Renderer.h>
#include <sun/java2d/marlin/RendererContext$PathConsumer2DAdapter.h>
#include <sun/java2d/marlin/RendererStats.h>
#include <sun/java2d/marlin/Stroker.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$CurveBasicMonotonizer.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D$CurveClipSplitter.h>
#include <sun/java2d/marlin/TransformingPathConsumer2D.h>
#include <jcpp.h>

#undef CTX_COUNT
#undef DO_MONITORS
#undef DO_STATS
#undef INITIAL_EDGES_COUNT
#undef LOG_CREATE_CONTEXT
#undef WIND_NON_ZERO

using $ArrayCacheConst$CacheStatsArray = $Array<::sun::java2d::marlin::ArrayCacheConst$CacheStats>;
using $Path2D$Double = ::java::awt::geom::Path2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ByteArrayCache = ::sun::java2d::marlin::ByteArrayCache;
using $ByteArrayCache$Reference = ::sun::java2d::marlin::ByteArrayCache$Reference;
using $CollinearSimplifier = ::sun::java2d::marlin::CollinearSimplifier;
using $Curve = ::sun::java2d::marlin::Curve;
using $DMarlinRenderingEngine$NormalizingPathIterator = ::sun::java2d::marlin::DMarlinRenderingEngine$NormalizingPathIterator;
using $DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter = ::sun::java2d::marlin::DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter;
using $DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter = ::sun::java2d::marlin::DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter;
using $Dasher = ::sun::java2d::marlin::Dasher;
using $DoubleArrayCache = ::sun::java2d::marlin::DoubleArrayCache;
using $DoubleArrayCache$Reference = ::sun::java2d::marlin::DoubleArrayCache$Reference;
using $IntArrayCache = ::sun::java2d::marlin::IntArrayCache;
using $IntArrayCache$Reference = ::sun::java2d::marlin::IntArrayCache$Reference;
using $MarlinCache = ::sun::java2d::marlin::MarlinCache;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinTileGenerator = ::sun::java2d::marlin::MarlinTileGenerator;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;
using $OffHeapArray = ::sun::java2d::marlin::OffHeapArray;
using $PathSimplifier = ::sun::java2d::marlin::PathSimplifier;
using $Renderer = ::sun::java2d::marlin::Renderer;
using $RendererContext$PathConsumer2DAdapter = ::sun::java2d::marlin::RendererContext$PathConsumer2DAdapter;
using $RendererStats = ::sun::java2d::marlin::RendererStats;
using $Stroker = ::sun::java2d::marlin::Stroker;
using $TransformingPathConsumer2D = ::sun::java2d::marlin::TransformingPathConsumer2D;
using $TransformingPathConsumer2D$CurveBasicMonotonizer = ::sun::java2d::marlin::TransformingPathConsumer2D$CurveBasicMonotonizer;
using $TransformingPathConsumer2D$CurveClipSplitter = ::sun::java2d::marlin::TransformingPathConsumer2D$CurveClipSplitter;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _RendererContext_FieldInfo_[] = {
	{"CTX_COUNT", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RendererContext, CTX_COUNT)},
	{"cleanerObj", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(RendererContext, cleanerObj)},
	{"dirty", "Z", nullptr, 0, $field(RendererContext, dirty)},
	{"double6", "[D", nullptr, $FINAL, $field(RendererContext, double6)},
	{"curve", "Lsun/java2d/marlin/Curve;", nullptr, $FINAL, $field(RendererContext, curve)},
	{"nPCPathIterator", "Lsun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator;", nullptr, $FINAL, $field(RendererContext, nPCPathIterator)},
	{"nPQPathIterator", "Lsun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator;", nullptr, $FINAL, $field(RendererContext, nPQPathIterator)},
	{"transformerPC2D", "Lsun/java2d/marlin/TransformingPathConsumer2D;", nullptr, $FINAL, $field(RendererContext, transformerPC2D)},
	{"refPath2D", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/geom/Path2D$Double;>;", $PRIVATE, $field(RendererContext, refPath2D)},
	{"renderer", "Lsun/java2d/marlin/Renderer;", nullptr, $FINAL, $field(RendererContext, renderer)},
	{"stroker", "Lsun/java2d/marlin/Stroker;", nullptr, $FINAL, $field(RendererContext, stroker)},
	{"simplifier", "Lsun/java2d/marlin/CollinearSimplifier;", nullptr, $FINAL, $field(RendererContext, simplifier)},
	{"pathSimplifier", "Lsun/java2d/marlin/PathSimplifier;", nullptr, $FINAL, $field(RendererContext, pathSimplifier)},
	{"dasher", "Lsun/java2d/marlin/Dasher;", nullptr, $FINAL, $field(RendererContext, dasher)},
	{"ptg", "Lsun/java2d/marlin/MarlinTileGenerator;", nullptr, $FINAL, $field(RendererContext, ptg)},
	{"cache", "Lsun/java2d/marlin/MarlinCache;", nullptr, $FINAL, $field(RendererContext, cache)},
	{"stroking", "I", nullptr, 0, $field(RendererContext, stroking)},
	{"doClip", "Z", nullptr, 0, $field(RendererContext, doClip)},
	{"closedPath", "Z", nullptr, 0, $field(RendererContext, closedPath)},
	{"clipRect", "[D", nullptr, $FINAL, $field(RendererContext, clipRect)},
	{"clipInvScale", "D", nullptr, 0, $field(RendererContext, clipInvScale)},
	{"monotonizer", "Lsun/java2d/marlin/TransformingPathConsumer2D$CurveBasicMonotonizer;", nullptr, $FINAL, $field(RendererContext, monotonizer)},
	{"curveClipSplitter", "Lsun/java2d/marlin/TransformingPathConsumer2D$CurveClipSplitter;", nullptr, $FINAL, $field(RendererContext, curveClipSplitter)},
	{"cleanIntCache", "Lsun/java2d/marlin/IntArrayCache;", nullptr, $PRIVATE | $FINAL, $field(RendererContext, cleanIntCache)},
	{"dirtyIntCache", "Lsun/java2d/marlin/IntArrayCache;", nullptr, $PRIVATE | $FINAL, $field(RendererContext, dirtyIntCache)},
	{"dirtyDoubleCache", "Lsun/java2d/marlin/DoubleArrayCache;", nullptr, $PRIVATE | $FINAL, $field(RendererContext, dirtyDoubleCache)},
	{"dirtyByteCache", "Lsun/java2d/marlin/ByteArrayCache;", nullptr, $PRIVATE | $FINAL, $field(RendererContext, dirtyByteCache)},
	{"stats", "Lsun/java2d/marlin/RendererStats;", nullptr, $FINAL, $field(RendererContext, stats$)},
	{"p2dAdapter", "Lsun/java2d/marlin/RendererContext$PathConsumer2DAdapter;", nullptr, $FINAL, $field(RendererContext, p2dAdapter)},
	{}
};

$MethodInfo _RendererContext_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(RendererContext::*)($String*)>(&RendererContext::init$))},
	{"createContext", "()Lsun/java2d/marlin/RendererContext;", nullptr, $STATIC, $method(static_cast<RendererContext*(*)()>(&RendererContext::createContext))},
	{"dispose", "()V", nullptr, 0, $method(static_cast<void(RendererContext::*)()>(&RendererContext::dispose))},
	{"getPath2D", "()Ljava/awt/geom/Path2D$Double;", nullptr, 0, $method(static_cast<$Path2D$Double*(RendererContext::*)()>(&RendererContext::getPath2D))},
	{"newCleanIntArrayRef", "(I)Lsun/java2d/marlin/IntArrayCache$Reference;", nullptr, 0, $method(static_cast<$IntArrayCache$Reference*(RendererContext::*)(int32_t)>(&RendererContext::newCleanIntArrayRef))},
	{"newDirtyByteArrayRef", "(I)Lsun/java2d/marlin/ByteArrayCache$Reference;", nullptr, 0, $method(static_cast<$ByteArrayCache$Reference*(RendererContext::*)(int32_t)>(&RendererContext::newDirtyByteArrayRef))},
	{"newDirtyDoubleArrayRef", "(I)Lsun/java2d/marlin/DoubleArrayCache$Reference;", nullptr, 0, $method(static_cast<$DoubleArrayCache$Reference*(RendererContext::*)(int32_t)>(&RendererContext::newDirtyDoubleArrayRef))},
	{"newDirtyIntArrayRef", "(I)Lsun/java2d/marlin/IntArrayCache$Reference;", nullptr, 0, $method(static_cast<$IntArrayCache$Reference*(RendererContext::*)(int32_t)>(&RendererContext::newDirtyIntArrayRef))},
	{"newOffHeapArray", "(J)Lsun/java2d/marlin/OffHeapArray;", nullptr, 0, $method(static_cast<$OffHeapArray*(RendererContext::*)(int64_t)>(&RendererContext::newOffHeapArray))},
	{"stats", "()Lsun/java2d/marlin/RendererStats;", nullptr, 0, $method(static_cast<$RendererStats*(RendererContext::*)()>(&RendererContext::stats))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RendererContext_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.RendererContext$PathConsumer2DAdapter", "sun.java2d.marlin.RendererContext", "PathConsumer2DAdapter", $STATIC | $FINAL},
	{}
};

$ClassInfo _RendererContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.marlin.RendererContext",
	"sun.java2d.ReentrantContext",
	"sun.java2d.marlin.MarlinConst",
	_RendererContext_FieldInfo_,
	_RendererContext_MethodInfo_,
	nullptr,
	nullptr,
	_RendererContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.marlin.RendererContext$PathConsumer2DAdapter"
};

$Object* allocate$RendererContext($Class* clazz) {
	return $of($alloc(RendererContext));
}

int32_t RendererContext::hashCode() {
	 return this->$ReentrantContext::hashCode();
}

bool RendererContext::equals(Object$* arg0) {
	 return this->$ReentrantContext::equals(arg0);
}

$Object* RendererContext::clone() {
	 return this->$ReentrantContext::clone();
}

$String* RendererContext::toString() {
	 return this->$ReentrantContext::toString();
}

void RendererContext::finalize() {
	this->$ReentrantContext::finalize();
}

$AtomicInteger* RendererContext::CTX_COUNT = nullptr;

RendererContext* RendererContext::createContext() {
	$init(RendererContext);
	$useLocalCurrentObjectStackCache();
	return $new(RendererContext, $$str({"ctx"_s, $($Integer::toString($nc(RendererContext::CTX_COUNT)->getAndIncrement()))}));
}

void RendererContext::init$($String* name) {
	$ReentrantContext::init$();
	this->dirty = false;
	$set(this, double6, $new($doubles, 6));
	$set(this, curve, $new($Curve));
	$set(this, refPath2D, nullptr);
	$set(this, simplifier, $new($CollinearSimplifier));
	$set(this, pathSimplifier, $new($PathSimplifier));
	this->stroking = 0;
	this->doClip = false;
	this->closedPath = false;
	$set(this, clipRect, $new($doubles, 4));
	this->clipInvScale = 0.0;
	$set(this, cleanIntCache, $new($IntArrayCache, true, 5));
	$set(this, dirtyIntCache, $new($IntArrayCache, false, 5));
	$set(this, dirtyDoubleCache, $new($DoubleArrayCache, false, 4));
	$set(this, dirtyByteCache, $new($ByteArrayCache, false, 2));
	$set(this, p2dAdapter, $new($RendererContext$PathConsumer2DAdapter));
	$init($MarlinConst);
	if ($MarlinConst::LOG_CREATE_CONTEXT) {
		$MarlinUtils::logInfo($$str({"new RendererContext = "_s, name}));
	}
	$set(this, cleanerObj, $new($Object));
	if ($MarlinConst::DO_STATS || $MarlinConst::DO_MONITORS) {
		$set(this, stats$, $RendererStats::createInstance(this->cleanerObj, name));
		$set($nc(this->stats$), cacheStats, $new($ArrayCacheConst$CacheStatsArray, {
			$nc(this->cleanIntCache)->stats,
			$nc(this->dirtyIntCache)->stats,
			$nc(this->dirtyDoubleCache)->stats,
			$nc(this->dirtyByteCache)->stats
		}));
	} else {
		$set(this, stats$, nullptr);
	}
	$set(this, nPCPathIterator, $new($DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter, this->double6));
	$set(this, nPQPathIterator, $new($DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter, this->double6));
	$set(this, monotonizer, $new($TransformingPathConsumer2D$CurveBasicMonotonizer, this));
	$set(this, curveClipSplitter, $new($TransformingPathConsumer2D$CurveClipSplitter, this));
	$set(this, transformerPC2D, $new($TransformingPathConsumer2D, this));
	$set(this, cache, $new($MarlinCache, this));
	$set(this, renderer, $new($Renderer, this));
	$set(this, ptg, $new($MarlinTileGenerator, this->stats$, this->renderer, this->cache));
	$set(this, stroker, $new($Stroker, this));
	$set(this, dasher, $new($Dasher, this));
}

void RendererContext::dispose() {
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		if ($nc(this->stats$)->totalOffHeap > $nc(this->stats$)->totalOffHeapMax) {
			$nc(this->stats$)->totalOffHeapMax = $nc(this->stats$)->totalOffHeap;
		}
		$nc(this->stats$)->totalOffHeap = 0;
	}
	this->stroking = 0;
	this->doClip = false;
	this->closedPath = false;
	this->clipInvScale = 0.0;
	if (this->dirty) {
		$nc(this->nPCPathIterator)->dispose();
		$nc(this->nPQPathIterator)->dispose();
		$nc(this->dasher)->dispose();
		$nc(this->stroker)->dispose();
		this->dirty = false;
	}
}

$Path2D$Double* RendererContext::getPath2D() {
	$var($Path2D$Double, p2d, (this->refPath2D != nullptr) ? $cast($Path2D$Double, $nc(this->refPath2D)->get()) : ($Path2D$Double*)nullptr);
	if (p2d == nullptr) {
		$init($MarlinConst);
		$assign(p2d, $new($Path2D$Double, $MarlinConst::WIND_NON_ZERO, $MarlinConst::INITIAL_EDGES_COUNT));
		$set(this, refPath2D, $new($WeakReference, p2d));
	}
	$nc(p2d)->reset();
	return p2d;
}

$RendererStats* RendererContext::stats() {
	return this->stats$;
}

$OffHeapArray* RendererContext::newOffHeapArray(int64_t initialSize) {
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc(this->stats$)->totalOffHeapInitial += initialSize;
	}
	return $new($OffHeapArray, this->cleanerObj, initialSize);
}

$IntArrayCache$Reference* RendererContext::newCleanIntArrayRef(int32_t initialSize) {
	return $nc(this->cleanIntCache)->createRef(initialSize);
}

$IntArrayCache$Reference* RendererContext::newDirtyIntArrayRef(int32_t initialSize) {
	return $nc(this->dirtyIntCache)->createRef(initialSize);
}

$DoubleArrayCache$Reference* RendererContext::newDirtyDoubleArrayRef(int32_t initialSize) {
	return $nc(this->dirtyDoubleCache)->createRef(initialSize);
}

$ByteArrayCache$Reference* RendererContext::newDirtyByteArrayRef(int32_t initialSize) {
	return $nc(this->dirtyByteCache)->createRef(initialSize);
}

void clinit$RendererContext($Class* class$) {
	$assignStatic(RendererContext::CTX_COUNT, $new($AtomicInteger, 1));
}

RendererContext::RendererContext() {
}

$Class* RendererContext::load$($String* name, bool initialize) {
	$loadClass(RendererContext, name, initialize, &_RendererContext_ClassInfo_, clinit$RendererContext, allocate$RendererContext);
	return class$;
}

$Class* RendererContext::class$ = nullptr;

		} // marlin
	} // java2d
} // sun