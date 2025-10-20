#include <javax/swing/plaf/basic/BasicToolBarUI$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JToolBar$Separator.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef IS_ROLLOVER
#undef VERTICAL

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator = ::javax::swing::JSeparator;
using $JToolBar = ::javax::swing::JToolBar;
using $JToolBar$Separator = ::javax::swing::JToolBar$Separator;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToolBarUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$Handler, this$0)},
	{"tb", "Ljavax/swing/JToolBar;", nullptr, 0, $field(BasicToolBarUI$Handler, tb)},
	{"isDragging", "Z", nullptr, 0, $field(BasicToolBarUI$Handler, isDragging)},
	{"origin", "Ljava/awt/Point;", nullptr, 0, $field(BasicToolBarUI$Handler, origin)},
	{}
};

$MethodInfo _BasicToolBarUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicToolBarUI$Handler::*)($BasicToolBarUI*)>(&BasicToolBarUI$Handler::init$))},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
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

$InnerClassInfo _BasicToolBarUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolBarUI$Handler", "javax.swing.plaf.basic.BasicToolBarUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicToolBarUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarUI$Handler",
	"java.lang.Object",
	"java.awt.event.ContainerListener,java.awt.event.FocusListener,javax.swing.event.MouseInputListener,java.beans.PropertyChangeListener",
	_BasicToolBarUI$Handler_FieldInfo_,
	_BasicToolBarUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicToolBarUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolBarUI"
};

$Object* allocate$BasicToolBarUI$Handler($Class* clazz) {
	return $of($alloc(BasicToolBarUI$Handler));
}

int32_t BasicToolBarUI$Handler::hashCode() {
	 return this->$ContainerListener::hashCode();
}

bool BasicToolBarUI$Handler::equals(Object$* arg0) {
	 return this->$ContainerListener::equals(arg0);
}

$Object* BasicToolBarUI$Handler::clone() {
	 return this->$ContainerListener::clone();
}

$String* BasicToolBarUI$Handler::toString() {
	 return this->$ContainerListener::toString();
}

void BasicToolBarUI$Handler::finalize() {
	this->$ContainerListener::finalize();
}

void BasicToolBarUI$Handler::init$($BasicToolBarUI* this$0) {
	$set(this, this$0, this$0);
	this->isDragging = false;
	$set(this, origin, nullptr);
}

void BasicToolBarUI$Handler::componentAdded($ContainerEvent* evt) {
	$var($Component, c, $nc(evt)->getChild());
	if (this->this$0->toolBarFocusListener != nullptr) {
		$nc(c)->addFocusListener(this->this$0->toolBarFocusListener);
	}
	if (this->this$0->isRolloverBorders()) {
		this->this$0->setBorderToRollover(c);
	} else {
		this->this$0->setBorderToNonRollover(c);
	}
}

void BasicToolBarUI$Handler::componentRemoved($ContainerEvent* evt) {
	$var($Component, c, $nc(evt)->getChild());
	if (this->this$0->toolBarFocusListener != nullptr) {
		$nc(c)->removeFocusListener(this->this$0->toolBarFocusListener);
	}
	this->this$0->setBorderToNormal(c);
}

void BasicToolBarUI$Handler::focusGained($FocusEvent* evt) {
	$var($Component, c, $nc(evt)->getComponent());
	this->this$0->focusedCompIndex = $nc(this->this$0->toolBar)->getComponentIndex(c);
}

void BasicToolBarUI$Handler::focusLost($FocusEvent* evt) {
}

void BasicToolBarUI$Handler::mousePressed($MouseEvent* evt) {
	if (!$nc(this->tb)->isEnabled()) {
		return;
	}
	this->isDragging = false;
}

void BasicToolBarUI$Handler::mouseReleased($MouseEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->tb)->isEnabled()) {
		return;
	}
	if (this->isDragging) {
		$var($Point, position, $nc(evt)->getPoint());
		if (this->origin == nullptr) {
			$set(this, origin, $nc($(evt->getComponent()))->getLocationOnScreen());
		}
		this->this$0->floatAt(position, this->origin);
	}
	$set(this, origin, nullptr);
	this->isDragging = false;
}

void BasicToolBarUI$Handler::mouseDragged($MouseEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->tb)->isEnabled()) {
		return;
	}
	this->isDragging = true;
	$var($Point, position, $nc(evt)->getPoint());
	if (this->origin == nullptr) {
		$set(this, origin, $nc($(evt->getComponent()))->getLocationOnScreen());
	}
	this->this$0->dragTo(position, this->origin);
}

void BasicToolBarUI$Handler::mouseClicked($MouseEvent* evt) {
}

void BasicToolBarUI$Handler::mouseEntered($MouseEvent* evt) {
}

void BasicToolBarUI$Handler::mouseExited($MouseEvent* evt) {
}

void BasicToolBarUI$Handler::mouseMoved($MouseEvent* evt) {
}

void BasicToolBarUI$Handler::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(evt)->getPropertyName());
	if (propertyName == "lookAndFeel"_s) {
		$nc(this->this$0->toolBar)->updateUI();
	} else if (propertyName == "orientation"_s) {
		$var($ComponentArray, components, $nc(this->this$0->toolBar)->getComponents());
		int32_t orientation = $nc(($cast($Integer, $(evt->getNewValue()))))->intValue();
		$var($JToolBar$Separator, separator, nullptr);
		for (int32_t i = 0; i < $nc(components)->length; ++i) {
			if ($instanceOf($JToolBar$Separator, components->get(i))) {
				$assign(separator, $cast($JToolBar$Separator, components->get(i)));
				if (orientation == $JToolBar::HORIZONTAL) {
					$nc(separator)->setOrientation($JSeparator::VERTICAL);
				} else {
					$nc(separator)->setOrientation($JSeparator::HORIZONTAL);
				}
				$var($Dimension, size, $nc(separator)->getSeparatorSize());
				if (size != nullptr && size->width != size->height) {
					$var($Dimension, newSize, $new($Dimension, size->height, size->width));
					separator->setSeparatorSize(newSize);
				}
			}
		}
	} else {
		$init($BasicToolBarUI);
		if (propertyName == $BasicToolBarUI::IS_ROLLOVER) {
			this->this$0->installNormalBorders(this->this$0->toolBar);
			this->this$0->setRolloverBorders($nc(($cast($Boolean, $(evt->getNewValue()))))->booleanValue());
		}
	}
}

BasicToolBarUI$Handler::BasicToolBarUI$Handler() {
}

$Class* BasicToolBarUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarUI$Handler, name, initialize, &_BasicToolBarUI$Handler_ClassInfo_, allocate$BasicToolBarUI$Handler);
	return class$;
}

$Class* BasicToolBarUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax