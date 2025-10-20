#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI$1.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI.h>
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
#include <javax/swing/SortOrder.h>
#include <jcpp.h>

#undef ASCENDING
#undef DESCENDING
#undef HOT
#undef NORMAL
#undef PRESSED

using $TMSchema$StateArray = $Array<::com::sun::java::swing::plaf::windows::TMSchema$State>;
using $SortOrderArray = $Array<::javax::swing::SortOrder>;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsTableHeaderUI = ::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $SortOrder = ::javax::swing::SortOrder;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsTableHeaderUI$1_FieldInfo_[] = {
	{"$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsTableHeaderUI$1, $SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)},
	{"$SwitchMap$javax$swing$SortOrder", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsTableHeaderUI$1, $SwitchMap$javax$swing$SortOrder)},
	{}
};

$EnclosingMethodInfo _WindowsTableHeaderUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI",
	nullptr,
	nullptr
};

$InnerClassInfo _WindowsTableHeaderUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _WindowsTableHeaderUI$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$1",
	"java.lang.Object",
	nullptr,
	_WindowsTableHeaderUI$1_FieldInfo_,
	nullptr,
	nullptr,
	&_WindowsTableHeaderUI$1_EnclosingMethodInfo_,
	_WindowsTableHeaderUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI"
};

$Object* allocate$WindowsTableHeaderUI$1($Class* clazz) {
	return $of($alloc(WindowsTableHeaderUI$1));
}

$ints* WindowsTableHeaderUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State = nullptr;
$ints* WindowsTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder = nullptr;

void clinit$WindowsTableHeaderUI$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(WindowsTableHeaderUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State, $new($ints, $($TMSchema$State::values())->length));
	{
		try {
			$nc(WindowsTableHeaderUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::NORMAL->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(WindowsTableHeaderUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::PRESSED->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(WindowsTableHeaderUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->set($TMSchema$State::HOT->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
	$assignStatic(WindowsTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder, $new($ints, $($SortOrder::values())->length));
	{
		try {
			$nc(WindowsTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder)->set($SortOrder::ASCENDING->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(WindowsTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder)->set($SortOrder::DESCENDING->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

WindowsTableHeaderUI$1::WindowsTableHeaderUI$1() {
}

$Class* WindowsTableHeaderUI$1::load$($String* name, bool initialize) {
	$loadClass(WindowsTableHeaderUI$1, name, initialize, &_WindowsTableHeaderUI$1_ClassInfo_, clinit$WindowsTableHeaderUI$1, allocate$WindowsTableHeaderUI$1);
	return class$;
}

$Class* WindowsTableHeaderUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com