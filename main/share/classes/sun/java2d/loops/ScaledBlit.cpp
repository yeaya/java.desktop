#include <sun/java2d/loops/ScaledBlit.h>

#include <java/awt/Composite.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/RenderCache.h>
#include <sun/java2d/loops/ScaledBlit$TraceScaledBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $RenderCache = ::sun::java2d::loops::RenderCache;
using $ScaledBlit$TraceScaledBlit = ::sun::java2d::loops::ScaledBlit$TraceScaledBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _ScaledBlit_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScaledBlit, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScaledBlit, primTypeID)},
	{"blitcache", "Lsun/java2d/loops/RenderCache;", nullptr, $PRIVATE | $STATIC, $staticField(ScaledBlit, blitcache)},
	{}
};

$MethodInfo _ScaledBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(ScaledBlit::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&ScaledBlit::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(ScaledBlit::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&ScaledBlit::init$))},
	{"Scale", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIDDDD)V", nullptr, $PUBLIC | $NATIVE},
	{"getFromCache", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/ScaledBlit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ScaledBlit*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&ScaledBlit::getFromCache))},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/ScaledBlit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ScaledBlit*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&ScaledBlit::locate))},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_Scale 2

$InnerClassInfo _ScaledBlit_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ScaledBlit$TraceScaledBlit", "sun.java2d.loops.ScaledBlit", "TraceScaledBlit", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ScaledBlit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.ScaledBlit",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_ScaledBlit_FieldInfo_,
	_ScaledBlit_MethodInfo_,
	nullptr,
	nullptr,
	_ScaledBlit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.ScaledBlit$TraceScaledBlit"
};

$Object* allocate$ScaledBlit($Class* clazz) {
	return $of($alloc(ScaledBlit));
}

$String* ScaledBlit::methodSignature = nullptr;
int32_t ScaledBlit::primTypeID = 0;
$RenderCache* ScaledBlit::blitcache = nullptr;

ScaledBlit* ScaledBlit::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(ScaledBlit);
	return $cast(ScaledBlit, $GraphicsPrimitiveMgr::locate(ScaledBlit::primTypeID, srctype, comptype, dsttype));
}

ScaledBlit* ScaledBlit::getFromCache($SurfaceType* src, $CompositeType* comp, $SurfaceType* dst) {
	$init(ScaledBlit);
	$useLocalCurrentObjectStackCache();
	$var($Object, o, $nc(ScaledBlit::blitcache)->get(src, comp, dst));
	if (o != nullptr) {
		return $cast(ScaledBlit, o);
	}
	$var(ScaledBlit, blit, locate(src, comp, dst));
	if (blit == nullptr) {
	} else {
		$nc(ScaledBlit::blitcache)->put(src, comp, dst, blit);
	}
	return blit;
}

void ScaledBlit::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(ScaledBlit::methodSignature, ScaledBlit::primTypeID, srctype, comptype, dsttype);
}

void ScaledBlit::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, ScaledBlit::methodSignature, ScaledBlit::primTypeID, srctype, comptype, dsttype);
}

void ScaledBlit::Scale($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2) {
	$prepareNative(ScaledBlit, Scale, void, $SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, double dx1, double dy1, double dx2, double dy2);
	$invokeNative(src, dst, comp, clip, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2);
	$finishNative();
}

$GraphicsPrimitive* ScaledBlit::traceWrap() {
	return $new($ScaledBlit$TraceScaledBlit, this);
}

void clinit$ScaledBlit($Class* class$) {
	$assignStatic(ScaledBlit::methodSignature, "ScaledBlit(...)"_s->toString());
	ScaledBlit::primTypeID = $GraphicsPrimitive::makePrimTypeID();
	$assignStatic(ScaledBlit::blitcache, $new($RenderCache, 20));
}

ScaledBlit::ScaledBlit() {
}

$Class* ScaledBlit::load$($String* name, bool initialize) {
	$loadClass(ScaledBlit, name, initialize, &_ScaledBlit_ClassInfo_, clinit$ScaledBlit, allocate$ScaledBlit);
	return class$;
}

$Class* ScaledBlit::class$ = nullptr;

		} // loops
	} // java2d
} // sun