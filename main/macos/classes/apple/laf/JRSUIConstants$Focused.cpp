#include <apple/laf/JRSUIConstants$Focused.h>

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

$FieldInfo _JRSUIConstants$Focused_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Focused, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Focused, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Focused, MASK)},
	{"focused", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$Focused, focused)},
	{"_no", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Focused, _no)},
	{"NO", "Lapple/laf/JRSUIConstants$Focused;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Focused, NO)},
	{"_yes", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Focused, _yes)},
	{"YES", "Lapple/laf/JRSUIConstants$Focused;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Focused, YES)},
	{}
};

$MethodInfo _JRSUIConstants$Focused_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$Focused::*)(int8_t)>(&JRSUIConstants$Focused::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$Focused_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$Focused", "apple.laf.JRSUIConstants", "Focused", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$Focused_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$Focused",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$Focused_FieldInfo_,
	_JRSUIConstants$Focused_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$Focused_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$Focused($Class* clazz) {
	return $of($alloc(JRSUIConstants$Focused));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$Focused::focused = nullptr;
JRSUIConstants$Focused* JRSUIConstants$Focused::NO = nullptr;
JRSUIConstants$Focused* JRSUIConstants$Focused::YES = nullptr;

void JRSUIConstants$Focused::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$Focused::focused, value);
}

$String* JRSUIConstants$Focused::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$Focused::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$Focused($Class* class$) {
	$assignStatic(JRSUIConstants$Focused::focused, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$Focused::MASK, JRSUIConstants$Focused::SHIFT));
	$assignStatic(JRSUIConstants$Focused::NO, $new(JRSUIConstants$Focused, JRSUIConstants$Focused::_no));
	$assignStatic(JRSUIConstants$Focused::YES, $new(JRSUIConstants$Focused, JRSUIConstants$Focused::_yes));
}

JRSUIConstants$Focused::JRSUIConstants$Focused() {
}

$Class* JRSUIConstants$Focused::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$Focused, name, initialize, &_JRSUIConstants$Focused_ClassInfo_, clinit$JRSUIConstants$Focused, allocate$JRSUIConstants$Focused);
	return class$;
}

$Class* JRSUIConstants$Focused::class$ = nullptr;

	} // laf
} // apple