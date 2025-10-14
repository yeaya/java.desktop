#include <com/sun/java/swing/plaf/windows/WindowsButtonUI$1.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/WindowsButtonUI.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BP_CHECKBOX
#undef BP_PUSHBUTTON
#undef BP_RADIOBUTTON
#undef TP_BUTTON

using $TMSchema$PartArray = $Array<::com::sun::java::swing::plaf::windows::TMSchema$Part>;
using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $WindowsButtonUI = ::com::sun::java::swing::plaf::windows::WindowsButtonUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsButtonUI$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsButtonUI$1, $SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part)},
	{}
};

$EnclosingMethodInfo _WindowsButtonUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsButtonUI",
	nullptr,
	nullptr
};

$InnerClassInfo _WindowsButtonUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsButtonUI$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _WindowsButtonUI$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.java.swing.plaf.windows.WindowsButtonUI$1",
	"java.lang.Object",
	nullptr,
	_WindowsButtonUI$1_FieldInfo_,
	nullptr,
	nullptr,
	&_WindowsButtonUI$1_EnclosingMethodInfo_,
	_WindowsButtonUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsButtonUI"
};

$Object* allocate$WindowsButtonUI$1($Class* clazz) {
	return $of($alloc(WindowsButtonUI$1));
}

$ints* WindowsButtonUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part = nullptr;

void clinit$WindowsButtonUI$1($Class* class$) {
	$assignStatic(WindowsButtonUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part, $new($ints, $($TMSchema$Part::values())->length));
	{
		try {
			$nc(WindowsButtonUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part)->set($TMSchema$Part::BP_RADIOBUTTON->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(WindowsButtonUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part)->set($TMSchema$Part::BP_CHECKBOX->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(WindowsButtonUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part)->set($TMSchema$Part::BP_PUSHBUTTON->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(WindowsButtonUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part)->set($TMSchema$Part::TP_BUTTON->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

WindowsButtonUI$1::WindowsButtonUI$1() {
}

$Class* WindowsButtonUI$1::load$($String* name, bool initialize) {
	$loadClass(WindowsButtonUI$1, name, initialize, &_WindowsButtonUI$1_ClassInfo_, clinit$WindowsButtonUI$1, allocate$WindowsButtonUI$1);
	return class$;
}

$Class* WindowsButtonUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com