#include <apple/laf/JRSUIConstants$IndicatorOnly.h>

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

$FieldInfo _JRSUIConstants$IndicatorOnly_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$IndicatorOnly, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$IndicatorOnly, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$IndicatorOnly, MASK)},
	{"indicatorOnly", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$IndicatorOnly, indicatorOnly)},
	{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$IndicatorOnly, _no)},
	{"NO", "Lapple/laf/JRSUIConstants$IndicatorOnly;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$IndicatorOnly, NO)},
	{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$IndicatorOnly, _yes)},
	{"YES", "Lapple/laf/JRSUIConstants$IndicatorOnly;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$IndicatorOnly, YES)},
	{}
};

$MethodInfo _JRSUIConstants$IndicatorOnly_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$IndicatorOnly::*)(int8_t)>(&JRSUIConstants$IndicatorOnly::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$IndicatorOnly_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$IndicatorOnly", "apple.laf.JRSUIConstants", "IndicatorOnly", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$IndicatorOnly_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$IndicatorOnly",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$IndicatorOnly_FieldInfo_,
	_JRSUIConstants$IndicatorOnly_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$IndicatorOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$IndicatorOnly($Class* clazz) {
	return $of($alloc(JRSUIConstants$IndicatorOnly));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$IndicatorOnly::indicatorOnly = nullptr;
JRSUIConstants$IndicatorOnly* JRSUIConstants$IndicatorOnly::NO = nullptr;
JRSUIConstants$IndicatorOnly* JRSUIConstants$IndicatorOnly::YES = nullptr;

void JRSUIConstants$IndicatorOnly::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$IndicatorOnly::indicatorOnly, value);
}

$String* JRSUIConstants$IndicatorOnly::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$IndicatorOnly::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$IndicatorOnly($Class* class$) {
	$assignStatic(JRSUIConstants$IndicatorOnly::indicatorOnly, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$IndicatorOnly::MASK, JRSUIConstants$IndicatorOnly::SHIFT));
	$assignStatic(JRSUIConstants$IndicatorOnly::NO, $new(JRSUIConstants$IndicatorOnly, JRSUIConstants$IndicatorOnly::_no));
	$assignStatic(JRSUIConstants$IndicatorOnly::YES, $new(JRSUIConstants$IndicatorOnly, JRSUIConstants$IndicatorOnly::_yes));
}

JRSUIConstants$IndicatorOnly::JRSUIConstants$IndicatorOnly() {
}

$Class* JRSUIConstants$IndicatorOnly::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$IndicatorOnly, name, initialize, &_JRSUIConstants$IndicatorOnly_ClassInfo_, clinit$JRSUIConstants$IndicatorOnly, allocate$JRSUIConstants$IndicatorOnly);
	return class$;
}

$Class* JRSUIConstants$IndicatorOnly::class$ = nullptr;

	} // laf
} // apple