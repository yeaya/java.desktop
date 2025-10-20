#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane$2.h>

#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane.h>
#include <java/awt/Component.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $WindowsInternalFrameTitlePane = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane;
using $Component = ::java::awt::Component;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JPopupMenu = ::javax::swing::JPopupMenu;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsInternalFrameTitlePane$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsInternalFrameTitlePane$2, this$0)},
	{}
};

$MethodInfo _WindowsInternalFrameTitlePane$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)V", nullptr, 0, $method(static_cast<void(WindowsInternalFrameTitlePane$2::*)($WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane$2::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsInternalFrameTitlePane$2_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane",
	"assembleSystemMenu",
	"()V"
};

$InnerClassInfo _WindowsInternalFrameTitlePane$2_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsInternalFrameTitlePane$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$2",
	"java.awt.event.MouseAdapter",
	nullptr,
	_WindowsInternalFrameTitlePane$2_FieldInfo_,
	_WindowsInternalFrameTitlePane$2_MethodInfo_,
	nullptr,
	&_WindowsInternalFrameTitlePane$2_EnclosingMethodInfo_,
	_WindowsInternalFrameTitlePane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane"
};

$Object* allocate$WindowsInternalFrameTitlePane$2($Class* clazz) {
	return $of($alloc(WindowsInternalFrameTitlePane$2));
}

void WindowsInternalFrameTitlePane$2::init$($WindowsInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void WindowsInternalFrameTitlePane$2::mouseClicked($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = $nc(e)->getClickCount() == 2;
	bool var$0 = var$1 && $nc($($WindowsInternalFrameTitlePane::access$000(this->this$0)))->isClosable();
	if (var$0 && !$nc($($WindowsInternalFrameTitlePane::access$100(this->this$0)))->isIcon()) {
		$nc(this->this$0->systemPopupMenu)->setVisible(false);
		$nc($($WindowsInternalFrameTitlePane::access$200(this->this$0)))->doDefaultCloseAction();
	} else {
		$MouseAdapter::mouseClicked(e);
	}
}

void WindowsInternalFrameTitlePane$2::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc($($WindowsInternalFrameTitlePane::access$300(this->this$0)))->setSelected(true);
	} catch ($PropertyVetoException&) {
		$catch();
	}
	this->this$0->showSystemPopupMenu($($nc(e)->getComponent()));
}

WindowsInternalFrameTitlePane$2::WindowsInternalFrameTitlePane$2() {
}

$Class* WindowsInternalFrameTitlePane$2::load$($String* name, bool initialize) {
	$loadClass(WindowsInternalFrameTitlePane$2, name, initialize, &_WindowsInternalFrameTitlePane$2_ClassInfo_, allocate$WindowsInternalFrameTitlePane$2);
	return class$;
}

$Class* WindowsInternalFrameTitlePane$2::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com