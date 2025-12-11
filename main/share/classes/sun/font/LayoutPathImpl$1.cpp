#include <sun/font/LayoutPathImpl$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/font/LayoutPathImpl$EndType.h>
#include <sun/font/LayoutPathImpl.h>
#include <jcpp.h>

#undef CLOSED
#undef EXTENDED
#undef PINNED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LayoutPathImpl$EndType = ::sun::font::LayoutPathImpl$EndType;

namespace sun {
	namespace font {

$FieldInfo _LayoutPathImpl$1_FieldInfo_[] = {
	{"$SwitchMap$sun$font$LayoutPathImpl$EndType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LayoutPathImpl$1, $SwitchMap$sun$font$LayoutPathImpl$EndType)},
	{}
};

$EnclosingMethodInfo _LayoutPathImpl$1_EnclosingMethodInfo_ = {
	"sun.font.LayoutPathImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _LayoutPathImpl$1_InnerClassesInfo_[] = {
	{"sun.font.LayoutPathImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _LayoutPathImpl$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.font.LayoutPathImpl$1",
	"java.lang.Object",
	nullptr,
	_LayoutPathImpl$1_FieldInfo_,
	nullptr,
	nullptr,
	&_LayoutPathImpl$1_EnclosingMethodInfo_,
	_LayoutPathImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.LayoutPathImpl"
};

$Object* allocate$LayoutPathImpl$1($Class* clazz) {
	return $of($alloc(LayoutPathImpl$1));
}

$ints* LayoutPathImpl$1::$SwitchMap$sun$font$LayoutPathImpl$EndType = nullptr;

void clinit$LayoutPathImpl$1($Class* class$) {
	$assignStatic(LayoutPathImpl$1::$SwitchMap$sun$font$LayoutPathImpl$EndType, $new($ints, $($LayoutPathImpl$EndType::values())->length));
	{
		try {
			$nc(LayoutPathImpl$1::$SwitchMap$sun$font$LayoutPathImpl$EndType)->set($LayoutPathImpl$EndType::PINNED->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LayoutPathImpl$1::$SwitchMap$sun$font$LayoutPathImpl$EndType)->set($LayoutPathImpl$EndType::EXTENDED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LayoutPathImpl$1::$SwitchMap$sun$font$LayoutPathImpl$EndType)->set($LayoutPathImpl$EndType::CLOSED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

LayoutPathImpl$1::LayoutPathImpl$1() {
}

$Class* LayoutPathImpl$1::load$($String* name, bool initialize) {
	$loadClass(LayoutPathImpl$1, name, initialize, &_LayoutPathImpl$1_ClassInfo_, clinit$LayoutPathImpl$1, allocate$LayoutPathImpl$1);
	return class$;
}

$Class* LayoutPathImpl$1::class$ = nullptr;

	} // font
} // sun