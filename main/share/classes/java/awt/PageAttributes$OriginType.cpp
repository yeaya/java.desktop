#include <java/awt/PageAttributes$OriginType.h>

#include <java/awt/AttributeValue.h>
#include <java/awt/PageAttributes.h>
#include <jcpp.h>

#undef I_PHYSICAL
#undef I_PRINTABLE
#undef NAMES
#undef PHYSICAL
#undef PRINTABLE

using $AttributeValue = ::java::awt::AttributeValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _PageAttributes$OriginType_FieldInfo_[] = {
	{"I_PHYSICAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$OriginType, I_PHYSICAL)},
	{"I_PRINTABLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$OriginType, I_PRINTABLE)},
	{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PageAttributes$OriginType, NAMES)},
	{"PHYSICAL", "Ljava/awt/PageAttributes$OriginType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$OriginType, PHYSICAL)},
	{"PRINTABLE", "Ljava/awt/PageAttributes$OriginType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$OriginType, PRINTABLE)},
	{}
};

$MethodInfo _PageAttributes$OriginType_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PageAttributes$OriginType::*)(int32_t)>(&PageAttributes$OriginType::init$))},
	{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _PageAttributes$OriginType_InnerClassesInfo_[] = {
	{"java.awt.PageAttributes$OriginType", "java.awt.PageAttributes", "OriginType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PageAttributes$OriginType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.PageAttributes$OriginType",
	"java.awt.AttributeValue",
	nullptr,
	_PageAttributes$OriginType_FieldInfo_,
	_PageAttributes$OriginType_MethodInfo_,
	nullptr,
	nullptr,
	_PageAttributes$OriginType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.PageAttributes"
};

$Object* allocate$PageAttributes$OriginType($Class* clazz) {
	return $of($alloc(PageAttributes$OriginType));
}

$StringArray* PageAttributes$OriginType::NAMES = nullptr;
PageAttributes$OriginType* PageAttributes$OriginType::PHYSICAL = nullptr;
PageAttributes$OriginType* PageAttributes$OriginType::PRINTABLE = nullptr;

void PageAttributes$OriginType::init$(int32_t type) {
	$AttributeValue::init$(type, PageAttributes$OriginType::NAMES);
}

$String* PageAttributes$OriginType::toString() {
	return $AttributeValue::toString();
}

int32_t PageAttributes$OriginType::hashCode() {
	return $AttributeValue::hashCode();
}

void clinit$PageAttributes$OriginType($Class* class$) {
	$assignStatic(PageAttributes$OriginType::NAMES, $new($StringArray, {
		"physical"_s,
		"printable"_s
	}));
	$assignStatic(PageAttributes$OriginType::PHYSICAL, $new(PageAttributes$OriginType, PageAttributes$OriginType::I_PHYSICAL));
	$assignStatic(PageAttributes$OriginType::PRINTABLE, $new(PageAttributes$OriginType, PageAttributes$OriginType::I_PRINTABLE));
}

PageAttributes$OriginType::PageAttributes$OriginType() {
}

$Class* PageAttributes$OriginType::load$($String* name, bool initialize) {
	$loadClass(PageAttributes$OriginType, name, initialize, &_PageAttributes$OriginType_ClassInfo_, clinit$PageAttributes$OriginType, allocate$PageAttributes$OriginType);
	return class$;
}

$Class* PageAttributes$OriginType::class$ = nullptr;

	} // awt
} // java