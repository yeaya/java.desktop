#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$5.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$5$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JButton.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $WindowsFileChooserUI$5$1 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$5$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JButton = ::javax::swing::JButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$5_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$5, this$0)},
	{"val$viewMenuButton", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$5, val$viewMenuButton)},
	{}
};

$MethodInfo _WindowsFileChooserUI$5_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljavax/swing/JButton;)V", "()V", 0, $method(static_cast<void(WindowsFileChooserUI$5::*)($WindowsFileChooserUI*,$JButton*)>(&WindowsFileChooserUI$5::init$))},
	{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$5_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _WindowsFileChooserUI$5_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5",
	"java.lang.Object",
	"javax.swing.event.PopupMenuListener",
	_WindowsFileChooserUI$5_FieldInfo_,
	_WindowsFileChooserUI$5_MethodInfo_,
	nullptr,
	&_WindowsFileChooserUI$5_EnclosingMethodInfo_,
	_WindowsFileChooserUI$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$5($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$5));
}

void WindowsFileChooserUI$5::init$($WindowsFileChooserUI* this$0, $JButton* val$viewMenuButton) {
	$set(this, this$0, this$0);
	$set(this, val$viewMenuButton, val$viewMenuButton);
}

void WindowsFileChooserUI$5::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
}

void WindowsFileChooserUI$5::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
	$SwingUtilities::invokeLater($$new($WindowsFileChooserUI$5$1, this));
}

void WindowsFileChooserUI$5::popupMenuCanceled($PopupMenuEvent* e) {
}

WindowsFileChooserUI$5::WindowsFileChooserUI$5() {
}

$Class* WindowsFileChooserUI$5::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$5, name, initialize, &_WindowsFileChooserUI$5_ClassInfo_, allocate$WindowsFileChooserUI$5);
	return class$;
}

$Class* WindowsFileChooserUI$5::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com