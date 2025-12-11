#include <apple/laf/JRSUIConstants$ScrollBarHit.h>

#include <apple/laf/JRSUIConstants$Hit.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef ARROW_MAX
#undef ARROW_MAX_INSIDE
#undef ARROW_MIN
#undef ARROW_MIN_INSIDE
#undef THUMB
#undef TRACK_MAX
#undef TRACK_MIN

using $JRSUIConstants$Hit = ::apple::laf::JRSUIConstants$Hit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$ScrollBarHit_FieldInfo_[] = {
	{"_thumb", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _thumb)},
	{"THUMB", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, THUMB)},
	{"_trackMin", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _trackMin)},
	{"TRACK_MIN", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, TRACK_MIN)},
	{"_trackMax", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _trackMax)},
	{"TRACK_MAX", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, TRACK_MAX)},
	{"_arrowMin", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _arrowMin)},
	{"ARROW_MIN", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, ARROW_MIN)},
	{"_arrowMax", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _arrowMax)},
	{"ARROW_MAX", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, ARROW_MAX)},
	{"_arrowMaxInside", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _arrowMaxInside)},
	{"ARROW_MAX_INSIDE", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, ARROW_MAX_INSIDE)},
	{"_arrowMinInside", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarHit, _arrowMinInside)},
	{"ARROW_MIN_INSIDE", "Lapple/laf/JRSUIConstants$ScrollBarHit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarHit, ARROW_MIN_INSIDE)},
	{}
};

$MethodInfo _JRSUIConstants$ScrollBarHit_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$ScrollBarHit::*)(int32_t)>(&JRSUIConstants$ScrollBarHit::init$))},
	{}
};

$InnerClassInfo _JRSUIConstants$ScrollBarHit_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$ScrollBarHit", "apple.laf.JRSUIConstants", "ScrollBarHit", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Hit", "apple.laf.JRSUIConstants", "Hit", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$ScrollBarHit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$ScrollBarHit",
	"apple.laf.JRSUIConstants$Hit",
	nullptr,
	_JRSUIConstants$ScrollBarHit_FieldInfo_,
	_JRSUIConstants$ScrollBarHit_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$ScrollBarHit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$ScrollBarHit($Class* clazz) {
	return $of($alloc(JRSUIConstants$ScrollBarHit));
}

JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::THUMB = nullptr;
JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::TRACK_MIN = nullptr;
JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::TRACK_MAX = nullptr;
JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::ARROW_MIN = nullptr;
JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::ARROW_MAX = nullptr;
JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::ARROW_MAX_INSIDE = nullptr;
JRSUIConstants$ScrollBarHit* JRSUIConstants$ScrollBarHit::ARROW_MIN_INSIDE = nullptr;

void JRSUIConstants$ScrollBarHit::init$(int32_t hit) {
	$JRSUIConstants$Hit::init$(hit);
}

void clinit$JRSUIConstants$ScrollBarHit($Class* class$) {
	$assignStatic(JRSUIConstants$ScrollBarHit::THUMB, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_thumb));
	$assignStatic(JRSUIConstants$ScrollBarHit::TRACK_MIN, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_trackMin));
	$assignStatic(JRSUIConstants$ScrollBarHit::TRACK_MAX, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_trackMax));
	$assignStatic(JRSUIConstants$ScrollBarHit::ARROW_MIN, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_arrowMin));
	$assignStatic(JRSUIConstants$ScrollBarHit::ARROW_MAX, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_arrowMax));
	$assignStatic(JRSUIConstants$ScrollBarHit::ARROW_MAX_INSIDE, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_arrowMaxInside));
	$assignStatic(JRSUIConstants$ScrollBarHit::ARROW_MIN_INSIDE, $new(JRSUIConstants$ScrollBarHit, JRSUIConstants$ScrollBarHit::_arrowMinInside));
}

JRSUIConstants$ScrollBarHit::JRSUIConstants$ScrollBarHit() {
}

$Class* JRSUIConstants$ScrollBarHit::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$ScrollBarHit, name, initialize, &_JRSUIConstants$ScrollBarHit_ClassInfo_, clinit$JRSUIConstants$ScrollBarHit, allocate$JRSUIConstants$ScrollBarHit);
	return class$;
}

$Class* JRSUIConstants$ScrollBarHit::class$ = nullptr;

	} // laf
} // apple