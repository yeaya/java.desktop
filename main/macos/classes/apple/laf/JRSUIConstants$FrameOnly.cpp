#include <apple/laf/JRSUIConstants$FrameOnly.h>

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

$FieldInfo _JRSUIConstants$FrameOnly_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$FrameOnly, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$FrameOnly, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$FrameOnly, MASK)},
	{"focused", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$FrameOnly, focused)},
	{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$FrameOnly, _no)},
	{"NO", "Lapple/laf/JRSUIConstants$FrameOnly;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$FrameOnly, NO)},
	{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$FrameOnly, _yes)},
	{"YES", "Lapple/laf/JRSUIConstants$FrameOnly;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$FrameOnly, YES)},
	{}
};

$MethodInfo _JRSUIConstants$FrameOnly_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$FrameOnly::*)(int8_t)>(&JRSUIConstants$FrameOnly::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$FrameOnly_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$FrameOnly", "apple.laf.JRSUIConstants", "FrameOnly", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$FrameOnly_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$FrameOnly",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$FrameOnly_FieldInfo_,
	_JRSUIConstants$FrameOnly_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$FrameOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$FrameOnly($Class* clazz) {
	return $of($alloc(JRSUIConstants$FrameOnly));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$FrameOnly::focused = nullptr;
JRSUIConstants$FrameOnly* JRSUIConstants$FrameOnly::NO = nullptr;
JRSUIConstants$FrameOnly* JRSUIConstants$FrameOnly::YES = nullptr;

void JRSUIConstants$FrameOnly::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$FrameOnly::focused, value);
}

$String* JRSUIConstants$FrameOnly::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$FrameOnly::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$FrameOnly($Class* class$) {
	$assignStatic(JRSUIConstants$FrameOnly::focused, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$FrameOnly::MASK, JRSUIConstants$FrameOnly::SHIFT));
	$assignStatic(JRSUIConstants$FrameOnly::NO, $new(JRSUIConstants$FrameOnly, JRSUIConstants$FrameOnly::_no));
	$assignStatic(JRSUIConstants$FrameOnly::YES, $new(JRSUIConstants$FrameOnly, JRSUIConstants$FrameOnly::_yes));
}

JRSUIConstants$FrameOnly::JRSUIConstants$FrameOnly() {
}

$Class* JRSUIConstants$FrameOnly::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$FrameOnly, name, initialize, &_JRSUIConstants$FrameOnly_ClassInfo_, clinit$JRSUIConstants$FrameOnly, allocate$JRSUIConstants$FrameOnly);
	return class$;
}

$Class* JRSUIConstants$FrameOnly::class$ = nullptr;

	} // laf
} // apple