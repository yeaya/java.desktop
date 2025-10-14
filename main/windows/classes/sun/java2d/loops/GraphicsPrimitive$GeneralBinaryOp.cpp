#include <sun/java2d/loops/GraphicsPrimitive$GeneralBinaryOp.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _GraphicsPrimitive$GeneralBinaryOp_MethodInfo_[] = {
	{"getCompositeType", "()Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDestType", "()Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrimTypeID", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSourceType", "()Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $ABSTRACT},
	{"setPrimitives", "(Lsun/java2d/loops/Blit;Lsun/java2d/loops/Blit;Lsun/java2d/loops/GraphicsPrimitive;Lsun/java2d/loops/Blit;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _GraphicsPrimitive$GeneralBinaryOp_InnerClassesInfo_[] = {
	{"sun.java2d.loops.GraphicsPrimitive$GeneralBinaryOp", "sun.java2d.loops.GraphicsPrimitive", "GeneralBinaryOp", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GraphicsPrimitive$GeneralBinaryOp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.loops.GraphicsPrimitive$GeneralBinaryOp",
	nullptr,
	nullptr,
	nullptr,
	_GraphicsPrimitive$GeneralBinaryOp_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsPrimitive$GeneralBinaryOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.GraphicsPrimitive"
};

$Object* allocate$GraphicsPrimitive$GeneralBinaryOp($Class* clazz) {
	return $of($alloc(GraphicsPrimitive$GeneralBinaryOp));
}

$Class* GraphicsPrimitive$GeneralBinaryOp::load$($String* name, bool initialize) {
	$loadClass(GraphicsPrimitive$GeneralBinaryOp, name, initialize, &_GraphicsPrimitive$GeneralBinaryOp_ClassInfo_, allocate$GraphicsPrimitive$GeneralBinaryOp);
	return class$;
}

$Class* GraphicsPrimitive$GeneralBinaryOp::class$ = nullptr;

		} // loops
	} // java2d
} // sun