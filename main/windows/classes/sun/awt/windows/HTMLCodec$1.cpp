#include <sun/awt/windows/HTMLCodec$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/windows/EHTMLReadMode.h>
#include <sun/awt/windows/HTMLCodec.h>
#include <jcpp.h>

#undef HTML_READ_ALL
#undef HTML_READ_FRAGMENT
#undef HTML_READ_SELECTION

using $EHTMLReadModeArray = $Array<::sun::awt::windows::EHTMLReadMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $EHTMLReadMode = ::sun::awt::windows::EHTMLReadMode;
using $HTMLCodec = ::sun::awt::windows::HTMLCodec;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _HTMLCodec$1_FieldInfo_[] = {
	{"$SwitchMap$sun$awt$windows$EHTMLReadMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HTMLCodec$1, $SwitchMap$sun$awt$windows$EHTMLReadMode)},
	{}
};

$EnclosingMethodInfo _HTMLCodec$1_EnclosingMethodInfo_ = {
	"sun.awt.windows.HTMLCodec",
	nullptr,
	nullptr
};

$InnerClassInfo _HTMLCodec$1_InnerClassesInfo_[] = {
	{"sun.awt.windows.HTMLCodec$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _HTMLCodec$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.awt.windows.HTMLCodec$1",
	"java.lang.Object",
	nullptr,
	_HTMLCodec$1_FieldInfo_,
	nullptr,
	nullptr,
	&_HTMLCodec$1_EnclosingMethodInfo_,
	_HTMLCodec$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.HTMLCodec"
};

$Object* allocate$HTMLCodec$1($Class* clazz) {
	return $of($alloc(HTMLCodec$1));
}

$ints* HTMLCodec$1::$SwitchMap$sun$awt$windows$EHTMLReadMode = nullptr;

void clinit$HTMLCodec$1($Class* class$) {
	$assignStatic(HTMLCodec$1::$SwitchMap$sun$awt$windows$EHTMLReadMode, $new($ints, $($EHTMLReadMode::values())->length));
	{
		try {
			$nc(HTMLCodec$1::$SwitchMap$sun$awt$windows$EHTMLReadMode)->set($EHTMLReadMode::HTML_READ_ALL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HTMLCodec$1::$SwitchMap$sun$awt$windows$EHTMLReadMode)->set($EHTMLReadMode::HTML_READ_FRAGMENT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HTMLCodec$1::$SwitchMap$sun$awt$windows$EHTMLReadMode)->set($EHTMLReadMode::HTML_READ_SELECTION->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

HTMLCodec$1::HTMLCodec$1() {
}

$Class* HTMLCodec$1::load$($String* name, bool initialize) {
	$loadClass(HTMLCodec$1, name, initialize, &_HTMLCodec$1_ClassInfo_, clinit$HTMLCodec$1, allocate$HTMLCodec$1);
	return class$;
}

$Class* HTMLCodec$1::class$ = nullptr;

		} // windows
	} // awt
} // sun