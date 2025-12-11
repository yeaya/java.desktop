#include <apple/laf/JRSUIConstants$WindowClipCorners.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef MASK
#undef NO
#undef SHIFT
#undef SIZE
#undef YES

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$WindowClipCorners_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowClipCorners, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowClipCorners, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowClipCorners, MASK)},
	{"focused", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$WindowClipCorners, focused)},
	{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowClipCorners, _no)},
	{"NO", "Lapple/laf/JRSUIConstants$WindowClipCorners;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$WindowClipCorners, NO)},
	{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowClipCorners, _yes)},
	{"YES", "Lapple/laf/JRSUIConstants$WindowClipCorners;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$WindowClipCorners, YES)},
	{}
};

$MethodInfo _JRSUIConstants$WindowClipCorners_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$WindowClipCorners::*)(int8_t)>(&JRSUIConstants$WindowClipCorners::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$WindowClipCorners_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$WindowClipCorners", "apple.laf.JRSUIConstants", "WindowClipCorners", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$WindowClipCorners_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$WindowClipCorners",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$WindowClipCorners_FieldInfo_,
	_JRSUIConstants$WindowClipCorners_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$WindowClipCorners_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$WindowClipCorners($Class* clazz) {
	return $of($alloc(JRSUIConstants$WindowClipCorners));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$WindowClipCorners::focused = nullptr;
JRSUIConstants$WindowClipCorners* JRSUIConstants$WindowClipCorners::NO = nullptr;
JRSUIConstants$WindowClipCorners* JRSUIConstants$WindowClipCorners::YES = nullptr;

void JRSUIConstants$WindowClipCorners::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$WindowClipCorners::focused, value);
}

$String* JRSUIConstants$WindowClipCorners::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$WindowClipCorners::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$WindowClipCorners($Class* class$) {
	$assignStatic(JRSUIConstants$WindowClipCorners::focused, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$WindowClipCorners::MASK, JRSUIConstants$WindowClipCorners::SHIFT));
	$assignStatic(JRSUIConstants$WindowClipCorners::NO, $new(JRSUIConstants$WindowClipCorners, JRSUIConstants$WindowClipCorners::_no));
	$assignStatic(JRSUIConstants$WindowClipCorners::YES, $new(JRSUIConstants$WindowClipCorners, JRSUIConstants$WindowClipCorners::_yes));
}

JRSUIConstants$WindowClipCorners::JRSUIConstants$WindowClipCorners() {
}

$Class* JRSUIConstants$WindowClipCorners::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$WindowClipCorners, name, initialize, &_JRSUIConstants$WindowClipCorners_ClassInfo_, clinit$JRSUIConstants$WindowClipCorners, allocate$JRSUIConstants$WindowClipCorners);
	return class$;
}

$Class* JRSUIConstants$WindowClipCorners::class$ = nullptr;

	} // laf
} // apple