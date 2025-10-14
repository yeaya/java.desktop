#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$4.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

#undef VK_SPACE

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$4_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$4, this$0)},
	{"val$viewTypePopupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$4, val$viewTypePopupMenu)},
	{"val$viewMenuButton", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$4, val$viewMenuButton)},
	{}
};

$MethodInfo _WindowsFileChooserUI$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljavax/swing/JButton;Ljavax/swing/JPopupMenu;)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$4::*)($WindowsFileChooserUI*,$JButton*,$JPopupMenu*)>(&WindowsFileChooserUI$4::init$))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$4_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _WindowsFileChooserUI$4_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$4",
	"java.awt.event.KeyAdapter",
	nullptr,
	_WindowsFileChooserUI$4_FieldInfo_,
	_WindowsFileChooserUI$4_MethodInfo_,
	nullptr,
	&_WindowsFileChooserUI$4_EnclosingMethodInfo_,
	_WindowsFileChooserUI$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$4($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$4));
}

void WindowsFileChooserUI$4::init$($WindowsFileChooserUI* this$0, $JButton* val$viewMenuButton, $JPopupMenu* val$viewTypePopupMenu) {
	$set(this, this$0, this$0);
	$set(this, val$viewMenuButton, val$viewMenuButton);
	$set(this, val$viewTypePopupMenu, val$viewTypePopupMenu);
	$KeyAdapter::init$();
}

void WindowsFileChooserUI$4::keyPressed($KeyEvent* e) {
	bool var$0 = $nc(e)->getKeyCode() == $KeyEvent::VK_SPACE;
	if (var$0 && $nc($($nc(this->val$viewMenuButton)->getModel()))->isRollover()) {
		$nc(this->val$viewMenuButton)->setSelected(true);
		$nc(this->val$viewTypePopupMenu)->show(this->val$viewMenuButton, 0, $nc(this->val$viewMenuButton)->getHeight());
	}
}

WindowsFileChooserUI$4::WindowsFileChooserUI$4() {
}

$Class* WindowsFileChooserUI$4::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$4, name, initialize, &_WindowsFileChooserUI$4_ClassInfo_, allocate$WindowsFileChooserUI$4);
	return class$;
}

$Class* WindowsFileChooserUI$4::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com