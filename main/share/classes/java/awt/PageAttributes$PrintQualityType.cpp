#include <java/awt/PageAttributes$PrintQualityType.h>

#include <java/awt/AttributeValue.h>
#include <java/awt/PageAttributes.h>
#include <jcpp.h>

#undef DRAFT
#undef HIGH
#undef I_DRAFT
#undef I_HIGH
#undef I_NORMAL
#undef NAMES
#undef NORMAL

using $AttributeValue = ::java::awt::AttributeValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _PageAttributes$PrintQualityType_FieldInfo_[] = {
	{"I_HIGH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$PrintQualityType, I_HIGH)},
	{"I_NORMAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$PrintQualityType, I_NORMAL)},
	{"I_DRAFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$PrintQualityType, I_DRAFT)},
	{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PageAttributes$PrintQualityType, NAMES)},
	{"HIGH", "Ljava/awt/PageAttributes$PrintQualityType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$PrintQualityType, HIGH)},
	{"NORMAL", "Ljava/awt/PageAttributes$PrintQualityType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$PrintQualityType, NORMAL)},
	{"DRAFT", "Ljava/awt/PageAttributes$PrintQualityType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$PrintQualityType, DRAFT)},
	{}
};

$MethodInfo _PageAttributes$PrintQualityType_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PageAttributes$PrintQualityType::*)(int32_t)>(&PageAttributes$PrintQualityType::init$))},
	{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _PageAttributes$PrintQualityType_InnerClassesInfo_[] = {
	{"java.awt.PageAttributes$PrintQualityType", "java.awt.PageAttributes", "PrintQualityType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PageAttributes$PrintQualityType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.PageAttributes$PrintQualityType",
	"java.awt.AttributeValue",
	nullptr,
	_PageAttributes$PrintQualityType_FieldInfo_,
	_PageAttributes$PrintQualityType_MethodInfo_,
	nullptr,
	nullptr,
	_PageAttributes$PrintQualityType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.PageAttributes"
};

$Object* allocate$PageAttributes$PrintQualityType($Class* clazz) {
	return $of($alloc(PageAttributes$PrintQualityType));
}

$StringArray* PageAttributes$PrintQualityType::NAMES = nullptr;
PageAttributes$PrintQualityType* PageAttributes$PrintQualityType::HIGH = nullptr;
PageAttributes$PrintQualityType* PageAttributes$PrintQualityType::NORMAL = nullptr;
PageAttributes$PrintQualityType* PageAttributes$PrintQualityType::DRAFT = nullptr;

void PageAttributes$PrintQualityType::init$(int32_t type) {
	$AttributeValue::init$(type, PageAttributes$PrintQualityType::NAMES);
}

$String* PageAttributes$PrintQualityType::toString() {
	return $AttributeValue::toString();
}

int32_t PageAttributes$PrintQualityType::hashCode() {
	return $AttributeValue::hashCode();
}

void clinit$PageAttributes$PrintQualityType($Class* class$) {
	$assignStatic(PageAttributes$PrintQualityType::NAMES, $new($StringArray, {
		"high"_s,
		"normal"_s,
		"draft"_s
	}));
	$assignStatic(PageAttributes$PrintQualityType::HIGH, $new(PageAttributes$PrintQualityType, PageAttributes$PrintQualityType::I_HIGH));
	$assignStatic(PageAttributes$PrintQualityType::NORMAL, $new(PageAttributes$PrintQualityType, PageAttributes$PrintQualityType::I_NORMAL));
	$assignStatic(PageAttributes$PrintQualityType::DRAFT, $new(PageAttributes$PrintQualityType, PageAttributes$PrintQualityType::I_DRAFT));
}

PageAttributes$PrintQualityType::PageAttributes$PrintQualityType() {
}

$Class* PageAttributes$PrintQualityType::load$($String* name, bool initialize) {
	$loadClass(PageAttributes$PrintQualityType, name, initialize, &_PageAttributes$PrintQualityType_ClassInfo_, clinit$PageAttributes$PrintQualityType, allocate$PageAttributes$PrintQualityType);
	return class$;
}

$Class* PageAttributes$PrintQualityType::class$ = nullptr;

	} // awt
} // java