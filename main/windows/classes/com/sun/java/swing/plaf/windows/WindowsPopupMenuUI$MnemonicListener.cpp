#include <com/sun/java/swing/plaf/windows/WindowsPopupMenuUI$MnemonicListener.h>

#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/WindowsPopupMenuUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsPopupMenuUI = ::com::sun::java::swing::plaf::windows::WindowsPopupMenuUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JRootPane = ::javax::swing::JRootPane;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsPopupMenuUI$MnemonicListener_FieldInfo_[] = {
	{"repaintRoot", "Ljavax/swing/JRootPane;", nullptr, 0, $field(WindowsPopupMenuUI$MnemonicListener, repaintRoot)},
	{}
};

$MethodInfo _WindowsPopupMenuUI$MnemonicListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WindowsPopupMenuUI$MnemonicListener::*)()>(&WindowsPopupMenuUI$MnemonicListener::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsPopupMenuUI$MnemonicListener_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsPopupMenuUI$MnemonicListener", "com.sun.java.swing.plaf.windows.WindowsPopupMenuUI", "MnemonicListener", $STATIC},
	{}
};

$ClassInfo _WindowsPopupMenuUI$MnemonicListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsPopupMenuUI$MnemonicListener",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_WindowsPopupMenuUI$MnemonicListener_FieldInfo_,
	_WindowsPopupMenuUI$MnemonicListener_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsPopupMenuUI$MnemonicListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsPopupMenuUI"
};

$Object* allocate$WindowsPopupMenuUI$MnemonicListener($Class* clazz) {
	return $of($alloc(WindowsPopupMenuUI$MnemonicListener));
}

void WindowsPopupMenuUI$MnemonicListener::init$() {
	$set(this, repaintRoot, nullptr);
}

void WindowsPopupMenuUI$MnemonicListener::stateChanged($ChangeEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($MenuSelectionManager, msm, $cast($MenuSelectionManager, $nc(ev)->getSource()));
	$var($MenuElementArray, path, $nc(msm)->getSelectedPath());
	if ($nc(path)->length == 0) {
		if (!$WindowsLookAndFeel::isMnemonicHidden()) {
			$WindowsLookAndFeel::setMnemonicHidden(true);
			if (this->repaintRoot != nullptr) {
				$var($Window, win, $SwingUtilities::getWindowAncestor(this->repaintRoot));
				$WindowsGraphicsUtils::repaintMnemonicsInWindow(win);
			}
		}
		$set(this, repaintRoot, nullptr);
	} else {
		$var($Component, c, $cast($Component, path->get(0)));
		if ($instanceOf($JPopupMenu, c)) {
			$assign(c, $nc(($cast($JPopupMenu, c)))->getInvoker());
		}
		$set(this, repaintRoot, $SwingUtilities::getRootPane(c));
	}
}

WindowsPopupMenuUI$MnemonicListener::WindowsPopupMenuUI$MnemonicListener() {
}

$Class* WindowsPopupMenuUI$MnemonicListener::load$($String* name, bool initialize) {
	$loadClass(WindowsPopupMenuUI$MnemonicListener, name, initialize, &_WindowsPopupMenuUI$MnemonicListener_ClassInfo_, allocate$WindowsPopupMenuUI$MnemonicListener);
	return class$;
}

$Class* WindowsPopupMenuUI$MnemonicListener::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com