#include <sun/java2d/loops/TransformHelper$TraceTransformHelper.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/MaskBlit.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformHelper.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $MaskBlit = ::sun::java2d::loops::MaskBlit;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformHelper = ::sun::java2d::loops::TransformHelper;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _TransformHelper$TraceTransformHelper_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/TransformHelper;", nullptr, 0, $field(TransformHelper$TraceTransformHelper, target)},
	{}
};

$MethodInfo _TransformHelper$TraceTransformHelper_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/TransformHelper;)V", nullptr, $PUBLIC, $method(static_cast<void(TransformHelper$TraceTransformHelper::*)($TransformHelper*)>(&TransformHelper$TraceTransformHelper::init$))},
	{"Transform", "(Lsun/java2d/loops/MaskBlit;Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIIIII[III)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransformHelper$TraceTransformHelper_InnerClassesInfo_[] = {
	{"sun.java2d.loops.TransformHelper$TraceTransformHelper", "sun.java2d.loops.TransformHelper", "TraceTransformHelper", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransformHelper$TraceTransformHelper_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.TransformHelper$TraceTransformHelper",
	"sun.java2d.loops.TransformHelper",
	nullptr,
	_TransformHelper$TraceTransformHelper_FieldInfo_,
	_TransformHelper$TraceTransformHelper_MethodInfo_,
	nullptr,
	nullptr,
	_TransformHelper$TraceTransformHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.TransformHelper"
};

$Object* allocate$TransformHelper$TraceTransformHelper($Class* clazz) {
	return $of($alloc(TransformHelper$TraceTransformHelper));
}

void TransformHelper$TraceTransformHelper::init$($TransformHelper* target) {
	$TransformHelper::init$($($nc(target)->getSourceType()));
	$set(this, target, target);
}

$GraphicsPrimitive* TransformHelper$TraceTransformHelper::traceWrap() {
	return this;
}

void TransformHelper$TraceTransformHelper::Transform($MaskBlit* output, $SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* itx, int32_t txtype, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, $ints* edges, int32_t dxoff, int32_t dyoff) {
	tracePrimitive(this->target);
	$nc(this->target)->Transform(output, src, dst, comp, clip, itx, txtype, sx1, sy1, sx2, sy2, dx1, dy1, dx2, dy2, edges, dxoff, dyoff);
}

TransformHelper$TraceTransformHelper::TransformHelper$TraceTransformHelper() {
}

$Class* TransformHelper$TraceTransformHelper::load$($String* name, bool initialize) {
	$loadClass(TransformHelper$TraceTransformHelper, name, initialize, &_TransformHelper$TraceTransformHelper_ClassInfo_, allocate$TransformHelper$TraceTransformHelper);
	return class$;
}

$Class* TransformHelper$TraceTransformHelper::class$ = nullptr;

		} // loops
	} // java2d
} // sun