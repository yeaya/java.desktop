#include <apple/laf/JRSUIConstants$Size.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef LARGE
#undef MASK
#undef MINI
#undef REGULAR
#undef SHIFT
#undef SIZE
#undef SMALL

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$Size_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Size, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Size, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Size, MASK)},
	{"size", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$Size, size)},
	{"_mini", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Size, _mini)},
	{"MINI", "Lapple/laf/JRSUIConstants$Size;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Size, MINI)},
	{"_small", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Size, _small)},
	{"SMALL", "Lapple/laf/JRSUIConstants$Size;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Size, SMALL)},
	{"_regular", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Size, _regular)},
	{"REGULAR", "Lapple/laf/JRSUIConstants$Size;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Size, REGULAR)},
	{"_large", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Size, _large)},
	{"LARGE", "Lapple/laf/JRSUIConstants$Size;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Size, LARGE)},
	{}
};

$MethodInfo _JRSUIConstants$Size_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$Size::*)(int8_t)>(&JRSUIConstants$Size::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$Size_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$Size", "apple.laf.JRSUIConstants", "Size", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$Size_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$Size",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$Size_FieldInfo_,
	_JRSUIConstants$Size_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$Size_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$Size($Class* clazz) {
	return $of($alloc(JRSUIConstants$Size));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$Size::size = nullptr;
JRSUIConstants$Size* JRSUIConstants$Size::MINI = nullptr;
JRSUIConstants$Size* JRSUIConstants$Size::SMALL = nullptr;
JRSUIConstants$Size* JRSUIConstants$Size::REGULAR = nullptr;
JRSUIConstants$Size* JRSUIConstants$Size::LARGE = nullptr;

void JRSUIConstants$Size::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$Size::size, value);
}

$String* JRSUIConstants$Size::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$Size::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$Size($Class* class$) {
	$assignStatic(JRSUIConstants$Size::size, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$Size::MASK, JRSUIConstants$Size::SHIFT));
	$assignStatic(JRSUIConstants$Size::MINI, $new(JRSUIConstants$Size, JRSUIConstants$Size::_mini));
	$assignStatic(JRSUIConstants$Size::SMALL, $new(JRSUIConstants$Size, JRSUIConstants$Size::_small));
	$assignStatic(JRSUIConstants$Size::REGULAR, $new(JRSUIConstants$Size, JRSUIConstants$Size::_regular));
	$assignStatic(JRSUIConstants$Size::LARGE, $new(JRSUIConstants$Size, JRSUIConstants$Size::_large));
}

JRSUIConstants$Size::JRSUIConstants$Size() {
}

$Class* JRSUIConstants$Size::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$Size, name, initialize, &_JRSUIConstants$Size_ClassInfo_, clinit$JRSUIConstants$Size, allocate$JRSUIConstants$Size);
	return class$;
}

$Class* JRSUIConstants$Size::class$ = nullptr;

	} // laf
} // apple