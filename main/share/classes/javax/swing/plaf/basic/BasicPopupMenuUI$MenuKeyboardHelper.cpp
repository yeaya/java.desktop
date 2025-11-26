#include <javax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/KeyListener.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper$1.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef MENU_KEYBOARD_HELPER_KEY
#undef WHEN_IN_FOCUSED_WINDOW

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Window = ::java::awt::Window;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusListener = ::java::awt::event::FocusListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $ActionMap = ::javax::swing::ActionMap;
using $InputMap = ::javax::swing::InputMap;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JRootPane = ::javax::swing::JRootPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;
using $BasicPopupMenuUI$MenuKeyboardHelper$1 = ::javax::swing::plaf::basic::BasicPopupMenuUI$MenuKeyboardHelper$1;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicPopupMenuUI$MenuKeyboardHelper_FieldInfo_[] = {
	{"lastFocused", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(BasicPopupMenuUI$MenuKeyboardHelper, lastFocused)},
	{"lastPathSelected", "[Ljavax/swing/MenuElement;", nullptr, $PRIVATE, $field(BasicPopupMenuUI$MenuKeyboardHelper, lastPathSelected)},
	{"lastPopup", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE, $field(BasicPopupMenuUI$MenuKeyboardHelper, lastPopup)},
	{"invokerRootPane", "Ljavax/swing/JRootPane;", nullptr, $PRIVATE, $field(BasicPopupMenuUI$MenuKeyboardHelper, invokerRootPane)},
	{"menuActionMap", "Ljavax/swing/ActionMap;", nullptr, $PRIVATE, $field(BasicPopupMenuUI$MenuKeyboardHelper, menuActionMap)},
	{"menuInputMap", "Ljavax/swing/InputMap;", nullptr, $PRIVATE, $field(BasicPopupMenuUI$MenuKeyboardHelper, menuInputMap)},
	{"focusTraversalKeysEnabled", "Z", nullptr, $PRIVATE, $field(BasicPopupMenuUI$MenuKeyboardHelper, focusTraversalKeysEnabled)},
	{"receivedKeyPressed", "Z", nullptr, $PRIVATE, $field(BasicPopupMenuUI$MenuKeyboardHelper, receivedKeyPressed)},
	{"rootPaneFocusListener", "Ljava/awt/event/FocusListener;", nullptr, $PRIVATE, $field(BasicPopupMenuUI$MenuKeyboardHelper, rootPaneFocusListener)},
	{}
};

$MethodInfo _BasicPopupMenuUI$MenuKeyboardHelper_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicPopupMenuUI$MenuKeyboardHelper::*)()>(&BasicPopupMenuUI$MenuKeyboardHelper::init$))},
	{"addUIActionMap", "(Ljavax/swing/JComponent;Ljavax/swing/ActionMap;)V", nullptr, 0},
	{"addUIInputMap", "(Ljavax/swing/JComponent;Ljavax/swing/InputMap;)V", nullptr, 0},
	{"getActivePopup", "([Ljavax/swing/MenuElement;)Ljavax/swing/JPopupMenu;", nullptr, 0},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"removeItems", "()V", nullptr, 0},
	{"removeUIActionMap", "(Ljavax/swing/JComponent;Ljavax/swing/ActionMap;)V", nullptr, 0},
	{"removeUIInputMap", "(Ljavax/swing/JComponent;Ljavax/swing/InputMap;)V", nullptr, 0},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstall", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _BasicPopupMenuUI$MenuKeyboardHelper_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper", "javax.swing.plaf.basic.BasicPopupMenuUI", "MenuKeyboardHelper", $STATIC},
	{"javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicPopupMenuUI$MenuKeyboardHelper_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.awt.event.KeyListener",
	_BasicPopupMenuUI$MenuKeyboardHelper_FieldInfo_,
	_BasicPopupMenuUI$MenuKeyboardHelper_MethodInfo_,
	nullptr,
	nullptr,
	_BasicPopupMenuUI$MenuKeyboardHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicPopupMenuUI"
};

$Object* allocate$BasicPopupMenuUI$MenuKeyboardHelper($Class* clazz) {
	return $of($alloc(BasicPopupMenuUI$MenuKeyboardHelper));
}

int32_t BasicPopupMenuUI$MenuKeyboardHelper::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool BasicPopupMenuUI$MenuKeyboardHelper::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* BasicPopupMenuUI$MenuKeyboardHelper::clone() {
	 return this->$ChangeListener::clone();
}

$String* BasicPopupMenuUI$MenuKeyboardHelper::toString() {
	 return this->$ChangeListener::toString();
}

void BasicPopupMenuUI$MenuKeyboardHelper::finalize() {
	this->$ChangeListener::finalize();
}

void BasicPopupMenuUI$MenuKeyboardHelper::init$() {
	$set(this, lastFocused, nullptr);
	$set(this, lastPathSelected, $new($MenuElementArray, 0));
	$set(this, menuActionMap, $BasicPopupMenuUI::getActionMap());
	this->receivedKeyPressed = false;
	$set(this, rootPaneFocusListener, $new($BasicPopupMenuUI$MenuKeyboardHelper$1, this));
}

void BasicPopupMenuUI$MenuKeyboardHelper::removeItems() {
	$useLocalCurrentObjectStackCache();
	if (this->lastFocused != nullptr) {
		if (!$nc(this->lastFocused)->requestFocusInWindow()) {
			$var($Window, cfw, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusedWindow());
			if (cfw != nullptr && "###focusableSwingPopup###"_s->equals($(cfw->getName()))) {
				$nc(this->lastFocused)->requestFocus();
			}
		}
		$set(this, lastFocused, nullptr);
	}
	if (this->invokerRootPane != nullptr) {
		$nc(this->invokerRootPane)->removeKeyListener(this);
		$nc(this->invokerRootPane)->setFocusTraversalKeysEnabled(this->focusTraversalKeysEnabled);
		removeUIInputMap(this->invokerRootPane, this->menuInputMap);
		removeUIActionMap(this->invokerRootPane, this->menuActionMap);
		$set(this, invokerRootPane, nullptr);
	}
	this->receivedKeyPressed = false;
}

$JPopupMenu* BasicPopupMenuUI$MenuKeyboardHelper::getActivePopup($MenuElementArray* path) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = $nc(path)->length - 1; i >= 0; --i) {
		$var($MenuElement, elem, path->get(i));
		if ($instanceOf($JPopupMenu, elem)) {
			return $cast($JPopupMenu, elem);
		}
	}
	return nullptr;
}

void BasicPopupMenuUI$MenuKeyboardHelper::addUIInputMap($JComponent* c, $InputMap* map) {
	$useLocalCurrentObjectStackCache();
	$var($InputMap, lastNonUI, nullptr);
	$var($InputMap, parent, $nc(c)->getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
	while (parent != nullptr && !($instanceOf($UIResource, parent))) {
		$assign(lastNonUI, parent);
		$assign(parent, parent->getParent());
	}
	if (lastNonUI == nullptr) {
		c->setInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW, map);
	} else {
		$nc(lastNonUI)->setParent(map);
	}
	$nc(map)->setParent(parent);
}

void BasicPopupMenuUI$MenuKeyboardHelper::addUIActionMap($JComponent* c, $ActionMap* map) {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, lastNonUI, nullptr);
	$var($ActionMap, parent, $nc(c)->getActionMap());
	while (parent != nullptr && !($instanceOf($UIResource, parent))) {
		$assign(lastNonUI, parent);
		$assign(parent, parent->getParent());
	}
	if (lastNonUI == nullptr) {
		c->setActionMap(map);
	} else {
		$nc(lastNonUI)->setParent(map);
	}
	$nc(map)->setParent(parent);
}

void BasicPopupMenuUI$MenuKeyboardHelper::removeUIInputMap($JComponent* c, $InputMap* map) {
	$useLocalCurrentObjectStackCache();
	$var($InputMap, im, nullptr);
	$var($InputMap, parent, $nc(c)->getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
	while (parent != nullptr) {
		if (parent == map) {
			if (im == nullptr) {
				c->setInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW, $($nc(map)->getParent()));
			} else {
				$nc(im)->setParent($($nc(map)->getParent()));
			}
			break;
		}
		$assign(im, parent);
		$assign(parent, parent->getParent());
	}
}

void BasicPopupMenuUI$MenuKeyboardHelper::removeUIActionMap($JComponent* c, $ActionMap* map) {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, im, nullptr);
	$var($ActionMap, parent, $nc(c)->getActionMap());
	while (parent != nullptr) {
		if (parent == map) {
			if (im == nullptr) {
				c->setActionMap($($nc(map)->getParent()));
			} else {
				$nc(im)->setParent($($nc(map)->getParent()));
			}
			break;
		}
		$assign(im, parent);
		$assign(parent, parent->getParent());
	}
}

void BasicPopupMenuUI$MenuKeyboardHelper::stateChanged($ChangeEvent* ev) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($BasicLookAndFeel, $($UIManager::getLookAndFeel())))) {
		uninstall();
		return;
	}
	$var($MenuSelectionManager, msm, $cast($MenuSelectionManager, $nc(ev)->getSource()));
	$var($MenuElementArray, p, $nc(msm)->getSelectedPath());
	$var($JPopupMenu, popup, getActivePopup(p));
	if (popup != nullptr && !popup->isFocusable()) {
		return;
	}
	if ($nc(this->lastPathSelected)->length != 0 && $nc(p)->length != 0) {
		if (!$BasicPopupMenuUI::checkInvokerEqual(p->get(0), $nc(this->lastPathSelected)->get(0))) {
			removeItems();
			$set(this, lastPathSelected, $new($MenuElementArray, 0));
		}
	}
	if ($nc(this->lastPathSelected)->length == 0 && $nc(p)->length > 0) {
		$var($JComponent, invoker, nullptr);
		if (popup == nullptr) {
			if (p->length == 2 && $instanceOf($JMenuBar, p->get(0)) && $instanceOf($JMenu, p->get(1))) {
				$assign(invoker, $cast($JComponent, p->get(1)));
				$assign(popup, $nc(($cast($JMenu, invoker)))->getPopupMenu());
			} else {
				return;
			}
		} else {
			$var($Component, c, $nc(popup)->getInvoker());
			if ($instanceOf($JFrame, c)) {
				$assign(invoker, $nc(($cast($JFrame, c)))->getRootPane());
			} else if ($instanceOf($JDialog, c)) {
				$assign(invoker, $nc(($cast($JDialog, c)))->getRootPane());
			} else if ($instanceOf($JApplet, c)) {
				$assign(invoker, $nc(($cast($JApplet, c)))->getRootPane());
			} else {
				while (!($instanceOf($JComponent, c))) {
					if (c == nullptr) {
						return;
					}
					$assign(c, $nc(c)->getParent());
				}
				$assign(invoker, $cast($JComponent, c));
			}
		}
		$set(this, lastFocused, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner());
		$set(this, invokerRootPane, $SwingUtilities::getRootPane(invoker));
		if (this->invokerRootPane != nullptr) {
			$nc(this->invokerRootPane)->addFocusListener(this->rootPaneFocusListener);
			$nc(this->invokerRootPane)->requestFocus(true);
			$nc(this->invokerRootPane)->addKeyListener(this);
			this->focusTraversalKeysEnabled = $nc(this->invokerRootPane)->getFocusTraversalKeysEnabled();
			$nc(this->invokerRootPane)->setFocusTraversalKeysEnabled(false);
			$set(this, menuInputMap, $BasicPopupMenuUI::getInputMap(popup, this->invokerRootPane));
			addUIInputMap(this->invokerRootPane, this->menuInputMap);
			addUIActionMap(this->invokerRootPane, this->menuActionMap);
		}
	} else if ($nc(this->lastPathSelected)->length != 0 && p->length == 0) {
		removeItems();
		$set(this, menuInputMap, nullptr);
	} else if (popup != this->lastPopup) {
		this->receivedKeyPressed = false;
	}
	$set(this, lastPathSelected, p);
	$set(this, lastPopup, popup);
}

void BasicPopupMenuUI$MenuKeyboardHelper::keyPressed($KeyEvent* ev) {
	this->receivedKeyPressed = true;
	$nc($($MenuSelectionManager::defaultManager()))->processKeyEvent(ev);
}

void BasicPopupMenuUI$MenuKeyboardHelper::keyReleased($KeyEvent* ev) {
	if (this->receivedKeyPressed) {
		this->receivedKeyPressed = false;
		$nc($($MenuSelectionManager::defaultManager()))->processKeyEvent(ev);
	}
}

void BasicPopupMenuUI$MenuKeyboardHelper::keyTyped($KeyEvent* ev) {
	if (this->receivedKeyPressed) {
		$nc($($MenuSelectionManager::defaultManager()))->processKeyEvent(ev);
	}
}

void BasicPopupMenuUI$MenuKeyboardHelper::uninstall() {
	$useLocalCurrentObjectStackCache();
	$init($BasicPopupMenuUI);
	$synchronized($BasicPopupMenuUI::MENU_KEYBOARD_HELPER_KEY) {
		$nc($($MenuSelectionManager::defaultManager()))->removeChangeListener(this);
		$nc($($AppContext::getAppContext()))->remove($BasicPopupMenuUI::MENU_KEYBOARD_HELPER_KEY);
	}
}

BasicPopupMenuUI$MenuKeyboardHelper::BasicPopupMenuUI$MenuKeyboardHelper() {
}

$Class* BasicPopupMenuUI$MenuKeyboardHelper::load$($String* name, bool initialize) {
	$loadClass(BasicPopupMenuUI$MenuKeyboardHelper, name, initialize, &_BasicPopupMenuUI$MenuKeyboardHelper_ClassInfo_, allocate$BasicPopupMenuUI$MenuKeyboardHelper);
	return class$;
}

$Class* BasicPopupMenuUI$MenuKeyboardHelper::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax