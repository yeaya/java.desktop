#include <sun/java2d/loops/TransformHelper.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/MaskBlit.h>
#include <sun/java2d/loops/RenderCache.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformHelper$TraceTransformHelper.h>
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
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $RenderCache = ::sun::java2d::loops::RenderCache;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformHelper$TraceTransformHelper = ::sun::java2d::loops::TransformHelper$TraceTransformHelper;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _TransformHelper_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformHelper, methodSignature)},
	{"primTypeID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformHelper, primTypeID)},
	{"helpercache", "Lsun/java2d/loops/RenderCache;", nullptr, $PRIVATE | $STATIC, $staticField(TransformHelper, helpercache)},
	{}
};

$MethodInfo _TransformHelper_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(TransformHelper::*)($SurfaceType*)>(&TransformHelper::init$))},
	{"<init>", "(JLsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(TransformHelper::*)(int64_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&TransformHelper::init$))},
	{"Transform", "(Lsun/java2d/loops/MaskBlit;Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIIIII[III)V", nullptr, $PUBLIC | $NATIVE},
	{"getFromCache", "(Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/TransformHelper;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<TransformHelper*(*)($SurfaceType*)>(&TransformHelper::getFromCache))},
	{"locate", "(Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/TransformHelper;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TransformHelper*(*)($SurfaceType*)>(&TransformHelper::locate))},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_Transform 2

$InnerClassInfo _TransformHelper_InnerClassesInfo_[] = {
	{"sun.java2d.loops.TransformHelper$TraceTransformHelper", "sun.java2d.loops.TransformHelper", "TraceTransformHelper", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransformHelper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.TransformHelper",
	"sun.java2d.loops.GraphicsPrimitive",
	nullptr,
	_TransformHelper_FieldInfo_,
	_TransformHelper_MethodInfo_,
	nullptr,
	nullptr,
	_TransformHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.TransformHelper$TraceTransformHelper"
};

$Object* allocate$TransformHelper($Class* clazz) {
	return $of($alloc(TransformHelper));
}

$String* TransformHelper::methodSignature = nullptr;
int32_t TransformHelper::primTypeID = 0;
$RenderCache* TransformHelper::helpercache = nullptr;

TransformHelper* TransformHelper::locate($SurfaceType* srctype) {
	$init(TransformHelper);
	$init($CompositeType);
	$init($SurfaceType);
	return $cast(TransformHelper, $GraphicsPrimitiveMgr::locate(TransformHelper::primTypeID, srctype, $CompositeType::SrcNoEa, $SurfaceType::IntArgbPre));
}

TransformHelper* TransformHelper::getFromCache($SurfaceType* src) {
	$load(TransformHelper);
	$synchronized(class$) {
		$init(TransformHelper);
		$var($Object, o, $nc(TransformHelper::helpercache)->get(src, nullptr, nullptr));
		if (o != nullptr) {
			return $cast(TransformHelper, o);
		}
		$var(TransformHelper, helper, locate(src));
		if (helper == nullptr) {
		} else {
			$nc(TransformHelper::helpercache)->put(src, nullptr, nullptr, helper);
		}
		return helper;
	}
}

void TransformHelper::init$($SurfaceType* srctype) {
	$init($CompositeType);
	$init($SurfaceType);
	$GraphicsPrimitive::init$(TransformHelper::methodSignature, TransformHelper::primTypeID, srctype, $CompositeType::SrcNoEa, $SurfaceType::IntArgbPre);
}

void TransformHelper::init$(int64_t pNativePrim, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(pNativePrim, TransformHelper::methodSignature, TransformHelper::primTypeID, srctype, comptype, dsttype);
}

void TransformHelper::Transform($MaskBlit* output, $SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* itx, int32_t txtype, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, $ints* edges, int32_t dxoff, int32_t dyoff) {
	$prepareNative(TransformHelper, Transform, void, $MaskBlit* output, $SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* itx, int32_t txtype, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, $ints* edges, int32_t dxoff, int32_t dyoff);
	$invokeNative(TransformHelper, Transform, output, src, dst, comp, clip, itx, txtype, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2, edges, dxoff, dyoff);
	$finishNative();
}

$GraphicsPrimitive* TransformHelper::traceWrap() {
	return $new($TransformHelper$TraceTransformHelper, this);
}

void clinit$TransformHelper($Class* class$) {
	$assignStatic(TransformHelper::methodSignature, "TransformHelper(...)"_s->toString());
	TransformHelper::primTypeID = $GraphicsPrimitive::makePrimTypeID();
	$assignStatic(TransformHelper::helpercache, $new($RenderCache, 10));
}

TransformHelper::TransformHelper() {
}

$Class* TransformHelper::load$($String* name, bool initialize) {
	$loadClass(TransformHelper, name, initialize, &_TransformHelper_ClassInfo_, clinit$TransformHelper, allocate$TransformHelper);
	return class$;
}

$Class* TransformHelper::class$ = nullptr;

		} // loops
	} // java2d
} // sun