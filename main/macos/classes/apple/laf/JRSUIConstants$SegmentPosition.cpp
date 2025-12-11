#include <apple/laf/JRSUIConstants$SegmentPosition.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef FIRST
#undef LAST
#undef MASK
#undef MIDDLE
#undef ONLY
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

$FieldInfo _JRSUIConstants$SegmentPosition_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentPosition, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentPosition, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentPosition, MASK)},
	{"segmentPosition", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$SegmentPosition, segmentPosition)},
	{"_first", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentPosition, _first)},
	{"FIRST", "Lapple/laf/JRSUIConstants$SegmentPosition;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$SegmentPosition, FIRST)},
	{"_middle", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentPosition, _middle)},
	{"MIDDLE", "Lapple/laf/JRSUIConstants$SegmentPosition;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$SegmentPosition, MIDDLE)},
	{"_last", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentPosition, _last)},
	{"LAST", "Lapple/laf/JRSUIConstants$SegmentPosition;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$SegmentPosition, LAST)},
	{"_only", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$SegmentPosition, _only)},
	{"ONLY", "Lapple/laf/JRSUIConstants$SegmentPosition;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$SegmentPosition, ONLY)},
	{}
};

$MethodInfo _JRSUIConstants$SegmentPosition_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$SegmentPosition::*)(int8_t)>(&JRSUIConstants$SegmentPosition::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$SegmentPosition_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$SegmentPosition", "apple.laf.JRSUIConstants", "SegmentPosition", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$SegmentPosition_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$SegmentPosition",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$SegmentPosition_FieldInfo_,
	_JRSUIConstants$SegmentPosition_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$SegmentPosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$SegmentPosition($Class* clazz) {
	return $of($alloc(JRSUIConstants$SegmentPosition));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$SegmentPosition::segmentPosition = nullptr;
JRSUIConstants$SegmentPosition* JRSUIConstants$SegmentPosition::FIRST = nullptr;
JRSUIConstants$SegmentPosition* JRSUIConstants$SegmentPosition::MIDDLE = nullptr;
JRSUIConstants$SegmentPosition* JRSUIConstants$SegmentPosition::LAST = nullptr;
JRSUIConstants$SegmentPosition* JRSUIConstants$SegmentPosition::ONLY = nullptr;

void JRSUIConstants$SegmentPosition::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$SegmentPosition::segmentPosition, value);
}

$String* JRSUIConstants$SegmentPosition::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$SegmentPosition::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$SegmentPosition($Class* class$) {
	$assignStatic(JRSUIConstants$SegmentPosition::segmentPosition, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$SegmentPosition::MASK, JRSUIConstants$SegmentPosition::SHIFT));
	$assignStatic(JRSUIConstants$SegmentPosition::FIRST, $new(JRSUIConstants$SegmentPosition, JRSUIConstants$SegmentPosition::_first));
	$assignStatic(JRSUIConstants$SegmentPosition::MIDDLE, $new(JRSUIConstants$SegmentPosition, JRSUIConstants$SegmentPosition::_middle));
	$assignStatic(JRSUIConstants$SegmentPosition::LAST, $new(JRSUIConstants$SegmentPosition, JRSUIConstants$SegmentPosition::_last));
	$assignStatic(JRSUIConstants$SegmentPosition::ONLY, $new(JRSUIConstants$SegmentPosition, JRSUIConstants$SegmentPosition::_only));
}

JRSUIConstants$SegmentPosition::JRSUIConstants$SegmentPosition() {
}

$Class* JRSUIConstants$SegmentPosition::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$SegmentPosition, name, initialize, &_JRSUIConstants$SegmentPosition_ClassInfo_, clinit$JRSUIConstants$SegmentPosition, allocate$JRSUIConstants$SegmentPosition);
	return class$;
}

$Class* JRSUIConstants$SegmentPosition::class$ = nullptr;

	} // laf
} // apple