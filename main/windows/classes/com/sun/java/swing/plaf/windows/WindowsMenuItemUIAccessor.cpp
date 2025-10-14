#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsMenuItemUIAccessor_MethodInfo_[] = {
	{"getMenuItem", "()Ljavax/swing/JMenuItem;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPart", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $ABSTRACT},
	{"getState", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _WindowsMenuItemUIAccessor_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.java.swing.plaf.windows.WindowsMenuItemUIAccessor",
	nullptr,
	nullptr,
	nullptr,
	_WindowsMenuItemUIAccessor_MethodInfo_
};

$Object* allocate$WindowsMenuItemUIAccessor($Class* clazz) {
	return $of($alloc(WindowsMenuItemUIAccessor));
}

$Class* WindowsMenuItemUIAccessor::load$($String* name, bool initialize) {
	$loadClass(WindowsMenuItemUIAccessor, name, initialize, &_WindowsMenuItemUIAccessor_ClassInfo_, allocate$WindowsMenuItemUIAccessor);
	return class$;
}

$Class* WindowsMenuItemUIAccessor::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com