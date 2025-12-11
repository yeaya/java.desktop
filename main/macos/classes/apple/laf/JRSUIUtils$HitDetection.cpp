#include <apple/laf/JRSUIUtils$HitDetection.h>

#include <apple/laf/JRSUIConstants$Hit.h>
#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIUtils.h>
#include <jcpp.h>

using $JRSUIConstants$Hit = ::apple::laf::JRSUIConstants$Hit;
using $JRSUIControl = ::apple::laf::JRSUIControl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$MethodInfo _JRSUIUtils$HitDetection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIUtils$HitDetection::*)()>(&JRSUIUtils$HitDetection::init$))},
	{"getHitForPoint", "(Lapple/laf/JRSUIControl;IIIIII)Lapple/laf/JRSUIConstants$Hit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JRSUIConstants$Hit*(*)($JRSUIControl*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&JRSUIUtils$HitDetection::getHitForPoint))},
	{}
};

$InnerClassInfo _JRSUIUtils$HitDetection_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIUtils$HitDetection", "apple.laf.JRSUIUtils", "HitDetection", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRSUIUtils$HitDetection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIUtils$HitDetection",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JRSUIUtils$HitDetection_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIUtils$HitDetection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIUtils"
};

$Object* allocate$JRSUIUtils$HitDetection($Class* clazz) {
	return $of($alloc(JRSUIUtils$HitDetection));
}

void JRSUIUtils$HitDetection::init$() {
}

$JRSUIConstants$Hit* JRSUIUtils$HitDetection::getHitForPoint($JRSUIControl* control, int32_t x, int32_t y, int32_t w, int32_t h, int32_t hitX, int32_t hitY) {
	return $nc(control)->getHitForPoint(x, y, w, h, hitX, hitY);
}

JRSUIUtils$HitDetection::JRSUIUtils$HitDetection() {
}

$Class* JRSUIUtils$HitDetection::load$($String* name, bool initialize) {
	$loadClass(JRSUIUtils$HitDetection, name, initialize, &_JRSUIUtils$HitDetection_ClassInfo_, allocate$JRSUIUtils$HitDetection);
	return class$;
}

$Class* JRSUIUtils$HitDetection::class$ = nullptr;

	} // laf
} // apple