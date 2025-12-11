#include <javax/swing/JMenuItem.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>
#include <javax/swing/JMenuItem$MenuItemFocusListener.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/MenuDragMouseEvent.h>
#include <javax/swing/event/MenuDragMouseListener.h>
#include <javax/swing/event/MenuKeyEvent.h>
#include <javax/swing/event/MenuKeyListener.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <jcpp.h>

#undef ACCELERATOR_KEY
#undef DEBUG
#undef FALSE
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef KEY_TYPED
#undef LEADING
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_RELEASED
#undef SMALL_ICON
#undef TRACE
#undef TRAILING
#undef VERBOSE

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $MenuDragMouseListenerArray = $Array<::javax::swing::event::MenuDragMouseListener>;
using $MenuKeyListenerArray = $Array<::javax::swing::event::MenuKeyListener>;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $FocusListener = ::java::awt::event::FocusListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $EventListener = ::java::util::EventListener;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractButton$AccessibleAbstractButton = ::javax::swing::AbstractButton$AccessibleAbstractButton;
using $Action = ::javax::swing::Action;
using $ButtonModel = ::javax::swing::ButtonModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JMenuItem$AccessibleJMenuItem = ::javax::swing::JMenuItem$AccessibleJMenuItem;
using $JMenuItem$MenuItemFocusListener = ::javax::swing::JMenuItem$MenuItemFocusListener;
using $KeyStroke = ::javax::swing::KeyStroke;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $MenuDragMouseEvent = ::javax::swing::event::MenuDragMouseEvent;
using $MenuDragMouseListener = ::javax::swing::event::MenuDragMouseListener;
using $MenuKeyEvent = ::javax::swing::event::MenuKeyEvent;
using $MenuKeyListener = ::javax::swing::event::MenuKeyListener;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;

namespace javax {
	namespace swing {

$NamedAttribute JMenuItem_Attribute_var$0[] = {
	{"defaultProperty", 's', "UIClassID"},
	{"description", 's', "An item which can be selected in a menu."},
	{}
};

$NamedAttribute JMenuItem_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenuItem_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JMenuItem_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JMenuItem_Attribute_var$1},
	{}
};

$NamedAttribute JMenuItem_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenuItem_MethodAnnotations_getAccessibleContext20[] = {
	{"Ljava/beans/BeanProperty;", JMenuItem_Attribute_var$2},
	{}
};

$NamedAttribute JMenuItem_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenuItem_MethodAnnotations_getMenuDragMouseListeners22[] = {
	{"Ljava/beans/BeanProperty;", JMenuItem_Attribute_var$3},
	{}
};

$NamedAttribute JMenuItem_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenuItem_MethodAnnotations_getMenuKeyListeners23[] = {
	{"Ljava/beans/BeanProperty;", JMenuItem_Attribute_var$4},
	{}
};

$NamedAttribute JMenuItem_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenuItem_MethodAnnotations_getSubElements24[] = {
	{"Ljava/beans/BeanProperty;", JMenuItem_Attribute_var$5},
	{}
};

$NamedAttribute JMenuItem_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenuItem_MethodAnnotations_getUIClassID25[] = {
	{"Ljava/beans/BeanProperty;", JMenuItem_Attribute_var$6},
	{}
};

$NamedAttribute JMenuItem_Attribute_var$7[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The keystroke combination which will invoke the JMenuItem\'s actionlisteners without navigating the menu hierarchy"},
	{}
};

$CompoundAttribute _JMenuItem_MethodAnnotations_setAccelerator39[] = {
	{"Ljava/beans/BeanProperty;", JMenuItem_Attribute_var$7},
	{}
};

$NamedAttribute JMenuItem_Attribute_var$8[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "Mouse release will fire an action event"},
	{}
};

$CompoundAttribute _JMenuItem_MethodAnnotations_setArmed40[] = {
	{"Ljava/beans/BeanProperty;", JMenuItem_Attribute_var$8},
	{}
};

$NamedAttribute JMenuItem_Attribute_var$9[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The enabled state of the component."},
	{}
};

$CompoundAttribute _JMenuItem_MethodAnnotations_setEnabled41[] = {
	{"Ljava/beans/BeanProperty;", JMenuItem_Attribute_var$9},
	{}
};

$NamedAttribute JMenuItem_Attribute_var$10[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the LookAndFeel."},
	{}
};

$CompoundAttribute _JMenuItem_MethodAnnotations_setUI44[] = {
	{"Ljava/beans/BeanProperty;", JMenuItem_Attribute_var$10},
	{}
};

$FieldInfo _JMenuItem_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMenuItem, uiClassID)},
	{"TRACE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenuItem, TRACE)},
	{"VERBOSE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenuItem, VERBOSE)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenuItem, DEBUG)},
	{"isMouseDragged", "Z", nullptr, $PRIVATE, $field(JMenuItem, isMouseDragged)},
	{"accelerator", "Ljavax/swing/KeyStroke;", nullptr, $PRIVATE, $field(JMenuItem, accelerator)},
	{}
};

$MethodInfo _JMenuItem_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMenuItem::*)()>(&JMenuItem::init$))},
	{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(JMenuItem::*)($Icon*)>(&JMenuItem::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JMenuItem::*)($String*)>(&JMenuItem::init$))},
	{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(static_cast<void(JMenuItem::*)($Action*)>(&JMenuItem::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(JMenuItem::*)($String*,$Icon*)>(&JMenuItem::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(JMenuItem::*)($String*,int32_t)>(&JMenuItem::init$))},
	{"actionPropertyChanged", "(Ljavax/swing/Action;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"addMenuDragMouseListener", "(Ljavax/swing/event/MenuDragMouseListener;)V", nullptr, $PUBLIC},
	{"addMenuKeyListener", "(Ljavax/swing/event/MenuKeyListener;)V", nullptr, $PUBLIC},
	{"alwaysOnTop", "()Z", nullptr, 0},
	{"configureAcceleratorFromAction", "(Ljavax/swing/Action;)V", nullptr, 0},
	{"configurePropertiesFromAction", "(Ljavax/swing/Action;)V", nullptr, $PROTECTED},
	{"fireMenuDragMouseDragged", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PROTECTED},
	{"fireMenuDragMouseEntered", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PROTECTED},
	{"fireMenuDragMouseExited", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PROTECTED},
	{"fireMenuDragMouseReleased", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PROTECTED},
	{"fireMenuKeyPressed", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PROTECTED},
	{"fireMenuKeyReleased", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PROTECTED},
	{"fireMenuKeyTyped", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PROTECTED},
	{"getAccelerator", "()Ljavax/swing/KeyStroke;", nullptr, $PUBLIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuItem_MethodAnnotations_getAccessibleContext20},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getMenuDragMouseListeners", "()[Ljavax/swing/event/MenuDragMouseListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuItem_MethodAnnotations_getMenuDragMouseListeners22},
	{"getMenuKeyListeners", "()[Ljavax/swing/event/MenuKeyListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuItem_MethodAnnotations_getMenuKeyListeners23},
	{"getSubElements", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuItem_MethodAnnotations_getSubElements24},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuItem_MethodAnnotations_getUIClassID25},
	{"init", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PROTECTED},
	{"initFocusability", "()V", nullptr, 0},
	{"isArmed", "()Z", nullptr, $PUBLIC},
	{"largeIconChanged", "(Ljavax/swing/Action;)V", nullptr, 0},
	{"menuSelectionChanged", "(Z)V", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC},
	{"processMenuDragMouseEvent", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC},
	{"processMenuKeyEvent", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC},
	{"processMouseEvent", "(Ljava/awt/event/MouseEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JMenuItem::*)($ObjectInputStream*)>(&JMenuItem::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"removeMenuDragMouseListener", "(Ljavax/swing/event/MenuDragMouseListener;)V", nullptr, $PUBLIC},
	{"removeMenuKeyListener", "(Ljavax/swing/event/MenuKeyListener;)V", nullptr, $PUBLIC},
	{"setAccelerator", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuItem_MethodAnnotations_setAccelerator39},
	{"setArmed", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuItem_MethodAnnotations_setArmed40},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuItem_MethodAnnotations_setEnabled41},
	{"setIconFromAction", "(Ljavax/swing/Action;)V", nullptr, 0},
	{"setModel", "(Ljavax/swing/ButtonModel;)V", nullptr, $PUBLIC},
	{"setUI", "(Ljavax/swing/plaf/MenuItemUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuItem_MethodAnnotations_setUI44},
	{"smallIconChanged", "(Ljavax/swing/Action;)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JMenuItem::*)($ObjectOutputStream*)>(&JMenuItem::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JMenuItem_InnerClassesInfo_[] = {
	{"javax.swing.JMenuItem$AccessibleJMenuItem", "javax.swing.JMenuItem", "AccessibleJMenuItem", $PROTECTED},
	{"javax.swing.JMenuItem$MenuItemFocusListener", "javax.swing.JMenuItem", "MenuItemFocusListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JMenuItem",
	"javax.swing.AbstractButton",
	"javax.accessibility.Accessible,javax.swing.MenuElement",
	_JMenuItem_FieldInfo_,
	_JMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_JMenuItem_InnerClassesInfo_,
	_JMenuItem_Annotations_,
	nullptr,
	"javax.swing.JMenuItem$AccessibleJMenuItem,javax.swing.JMenuItem$MenuItemFocusListener"
};

$Object* allocate$JMenuItem($Class* clazz) {
	return $of($alloc(JMenuItem));
}

$String* JMenuItem::toString() {
	 return this->$AbstractButton::toString();
}

int32_t JMenuItem::hashCode() {
	 return this->$AbstractButton::hashCode();
}

bool JMenuItem::equals(Object$* arg0) {
	 return this->$AbstractButton::equals(arg0);
}

$Object* JMenuItem::clone() {
	 return this->$AbstractButton::clone();
}

void JMenuItem::finalize() {
	this->$AbstractButton::finalize();
}

$String* JMenuItem::uiClassID = nullptr;

void JMenuItem::init$() {
	JMenuItem::init$(($String*)nullptr, ($Icon*)nullptr);
}

void JMenuItem::init$($Icon* icon) {
	JMenuItem::init$(($String*)nullptr, icon);
}

void JMenuItem::init$($String* text) {
	JMenuItem::init$(text, ($Icon*)nullptr);
}

void JMenuItem::init$($Action* a) {
	JMenuItem::init$();
	setAction(a);
}

void JMenuItem::init$($String* text, $Icon* icon) {
	$AbstractButton::init$();
	this->isMouseDragged = false;
	setModel($$new($DefaultButtonModel));
	init(text, icon);
	initFocusability();
}

void JMenuItem::init$($String* text, int32_t mnemonic) {
	$AbstractButton::init$();
	this->isMouseDragged = false;
	setModel($$new($DefaultButtonModel));
	init(text, nullptr);
	setMnemonic(mnemonic);
	initFocusability();
}

void JMenuItem::setModel($ButtonModel* newModel) {
	$AbstractButton::setModel(newModel);
	if ($instanceOf($DefaultButtonModel, newModel)) {
		$nc(($cast($DefaultButtonModel, newModel)))->setMenuItem(true);
	}
}

void JMenuItem::initFocusability() {
	setFocusable(false);
}

void JMenuItem::init($String* text, $Icon* icon) {
	if (text != nullptr) {
		setText(text);
	}
	if (icon != nullptr) {
		setIcon(icon);
	}
	addFocusListener($$new($JMenuItem$MenuItemFocusListener));
	$init($Boolean);
	setUIProperty("borderPainted"_s, $Boolean::FALSE);
	setFocusPainted(false);
	setHorizontalTextPosition($JButton::TRAILING);
	setHorizontalAlignment($JButton::LEADING);
	updateUI();
}

void JMenuItem::setUI($MenuItemUI* ui) {
	$AbstractButton::setUI(static_cast<$ButtonUI*>(ui));
}

void JMenuItem::updateUI() {
	setUI($cast($MenuItemUI, $($UIManager::getUI(this))));
}

$String* JMenuItem::getUIClassID() {
	return JMenuItem::uiClassID;
}

void JMenuItem::setArmed(bool b) {
	$var($ButtonModel, model, getModel());
	bool oldValue = $nc(model)->isArmed();
	if (model->isArmed() != b) {
		model->setArmed(b);
	}
}

bool JMenuItem::isArmed() {
	$var($ButtonModel, model, getModel());
	return $nc(model)->isArmed();
}

void JMenuItem::setEnabled(bool b) {
	if (!b && !$UIManager::getBoolean("MenuItem.disabledAreNavigable"_s)) {
		setArmed(false);
	}
	$AbstractButton::setEnabled(b);
}

bool JMenuItem::alwaysOnTop() {
	$load($JInternalFrame);
	if ($SwingUtilities::getAncestorOfClass($JInternalFrame::class$, this) != nullptr) {
		return false;
	}
	return true;
}

void JMenuItem::setAccelerator($KeyStroke* keyStroke) {
	$var($KeyStroke, oldAccelerator, this->accelerator);
	$set(this, accelerator, keyStroke);
	repaint();
	revalidate();
	firePropertyChange("accelerator"_s, $of(oldAccelerator), $of(this->accelerator));
}

$KeyStroke* JMenuItem::getAccelerator() {
	return this->accelerator;
}

void JMenuItem::configurePropertiesFromAction($Action* a) {
	$AbstractButton::configurePropertiesFromAction(a);
	configureAcceleratorFromAction(a);
}

void JMenuItem::setIconFromAction($Action* a) {
	$var($Icon, icon, nullptr);
	if (a != nullptr) {
		$init($Action);
		$assign(icon, $cast($Icon, a->getValue($Action::SMALL_ICON)));
	}
	setIcon(icon);
}

void JMenuItem::largeIconChanged($Action* a) {
}

void JMenuItem::smallIconChanged($Action* a) {
	setIconFromAction(a);
}

void JMenuItem::configureAcceleratorFromAction($Action* a) {
	$init($Action);
	$var($KeyStroke, ks, (a == nullptr) ? ($KeyStroke*)nullptr : $cast($KeyStroke, $nc(a)->getValue($Action::ACCELERATOR_KEY)));
	setAccelerator(ks);
}

void JMenuItem::actionPropertyChanged($Action* action, $String* propertyName) {
	$init($Action);
	if (propertyName == $Action::ACCELERATOR_KEY) {
		configureAcceleratorFromAction(action);
	} else {
		$AbstractButton::actionPropertyChanged(action, propertyName);
	}
}

void JMenuItem::processMouseEvent($MouseEvent* e, $MenuElementArray* path, $MenuSelectionManager* manager) {
	$useLocalCurrentObjectStackCache();
	$var($Component, var$0, $nc(e)->getComponent());
	int32_t var$1 = e->getID();
	int64_t var$2 = e->getWhen();
	int32_t var$3 = e->getModifiers();
	int32_t var$4 = e->getX();
	int32_t var$5 = e->getY();
	int32_t var$6 = e->getXOnScreen();
	int32_t var$7 = e->getYOnScreen();
	int32_t var$8 = e->getClickCount();
	processMenuDragMouseEvent($$new($MenuDragMouseEvent, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, e->isPopupTrigger(), path, manager));
}

void JMenuItem::processKeyEvent($KeyEvent* e, $MenuElementArray* path, $MenuSelectionManager* manager) {
	$useLocalCurrentObjectStackCache();
	$var($Component, var$0, $nc(e)->getComponent());
	int32_t var$1 = e->getID();
	int64_t var$2 = e->getWhen();
	int32_t var$3 = e->getModifiers();
	int32_t var$4 = e->getKeyCode();
	$var($MenuKeyEvent, mke, $new($MenuKeyEvent, var$0, var$1, var$2, var$3, var$4, e->getKeyChar(), path, manager));
	processMenuKeyEvent(mke);
	if (mke->isConsumed()) {
		$nc(e)->consume();
	}
}

void JMenuItem::processMenuDragMouseEvent($MenuDragMouseEvent* e) {
	switch ($nc(e)->getID()) {
	case $MouseEvent::MOUSE_ENTERED:
		{
			this->isMouseDragged = false;
			fireMenuDragMouseEntered(e);
			break;
		}
	case $MouseEvent::MOUSE_EXITED:
		{
			this->isMouseDragged = false;
			fireMenuDragMouseExited(e);
			break;
		}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			this->isMouseDragged = true;
			fireMenuDragMouseDragged(e);
			break;
		}
	case $MouseEvent::MOUSE_RELEASED:
		{
			if (this->isMouseDragged) {
				fireMenuDragMouseReleased(e);
			}
			break;
		}
	default:
		{
			break;
		}
	}
}

void JMenuItem::processMenuKeyEvent($MenuKeyEvent* e) {
	switch ($nc(e)->getID()) {
	case $KeyEvent::KEY_PRESSED:
		{
			fireMenuKeyPressed(e);
			break;
		}
	case $KeyEvent::KEY_RELEASED:
		{
			fireMenuKeyReleased(e);
			break;
		}
	case $KeyEvent::KEY_TYPED:
		{
			fireMenuKeyTyped(e);
			break;
		}
	default:
		{
			break;
		}
	}
}

void JMenuItem::fireMenuDragMouseEntered($MenuDragMouseEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuDragMouseListener);
		if ($equals(listeners->get(i), $MenuDragMouseListener::class$)) {
			$nc(($cast($MenuDragMouseListener, listeners->get(i + 1))))->menuDragMouseEntered(event);
		}
	}
}

void JMenuItem::fireMenuDragMouseExited($MenuDragMouseEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuDragMouseListener);
		if ($equals(listeners->get(i), $MenuDragMouseListener::class$)) {
			$nc(($cast($MenuDragMouseListener, listeners->get(i + 1))))->menuDragMouseExited(event);
		}
	}
}

void JMenuItem::fireMenuDragMouseDragged($MenuDragMouseEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuDragMouseListener);
		if ($equals(listeners->get(i), $MenuDragMouseListener::class$)) {
			$nc(($cast($MenuDragMouseListener, listeners->get(i + 1))))->menuDragMouseDragged(event);
		}
	}
}

void JMenuItem::fireMenuDragMouseReleased($MenuDragMouseEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuDragMouseListener);
		if ($equals(listeners->get(i), $MenuDragMouseListener::class$)) {
			$nc(($cast($MenuDragMouseListener, listeners->get(i + 1))))->menuDragMouseReleased(event);
		}
	}
}

void JMenuItem::fireMenuKeyPressed($MenuKeyEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuKeyListener);
		if ($equals(listeners->get(i), $MenuKeyListener::class$)) {
			$nc(($cast($MenuKeyListener, listeners->get(i + 1))))->menuKeyPressed(event);
		}
	}
}

void JMenuItem::fireMenuKeyReleased($MenuKeyEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuKeyListener);
		if ($equals(listeners->get(i), $MenuKeyListener::class$)) {
			$nc(($cast($MenuKeyListener, listeners->get(i + 1))))->menuKeyReleased(event);
		}
	}
}

void JMenuItem::fireMenuKeyTyped($MenuKeyEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuKeyListener);
		if ($equals(listeners->get(i), $MenuKeyListener::class$)) {
			$nc(($cast($MenuKeyListener, listeners->get(i + 1))))->menuKeyTyped(event);
		}
	}
}

void JMenuItem::menuSelectionChanged(bool isIncluded) {
	setArmed(isIncluded);
}

$MenuElementArray* JMenuItem::getSubElements() {
	return $new($MenuElementArray, 0);
}

$Component* JMenuItem::getComponent() {
	return this;
}

void JMenuItem::addMenuDragMouseListener($MenuDragMouseListener* l) {
	$load($MenuDragMouseListener);
	$nc(this->listenerList)->add($MenuDragMouseListener::class$, l);
}

void JMenuItem::removeMenuDragMouseListener($MenuDragMouseListener* l) {
	$load($MenuDragMouseListener);
	$nc(this->listenerList)->remove($MenuDragMouseListener::class$, l);
}

$MenuDragMouseListenerArray* JMenuItem::getMenuDragMouseListeners() {
	$load($MenuDragMouseListener);
	return $fcast($MenuDragMouseListenerArray, $nc(this->listenerList)->getListeners($MenuDragMouseListener::class$));
}

void JMenuItem::addMenuKeyListener($MenuKeyListener* l) {
	$load($MenuKeyListener);
	$nc(this->listenerList)->add($MenuKeyListener::class$, l);
}

void JMenuItem::removeMenuKeyListener($MenuKeyListener* l) {
	$load($MenuKeyListener);
	$nc(this->listenerList)->remove($MenuKeyListener::class$, l);
}

$MenuKeyListenerArray* JMenuItem::getMenuKeyListeners() {
	$load($MenuKeyListener);
	return $fcast($MenuKeyListenerArray, $nc(this->listenerList)->getListeners($MenuKeyListener::class$));
}

void JMenuItem::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if ($nc($(getUIClassID()))->equals(JMenuItem::uiClassID)) {
		updateUI();
	}
}

void JMenuItem::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JMenuItem::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JMenuItem::paramString() {
	return $AbstractButton::paramString();
}

$AccessibleContext* JMenuItem::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JMenuItem$AccessibleJMenuItem, this));
	}
	return this->accessibleContext;
}

JMenuItem::JMenuItem() {
}

void clinit$JMenuItem($Class* class$) {
	$assignStatic(JMenuItem::uiClassID, "MenuItemUI"_s);
}

$Class* JMenuItem::load$($String* name, bool initialize) {
	$loadClass(JMenuItem, name, initialize, &_JMenuItem_ClassInfo_, clinit$JMenuItem, allocate$JMenuItem);
	return class$;
}

$Class* JMenuItem::class$ = nullptr;

	} // swing
} // javax