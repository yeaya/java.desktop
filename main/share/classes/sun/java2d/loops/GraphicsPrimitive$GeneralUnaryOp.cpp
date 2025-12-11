#include <sun/java2d/loops/GraphicsPrimitive$GeneralUnaryOp.h>

#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _GraphicsPrimitive$GeneralUnaryOp_MethodInfo_[] = {
	{"getCompositeType", "()Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDestType", "()Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrimTypeID", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"setPrimitives", "(Lsun/java2d/loops/Blit;Lsun/java2d/loops/GraphicsPrimitive;Lsun/java2d/loops/Blit;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _GraphicsPrimitive$GeneralUnaryOp_InnerClassesInfo_[] = {
	{"sun.java2d.loops.GraphicsPrimitive$GeneralUnaryOp", "sun.java2d.loops.GraphicsPrimitive", "GeneralUnaryOp", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GraphicsPrimitive$GeneralUnaryOp_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.loops.GraphicsPrimitive$GeneralUnaryOp",
	nullptr,
	nullptr,
	nullptr,
	_GraphicsPrimitive$GeneralUnaryOp_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsPrimitive$GeneralUnaryOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.GraphicsPrimitive"
};

$Object* allocate$GraphicsPrimitive$GeneralUnaryOp($Class* clazz) {
	return $of($alloc(GraphicsPrimitive$GeneralUnaryOp));
}

$Class* GraphicsPrimitive$GeneralUnaryOp::load$($String* name, bool initialize) {
	$loadClass(GraphicsPrimitive$GeneralUnaryOp, name, initialize, &_GraphicsPrimitive$GeneralUnaryOp_ClassInfo_, allocate$GraphicsPrimitive$GeneralUnaryOp);
	return class$;
}

$Class* GraphicsPrimitive$GeneralUnaryOp::class$ = nullptr;

		} // loops
	} // java2d
} // sun