#include <java/awt/PageAttributes$ColorType.h>

#include <java/awt/AttributeValue.h>
#include <java/awt/PageAttributes.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef COLOR
#undef I_COLOR
#undef I_MONOCHROME
#undef MONOCHROME
#undef NAMES

using $AttributeValue = ::java::awt::AttributeValue;
using $PageAttributes = ::java::awt::PageAttributes;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _PageAttributes$ColorType_FieldInfo_[] = {
	{"I_COLOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$ColorType, I_COLOR)},
	{"I_MONOCHROME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$ColorType, I_MONOCHROME)},
	{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PageAttributes$ColorType, NAMES)},
	{"COLOR", "Ljava/awt/PageAttributes$ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$ColorType, COLOR)},
	{"MONOCHROME", "Ljava/awt/PageAttributes$ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$ColorType, MONOCHROME)},
	{}
};

$MethodInfo _PageAttributes$ColorType_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PageAttributes$ColorType::*)(int32_t)>(&PageAttributes$ColorType::init$))},
	{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _PageAttributes$ColorType_InnerClassesInfo_[] = {
	{"java.awt.PageAttributes$ColorType", "java.awt.PageAttributes", "ColorType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PageAttributes$ColorType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.PageAttributes$ColorType",
	"java.awt.AttributeValue",
	nullptr,
	_PageAttributes$ColorType_FieldInfo_,
	_PageAttributes$ColorType_MethodInfo_,
	nullptr,
	nullptr,
	_PageAttributes$ColorType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.PageAttributes"
};

$Object* allocate$PageAttributes$ColorType($Class* clazz) {
	return $of($alloc(PageAttributes$ColorType));
}

$StringArray* PageAttributes$ColorType::NAMES = nullptr;

PageAttributes$ColorType* PageAttributes$ColorType::COLOR = nullptr;

PageAttributes$ColorType* PageAttributes$ColorType::MONOCHROME = nullptr;

void PageAttributes$ColorType::init$(int32_t type) {
	$AttributeValue::init$(type, PageAttributes$ColorType::NAMES);
}

$String* PageAttributes$ColorType::toString() {
	return $AttributeValue::toString();
}

int32_t PageAttributes$ColorType::hashCode() {
	return $AttributeValue::hashCode();
}

void clinit$PageAttributes$ColorType($Class* class$) {
	$assignStatic(PageAttributes$ColorType::NAMES, $new($StringArray, {
		"color"_s,
		"monochrome"_s
	}));
	$assignStatic(PageAttributes$ColorType::COLOR, $new(PageAttributes$ColorType, PageAttributes$ColorType::I_COLOR));
	$assignStatic(PageAttributes$ColorType::MONOCHROME, $new(PageAttributes$ColorType, PageAttributes$ColorType::I_MONOCHROME));
}

PageAttributes$ColorType::PageAttributes$ColorType() {
}

$Class* PageAttributes$ColorType::load$($String* name, bool initialize) {
	$loadClass(PageAttributes$ColorType, name, initialize, &_PageAttributes$ColorType_ClassInfo_, clinit$PageAttributes$ColorType, allocate$PageAttributes$ColorType);
	return class$;
}

$Class* PageAttributes$ColorType::class$ = nullptr;

	} // awt
} // java