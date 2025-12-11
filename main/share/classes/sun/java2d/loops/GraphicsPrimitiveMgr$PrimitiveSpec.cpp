#include <sun/java2d/loops/GraphicsPrimitiveMgr$PrimitiveSpec.h>

#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _GraphicsPrimitiveMgr$PrimitiveSpec_FieldInfo_[] = {
	{"uniqueID", "I", nullptr, $PUBLIC, $field(GraphicsPrimitiveMgr$PrimitiveSpec, uniqueID)},
	{}
};

$MethodInfo _GraphicsPrimitiveMgr$PrimitiveSpec_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GraphicsPrimitiveMgr$PrimitiveSpec::*)()>(&GraphicsPrimitiveMgr$PrimitiveSpec::init$))},
	{}
};

$InnerClassInfo _GraphicsPrimitiveMgr$PrimitiveSpec_InnerClassesInfo_[] = {
	{"sun.java2d.loops.GraphicsPrimitiveMgr$PrimitiveSpec", "sun.java2d.loops.GraphicsPrimitiveMgr", "PrimitiveSpec", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GraphicsPrimitiveMgr$PrimitiveSpec_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.GraphicsPrimitiveMgr$PrimitiveSpec",
	"java.lang.Object",
	nullptr,
	_GraphicsPrimitiveMgr$PrimitiveSpec_FieldInfo_,
	_GraphicsPrimitiveMgr$PrimitiveSpec_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsPrimitiveMgr$PrimitiveSpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.GraphicsPrimitiveMgr"
};

$Object* allocate$GraphicsPrimitiveMgr$PrimitiveSpec($Class* clazz) {
	return $of($alloc(GraphicsPrimitiveMgr$PrimitiveSpec));
}

void GraphicsPrimitiveMgr$PrimitiveSpec::init$() {
}

GraphicsPrimitiveMgr$PrimitiveSpec::GraphicsPrimitiveMgr$PrimitiveSpec() {
}

$Class* GraphicsPrimitiveMgr$PrimitiveSpec::load$($String* name, bool initialize) {
	$loadClass(GraphicsPrimitiveMgr$PrimitiveSpec, name, initialize, &_GraphicsPrimitiveMgr$PrimitiveSpec_ClassInfo_, allocate$GraphicsPrimitiveMgr$PrimitiveSpec);
	return class$;
}

$Class* GraphicsPrimitiveMgr$PrimitiveSpec::class$ = nullptr;

		} // loops
	} // java2d
} // sun