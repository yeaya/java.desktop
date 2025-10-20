#include <javax/swing/plaf/basic/BasicComboPopup$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

#undef SELECTED

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $InputEvent = ::java::awt::event::InputEvent;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $MouseWheelListener = ::java::awt::event::MouseWheelListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JScrollPane = ::javax::swing::JScrollPane;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboPopup$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$Handler, this$0)},
	{}
};

$MethodInfo _BasicComboPopup$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicComboPopup$Handler::*)($BasicComboPopup*)>(&BasicComboPopup$Handler::init$))},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseWheelMoved", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboPopup$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$Handler", "javax.swing.plaf.basic.BasicComboPopup", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicComboPopup$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup$Handler",
	"java.lang.Object",
	"java.awt.event.ItemListener,java.awt.event.MouseListener,java.awt.event.MouseMotionListener,java.awt.event.MouseWheelListener,java.beans.PropertyChangeListener,java.io.Serializable",
	_BasicComboPopup$Handler_FieldInfo_,
	_BasicComboPopup$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboPopup$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup"
};

$Object* allocate$BasicComboPopup$Handler($Class* clazz) {
	return $of($alloc(BasicComboPopup$Handler));
}

int32_t BasicComboPopup$Handler::hashCode() {
	 return this->$ItemListener::hashCode();
}

bool BasicComboPopup$Handler::equals(Object$* arg0) {
	 return this->$ItemListener::equals(arg0);
}

$Object* BasicComboPopup$Handler::clone() {
	 return this->$ItemListener::clone();
}

$String* BasicComboPopup$Handler::toString() {
	 return this->$ItemListener::toString();
}

void BasicComboPopup$Handler::finalize() {
	this->$ItemListener::finalize();
}

void BasicComboPopup$Handler::init$($BasicComboPopup* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboPopup$Handler::mouseClicked($MouseEvent* e) {
}

void BasicComboPopup$Handler::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($equals($nc(e)->getSource(), this->this$0->list$)) {
		return;
	}
	bool var$0 = !$SwingUtilities::isLeftMouseButton(e);
	if (var$0 || !$nc(this->this$0->comboBox)->isEnabled()) {
		return;
	}
	if ($nc(this->this$0->comboBox)->isEditable()) {
		$var($Component, comp, $nc($($nc(this->this$0->comboBox)->getEditor()))->getEditorComponent());
		if ((!($instanceOf($JComponent, comp))) || $nc(($cast($JComponent, comp)))->isRequestFocusEnabled()) {
			$nc(comp)->requestFocus();
		}
	} else if ($nc(this->this$0->comboBox)->isRequestFocusEnabled()) {
		$nc(this->this$0->comboBox)->requestFocus();
	}
	this->this$0->togglePopup();
}

void BasicComboPopup$Handler::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($equals($nc(e)->getSource(), this->this$0->list$)) {
		if ($nc($($nc(this->this$0->list$)->getModel()))->getSize() > 0) {
			int32_t var$0 = $nc(this->this$0->comboBox)->getSelectedIndex();
			if (var$0 == $nc(this->this$0->list$)->getSelectedIndex()) {
				$nc($($nc(this->this$0->comboBox)->getEditor()))->setItem($($nc(this->this$0->list$)->getSelectedValue()));
			}
			$nc(this->this$0->comboBox)->setSelectedIndex($nc(this->this$0->list$)->getSelectedIndex());
		}
		$nc(this->this$0->comboBox)->setPopupVisible(false);
		bool var$1 = $nc(this->this$0->comboBox)->isEditable();
		if (var$1 && $nc(this->this$0->comboBox)->getEditor() != nullptr) {
			$var($ComboBoxEditor, var$2, $nc(this->this$0->comboBox)->getEditor());
			$nc(this->this$0->comboBox)->configureEditor(var$2, $($nc(this->this$0->comboBox)->getSelectedItem()));
		}
		return;
	}
	$var($Component, source, $cast($Component, $nc(e)->getSource()));
	$var($Dimension, size, $nc(source)->getSize());
	$var($Rectangle, bounds, $new($Rectangle, 0, 0, $nc(size)->width, size->height));
	if (!bounds->contains($(e->getPoint()))) {
		$var($MouseEvent, newEvent, this->this$0->convertMouseEvent(e));
		$var($Point, location, $nc(newEvent)->getPoint());
		$var($Rectangle, r, $new($Rectangle));
		$nc(this->this$0->list$)->computeVisibleRect(r);
		if (r->contains(location)) {
			int32_t var$3 = $nc(this->this$0->comboBox)->getSelectedIndex();
			if (var$3 == $nc(this->this$0->list$)->getSelectedIndex()) {
				$nc($($nc(this->this$0->comboBox)->getEditor()))->setItem($($nc(this->this$0->list$)->getSelectedValue()));
			}
			$nc(this->this$0->comboBox)->setSelectedIndex($nc(this->this$0->list$)->getSelectedIndex());
		}
		$nc(this->this$0->comboBox)->setPopupVisible(false);
	}
	this->this$0->hasEntered = false;
	this->this$0->stopAutoScrolling();
}

void BasicComboPopup$Handler::mouseEntered($MouseEvent* e) {
}

void BasicComboPopup$Handler::mouseExited($MouseEvent* e) {
}

void BasicComboPopup$Handler::mouseMoved($MouseEvent* anEvent) {
	$useLocalCurrentObjectStackCache();
	if ($equals($nc(anEvent)->getSource(), this->this$0->list$)) {
		$var($Point, location, anEvent->getPoint());
		$var($Rectangle, r, $new($Rectangle));
		$nc(this->this$0->list$)->computeVisibleRect(r);
		if (r->contains(location)) {
			this->this$0->updateListBoxSelectionForEvent(anEvent, false);
		}
	}
}

void BasicComboPopup$Handler::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($equals($nc(e)->getSource(), this->this$0->list$)) {
		return;
	}
	if (this->this$0->isVisible()) {
		$var($MouseEvent, newEvent, this->this$0->convertMouseEvent(e));
		$var($Rectangle, r, $new($Rectangle));
		$nc(this->this$0->list$)->computeVisibleRect(r);
		bool var$0 = $nc($($nc(newEvent)->getPoint()))->y >= r->y;
		if (var$0 && $nc($(newEvent->getPoint()))->y <= r->y + r->height - 1) {
			this->this$0->hasEntered = true;
			if (this->this$0->isAutoScrolling) {
				this->this$0->stopAutoScrolling();
			}
			$var($Point, location, newEvent->getPoint());
			if (r->contains(location)) {
				this->this$0->updateListBoxSelectionForEvent(newEvent, false);
			}
		} else if (this->this$0->hasEntered) {
			int32_t directionToScroll = $nc($(newEvent->getPoint()))->y < r->y ? 0 : 1;
			if (this->this$0->isAutoScrolling && this->this$0->scrollDirection != directionToScroll) {
				this->this$0->stopAutoScrolling();
				this->this$0->startAutoScrolling(directionToScroll);
			} else if (!this->this$0->isAutoScrolling) {
				this->this$0->startAutoScrolling(directionToScroll);
			}
		} else if ($nc($($nc(e)->getPoint()))->y < 0) {
			this->this$0->hasEntered = true;
			this->this$0->startAutoScrolling(0);
		}
	}
}

void BasicComboPopup$Handler::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JComboBox, comboBox, $cast($JComboBox, $nc(e)->getSource()));
	$var($String, propertyName, e->getPropertyName());
	if (propertyName == "model"_s) {
		$var($ComboBoxModel, oldModel, $cast($ComboBoxModel, e->getOldValue()));
		$var($ComboBoxModel, newModel, $cast($ComboBoxModel, e->getNewValue()));
		this->this$0->uninstallComboBoxModelListeners(oldModel);
		this->this$0->installComboBoxModelListeners(newModel);
		$nc(this->this$0->list$)->setModel(newModel);
		if (this->this$0->isVisible()) {
			this->this$0->hide();
		}
	} else if (propertyName == "renderer"_s) {
		$nc(this->this$0->list$)->setCellRenderer($($nc(comboBox)->getRenderer()));
		if (this->this$0->isVisible()) {
			this->this$0->hide();
		}
	} else if (propertyName == "componentOrientation"_s) {
		$var($ComponentOrientation, o, $cast($ComponentOrientation, e->getNewValue()));
		$var($JList, list, this->this$0->getList());
		if (list != nullptr && list->getComponentOrientation() != o) {
			list->setComponentOrientation(o);
		}
		if (this->this$0->scroller != nullptr && $nc(this->this$0->scroller)->getComponentOrientation() != o) {
			$nc(this->this$0->scroller)->setComponentOrientation(o);
		}
		if (o != this->this$0->getComponentOrientation()) {
			this->this$0->setComponentOrientation(o);
		}
	} else if (propertyName == "lightWeightPopupEnabled"_s) {
		this->this$0->setLightWeightPopupEnabled($nc(comboBox)->isLightWeightPopupEnabled());
	}
}

void BasicComboPopup$Handler::itemStateChanged($ItemEvent* e) {
	if ($nc(e)->getStateChange() == $ItemEvent::SELECTED) {
		$var($JComboBox, comboBox, $cast($JComboBox, e->getSource()));
		this->this$0->setListSelection($nc(comboBox)->getSelectedIndex());
	} else {
		this->this$0->setListSelection(-1);
	}
}

void BasicComboPopup$Handler::mouseWheelMoved($MouseWheelEvent* e) {
	$nc(e)->consume();
}

BasicComboPopup$Handler::BasicComboPopup$Handler() {
}

$Class* BasicComboPopup$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup$Handler, name, initialize, &_BasicComboPopup$Handler_ClassInfo_, allocate$BasicComboPopup$Handler);
	return class$;
}

$Class* BasicComboPopup$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax