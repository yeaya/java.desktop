#include <javax/swing/plaf/basic/BasicMenuItemUI$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/event/MenuDragMouseEvent.h>
#include <javax/swing/event/MenuDragMouseListener.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef BUTTON2_MASK
#undef BUTTON3_MASK

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $MenuDragMouseEvent = ::javax::swing::event::MenuDragMouseEvent;
using $MenuDragMouseListener = ::javax::swing::event::MenuDragMouseListener;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicMenuItemUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicMenuItemUI$Handler, this$0)},
	{}
};

$MethodInfo _BasicMenuItemUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicMenuItemUI;)V", nullptr, 0, $method(static_cast<void(BasicMenuItemUI$Handler::*)($BasicMenuItemUI*)>(&BasicMenuItemUI$Handler::init$))},
	{"menuDragMouseDragged", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC},
	{"menuDragMouseEntered", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC},
	{"menuDragMouseExited", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC},
	{"menuDragMouseReleased", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicMenuItemUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicMenuItemUI$Handler", "javax.swing.plaf.basic.BasicMenuItemUI", "Handler", 0},
	{}
};

$ClassInfo _BasicMenuItemUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicMenuItemUI$Handler",
	"java.lang.Object",
	"javax.swing.event.MenuDragMouseListener,javax.swing.event.MouseInputListener,java.beans.PropertyChangeListener",
	_BasicMenuItemUI$Handler_FieldInfo_,
	_BasicMenuItemUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicMenuItemUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicMenuItemUI"
};

$Object* allocate$BasicMenuItemUI$Handler($Class* clazz) {
	return $of($alloc(BasicMenuItemUI$Handler));
}

int32_t BasicMenuItemUI$Handler::hashCode() {
	 return this->$MenuDragMouseListener::hashCode();
}

bool BasicMenuItemUI$Handler::equals(Object$* arg0) {
	 return this->$MenuDragMouseListener::equals(arg0);
}

$Object* BasicMenuItemUI$Handler::clone() {
	 return this->$MenuDragMouseListener::clone();
}

$String* BasicMenuItemUI$Handler::toString() {
	 return this->$MenuDragMouseListener::toString();
}

void BasicMenuItemUI$Handler::finalize() {
	this->$MenuDragMouseListener::finalize();
}

void BasicMenuItemUI$Handler::init$($BasicMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicMenuItemUI$Handler::mouseClicked($MouseEvent* e) {
}

void BasicMenuItemUI$Handler::mousePressed($MouseEvent* e) {
}

void BasicMenuItemUI$Handler::mouseReleased($MouseEvent* e) {
	if (!$nc(this->this$0->menuItem)->isEnabled()) {
		return;
	}
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$var($Point, p, $nc(e)->getPoint());
	bool var$0 = $nc(p)->x >= 0 && p->x < $nc(this->this$0->menuItem)->getWidth() && p->y >= 0;
	if (var$0 && p->y < $nc(this->this$0->menuItem)->getHeight()) {
		this->this$0->doClick(manager);
	} else {
		$nc(manager)->processMouseEvent(e);
	}
}

void BasicMenuItemUI$Handler::mouseEntered($MouseEvent* e) {
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	int32_t modifiers = $nc(e)->getModifiers();
	if (((int32_t)(modifiers & (uint32_t)(($InputEvent::BUTTON1_MASK | $InputEvent::BUTTON2_MASK) | $InputEvent::BUTTON3_MASK))) != 0) {
		$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
	} else {
		$nc(manager)->setSelectedPath($(this->this$0->getPath()));
	}
}

void BasicMenuItemUI$Handler::mouseExited($MouseEvent* e) {
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	int32_t modifiers = $nc(e)->getModifiers();
	if (((int32_t)(modifiers & (uint32_t)(($InputEvent::BUTTON1_MASK | $InputEvent::BUTTON2_MASK) | $InputEvent::BUTTON3_MASK))) != 0) {
		$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
	} else {
		$var($MenuElementArray, path, $nc(manager)->getSelectedPath());
		if ($nc(path)->length > 1 && $equals(path->get(path->length - 1), this->this$0->menuItem)) {
			$var($MenuElementArray, newPath, $new($MenuElementArray, path->length - 1));
			int32_t i = 0;
			int32_t c = 0;
			for (i = 0, c = path->length - 1; i < c; ++i) {
				newPath->set(i, path->get(i));
			}
			manager->setSelectedPath(newPath);
		}
	}
}

void BasicMenuItemUI$Handler::mouseDragged($MouseEvent* e) {
	$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
}

void BasicMenuItemUI$Handler::mouseMoved($MouseEvent* e) {
}

void BasicMenuItemUI$Handler::menuDragMouseEntered($MenuDragMouseEvent* e) {
	$var($MenuSelectionManager, manager, $nc(e)->getMenuSelectionManager());
	$var($MenuElementArray, path, e->getPath());
	$nc(manager)->setSelectedPath(path);
}

void BasicMenuItemUI$Handler::menuDragMouseDragged($MenuDragMouseEvent* e) {
	$var($MenuSelectionManager, manager, $nc(e)->getMenuSelectionManager());
	$var($MenuElementArray, path, e->getPath());
	$nc(manager)->setSelectedPath(path);
}

void BasicMenuItemUI$Handler::menuDragMouseExited($MenuDragMouseEvent* e) {
}

void BasicMenuItemUI$Handler::menuDragMouseReleased($MenuDragMouseEvent* e) {
	if (!$nc(this->this$0->menuItem)->isEnabled()) {
		return;
	}
	$var($MenuSelectionManager, manager, $nc(e)->getMenuSelectionManager());
	$var($MenuElementArray, path, e->getPath());
	$var($Point, p, e->getPoint());
	bool var$0 = $nc(p)->x >= 0 && p->x < $nc(this->this$0->menuItem)->getWidth() && p->y >= 0;
	if (var$0 && p->y < $nc(this->this$0->menuItem)->getHeight()) {
		this->this$0->doClick(manager);
	} else {
		$nc(manager)->clearSelectedPath();
	}
}

void BasicMenuItemUI$Handler::propertyChange($PropertyChangeEvent* e) {
	$var($String, name, $nc(e)->getPropertyName());
	if (name == "labelFor"_s || name == "displayedMnemonic"_s || name == "accelerator"_s) {
		this->this$0->updateAcceleratorBinding();
	} else if (name == "text"_s || "font"_s == name || "foreground"_s == name || $SwingUtilities2::isScaleChanged(e)) {
		$var($JMenuItem, lbl, $cast($JMenuItem, e->getSource()));
		$var($String, text, $nc(lbl)->getText());
		$BasicHTML::updateRenderer(lbl, text);
	} else if (name == "iconTextGap"_s) {
		this->this$0->defaultTextIconGap = $nc(($cast($Number, $(e->getNewValue()))))->intValue();
	}
}

BasicMenuItemUI$Handler::BasicMenuItemUI$Handler() {
}

$Class* BasicMenuItemUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicMenuItemUI$Handler, name, initialize, &_BasicMenuItemUI$Handler_ClassInfo_, allocate$BasicMenuItemUI$Handler);
	return class$;
}

$Class* BasicMenuItemUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax