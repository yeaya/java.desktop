#include <com/sun/java/swing/plaf/windows/WindowsScrollBarUI$1.h>

#include <com/sun/java/swing/plaf/windows/WindowsScrollBarUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$ArrowButtonListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <jcpp.h>

using $WindowsScrollBarUI = ::com::sun::java::swing::plaf::windows::WindowsScrollBarUI;
using $Component = ::java::awt::Component;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollBar = ::javax::swing::JScrollBar;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $BasicScrollBarUI$ArrowButtonListener = ::javax::swing::plaf::basic::BasicScrollBarUI$ArrowButtonListener;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsScrollBarUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsScrollBarUI$1, this$0)},
	{}
};

$MethodInfo _WindowsScrollBarUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;)V", nullptr, 0, $method(static_cast<void(WindowsScrollBarUI$1::*)($WindowsScrollBarUI*)>(&WindowsScrollBarUI$1::init$))},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"repaint", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsScrollBarUI$1::*)()>(&WindowsScrollBarUI$1::repaint))},
	{}
};

$EnclosingMethodInfo _WindowsScrollBarUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsScrollBarUI",
	"createArrowButtonListener",
	"()Ljavax/swing/plaf/basic/BasicScrollBarUI$ArrowButtonListener;"
};

$InnerClassInfo _WindowsScrollBarUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsScrollBarUI$1", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicScrollBarUI$ArrowButtonListener", "javax.swing.plaf.basic.BasicScrollBarUI", "ArrowButtonListener", $PROTECTED},
	{}
};

$ClassInfo _WindowsScrollBarUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsScrollBarUI$1",
	"javax.swing.plaf.basic.BasicScrollBarUI$ArrowButtonListener",
	nullptr,
	_WindowsScrollBarUI$1_FieldInfo_,
	_WindowsScrollBarUI$1_MethodInfo_,
	nullptr,
	&_WindowsScrollBarUI$1_EnclosingMethodInfo_,
	_WindowsScrollBarUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsScrollBarUI"
};

$Object* allocate$WindowsScrollBarUI$1($Class* clazz) {
	return $of($alloc(WindowsScrollBarUI$1));
}

void WindowsScrollBarUI$1::init$($WindowsScrollBarUI* this$0) {
	$set(this, this$0, this$0);
	$BasicScrollBarUI$ArrowButtonListener::init$(this$0);
}

void WindowsScrollBarUI$1::mouseEntered($MouseEvent* evt) {
	repaint();
	$BasicScrollBarUI$ArrowButtonListener::mouseEntered(evt);
}

void WindowsScrollBarUI$1::mouseExited($MouseEvent* evt) {
	repaint();
	$BasicScrollBarUI$ArrowButtonListener::mouseExited(evt);
}

void WindowsScrollBarUI$1::repaint() {
	$nc($($WindowsScrollBarUI::access$000(this->this$0)))->repaint();
}

WindowsScrollBarUI$1::WindowsScrollBarUI$1() {
}

$Class* WindowsScrollBarUI$1::load$($String* name, bool initialize) {
	$loadClass(WindowsScrollBarUI$1, name, initialize, &_WindowsScrollBarUI$1_ClassInfo_, allocate$WindowsScrollBarUI$1);
	return class$;
}

$Class* WindowsScrollBarUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com