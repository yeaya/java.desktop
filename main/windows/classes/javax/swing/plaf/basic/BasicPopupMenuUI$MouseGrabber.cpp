#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber.h>

#include <java/applet/Applet.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JWindow.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber$1.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber$2.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UngrabEvent.h>
#include <jcpp.h>

#undef HIDE_POPUP_KEY
#undef MOUSE_DRAGGED
#undef MOUSE_GRABBER_KEY
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef MOUSE_WHEEL
#undef TRUE

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Applet = ::java::applet::Applet;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowListener = ::java::awt::event::WindowListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JWindow = ::javax::swing::JWindow;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;
using $BasicPopupMenuUI$MouseGrabber$1 = ::javax::swing::plaf::basic::BasicPopupMenuUI$MouseGrabber$1;
using $BasicPopupMenuUI$MouseGrabber$2 = ::javax::swing::plaf::basic::BasicPopupMenuUI$MouseGrabber$2;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UngrabEvent = ::sun::awt::UngrabEvent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicPopupMenuUI$MouseGrabber_FieldInfo_[] = {
	{"grabbedWindow", "Ljava/awt/Window;", nullptr, 0, $field(BasicPopupMenuUI$MouseGrabber, grabbedWindow)},
	{"lastPathSelected", "[Ljavax/swing/MenuElement;", nullptr, 0, $field(BasicPopupMenuUI$MouseGrabber, lastPathSelected)},
	{}
};

$MethodInfo _BasicPopupMenuUI$MouseGrabber_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicPopupMenuUI$MouseGrabber::*)()>(&BasicPopupMenuUI$MouseGrabber::init$))},
	{"cancelPopupMenu", "()V", nullptr, 0},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"eventDispatched", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"grabWindow", "([Ljavax/swing/MenuElement;)V", nullptr, 0},
	{"isInPopup", "(Ljava/awt/Component;)Z", nullptr, 0},
	{"realUngrabWindow", "()V", nullptr, 0},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"ungrabWindow", "()V", nullptr, 0},
	{"uninstall", "()V", nullptr, 0},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicPopupMenuUI$MouseGrabber_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber", "javax.swing.plaf.basic.BasicPopupMenuUI", "MouseGrabber", $STATIC},
	{"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicPopupMenuUI$MouseGrabber_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.awt.event.AWTEventListener,java.awt.event.ComponentListener,java.awt.event.WindowListener",
	_BasicPopupMenuUI$MouseGrabber_FieldInfo_,
	_BasicPopupMenuUI$MouseGrabber_MethodInfo_,
	nullptr,
	nullptr,
	_BasicPopupMenuUI$MouseGrabber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicPopupMenuUI"
};

$Object* allocate$BasicPopupMenuUI$MouseGrabber($Class* clazz) {
	return $of($alloc(BasicPopupMenuUI$MouseGrabber));
}

int32_t BasicPopupMenuUI$MouseGrabber::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool BasicPopupMenuUI$MouseGrabber::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* BasicPopupMenuUI$MouseGrabber::clone() {
	 return this->$ChangeListener::clone();
}

$String* BasicPopupMenuUI$MouseGrabber::toString() {
	 return this->$ChangeListener::toString();
}

void BasicPopupMenuUI$MouseGrabber::finalize() {
	this->$ChangeListener::finalize();
}

void BasicPopupMenuUI$MouseGrabber::init$() {
	$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
	$nc(msm)->addChangeListener(this);
	$set(this, lastPathSelected, msm->getSelectedPath());
	if ($nc(this->lastPathSelected)->length != 0) {
		grabWindow(this->lastPathSelected);
	}
}

void BasicPopupMenuUI$MouseGrabber::uninstall() {
	$useLocalCurrentObjectStackCache();
	$init($BasicPopupMenuUI);
	$synchronized($BasicPopupMenuUI::MOUSE_GRABBER_KEY) {
		$nc($($MenuSelectionManager::defaultManager()))->removeChangeListener(this);
		ungrabWindow();
		$nc($($AppContext::getAppContext()))->remove($BasicPopupMenuUI::MOUSE_GRABBER_KEY);
	}
}

void BasicPopupMenuUI$MouseGrabber::grabWindow($MenuElementArray* newPath) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($BasicPopupMenuUI$MouseGrabber$1, this, tk)));
	$var($Component, invoker, $nc($nc(newPath)->get(0))->getComponent());
	if ($instanceOf($JPopupMenu, invoker)) {
		$assign(invoker, $nc(($cast($JPopupMenu, invoker)))->getInvoker());
	}
	$set(this, grabbedWindow, (invoker == nullptr) ? ($Window*)nullptr : (($instanceOf($Window, invoker)) ? $cast($Window, invoker) : $SwingUtilities::getWindowAncestor(invoker)));
	if (this->grabbedWindow != nullptr) {
		if ($instanceOf($SunToolkit, tk)) {
			$nc(($cast($SunToolkit, tk)))->grab(this->grabbedWindow);
		} else {
			$nc(this->grabbedWindow)->addComponentListener(this);
			$nc(this->grabbedWindow)->addWindowListener(this);
		}
	}
}

void BasicPopupMenuUI$MouseGrabber::ungrabWindow() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($BasicPopupMenuUI$MouseGrabber$2, this, tk)));
	realUngrabWindow();
}

void BasicPopupMenuUI$MouseGrabber::realUngrabWindow() {
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	if (this->grabbedWindow != nullptr) {
		if ($instanceOf($SunToolkit, tk)) {
			$nc(($cast($SunToolkit, tk)))->ungrab(this->grabbedWindow);
		} else {
			$nc(this->grabbedWindow)->removeComponentListener(this);
			$nc(this->grabbedWindow)->removeWindowListener(this);
		}
		$set(this, grabbedWindow, nullptr);
	}
}

void BasicPopupMenuUI$MouseGrabber::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, p, $nc(msm)->getSelectedPath());
	if ($nc(this->lastPathSelected)->length == 0 && $nc(p)->length != 0) {
		grabWindow(p);
	}
	if ($nc(this->lastPathSelected)->length != 0 && $nc(p)->length == 0) {
		ungrabWindow();
	}
	$set(this, lastPathSelected, p);
}

void BasicPopupMenuUI$MouseGrabber::eventDispatched($AWTEvent* ev) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($UngrabEvent, ev)) {
		cancelPopupMenu();
		return;
	}
	if (!($instanceOf($MouseEvent, ev))) {
		return;
	}
	$var($MouseEvent, me, $cast($MouseEvent, ev));
	$var($Component, src, $nc(me)->getComponent());
	switch (me->getID()) {
	case $MouseEvent::MOUSE_PRESSED:
		{
			bool var$0 = isInPopup(src);
			if (var$0 || ($instanceOf($JMenu, src) && $nc(($cast($JMenu, src)))->isSelected())) {
				return;
			}
			$init($BasicComboBoxUI);
			if (!($instanceOf($JComponent, src)) || !($equals($nc(($cast($JComponent, src)))->getClientProperty("doNotCancelPopup"_s), $BasicComboBoxUI::HIDE_POPUP_KEY))) {
				cancelPopupMenu();
				bool consumeEvent = $UIManager::getBoolean("PopupMenu.consumeEventOnClose"_s);
				if (consumeEvent && !($instanceOf($MenuElement, src))) {
					me->consume();
				}
			}
			break;
		}
	case $MouseEvent::MOUSE_RELEASED:
		{
			if (!($instanceOf($MenuElement, src))) {
				if (isInPopup(src)) {
					break;
				}
			}
			if ($instanceOf($JMenu, src) || !($instanceOf($JMenuItem, src))) {
				$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(me);
			}
			break;
		}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			if (!($instanceOf($MenuElement, src))) {
				if (isInPopup(src)) {
					break;
				}
			}
			$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(me);
			break;
		}
	case $MouseEvent::MOUSE_WHEEL:
		{
			bool var$3 = isInPopup(src);
			bool var$2 = var$3 || (($instanceOf($JComboBox, src)) && $nc(($cast($JComboBox, src)))->isPopupVisible());
			bool var$1 = var$2 || (($instanceOf($JWindow, src)) && $nc(($cast($JWindow, src)))->isVisible());
			if (var$1 || (($instanceOf($JMenuItem, src)) && $nc(($cast($JMenuItem, src)))->isVisible()) || ($instanceOf($JFrame, src))) {
				return;
			}
			cancelPopupMenu();
			break;
		}
	}
}

bool BasicPopupMenuUI$MouseGrabber::isInPopup($Component* src) {
	{
		$var($Component, c, src);
		for (; c != nullptr; $assign(c, $nc(c)->getParent())) {
			if ($instanceOf($Applet, c) || $instanceOf($Window, c)) {
				break;
			} else if ($instanceOf($JPopupMenu, c)) {
				return true;
			}
		}
	}
	return false;
}

void BasicPopupMenuUI$MouseGrabber::cancelPopupMenu() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($List, popups, $BasicPopupMenuUI::getPopups());
		{
			$var($Iterator, i$, $nc(popups)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JPopupMenu, popup, $cast($JPopupMenu, i$->next()));
				{
					$init($Boolean);
					$nc(popup)->putClientProperty("JPopupMenu.firePopupMenuCanceled"_s, $Boolean::TRUE);
				}
			}
		}
		$nc($($MenuSelectionManager::defaultManager()))->clearSelectedPath();
	} catch ($RuntimeException&) {
		$var($RuntimeException, ex, $catch());
		realUngrabWindow();
		$throw(ex);
	} catch ($Error&) {
		$var($Error, err, $catch());
		realUngrabWindow();
		$throw(err);
	}
}

void BasicPopupMenuUI$MouseGrabber::componentResized($ComponentEvent* e) {
	cancelPopupMenu();
}

void BasicPopupMenuUI$MouseGrabber::componentMoved($ComponentEvent* e) {
	cancelPopupMenu();
}

void BasicPopupMenuUI$MouseGrabber::componentShown($ComponentEvent* e) {
	cancelPopupMenu();
}

void BasicPopupMenuUI$MouseGrabber::componentHidden($ComponentEvent* e) {
	cancelPopupMenu();
}

void BasicPopupMenuUI$MouseGrabber::windowClosing($WindowEvent* e) {
	cancelPopupMenu();
}

void BasicPopupMenuUI$MouseGrabber::windowClosed($WindowEvent* e) {
	cancelPopupMenu();
}

void BasicPopupMenuUI$MouseGrabber::windowIconified($WindowEvent* e) {
	cancelPopupMenu();
}

void BasicPopupMenuUI$MouseGrabber::windowDeactivated($WindowEvent* e) {
	cancelPopupMenu();
}

void BasicPopupMenuUI$MouseGrabber::windowOpened($WindowEvent* e) {
}

void BasicPopupMenuUI$MouseGrabber::windowDeiconified($WindowEvent* e) {
}

void BasicPopupMenuUI$MouseGrabber::windowActivated($WindowEvent* e) {
}

BasicPopupMenuUI$MouseGrabber::BasicPopupMenuUI$MouseGrabber() {
}

$Class* BasicPopupMenuUI$MouseGrabber::load$($String* name, bool initialize) {
	$loadClass(BasicPopupMenuUI$MouseGrabber, name, initialize, &_BasicPopupMenuUI$MouseGrabber_ClassInfo_, allocate$BasicPopupMenuUI$MouseGrabber);
	return class$;
}

$Class* BasicPopupMenuUI$MouseGrabber::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax