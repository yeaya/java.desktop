#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$3.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$3, this$0)},
	{"val$viewTypePopupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$3, val$viewTypePopupMenu)},
	{"val$viewMenuButton", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$3, val$viewMenuButton)},
	{}
};

$MethodInfo _WindowsFileChooserUI$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljavax/swing/JButton;Ljavax/swing/JPopupMenu;)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$3::*)($WindowsFileChooserUI*,$JButton*,$JPopupMenu*)>(&WindowsFileChooserUI$3::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$3_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _WindowsFileChooserUI$3_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$3",
	"java.awt.event.MouseAdapter",
	nullptr,
	_WindowsFileChooserUI$3_FieldInfo_,
	_WindowsFileChooserUI$3_MethodInfo_,
	nullptr,
	&_WindowsFileChooserUI$3_EnclosingMethodInfo_,
	_WindowsFileChooserUI$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$3($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$3));
}

void WindowsFileChooserUI$3::init$($WindowsFileChooserUI* this$0, $JButton* val$viewMenuButton, $JPopupMenu* val$viewTypePopupMenu) {
	$set(this, this$0, this$0);
	$set(this, val$viewMenuButton, val$viewMenuButton);
	$set(this, val$viewTypePopupMenu, val$viewTypePopupMenu);
	$MouseAdapter::init$();
}

void WindowsFileChooserUI$3::mousePressed($MouseEvent* e) {
	bool var$0 = $SwingUtilities::isLeftMouseButton(e);
	if (var$0 && !$nc(this->val$viewMenuButton)->isSelected()) {
		$nc(this->val$viewMenuButton)->setSelected(true);
		$nc(this->val$viewTypePopupMenu)->show(this->val$viewMenuButton, 0, $nc(this->val$viewMenuButton)->getHeight());
	}
}

WindowsFileChooserUI$3::WindowsFileChooserUI$3() {
}

$Class* WindowsFileChooserUI$3::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$3, name, initialize, &_WindowsFileChooserUI$3_ClassInfo_, allocate$WindowsFileChooserUI$3);
	return class$;
}

$Class* WindowsFileChooserUI$3::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com