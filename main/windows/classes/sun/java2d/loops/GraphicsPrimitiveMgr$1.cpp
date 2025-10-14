#include <sun/java2d/loops/GraphicsPrimitiveMgr$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _GraphicsPrimitiveMgr$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GraphicsPrimitiveMgr$1::*)()>(&GraphicsPrimitiveMgr$1::init$))},
	{"compare", "(Lsun/java2d/loops/GraphicsPrimitive;Lsun/java2d/loops/GraphicsPrimitive;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _GraphicsPrimitiveMgr$1_EnclosingMethodInfo_ = {
	"sun.java2d.loops.GraphicsPrimitiveMgr",
	nullptr,
	nullptr
};

$InnerClassInfo _GraphicsPrimitiveMgr$1_InnerClassesInfo_[] = {
	{"sun.java2d.loops.GraphicsPrimitiveMgr$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GraphicsPrimitiveMgr$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.GraphicsPrimitiveMgr$1",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_GraphicsPrimitiveMgr$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Lsun/java2d/loops/GraphicsPrimitive;>;",
	&_GraphicsPrimitiveMgr$1_EnclosingMethodInfo_,
	_GraphicsPrimitiveMgr$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.GraphicsPrimitiveMgr"
};

$Object* allocate$GraphicsPrimitiveMgr$1($Class* clazz) {
	return $of($alloc(GraphicsPrimitiveMgr$1));
}

void GraphicsPrimitiveMgr$1::init$() {
}

int32_t GraphicsPrimitiveMgr$1::compare($GraphicsPrimitive* o1, $GraphicsPrimitive* o2) {
	int32_t id1 = $nc(o1)->getUniqueID();
	int32_t id2 = $nc(o2)->getUniqueID();
	return (id1 == id2 ? 0 : (id1 < id2 ? -1 : 1));
}

int32_t GraphicsPrimitiveMgr$1::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($GraphicsPrimitive, o1), $cast($GraphicsPrimitive, o2));
}

GraphicsPrimitiveMgr$1::GraphicsPrimitiveMgr$1() {
}

$Class* GraphicsPrimitiveMgr$1::load$($String* name, bool initialize) {
	$loadClass(GraphicsPrimitiveMgr$1, name, initialize, &_GraphicsPrimitiveMgr$1_ClassInfo_, allocate$GraphicsPrimitiveMgr$1);
	return class$;
}

$Class* GraphicsPrimitiveMgr$1::class$ = nullptr;

		} // loops
	} // java2d
} // sun