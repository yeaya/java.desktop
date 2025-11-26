#include <sun/java2d/loops/TransformBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/RenderCache.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit$TraceTransformBlit.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $RenderCache = ::sun::java2d::loops::RenderCache;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit$TraceTransformBlit = ::sun::java2d::loops::TransformBlit$TraceTransformBlit;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _TransformBlit_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformBlit, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformBlit, primTypeID)},
	{"blitcache", "Lsun/java2d/loops/RenderCache;", nullptr, $PRIVATE | $STATIC, $staticField(TransformBlit, blitcache)},
	{}
};

$MethodInfo _TransformBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(TransformBlit::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&TransformBlit::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(TransformBlit::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&TransformBlit::init$))},
	{"Transform", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIII)V", nullptr, $PUBLIC | $NATIVE},
	{"getFromCache", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/TransformBlit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TransformBlit*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&TransformBlit::getFromCache))},
	{"locate", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/TransformBlit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TransformBlit*(*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&TransformBlit::locate))},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_Transform 2

$InnerClassInfo _TransformBlit_InnerClassesInfo_[] = {
	{"sun.java2d.loops.TransformBlit$TraceTransformBlit", "sun.java2d.loops.TransformBlit", "TraceTransformBlit", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransformBlit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.TransformBlit",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_TransformBlit_FieldInfo_,
	_TransformBlit_MethodInfo_,
	nullptr,
	nullptr,
	_TransformBlit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.TransformBlit$TraceTransformBlit"
};

$Object* allocate$TransformBlit($Class* clazz) {
	return $of($alloc(TransformBlit));
}

$String* TransformBlit::methodSignature = nullptr;
int32_t TransformBlit::primTypeID = 0;
$RenderCache* TransformBlit::blitcache = nullptr;

TransformBlit* TransformBlit::locate($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$init(TransformBlit);
	return $cast(TransformBlit, $GraphicsPrimitiveMgr::locate(TransformBlit::primTypeID, srctype, comptype, dsttype));
}

TransformBlit* TransformBlit::getFromCache($SurfaceType* src, $CompositeType* comp, $SurfaceType* dst) {
	$init(TransformBlit);
	$useLocalCurrentObjectStackCache();
	$var($Object, o, $nc(TransformBlit::blitcache)->get(src, comp, dst));
	if (o != nullptr) {
		return $cast(TransformBlit, o);
	}
	$var(TransformBlit, blit, locate(src, comp, dst));
	if (blit == nullptr) {
	} else {
		$nc(TransformBlit::blitcache)->put(src, comp, dst, blit);
	}
	return blit;
}

void TransformBlit::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(TransformBlit::methodSignature, TransformBlit::primTypeID, srctype, comptype, dsttype);
}

void TransformBlit::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, TransformBlit::methodSignature, TransformBlit::primTypeID, srctype, comptype, dsttype);
}

void TransformBlit::Transform($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* at, int32_t hint, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	$prepareNative(TransformBlit, Transform, void, $SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* at, int32_t hint, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height);
	$invokeNative(TransformBlit, Transform, src, dst, comp, clip, at, hint, srcx, srcy, dstx, dsty, width, height);
	$finishNative();
}

$GraphicsPrimitive* TransformBlit::traceWrap() {
	return $new($TransformBlit$TraceTransformBlit, this);
}

void clinit$TransformBlit($Class* class$) {
	$assignStatic(TransformBlit::methodSignature, "TransformBlit(...)"_s->toString());
	TransformBlit::primTypeID = $GraphicsPrimitive::makePrimTypeID();
	$assignStatic(TransformBlit::blitcache, $new($RenderCache, 10));
}

TransformBlit::TransformBlit() {
}

$Class* TransformBlit::load$($String* name, bool initialize) {
	$loadClass(TransformBlit, name, initialize, &_TransformBlit_ClassInfo_, clinit$TransformBlit, allocate$TransformBlit);
	return class$;
}

$Class* TransformBlit::class$ = nullptr;

		} // loops
	} // java2d
} // sun