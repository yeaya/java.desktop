#include <com/sun/java/swing/plaf/windows/WindowsRootPaneUI$AltProcessor.h>

#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/WindowsRootPaneUI.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <sun/awt/AWTAccessor$KeyEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef KEY_PRESSED
#undef KEY_RELEASED
#undef VK_ALT

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JRootPane = ::javax::swing::JRootPane;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$KeyEventAccessor = ::sun::awt::AWTAccessor$KeyEventAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsRootPaneUI$AltProcessor_FieldInfo_[] = {
	{"altKeyPressed", "Z", nullptr, $STATIC, $staticField(WindowsRootPaneUI$AltProcessor, altKeyPressed)},
	{"menuCanceledOnPress", "Z", nullptr, $STATIC, $staticField(WindowsRootPaneUI$AltProcessor, menuCanceledOnPress)},
	{"root", "Ljavax/swing/JRootPane;", nullptr, $STATIC, $staticField(WindowsRootPaneUI$AltProcessor, root)},
	{"winAncestor", "Ljava/awt/Window;", nullptr, $STATIC, $staticField(WindowsRootPaneUI$AltProcessor, winAncestor)},
	{}
};

$MethodInfo _WindowsRootPaneUI$AltProcessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WindowsRootPaneUI$AltProcessor::*)()>(&WindowsRootPaneUI$AltProcessor::init$))},
	{"altPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"altReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"postProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsRootPaneUI$AltProcessor_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsRootPaneUI$AltProcessor", "com.sun.java.swing.plaf.windows.WindowsRootPaneUI", "AltProcessor", $STATIC},
	{}
};

$ClassInfo _WindowsRootPaneUI$AltProcessor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsRootPaneUI$AltProcessor",
	"java.lang.Object",
	"java.awt.KeyEventPostProcessor",
	_WindowsRootPaneUI$AltProcessor_FieldInfo_,
	_WindowsRootPaneUI$AltProcessor_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsRootPaneUI$AltProcessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsRootPaneUI"
};

$Object* allocate$WindowsRootPaneUI$AltProcessor($Class* clazz) {
	return $of($alloc(WindowsRootPaneUI$AltProcessor));
}

bool WindowsRootPaneUI$AltProcessor::altKeyPressed = false;
bool WindowsRootPaneUI$AltProcessor::menuCanceledOnPress = false;
$JRootPane* WindowsRootPaneUI$AltProcessor::root = nullptr;
$Window* WindowsRootPaneUI$AltProcessor::winAncestor = nullptr;

void WindowsRootPaneUI$AltProcessor::init$() {
}

void WindowsRootPaneUI$AltProcessor::altPressed($KeyEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, path, $nc(msm)->getSelectedPath());
	if ($nc(path)->length > 0 && !($instanceOf($ComboPopup, path->get(0)))) {
		msm->clearSelectedPath();
		WindowsRootPaneUI$AltProcessor::menuCanceledOnPress = true;
		$nc(ev)->consume();
	} else if (path->length > 0) {
		WindowsRootPaneUI$AltProcessor::menuCanceledOnPress = false;
		$WindowsLookAndFeel::setMnemonicHidden(false);
		$WindowsGraphicsUtils::repaintMnemonicsInWindow(WindowsRootPaneUI$AltProcessor::winAncestor);
		$nc(ev)->consume();
	} else {
		WindowsRootPaneUI$AltProcessor::menuCanceledOnPress = false;
		$WindowsLookAndFeel::setMnemonicHidden(false);
		$WindowsGraphicsUtils::repaintMnemonicsInWindow(WindowsRootPaneUI$AltProcessor::winAncestor);
		$var($JMenuBar, mbar, WindowsRootPaneUI$AltProcessor::root != nullptr ? $nc(WindowsRootPaneUI$AltProcessor::root)->getJMenuBar() : ($JMenuBar*)nullptr);
		if (mbar == nullptr && $instanceOf($JFrame, WindowsRootPaneUI$AltProcessor::winAncestor)) {
			$assign(mbar, $nc(($cast($JFrame, WindowsRootPaneUI$AltProcessor::winAncestor)))->getJMenuBar());
		}
		$var($JMenu, menu, mbar != nullptr ? $nc(mbar)->getMenu(0) : ($JMenu*)nullptr);
		if (menu != nullptr) {
			$nc(ev)->consume();
		}
	}
}

void WindowsRootPaneUI$AltProcessor::altReleased($KeyEvent* ev) {
	$useLocalCurrentObjectStackCache();
	if (WindowsRootPaneUI$AltProcessor::menuCanceledOnPress) {
		$WindowsLookAndFeel::setMnemonicHidden(true);
		$WindowsGraphicsUtils::repaintMnemonicsInWindow(WindowsRootPaneUI$AltProcessor::winAncestor);
		return;
	}
	$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
	if ($nc($($nc(msm)->getSelectedPath()))->length == 0) {
		$var($JMenuBar, mbar, WindowsRootPaneUI$AltProcessor::root != nullptr ? $nc(WindowsRootPaneUI$AltProcessor::root)->getJMenuBar() : ($JMenuBar*)nullptr);
		if (mbar == nullptr && $instanceOf($JFrame, WindowsRootPaneUI$AltProcessor::winAncestor)) {
			$assign(mbar, $nc(($cast($JFrame, WindowsRootPaneUI$AltProcessor::winAncestor)))->getJMenuBar());
		}
		$var($JMenu, menu, mbar != nullptr ? $nc(mbar)->getMenu(0) : ($JMenu*)nullptr);
		bool skip = false;
		$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
		if ($instanceOf($SunToolkit, tk)) {
			$var($Component, originalSource, $nc($($AWTAccessor::getKeyEventAccessor()))->getOriginalSource(ev));
			bool var$0 = $SunToolkit::getContainingWindow(originalSource) != WindowsRootPaneUI$AltProcessor::winAncestor;
			if (!var$0) {
				int64_t var$1 = $nc(ev)->getWhen();
				var$0 = var$1 <= $nc(($cast($SunToolkit, tk)))->getWindowDeactivationTime(WindowsRootPaneUI$AltProcessor::winAncestor);
			}
			skip = var$0;
		}
		if (menu != nullptr && !skip) {
			$var($MenuElementArray, path, $new($MenuElementArray, 2));
			path->set(0, mbar);
			path->set(1, menu);
			msm->setSelectedPath(path);
		} else if (!$WindowsLookAndFeel::isMnemonicHidden()) {
			$WindowsLookAndFeel::setMnemonicHidden(true);
			$WindowsGraphicsUtils::repaintMnemonicsInWindow(WindowsRootPaneUI$AltProcessor::winAncestor);
		}
	} else if ($instanceOf($ComboPopup, $nc(($(msm->getSelectedPath())))->get(0))) {
		$WindowsLookAndFeel::setMnemonicHidden(true);
		$WindowsGraphicsUtils::repaintMnemonicsInWindow(WindowsRootPaneUI$AltProcessor::winAncestor);
	}
}

bool WindowsRootPaneUI$AltProcessor::postProcessKeyEvent($KeyEvent* ev) {
	$useLocalCurrentObjectStackCache();
	if ($nc(ev)->isConsumed()) {
		if (ev->getKeyCode() != $KeyEvent::VK_ALT) {
			WindowsRootPaneUI$AltProcessor::altKeyPressed = false;
		}
		return false;
	}
	if ($nc(ev)->getKeyCode() == $KeyEvent::VK_ALT) {
		$assignStatic(WindowsRootPaneUI$AltProcessor::root, $SwingUtilities::getRootPane($(ev->getComponent())));
		$assignStatic(WindowsRootPaneUI$AltProcessor::winAncestor, WindowsRootPaneUI$AltProcessor::root == nullptr ? ($Window*)nullptr : $SwingUtilities::getWindowAncestor(WindowsRootPaneUI$AltProcessor::root));
		if (ev->getID() == $KeyEvent::KEY_PRESSED) {
			if (!WindowsRootPaneUI$AltProcessor::altKeyPressed) {
				altPressed(ev);
			}
			WindowsRootPaneUI$AltProcessor::altKeyPressed = true;
			return true;
		} else if (ev->getID() == $KeyEvent::KEY_RELEASED) {
			if (WindowsRootPaneUI$AltProcessor::altKeyPressed) {
				altReleased(ev);
			} else {
				$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
				$var($MenuElementArray, path, $nc(msm)->getSelectedPath());
				if ($nc(path)->length <= 0) {
					$WindowsLookAndFeel::setMnemonicHidden(true);
					$WindowsGraphicsUtils::repaintMnemonicsInWindow(WindowsRootPaneUI$AltProcessor::winAncestor);
				}
			}
			WindowsRootPaneUI$AltProcessor::altKeyPressed = false;
		}
		$assignStatic(WindowsRootPaneUI$AltProcessor::root, nullptr);
		$assignStatic(WindowsRootPaneUI$AltProcessor::winAncestor, nullptr);
	} else {
		bool var$0 = $WindowsLookAndFeel::isMnemonicHidden();
		if (var$0 && ev->isAltDown()) {
			$WindowsLookAndFeel::setMnemonicHidden(false);
			$WindowsGraphicsUtils::repaintMnemonicsInWindow(WindowsRootPaneUI$AltProcessor::winAncestor);
		}
		WindowsRootPaneUI$AltProcessor::altKeyPressed = false;
	}
	return false;
}

void clinit$WindowsRootPaneUI$AltProcessor($Class* class$) {
	WindowsRootPaneUI$AltProcessor::altKeyPressed = false;
	WindowsRootPaneUI$AltProcessor::menuCanceledOnPress = false;
	$assignStatic(WindowsRootPaneUI$AltProcessor::root, nullptr);
	$assignStatic(WindowsRootPaneUI$AltProcessor::winAncestor, nullptr);
}

WindowsRootPaneUI$AltProcessor::WindowsRootPaneUI$AltProcessor() {
}

$Class* WindowsRootPaneUI$AltProcessor::load$($String* name, bool initialize) {
	$loadClass(WindowsRootPaneUI$AltProcessor, name, initialize, &_WindowsRootPaneUI$AltProcessor_ClassInfo_, clinit$WindowsRootPaneUI$AltProcessor, allocate$WindowsRootPaneUI$AltProcessor);
	return class$;
}

$Class* WindowsRootPaneUI$AltProcessor::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com