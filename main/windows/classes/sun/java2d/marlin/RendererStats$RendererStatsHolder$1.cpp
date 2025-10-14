#include <sun/java2d/marlin/RendererStats$RendererStatsHolder$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/marlin/RendererStats$RendererStatsHolder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RendererStats$RendererStatsHolder = ::sun::java2d::marlin::RendererStats$RendererStatsHolder;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _RendererStats$RendererStatsHolder$1_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/marlin/RendererStats$RendererStatsHolder;", nullptr, $FINAL | $SYNTHETIC, $field(RendererStats$RendererStatsHolder$1, this$0)},
	{}
};

$MethodInfo _RendererStats$RendererStatsHolder$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/marlin/RendererStats$RendererStatsHolder;)V", nullptr, 0, $method(static_cast<void(RendererStats$RendererStatsHolder$1::*)($RendererStats$RendererStatsHolder*)>(&RendererStats$RendererStatsHolder$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RendererStats$RendererStatsHolder$1_EnclosingMethodInfo_ = {
	"sun.java2d.marlin.RendererStats$RendererStatsHolder",
	"<init>",
	"()V"
};

$InnerClassInfo _RendererStats$RendererStatsHolder$1_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.RendererStats$RendererStatsHolder", "sun.java2d.marlin.RendererStats", "RendererStatsHolder", $STATIC | $FINAL},
	{"sun.java2d.marlin.RendererStats$RendererStatsHolder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RendererStats$RendererStatsHolder$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.marlin.RendererStats$RendererStatsHolder$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_RendererStats$RendererStatsHolder$1_FieldInfo_,
	_RendererStats$RendererStatsHolder$1_MethodInfo_,
	nullptr,
	&_RendererStats$RendererStatsHolder$1_EnclosingMethodInfo_,
	_RendererStats$RendererStatsHolder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.RendererStats"
};

$Object* allocate$RendererStats$RendererStatsHolder$1($Class* clazz) {
	return $of($alloc(RendererStats$RendererStatsHolder$1));
}

void RendererStats$RendererStatsHolder$1::init$($RendererStats$RendererStatsHolder* this$0) {
	$set(this, this$0, this$0);
}

void RendererStats$RendererStatsHolder$1::run() {
	this->this$0->dump();
}

RendererStats$RendererStatsHolder$1::RendererStats$RendererStatsHolder$1() {
}

$Class* RendererStats$RendererStatsHolder$1::load$($String* name, bool initialize) {
	$loadClass(RendererStats$RendererStatsHolder$1, name, initialize, &_RendererStats$RendererStatsHolder$1_ClassInfo_, allocate$RendererStats$RendererStatsHolder$1);
	return class$;
}

$Class* RendererStats$RendererStatsHolder$1::class$ = nullptr;

		} // marlin
	} // java2d
} // sun