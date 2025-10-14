#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$1.h>

#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$VistaMenuItemCheckIconFactory.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/WindowsPopupMenuUI.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $WindowsIconFactory$VistaMenuItemCheckIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$VistaMenuItemCheckIconFactory;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsPopupMenuUI = ::com::sun::java::swing::plaf::windows::WindowsPopupMenuUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ActiveValue = ::javax::swing::UIDefaults$ActiveValue;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$1, this$0)},
	{}
};

$MethodInfo _WindowsLookAndFeel$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$1::*)($WindowsLookAndFeel*)>(&WindowsLookAndFeel$1::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsLookAndFeel$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel",
	"initVistaComponentDefaults",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _WindowsLookAndFeel$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$1", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WindowsLookAndFeel$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$1",
	"java.lang.Object",
	"javax.swing.UIDefaults$ActiveValue",
	_WindowsLookAndFeel$1_FieldInfo_,
	_WindowsLookAndFeel$1_MethodInfo_,
	nullptr,
	&_WindowsLookAndFeel$1_EnclosingMethodInfo_,
	_WindowsLookAndFeel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$1($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$1));
}

void WindowsLookAndFeel$1::init$($WindowsLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* WindowsLookAndFeel$1::createValue($UIDefaults* table) {
	int32_t var$2 = $WindowsIconFactory$VistaMenuItemCheckIconFactory::getIconWidth();
	int32_t var$1 = var$2 + $WindowsPopupMenuUI::getSpanBeforeGutter();
	int32_t var$0 = var$1 + $WindowsPopupMenuUI::getGutterWidth();
	return $of($Integer::valueOf(var$0 + $WindowsPopupMenuUI::getSpanAfterGutter()));
}

WindowsLookAndFeel$1::WindowsLookAndFeel$1() {
}

$Class* WindowsLookAndFeel$1::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$1, name, initialize, &_WindowsLookAndFeel$1_ClassInfo_, allocate$WindowsLookAndFeel$1);
	return class$;
}

$Class* WindowsLookAndFeel$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com