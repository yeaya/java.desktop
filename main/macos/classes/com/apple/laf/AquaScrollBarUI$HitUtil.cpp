#include <com/apple/laf/AquaScrollBarUI$HitUtil.h>

#include <apple/laf/JRSUIConstants$Hit.h>
#include <apple/laf/JRSUIConstants$ScrollBarHit.h>
#include <com/apple/laf/AquaScrollBarUI.h>
#include <jcpp.h>

#undef ARROW_MAX
#undef ARROW_MAX_INSIDE
#undef ARROW_MIN
#undef ARROW_MIN_INSIDE
#undef TRACK_MAX
#undef TRACK_MIN

using $JRSUIConstants$Hit = ::apple::laf::JRSUIConstants$Hit;
using $JRSUIConstants$ScrollBarHit = ::apple::laf::JRSUIConstants$ScrollBarHit;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaScrollBarUI$HitUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaScrollBarUI$HitUtil::*)()>(&AquaScrollBarUI$HitUtil::init$))},
	{"isArrow", "(Lapple/laf/JRSUIConstants$Hit;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($JRSUIConstants$Hit*)>(&AquaScrollBarUI$HitUtil::isArrow))},
	{"isDecrement", "(Lapple/laf/JRSUIConstants$Hit;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($JRSUIConstants$Hit*)>(&AquaScrollBarUI$HitUtil::isDecrement))},
	{"isIncrement", "(Lapple/laf/JRSUIConstants$Hit;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($JRSUIConstants$Hit*)>(&AquaScrollBarUI$HitUtil::isIncrement))},
	{"isTrack", "(Lapple/laf/JRSUIConstants$Hit;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($JRSUIConstants$Hit*)>(&AquaScrollBarUI$HitUtil::isTrack))},
	{}
};

$InnerClassInfo _AquaScrollBarUI$HitUtil_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaScrollBarUI$HitUtil", "com.apple.laf.AquaScrollBarUI", "HitUtil", $STATIC},
	{}
};

$ClassInfo _AquaScrollBarUI$HitUtil_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaScrollBarUI$HitUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AquaScrollBarUI$HitUtil_MethodInfo_,
	nullptr,
	nullptr,
	_AquaScrollBarUI$HitUtil_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaScrollBarUI"
};

$Object* allocate$AquaScrollBarUI$HitUtil($Class* clazz) {
	return $of($alloc(AquaScrollBarUI$HitUtil));
}

void AquaScrollBarUI$HitUtil::init$() {
}

bool AquaScrollBarUI$HitUtil::isIncrement($JRSUIConstants$Hit* hit) {
	$init($JRSUIConstants$ScrollBarHit);
	return ($equals(hit, $JRSUIConstants$ScrollBarHit::ARROW_MAX)) || ($equals(hit, $JRSUIConstants$ScrollBarHit::ARROW_MAX_INSIDE));
}

bool AquaScrollBarUI$HitUtil::isDecrement($JRSUIConstants$Hit* hit) {
	$init($JRSUIConstants$ScrollBarHit);
	return ($equals(hit, $JRSUIConstants$ScrollBarHit::ARROW_MIN)) || ($equals(hit, $JRSUIConstants$ScrollBarHit::ARROW_MIN_INSIDE));
}

bool AquaScrollBarUI$HitUtil::isArrow($JRSUIConstants$Hit* hit) {
	bool var$0 = isIncrement(hit);
	return var$0 || isDecrement(hit);
}

bool AquaScrollBarUI$HitUtil::isTrack($JRSUIConstants$Hit* hit) {
	$init($JRSUIConstants$ScrollBarHit);
	return ($equals(hit, $JRSUIConstants$ScrollBarHit::TRACK_MAX)) || ($equals(hit, $JRSUIConstants$ScrollBarHit::TRACK_MIN));
}

AquaScrollBarUI$HitUtil::AquaScrollBarUI$HitUtil() {
}

$Class* AquaScrollBarUI$HitUtil::load$($String* name, bool initialize) {
	$loadClass(AquaScrollBarUI$HitUtil, name, initialize, &_AquaScrollBarUI$HitUtil_ClassInfo_, allocate$AquaScrollBarUI$HitUtil);
	return class$;
}

$Class* AquaScrollBarUI$HitUtil::class$ = nullptr;

		} // laf
	} // apple
} // com