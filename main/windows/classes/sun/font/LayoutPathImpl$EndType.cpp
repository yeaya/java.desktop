#include <sun/font/LayoutPathImpl$EndType.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/LayoutPathImpl.h>
#include <jcpp.h>

#undef CLOSED
#undef EXTENDED
#undef PINNED

using $LayoutPathImpl$EndTypeArray = $Array<::sun::font::LayoutPathImpl$EndType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LayoutPathImpl = ::sun::font::LayoutPathImpl;

namespace sun {
	namespace font {

$FieldInfo _LayoutPathImpl$EndType_FieldInfo_[] = {
	{"PINNED", "Lsun/font/LayoutPathImpl$EndType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LayoutPathImpl$EndType, PINNED)},
	{"EXTENDED", "Lsun/font/LayoutPathImpl$EndType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LayoutPathImpl$EndType, EXTENDED)},
	{"CLOSED", "Lsun/font/LayoutPathImpl$EndType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LayoutPathImpl$EndType, CLOSED)},
	{"$VALUES", "[Lsun/font/LayoutPathImpl$EndType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LayoutPathImpl$EndType, $VALUES)},
	{}
};

$MethodInfo _LayoutPathImpl$EndType_MethodInfo_[] = {
	{"$values", "()[Lsun/font/LayoutPathImpl$EndType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$LayoutPathImpl$EndTypeArray*(*)()>(&LayoutPathImpl$EndType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(LayoutPathImpl$EndType::*)($String*,int32_t)>(&LayoutPathImpl$EndType::init$))},
	{"isClosed", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(LayoutPathImpl$EndType::*)()>(&LayoutPathImpl$EndType::isClosed))},
	{"isExtended", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(LayoutPathImpl$EndType::*)()>(&LayoutPathImpl$EndType::isExtended))},
	{"isPinned", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(LayoutPathImpl$EndType::*)()>(&LayoutPathImpl$EndType::isPinned))},
	{"valueOf", "(Ljava/lang/String;)Lsun/font/LayoutPathImpl$EndType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LayoutPathImpl$EndType*(*)($String*)>(&LayoutPathImpl$EndType::valueOf))},
	{"values", "()[Lsun/font/LayoutPathImpl$EndType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LayoutPathImpl$EndTypeArray*(*)()>(&LayoutPathImpl$EndType::values))},
	{}
};

$InnerClassInfo _LayoutPathImpl$EndType_InnerClassesInfo_[] = {
	{"sun.font.LayoutPathImpl$EndType", "sun.font.LayoutPathImpl", "EndType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LayoutPathImpl$EndType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.font.LayoutPathImpl$EndType",
	"java.lang.Enum",
	nullptr,
	_LayoutPathImpl$EndType_FieldInfo_,
	_LayoutPathImpl$EndType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/font/LayoutPathImpl$EndType;>;",
	nullptr,
	_LayoutPathImpl$EndType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.LayoutPathImpl"
};

$Object* allocate$LayoutPathImpl$EndType($Class* clazz) {
	return $of($alloc(LayoutPathImpl$EndType));
}

LayoutPathImpl$EndType* LayoutPathImpl$EndType::PINNED = nullptr;
LayoutPathImpl$EndType* LayoutPathImpl$EndType::EXTENDED = nullptr;
LayoutPathImpl$EndType* LayoutPathImpl$EndType::CLOSED = nullptr;
$LayoutPathImpl$EndTypeArray* LayoutPathImpl$EndType::$VALUES = nullptr;

$LayoutPathImpl$EndTypeArray* LayoutPathImpl$EndType::$values() {
	$init(LayoutPathImpl$EndType);
	return $new($LayoutPathImpl$EndTypeArray, {
		LayoutPathImpl$EndType::PINNED,
		LayoutPathImpl$EndType::EXTENDED,
		LayoutPathImpl$EndType::CLOSED
	});
}

$LayoutPathImpl$EndTypeArray* LayoutPathImpl$EndType::values() {
	$init(LayoutPathImpl$EndType);
	return $cast($LayoutPathImpl$EndTypeArray, LayoutPathImpl$EndType::$VALUES->clone());
}

LayoutPathImpl$EndType* LayoutPathImpl$EndType::valueOf($String* name) {
	$init(LayoutPathImpl$EndType);
	return $cast(LayoutPathImpl$EndType, $Enum::valueOf(LayoutPathImpl$EndType::class$, name));
}

void LayoutPathImpl$EndType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

bool LayoutPathImpl$EndType::isPinned() {
	return this == LayoutPathImpl$EndType::PINNED;
}

bool LayoutPathImpl$EndType::isExtended() {
	return this == LayoutPathImpl$EndType::EXTENDED;
}

bool LayoutPathImpl$EndType::isClosed() {
	return this == LayoutPathImpl$EndType::CLOSED;
}

void clinit$LayoutPathImpl$EndType($Class* class$) {
	$assignStatic(LayoutPathImpl$EndType::PINNED, $new(LayoutPathImpl$EndType, "PINNED"_s, 0));
	$assignStatic(LayoutPathImpl$EndType::EXTENDED, $new(LayoutPathImpl$EndType, "EXTENDED"_s, 1));
	$assignStatic(LayoutPathImpl$EndType::CLOSED, $new(LayoutPathImpl$EndType, "CLOSED"_s, 2));
	$assignStatic(LayoutPathImpl$EndType::$VALUES, LayoutPathImpl$EndType::$values());
}

LayoutPathImpl$EndType::LayoutPathImpl$EndType() {
}

$Class* LayoutPathImpl$EndType::load$($String* name, bool initialize) {
	$loadClass(LayoutPathImpl$EndType, name, initialize, &_LayoutPathImpl$EndType_ClassInfo_, clinit$LayoutPathImpl$EndType, allocate$LayoutPathImpl$EndType);
	return class$;
}

$Class* LayoutPathImpl$EndType::class$ = nullptr;

	} // font
} // sun