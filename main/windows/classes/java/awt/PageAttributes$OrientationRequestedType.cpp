#include <java/awt/PageAttributes$OrientationRequestedType.h>

#include <java/awt/AttributeValue.h>
#include <java/awt/PageAttributes.h>
#include <jcpp.h>

#undef I_LANDSCAPE
#undef I_PORTRAIT
#undef LANDSCAPE
#undef NAMES
#undef PORTRAIT

using $AttributeValue = ::java::awt::AttributeValue;
using $PageAttributes = ::java::awt::PageAttributes;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _PageAttributes$OrientationRequestedType_FieldInfo_[] = {
	{"I_PORTRAIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$OrientationRequestedType, I_PORTRAIT)},
	{"I_LANDSCAPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$OrientationRequestedType, I_LANDSCAPE)},
	{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PageAttributes$OrientationRequestedType, NAMES)},
	{"PORTRAIT", "Ljava/awt/PageAttributes$OrientationRequestedType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$OrientationRequestedType, PORTRAIT)},
	{"LANDSCAPE", "Ljava/awt/PageAttributes$OrientationRequestedType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$OrientationRequestedType, LANDSCAPE)},
	{}
};

$MethodInfo _PageAttributes$OrientationRequestedType_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PageAttributes$OrientationRequestedType::*)(int32_t)>(&PageAttributes$OrientationRequestedType::init$))},
	{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _PageAttributes$OrientationRequestedType_InnerClassesInfo_[] = {
	{"java.awt.PageAttributes$OrientationRequestedType", "java.awt.PageAttributes", "OrientationRequestedType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PageAttributes$OrientationRequestedType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.PageAttributes$OrientationRequestedType",
	"java.awt.AttributeValue",
	nullptr,
	_PageAttributes$OrientationRequestedType_FieldInfo_,
	_PageAttributes$OrientationRequestedType_MethodInfo_,
	nullptr,
	nullptr,
	_PageAttributes$OrientationRequestedType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.PageAttributes"
};

$Object* allocate$PageAttributes$OrientationRequestedType($Class* clazz) {
	return $of($alloc(PageAttributes$OrientationRequestedType));
}

$StringArray* PageAttributes$OrientationRequestedType::NAMES = nullptr;
PageAttributes$OrientationRequestedType* PageAttributes$OrientationRequestedType::PORTRAIT = nullptr;
PageAttributes$OrientationRequestedType* PageAttributes$OrientationRequestedType::LANDSCAPE = nullptr;

void PageAttributes$OrientationRequestedType::init$(int32_t type) {
	$AttributeValue::init$(type, PageAttributes$OrientationRequestedType::NAMES);
}

$String* PageAttributes$OrientationRequestedType::toString() {
	return $AttributeValue::toString();
}

int32_t PageAttributes$OrientationRequestedType::hashCode() {
	return $AttributeValue::hashCode();
}

void clinit$PageAttributes$OrientationRequestedType($Class* class$) {
	$assignStatic(PageAttributes$OrientationRequestedType::NAMES, $new($StringArray, {
		"portrait"_s,
		"landscape"_s
	}));
	$assignStatic(PageAttributes$OrientationRequestedType::PORTRAIT, $new(PageAttributes$OrientationRequestedType, PageAttributes$OrientationRequestedType::I_PORTRAIT));
	$assignStatic(PageAttributes$OrientationRequestedType::LANDSCAPE, $new(PageAttributes$OrientationRequestedType, PageAttributes$OrientationRequestedType::I_LANDSCAPE));
}

PageAttributes$OrientationRequestedType::PageAttributes$OrientationRequestedType() {
}

$Class* PageAttributes$OrientationRequestedType::load$($String* name, bool initialize) {
	$loadClass(PageAttributes$OrientationRequestedType, name, initialize, &_PageAttributes$OrientationRequestedType_ClassInfo_, clinit$PageAttributes$OrientationRequestedType, allocate$PageAttributes$OrientationRequestedType);
	return class$;
}

$Class* PageAttributes$OrientationRequestedType::class$ = nullptr;

	} // awt
} // java