#include <apple/laf/JRSUIConstants$WindowTitleBarSeparator.h>

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

$FieldInfo _JRSUIConstants$WindowTitleBarSeparator_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowTitleBarSeparator, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowTitleBarSeparator, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowTitleBarSeparator, MASK)},
	{"focused", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$WindowTitleBarSeparator, focused)},
	{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowTitleBarSeparator, _no)},
	{"NO", "Lapple/laf/JRSUIConstants$WindowTitleBarSeparator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$WindowTitleBarSeparator, NO)},
	{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowTitleBarSeparator, _yes)},
	{"YES", "Lapple/laf/JRSUIConstants$WindowTitleBarSeparator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$WindowTitleBarSeparator, YES)},
	{}
};

$MethodInfo _JRSUIConstants$WindowTitleBarSeparator_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$WindowTitleBarSeparator::*)(int8_t)>(&JRSUIConstants$WindowTitleBarSeparator::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$WindowTitleBarSeparator_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$WindowTitleBarSeparator", "apple.laf.JRSUIConstants", "WindowTitleBarSeparator", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$WindowTitleBarSeparator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$WindowTitleBarSeparator",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$WindowTitleBarSeparator_FieldInfo_,
	_JRSUIConstants$WindowTitleBarSeparator_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$WindowTitleBarSeparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$WindowTitleBarSeparator($Class* clazz) {
	return $of($alloc(JRSUIConstants$WindowTitleBarSeparator));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$WindowTitleBarSeparator::focused = nullptr;
JRSUIConstants$WindowTitleBarSeparator* JRSUIConstants$WindowTitleBarSeparator::NO = nullptr;
JRSUIConstants$WindowTitleBarSeparator* JRSUIConstants$WindowTitleBarSeparator::YES = nullptr;

void JRSUIConstants$WindowTitleBarSeparator::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$WindowTitleBarSeparator::focused, value);
}

$String* JRSUIConstants$WindowTitleBarSeparator::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$WindowTitleBarSeparator::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$WindowTitleBarSeparator($Class* class$) {
	$assignStatic(JRSUIConstants$WindowTitleBarSeparator::focused, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$WindowTitleBarSeparator::MASK, JRSUIConstants$WindowTitleBarSeparator::SHIFT));
	$assignStatic(JRSUIConstants$WindowTitleBarSeparator::NO, $new(JRSUIConstants$WindowTitleBarSeparator, JRSUIConstants$WindowTitleBarSeparator::_no));
	$assignStatic(JRSUIConstants$WindowTitleBarSeparator::YES, $new(JRSUIConstants$WindowTitleBarSeparator, JRSUIConstants$WindowTitleBarSeparator::_yes));
}

JRSUIConstants$WindowTitleBarSeparator::JRSUIConstants$WindowTitleBarSeparator() {
}

$Class* JRSUIConstants$WindowTitleBarSeparator::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$WindowTitleBarSeparator, name, initialize, &_JRSUIConstants$WindowTitleBarSeparator_ClassInfo_, clinit$JRSUIConstants$WindowTitleBarSeparator, allocate$JRSUIConstants$WindowTitleBarSeparator);
	return class$;
}

$Class* JRSUIConstants$WindowTitleBarSeparator::class$ = nullptr;

	} // laf
} // apple