#include <apple/laf/JRSUIConstants$AlignmentVertical.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef BOTTOM
#undef CENTER
#undef MASK
#undef SHIFT
#undef SIZE
#undef TOP

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$AlignmentVertical_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$AlignmentVertical, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$AlignmentVertical, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$AlignmentVertical, MASK)},
	{"alignmentVertical", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$AlignmentVertical, alignmentVertical)},
	{"_top", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$AlignmentVertical, _top)},
	{"TOP", "Lapple/laf/JRSUIConstants$AlignmentVertical;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$AlignmentVertical, TOP)},
	{"_center", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$AlignmentVertical, _center)},
	{"CENTER", "Lapple/laf/JRSUIConstants$AlignmentVertical;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$AlignmentVertical, CENTER)},
	{"_bottom", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$AlignmentVertical, _bottom)},
	{"BOTTOM", "Lapple/laf/JRSUIConstants$AlignmentVertical;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$AlignmentVertical, BOTTOM)},
	{}
};

$MethodInfo _JRSUIConstants$AlignmentVertical_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$AlignmentVertical::*)(int8_t)>(&JRSUIConstants$AlignmentVertical::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$AlignmentVertical_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$AlignmentVertical", "apple.laf.JRSUIConstants", "AlignmentVertical", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$AlignmentVertical_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$AlignmentVertical",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$AlignmentVertical_FieldInfo_,
	_JRSUIConstants$AlignmentVertical_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$AlignmentVertical_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$AlignmentVertical($Class* clazz) {
	return $of($alloc(JRSUIConstants$AlignmentVertical));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$AlignmentVertical::alignmentVertical = nullptr;
JRSUIConstants$AlignmentVertical* JRSUIConstants$AlignmentVertical::TOP = nullptr;
JRSUIConstants$AlignmentVertical* JRSUIConstants$AlignmentVertical::CENTER = nullptr;
JRSUIConstants$AlignmentVertical* JRSUIConstants$AlignmentVertical::BOTTOM = nullptr;

void JRSUIConstants$AlignmentVertical::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$AlignmentVertical::alignmentVertical, value);
}

$String* JRSUIConstants$AlignmentVertical::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$AlignmentVertical::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$AlignmentVertical($Class* class$) {
	$assignStatic(JRSUIConstants$AlignmentVertical::alignmentVertical, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$AlignmentVertical::MASK, JRSUIConstants$AlignmentVertical::SHIFT));
	$assignStatic(JRSUIConstants$AlignmentVertical::TOP, $new(JRSUIConstants$AlignmentVertical, JRSUIConstants$AlignmentVertical::_top));
	$assignStatic(JRSUIConstants$AlignmentVertical::CENTER, $new(JRSUIConstants$AlignmentVertical, JRSUIConstants$AlignmentVertical::_center));
	$assignStatic(JRSUIConstants$AlignmentVertical::BOTTOM, $new(JRSUIConstants$AlignmentVertical, JRSUIConstants$AlignmentVertical::_bottom));
}

JRSUIConstants$AlignmentVertical::JRSUIConstants$AlignmentVertical() {
}

$Class* JRSUIConstants$AlignmentVertical::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$AlignmentVertical, name, initialize, &_JRSUIConstants$AlignmentVertical_ClassInfo_, clinit$JRSUIConstants$AlignmentVertical, allocate$JRSUIConstants$AlignmentVertical);
	return class$;
}

$Class* JRSUIConstants$AlignmentVertical::class$ = nullptr;

	} // laf
} // apple