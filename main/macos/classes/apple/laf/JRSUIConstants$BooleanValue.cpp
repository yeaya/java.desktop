#include <apple/laf/JRSUIConstants$BooleanValue.h>

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

$FieldInfo _JRSUIConstants$BooleanValue_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$BooleanValue, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$BooleanValue, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$BooleanValue, MASK)},
	{"booleanValue", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$BooleanValue, booleanValue)},
	{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$BooleanValue, _no)},
	{"NO", "Lapple/laf/JRSUIConstants$BooleanValue;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$BooleanValue, NO)},
	{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$BooleanValue, _yes)},
	{"YES", "Lapple/laf/JRSUIConstants$BooleanValue;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$BooleanValue, YES)},
	{}
};

$MethodInfo _JRSUIConstants$BooleanValue_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$BooleanValue::*)(int8_t)>(&JRSUIConstants$BooleanValue::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$BooleanValue_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$BooleanValue", "apple.laf.JRSUIConstants", "BooleanValue", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$BooleanValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$BooleanValue",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$BooleanValue_FieldInfo_,
	_JRSUIConstants$BooleanValue_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$BooleanValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$BooleanValue($Class* clazz) {
	return $of($alloc(JRSUIConstants$BooleanValue));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$BooleanValue::booleanValue = nullptr;
JRSUIConstants$BooleanValue* JRSUIConstants$BooleanValue::NO = nullptr;
JRSUIConstants$BooleanValue* JRSUIConstants$BooleanValue::YES = nullptr;

void JRSUIConstants$BooleanValue::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$BooleanValue::booleanValue, value);
}

$String* JRSUIConstants$BooleanValue::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$BooleanValue::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$BooleanValue($Class* class$) {
	$assignStatic(JRSUIConstants$BooleanValue::booleanValue, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$BooleanValue::MASK, JRSUIConstants$BooleanValue::SHIFT));
	$assignStatic(JRSUIConstants$BooleanValue::NO, $new(JRSUIConstants$BooleanValue, JRSUIConstants$BooleanValue::_no));
	$assignStatic(JRSUIConstants$BooleanValue::YES, $new(JRSUIConstants$BooleanValue, JRSUIConstants$BooleanValue::_yes));
}

JRSUIConstants$BooleanValue::JRSUIConstants$BooleanValue() {
}

$Class* JRSUIConstants$BooleanValue::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$BooleanValue, name, initialize, &_JRSUIConstants$BooleanValue_ClassInfo_, clinit$JRSUIConstants$BooleanValue, allocate$JRSUIConstants$BooleanValue);
	return class$;
}

$Class* JRSUIConstants$BooleanValue::class$ = nullptr;

	} // laf
} // apple