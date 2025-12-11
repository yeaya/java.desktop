#include <apple/laf/JRSUIConstants$AlignmentHorizontal.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef CENTER
#undef LEFT
#undef MASK
#undef RIGHT
#undef SHIFT
#undef SIZE

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$AlignmentHorizontal_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$AlignmentHorizontal, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$AlignmentHorizontal, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$AlignmentHorizontal, MASK)},
	{"alignmentHorizontal", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$AlignmentHorizontal, alignmentHorizontal)},
	{"_left", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$AlignmentHorizontal, _left)},
	{"LEFT", "Lapple/laf/JRSUIConstants$AlignmentHorizontal;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$AlignmentHorizontal, LEFT)},
	{"_center", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$AlignmentHorizontal, _center)},
	{"CENTER", "Lapple/laf/JRSUIConstants$AlignmentHorizontal;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$AlignmentHorizontal, CENTER)},
	{"_right", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$AlignmentHorizontal, _right)},
	{"RIGHT", "Lapple/laf/JRSUIConstants$AlignmentHorizontal;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$AlignmentHorizontal, RIGHT)},
	{}
};

$MethodInfo _JRSUIConstants$AlignmentHorizontal_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$AlignmentHorizontal::*)(int8_t)>(&JRSUIConstants$AlignmentHorizontal::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$AlignmentHorizontal_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$AlignmentHorizontal", "apple.laf.JRSUIConstants", "AlignmentHorizontal", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$AlignmentHorizontal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$AlignmentHorizontal",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$AlignmentHorizontal_FieldInfo_,
	_JRSUIConstants$AlignmentHorizontal_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$AlignmentHorizontal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$AlignmentHorizontal($Class* clazz) {
	return $of($alloc(JRSUIConstants$AlignmentHorizontal));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$AlignmentHorizontal::alignmentHorizontal = nullptr;
JRSUIConstants$AlignmentHorizontal* JRSUIConstants$AlignmentHorizontal::LEFT = nullptr;
JRSUIConstants$AlignmentHorizontal* JRSUIConstants$AlignmentHorizontal::CENTER = nullptr;
JRSUIConstants$AlignmentHorizontal* JRSUIConstants$AlignmentHorizontal::RIGHT = nullptr;

void JRSUIConstants$AlignmentHorizontal::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$AlignmentHorizontal::alignmentHorizontal, value);
}

$String* JRSUIConstants$AlignmentHorizontal::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$AlignmentHorizontal::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$AlignmentHorizontal($Class* class$) {
	$assignStatic(JRSUIConstants$AlignmentHorizontal::alignmentHorizontal, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$AlignmentHorizontal::MASK, JRSUIConstants$AlignmentHorizontal::SHIFT));
	$assignStatic(JRSUIConstants$AlignmentHorizontal::LEFT, $new(JRSUIConstants$AlignmentHorizontal, JRSUIConstants$AlignmentHorizontal::_left));
	$assignStatic(JRSUIConstants$AlignmentHorizontal::CENTER, $new(JRSUIConstants$AlignmentHorizontal, JRSUIConstants$AlignmentHorizontal::_center));
	$assignStatic(JRSUIConstants$AlignmentHorizontal::RIGHT, $new(JRSUIConstants$AlignmentHorizontal, JRSUIConstants$AlignmentHorizontal::_right));
}

JRSUIConstants$AlignmentHorizontal::JRSUIConstants$AlignmentHorizontal() {
}

$Class* JRSUIConstants$AlignmentHorizontal::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$AlignmentHorizontal, name, initialize, &_JRSUIConstants$AlignmentHorizontal_ClassInfo_, clinit$JRSUIConstants$AlignmentHorizontal, allocate$JRSUIConstants$AlignmentHorizontal);
	return class$;
}

$Class* JRSUIConstants$AlignmentHorizontal::class$ = nullptr;

	} // laf
} // apple