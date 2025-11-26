#include <sun/java2d/loops/TransformBlit$TraceTransformBlit.h>

#include <java/awt/Composite.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/TransformBlit.h>
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
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $TransformBlit = ::sun::java2d::loops::TransformBlit;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _TransformBlit$TraceTransformBlit_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/TransformBlit;", nullptr, 0, $field(TransformBlit$TraceTransformBlit, target)},
	{}
};

$MethodInfo _TransformBlit$TraceTransformBlit_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/TransformBlit;)V", nullptr, $PUBLIC, $method(static_cast<void(TransformBlit$TraceTransformBlit::*)($TransformBlit*)>(&TransformBlit$TraceTransformBlit::init$))},
	{"Transform", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;Ljava/awt/geom/AffineTransform;IIIIIII)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransformBlit$TraceTransformBlit_InnerClassesInfo_[] = {
	{"sun.java2d.loops.TransformBlit$TraceTransformBlit", "sun.java2d.loops.TransformBlit", "TraceTransformBlit", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransformBlit$TraceTransformBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.TransformBlit$TraceTransformBlit",
	"sun.java2d.loops.TransformBlit",
	nullptr,
	_TransformBlit$TraceTransformBlit_FieldInfo_,
	_TransformBlit$TraceTransformBlit_MethodInfo_,
	nullptr,
	nullptr,
	_TransformBlit$TraceTransformBlit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.TransformBlit"
};

$Object* allocate$TransformBlit$TraceTransformBlit($Class* clazz) {
	return $of($alloc(TransformBlit$TraceTransformBlit));
}

void TransformBlit$TraceTransformBlit::init$($TransformBlit* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$TransformBlit::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* TransformBlit$TraceTransformBlit::traceWrap() {
	return this;
}

void TransformBlit$TraceTransformBlit::Transform($SurfaceData* src, $SurfaceData* dst, $Composite* comp, $Region* clip, $AffineTransform* at, int32_t hint, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	tracePrimitive(this->target);
	$nc(this->target)->Transform(src, dst, comp, clip, at, hint, srcx, srcy, dstx, dsty, width, height);
}

TransformBlit$TraceTransformBlit::TransformBlit$TraceTransformBlit() {
}

$Class* TransformBlit$TraceTransformBlit::load$($String* name, bool initialize) {
	$loadClass(TransformBlit$TraceTransformBlit, name, initialize, &_TransformBlit$TraceTransformBlit_ClassInfo_, allocate$TransformBlit$TraceTransformBlit);
	return class$;
}

$Class* TransformBlit$TraceTransformBlit::class$ = nullptr;

		} // loops
	} // java2d
} // sun