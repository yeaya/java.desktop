#include <sun/awt/X11/XTextAreaPeer$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type.h>
#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer.h>
#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <jcpp.h>

#undef BAR
#undef BUTTON
#undef TEXT

using $XTextAreaPeer$JavaMouseEventHandler$Pointer$TypeArray = $Array<::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $XTextAreaPeer = ::sun::awt::X11::XTextAreaPeer;
using $XTextAreaPeer$JavaMouseEventHandler = ::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler;
using $XTextAreaPeer$JavaMouseEventHandler$Pointer = ::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer;
using $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type = ::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer$1_FieldInfo_[] = {
	{"$SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XTextAreaPeer$1, $SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type)},
	{}
};

$EnclosingMethodInfo _XTextAreaPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XTextAreaPeer",
	nullptr,
	nullptr
};

$InnerClassInfo _XTextAreaPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _XTextAreaPeer$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.awt.X11.XTextAreaPeer$1",
	"java.lang.Object",
	nullptr,
	_XTextAreaPeer$1_FieldInfo_,
	nullptr,
	nullptr,
	&_XTextAreaPeer$1_EnclosingMethodInfo_,
	_XTextAreaPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$1($Class* clazz) {
	return $of($alloc(XTextAreaPeer$1));
}

$ints* XTextAreaPeer$1::$SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type = nullptr;

void clinit$XTextAreaPeer$1($Class* class$) {
	$assignStatic(XTextAreaPeer$1::$SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, $new($ints, $($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::values())->length));
	{
		try {
			$nc(XTextAreaPeer$1::$SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type)->set($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::TEXT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(XTextAreaPeer$1::$SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type)->set($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(XTextAreaPeer$1::$SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type)->set($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BUTTON->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

XTextAreaPeer$1::XTextAreaPeer$1() {
}

$Class* XTextAreaPeer$1::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$1, name, initialize, &_XTextAreaPeer$1_ClassInfo_, clinit$XTextAreaPeer$1, allocate$XTextAreaPeer$1);
	return class$;
}

$Class* XTextAreaPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun