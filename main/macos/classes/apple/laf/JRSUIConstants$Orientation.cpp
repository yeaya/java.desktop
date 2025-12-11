#include <apple/laf/JRSUIConstants$Orientation.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef MASK
#undef SHIFT
#undef SIZE
#undef VERTICAL

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$Orientation_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Orientation, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Orientation, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Orientation, MASK)},
	{"orientation", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$Orientation, orientation)},
	{"_horizontal", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Orientation, _horizontal)},
	{"HORIZONTAL", "Lapple/laf/JRSUIConstants$Orientation;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Orientation, HORIZONTAL)},
	{"_vertical", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Orientation, _vertical)},
	{"VERTICAL", "Lapple/laf/JRSUIConstants$Orientation;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Orientation, VERTICAL)},
	{}
};

$MethodInfo _JRSUIConstants$Orientation_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$Orientation::*)(int8_t)>(&JRSUIConstants$Orientation::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$Orientation_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$Orientation", "apple.laf.JRSUIConstants", "Orientation", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$Orientation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$Orientation",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$Orientation_FieldInfo_,
	_JRSUIConstants$Orientation_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$Orientation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$Orientation($Class* clazz) {
	return $of($alloc(JRSUIConstants$Orientation));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$Orientation::orientation = nullptr;
JRSUIConstants$Orientation* JRSUIConstants$Orientation::HORIZONTAL = nullptr;
JRSUIConstants$Orientation* JRSUIConstants$Orientation::VERTICAL = nullptr;

void JRSUIConstants$Orientation::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$Orientation::orientation, value);
}

$String* JRSUIConstants$Orientation::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$Orientation::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$Orientation($Class* class$) {
	$assignStatic(JRSUIConstants$Orientation::orientation, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$Orientation::MASK, JRSUIConstants$Orientation::SHIFT));
	$assignStatic(JRSUIConstants$Orientation::HORIZONTAL, $new(JRSUIConstants$Orientation, JRSUIConstants$Orientation::_horizontal));
	$assignStatic(JRSUIConstants$Orientation::VERTICAL, $new(JRSUIConstants$Orientation, JRSUIConstants$Orientation::_vertical));
}

JRSUIConstants$Orientation::JRSUIConstants$Orientation() {
}

$Class* JRSUIConstants$Orientation::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$Orientation, name, initialize, &_JRSUIConstants$Orientation_ClassInfo_, clinit$JRSUIConstants$Orientation, allocate$JRSUIConstants$Orientation);
	return class$;
}

$Class* JRSUIConstants$Orientation::class$ = nullptr;

	} // laf
} // apple