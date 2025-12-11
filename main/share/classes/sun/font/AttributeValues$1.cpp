#include <sun/font/AttributeValues$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/font/AttributeValues.h>
#include <sun/font/EAttribute.h>
#include <jcpp.h>

#undef EBACKGROUND
#undef EBIDI_EMBEDDING
#undef ECHAR_REPLACEMENT
#undef EFAMILY
#undef EFONT
#undef EFOREGROUND
#undef EINPUT_METHOD_HIGHLIGHT
#undef EINPUT_METHOD_UNDERLINE
#undef EJUSTIFICATION
#undef EKERNING
#undef ELIGATURES
#undef ENUMERIC_SHAPING
#undef EPOSTURE
#undef ERUN_DIRECTION
#undef ESIZE
#undef ESTRIKETHROUGH
#undef ESUPERSCRIPT
#undef ESWAP_COLORS
#undef ETRACKING
#undef ETRANSFORM
#undef EUNDERLINE
#undef EWEIGHT
#undef EWIDTH

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $EAttribute = ::sun::font::EAttribute;

namespace sun {
	namespace font {

$FieldInfo _AttributeValues$1_FieldInfo_[] = {
	{"$SwitchMap$sun$font$EAttribute", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AttributeValues$1, $SwitchMap$sun$font$EAttribute)},
	{}
};

$EnclosingMethodInfo _AttributeValues$1_EnclosingMethodInfo_ = {
	"sun.font.AttributeValues",
	nullptr,
	nullptr
};

$InnerClassInfo _AttributeValues$1_InnerClassesInfo_[] = {
	{"sun.font.AttributeValues$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _AttributeValues$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.font.AttributeValues$1",
	"java.lang.Object",
	nullptr,
	_AttributeValues$1_FieldInfo_,
	nullptr,
	nullptr,
	&_AttributeValues$1_EnclosingMethodInfo_,
	_AttributeValues$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.AttributeValues"
};

$Object* allocate$AttributeValues$1($Class* clazz) {
	return $of($alloc(AttributeValues$1));
}

$ints* AttributeValues$1::$SwitchMap$sun$font$EAttribute = nullptr;

void clinit$AttributeValues$1($Class* class$) {
	$assignStatic(AttributeValues$1::$SwitchMap$sun$font$EAttribute, $new($ints, $($EAttribute::values())->length));
	{
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::EFAMILY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::EWEIGHT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::EWIDTH->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::EPOSTURE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::ESIZE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::ETRANSFORM->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::ESUPERSCRIPT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::EFONT->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::ECHAR_REPLACEMENT->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::EFOREGROUND->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::EBACKGROUND->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::EUNDERLINE->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::ESTRIKETHROUGH->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::ERUN_DIRECTION->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::EBIDI_EMBEDDING->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::EJUSTIFICATION->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::EINPUT_METHOD_HIGHLIGHT->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::EINPUT_METHOD_UNDERLINE->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::ESWAP_COLORS->ordinal(), 19);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::ENUMERIC_SHAPING->ordinal(), 20);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::EKERNING->ordinal(), 21);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::ELIGATURES->ordinal(), 22);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(AttributeValues$1::$SwitchMap$sun$font$EAttribute)->set($EAttribute::ETRACKING->ordinal(), 23);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

AttributeValues$1::AttributeValues$1() {
}

$Class* AttributeValues$1::load$($String* name, bool initialize) {
	$loadClass(AttributeValues$1, name, initialize, &_AttributeValues$1_ClassInfo_, clinit$AttributeValues$1, allocate$AttributeValues$1);
	return class$;
}

$Class* AttributeValues$1::class$ = nullptr;

	} // font
} // sun