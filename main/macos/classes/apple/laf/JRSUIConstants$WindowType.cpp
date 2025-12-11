#include <apple/laf/JRSUIConstants$WindowType.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef DOCUMENT
#undef MASK
#undef SHIFT
#undef SIZE
#undef TITLELESS_UTILITY
#undef UTILITY

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$WindowType_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowType, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowType, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowType, MASK)},
	{"windowType", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$WindowType, windowType)},
	{"_document", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowType, _document)},
	{"DOCUMENT", "Lapple/laf/JRSUIConstants$WindowType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$WindowType, DOCUMENT)},
	{"_utility", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowType, _utility)},
	{"UTILITY", "Lapple/laf/JRSUIConstants$WindowType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$WindowType, UTILITY)},
	{"_titlelessUtility", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$WindowType, _titlelessUtility)},
	{"TITLELESS_UTILITY", "Lapple/laf/JRSUIConstants$WindowType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$WindowType, TITLELESS_UTILITY)},
	{}
};

$MethodInfo _JRSUIConstants$WindowType_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$WindowType::*)(int8_t)>(&JRSUIConstants$WindowType::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$WindowType_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$WindowType", "apple.laf.JRSUIConstants", "WindowType", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$WindowType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$WindowType",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$WindowType_FieldInfo_,
	_JRSUIConstants$WindowType_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$WindowType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$WindowType($Class* clazz) {
	return $of($alloc(JRSUIConstants$WindowType));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$WindowType::windowType = nullptr;
JRSUIConstants$WindowType* JRSUIConstants$WindowType::DOCUMENT = nullptr;
JRSUIConstants$WindowType* JRSUIConstants$WindowType::UTILITY = nullptr;
JRSUIConstants$WindowType* JRSUIConstants$WindowType::TITLELESS_UTILITY = nullptr;

void JRSUIConstants$WindowType::init$(int8_t value) {
	$JRSUIConstants$Property::init$(JRSUIConstants$WindowType::windowType, value);
}

$String* JRSUIConstants$WindowType::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$WindowType::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$WindowType($Class* class$) {
	$assignStatic(JRSUIConstants$WindowType::windowType, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$WindowType::MASK, JRSUIConstants$WindowType::SHIFT));
	$assignStatic(JRSUIConstants$WindowType::DOCUMENT, $new(JRSUIConstants$WindowType, JRSUIConstants$WindowType::_document));
	$assignStatic(JRSUIConstants$WindowType::UTILITY, $new(JRSUIConstants$WindowType, JRSUIConstants$WindowType::_utility));
	$assignStatic(JRSUIConstants$WindowType::TITLELESS_UTILITY, $new(JRSUIConstants$WindowType, JRSUIConstants$WindowType::_titlelessUtility));
}

JRSUIConstants$WindowType::JRSUIConstants$WindowType() {
}

$Class* JRSUIConstants$WindowType::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$WindowType, name, initialize, &_JRSUIConstants$WindowType_ClassInfo_, clinit$JRSUIConstants$WindowType, allocate$JRSUIConstants$WindowType);
	return class$;
}

$Class* JRSUIConstants$WindowType::class$ = nullptr;

	} // laf
} // apple