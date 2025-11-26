#include <sun/java2d/loops/FillPath$TraceFillPath.h>

#include <java/awt/geom/Path2D$Float.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/FillPath.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $FillPath = ::sun::java2d::loops::FillPath;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _FillPath$TraceFillPath_FieldInfo_[] = {
	{"target", "Lsun/java2d/loops/FillPath;", nullptr, 0, $field(FillPath$TraceFillPath, target)},
	{}
};

$MethodInfo _FillPath$TraceFillPath_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/FillPath;)V", nullptr, $PUBLIC, $method(static_cast<void(FillPath$TraceFillPath::*)($FillPath*)>(&FillPath$TraceFillPath::init$))},
	{"FillPath", "(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;IILjava/awt/geom/Path2D$Float;)V", nullptr, $PUBLIC},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FillPath$TraceFillPath_InnerClassesInfo_[] = {
	{"sun.java2d.loops.FillPath$TraceFillPath", "sun.java2d.loops.FillPath", "TraceFillPath", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FillPath$TraceFillPath_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.FillPath$TraceFillPath",
	"sun.java2d.loops.FillPath",
	nullptr,
	_FillPath$TraceFillPath_FieldInfo_,
	_FillPath$TraceFillPath_MethodInfo_,
	nullptr,
	nullptr,
	_FillPath$TraceFillPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.FillPath"
};

$Object* allocate$FillPath$TraceFillPath($Class* clazz) {
	return $of($alloc(FillPath$TraceFillPath));
}

void FillPath$TraceFillPath::init$($FillPath* target) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, var$0, $nc(target)->getSourceType());
	$var($CompositeType, var$1, target->getCompositeType());
	$FillPath::init$(var$0, var$1, $(target->getDestType()));
	$set(this, target, target);
}

$GraphicsPrimitive* FillPath$TraceFillPath::traceWrap() {
	return this;
}

void FillPath$TraceFillPath::FillPath$($SunGraphics2D* sg2d, $SurfaceData* sData, int32_t transX, int32_t transY, $Path2D$Float* p2df) {
	tracePrimitive(this->target);
	$nc(this->target)->FillPath$(sg2d, sData, transX, transY, p2df);
}

FillPath$TraceFillPath::FillPath$TraceFillPath() {
}

$Class* FillPath$TraceFillPath::load$($String* name, bool initialize) {
	$loadClass(FillPath$TraceFillPath, name, initialize, &_FillPath$TraceFillPath_ClassInfo_, allocate$FillPath$TraceFillPath);
	return class$;
}

$Class* FillPath$TraceFillPath::class$ = nullptr;

		} // loops
	} // java2d
} // sun