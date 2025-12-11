#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$3.h>

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/LayoutStyle.h>
#include <jcpp.h>

#undef INDENT
#undef RELATED
#undef UNRELATED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$3_FieldInfo_[] = {
	{"$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsLookAndFeel$3, $SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)},
	{}
};

$EnclosingMethodInfo _WindowsLookAndFeel$3_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel",
	nullptr,
	nullptr
};

$InnerClassInfo _WindowsLookAndFeel$3_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _WindowsLookAndFeel$3_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$3",
	"java.lang.Object",
	nullptr,
	_WindowsLookAndFeel$3_FieldInfo_,
	nullptr,
	nullptr,
	&_WindowsLookAndFeel$3_EnclosingMethodInfo_,
	_WindowsLookAndFeel$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$3($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$3));
}

$ints* WindowsLookAndFeel$3::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement = nullptr;

void clinit$WindowsLookAndFeel$3($Class* class$) {
	$assignStatic(WindowsLookAndFeel$3::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement, $new($ints, $($LayoutStyle$ComponentPlacement::values())->length));
	{
		try {
			$nc(WindowsLookAndFeel$3::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)->set($LayoutStyle$ComponentPlacement::INDENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(WindowsLookAndFeel$3::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)->set($LayoutStyle$ComponentPlacement::RELATED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(WindowsLookAndFeel$3::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)->set($LayoutStyle$ComponentPlacement::UNRELATED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

WindowsLookAndFeel$3::WindowsLookAndFeel$3() {
}

$Class* WindowsLookAndFeel$3::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$3, name, initialize, &_WindowsLookAndFeel$3_ClassInfo_, clinit$WindowsLookAndFeel$3, allocate$WindowsLookAndFeel$3);
	return class$;
}

$Class* WindowsLookAndFeel$3::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com