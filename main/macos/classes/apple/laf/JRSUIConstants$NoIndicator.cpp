#include <apple/laf/JRSUIConstants$NoIndicator.h>

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

$FieldInfo _JRSUIConstants$NoIndicator_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$NoIndicator, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$NoIndicator, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$NoIndicator, MASK)},
	{"noIndicator", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$NoIndicator, noIndicator)},
	{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$NoIndicator, _no)},
	{"NO", "Lapple/laf/JRSUIConstants$NoIndicator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$NoIndicator, NO)},
	{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$NoIndicator, _yes)},
	{"YES", "Lapple/laf/JRSUIConstants$NoIndicator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$NoIndicator, YES)},
	{}
};

$MethodInfo _JRSUIConstants$NoIndicator_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$NoIndicator::*)(int8_t)>(&JRSUIConstants$NoIndicator::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$NoIndicator_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$NoIndicator", "apple.laf.JRSUIConstants", "NoIndicator", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$NoIndicator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$NoIndicator",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$NoIndicator_FieldInfo_,
	_JRSUIConstants$NoIndicator_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$NoIndicator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$NoIndicator($Class* clazz) {
	return $of($alloc(JRSUIConstants$NoIndicator));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$NoIndicator::noIndicator = nullptr;
JRSUIConstants$NoIndicator* JRSUIConstants$NoIndicator::NO = nullptr;
JRSUIConstants$NoIndicator* JRSUIConstants$NoIndicator::YES = nullptr;

void JRSUIConstants$NoIndicator::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$NoIndicator::noIndicator, value);
}

$String* JRSUIConstants$NoIndicator::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$NoIndicator::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$NoIndicator($Class* class$) {
	$assignStatic(JRSUIConstants$NoIndicator::noIndicator, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$NoIndicator::MASK, JRSUIConstants$NoIndicator::SHIFT));
	$assignStatic(JRSUIConstants$NoIndicator::NO, $new(JRSUIConstants$NoIndicator, JRSUIConstants$NoIndicator::_no));
	$assignStatic(JRSUIConstants$NoIndicator::YES, $new(JRSUIConstants$NoIndicator, JRSUIConstants$NoIndicator::_yes));
}

JRSUIConstants$NoIndicator::JRSUIConstants$NoIndicator() {
}

$Class* JRSUIConstants$NoIndicator::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$NoIndicator, name, initialize, &_JRSUIConstants$NoIndicator_ClassInfo_, clinit$JRSUIConstants$NoIndicator, allocate$JRSUIConstants$NoIndicator);
	return class$;
}

$Class* JRSUIConstants$NoIndicator::class$ = nullptr;

	} // laf
} // apple