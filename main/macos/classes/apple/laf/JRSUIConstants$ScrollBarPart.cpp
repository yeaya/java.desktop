#include <apple/laf/JRSUIConstants$ScrollBarPart.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef ARROW_MAX
#undef ARROW_MAX_INSIDE
#undef ARROW_MIN
#undef ARROW_MIN_INSIDE
#undef MASK
#undef NONE
#undef SHIFT
#undef SIZE
#undef THUMB
#undef TRACK_MAX
#undef TRACK_MIN

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$ScrollBarPart_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarPart, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarPart, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarPart, MASK)},
	{"scrollBarPart", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarPart, scrollBarPart)},
	{"_none", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarPart, _none)},
	{"NONE", "Lapple/laf/JRSUIConstants$ScrollBarPart;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarPart, NONE)},
	{"_thumb", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarPart, _thumb)},
	{"THUMB", "Lapple/laf/JRSUIConstants$ScrollBarPart;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarPart, THUMB)},
	{"_arrowMin", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarPart, _arrowMin)},
	{"ARROW_MIN", "Lapple/laf/JRSUIConstants$ScrollBarPart;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarPart, ARROW_MIN)},
	{"_arrowMax", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarPart, _arrowMax)},
	{"ARROW_MAX", "Lapple/laf/JRSUIConstants$ScrollBarPart;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarPart, ARROW_MAX)},
	{"_arrowMaxInside", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarPart, _arrowMaxInside)},
	{"ARROW_MAX_INSIDE", "Lapple/laf/JRSUIConstants$ScrollBarPart;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarPart, ARROW_MAX_INSIDE)},
	{"_arrowMinInside", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarPart, _arrowMinInside)},
	{"ARROW_MIN_INSIDE", "Lapple/laf/JRSUIConstants$ScrollBarPart;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarPart, ARROW_MIN_INSIDE)},
	{"_trackMin", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarPart, _trackMin)},
	{"TRACK_MIN", "Lapple/laf/JRSUIConstants$ScrollBarPart;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarPart, TRACK_MIN)},
	{"_trackMax", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$ScrollBarPart, _trackMax)},
	{"TRACK_MAX", "Lapple/laf/JRSUIConstants$ScrollBarPart;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$ScrollBarPart, TRACK_MAX)},
	{}
};

$MethodInfo _JRSUIConstants$ScrollBarPart_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$ScrollBarPart::*)(int8_t)>(&JRSUIConstants$ScrollBarPart::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$ScrollBarPart_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$ScrollBarPart", "apple.laf.JRSUIConstants", "ScrollBarPart", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$ScrollBarPart_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$ScrollBarPart",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$ScrollBarPart_FieldInfo_,
	_JRSUIConstants$ScrollBarPart_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$ScrollBarPart_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$ScrollBarPart($Class* clazz) {
	return $of($alloc(JRSUIConstants$ScrollBarPart));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$ScrollBarPart::scrollBarPart = nullptr;
JRSUIConstants$ScrollBarPart* JRSUIConstants$ScrollBarPart::NONE = nullptr;
JRSUIConstants$ScrollBarPart* JRSUIConstants$ScrollBarPart::THUMB = nullptr;
JRSUIConstants$ScrollBarPart* JRSUIConstants$ScrollBarPart::ARROW_MIN = nullptr;
JRSUIConstants$ScrollBarPart* JRSUIConstants$ScrollBarPart::ARROW_MAX = nullptr;
JRSUIConstants$ScrollBarPart* JRSUIConstants$ScrollBarPart::ARROW_MAX_INSIDE = nullptr;
JRSUIConstants$ScrollBarPart* JRSUIConstants$ScrollBarPart::ARROW_MIN_INSIDE = nullptr;
JRSUIConstants$ScrollBarPart* JRSUIConstants$ScrollBarPart::TRACK_MIN = nullptr;
JRSUIConstants$ScrollBarPart* JRSUIConstants$ScrollBarPart::TRACK_MAX = nullptr;

void JRSUIConstants$ScrollBarPart::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$ScrollBarPart::scrollBarPart, value);
}

$String* JRSUIConstants$ScrollBarPart::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$ScrollBarPart::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$ScrollBarPart($Class* class$) {
	$assignStatic(JRSUIConstants$ScrollBarPart::scrollBarPart, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$ScrollBarPart::MASK, JRSUIConstants$ScrollBarPart::SHIFT));
	$assignStatic(JRSUIConstants$ScrollBarPart::NONE, $new(JRSUIConstants$ScrollBarPart, JRSUIConstants$ScrollBarPart::_none));
	$assignStatic(JRSUIConstants$ScrollBarPart::THUMB, $new(JRSUIConstants$ScrollBarPart, JRSUIConstants$ScrollBarPart::_thumb));
	$assignStatic(JRSUIConstants$ScrollBarPart::ARROW_MIN, $new(JRSUIConstants$ScrollBarPart, JRSUIConstants$ScrollBarPart::_arrowMin));
	$assignStatic(JRSUIConstants$ScrollBarPart::ARROW_MAX, $new(JRSUIConstants$ScrollBarPart, JRSUIConstants$ScrollBarPart::_arrowMax));
	$assignStatic(JRSUIConstants$ScrollBarPart::ARROW_MAX_INSIDE, $new(JRSUIConstants$ScrollBarPart, JRSUIConstants$ScrollBarPart::_arrowMaxInside));
	$assignStatic(JRSUIConstants$ScrollBarPart::ARROW_MIN_INSIDE, $new(JRSUIConstants$ScrollBarPart, JRSUIConstants$ScrollBarPart::_arrowMinInside));
	$assignStatic(JRSUIConstants$ScrollBarPart::TRACK_MIN, $new(JRSUIConstants$ScrollBarPart, JRSUIConstants$ScrollBarPart::_trackMin));
	$assignStatic(JRSUIConstants$ScrollBarPart::TRACK_MAX, $new(JRSUIConstants$ScrollBarPart, JRSUIConstants$ScrollBarPart::_trackMax));
}

JRSUIConstants$ScrollBarPart::JRSUIConstants$ScrollBarPart() {
}

$Class* JRSUIConstants$ScrollBarPart::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$ScrollBarPart, name, initialize, &_JRSUIConstants$ScrollBarPart_ClassInfo_, clinit$JRSUIConstants$ScrollBarPart, allocate$JRSUIConstants$ScrollBarPart);
	return class$;
}

$Class* JRSUIConstants$ScrollBarPart::class$ = nullptr;

	} // laf
} // apple