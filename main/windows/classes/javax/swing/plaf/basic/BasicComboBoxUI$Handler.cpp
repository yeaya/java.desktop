#include <javax/swing/plaf/basic/BasicComboBoxUI$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CHAR_UNDEFINED
#undef IS_TABLE_CELL_EDITOR
#undef TOOL_TIP_TEXT_KEY
#undef TRUE

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboBoxUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboBoxUI$Handler, this$0)},
	{}
};

$MethodInfo _BasicComboBoxUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboBoxUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicComboBoxUI$Handler::*)($BasicComboBoxUI*)>(&BasicComboBoxUI$Handler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"isTypeAheadKey", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicComboBoxUI$Handler::*)($KeyEvent*)>(&BasicComboBoxUI$Handler::isTypeAheadKey))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboBoxUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxUI$Handler", "javax.swing.plaf.basic.BasicComboBoxUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicComboBoxUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxUI$Handler",
	"java.lang.Object",
	"java.awt.event.ActionListener,java.awt.event.FocusListener,java.awt.event.KeyListener,java.awt.LayoutManager,javax.swing.event.ListDataListener,java.beans.PropertyChangeListener",
	_BasicComboBoxUI$Handler_FieldInfo_,
	_BasicComboBoxUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxUI"
};

$Object* allocate$BasicComboBoxUI$Handler($Class* clazz) {
	return $of($alloc(BasicComboBoxUI$Handler));
}

int32_t BasicComboBoxUI$Handler::hashCode() {
	 return this->$ActionListener::hashCode();
}

bool BasicComboBoxUI$Handler::equals(Object$* arg0) {
	 return this->$ActionListener::equals(arg0);
}

$Object* BasicComboBoxUI$Handler::clone() {
	 return this->$ActionListener::clone();
}

$String* BasicComboBoxUI$Handler::toString() {
	 return this->$ActionListener::toString();
}

void BasicComboBoxUI$Handler::finalize() {
	this->$ActionListener::finalize();
}

void BasicComboBoxUI$Handler::init$($BasicComboBoxUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboBoxUI$Handler::propertyChange($PropertyChangeEvent* e) {
	$var($String, propertyName, $nc(e)->getPropertyName());
	if ($equals(e->getSource(), this->this$0->editor)) {
		if ("border"_s->equals(propertyName)) {
			this->this$0->isMinimumSizeDirty = true;
			this->this$0->isDisplaySizeDirty = true;
			$nc(this->this$0->comboBox)->revalidate();
		}
	} else {
		$var($JComboBox, comboBox, $cast($JComboBox, e->getSource()));
		if (propertyName == "model"_s) {
			$var($ComboBoxModel, newModel, $cast($ComboBoxModel, e->getNewValue()));
			$var($ComboBoxModel, oldModel, $cast($ComboBoxModel, e->getOldValue()));
			if (oldModel != nullptr && this->this$0->listDataListener != nullptr) {
				oldModel->removeListDataListener(this->this$0->listDataListener);
			}
			if (newModel != nullptr && this->this$0->listDataListener != nullptr) {
				newModel->addListDataListener(this->this$0->listDataListener);
			}
			if (this->this$0->editor != nullptr) {
				$var($ComboBoxEditor, var$0, comboBox->getEditor());
				$nc(comboBox)->configureEditor(var$0, $(comboBox->getSelectedItem()));
			}
			this->this$0->isMinimumSizeDirty = true;
			this->this$0->isDisplaySizeDirty = true;
			$nc(comboBox)->revalidate();
			comboBox->repaint();
		} else if (propertyName == "editor"_s && comboBox->isEditable()) {
			this->this$0->addEditor();
			comboBox->revalidate();
		} else if (propertyName == "editable"_s) {
			if (comboBox->isEditable()) {
				comboBox->setRequestFocusEnabled(false);
				this->this$0->addEditor();
			} else {
				comboBox->setRequestFocusEnabled(true);
				this->this$0->removeEditor();
			}
			this->this$0->updateToolTipTextForChildren();
			comboBox->revalidate();
		} else if (propertyName == "enabled"_s) {
			bool enabled = comboBox->isEnabled();
			if (this->this$0->editor != nullptr) {
				$nc(this->this$0->editor)->setEnabled(enabled);
			}
			if (this->this$0->arrowButton != nullptr) {
				$nc(this->this$0->arrowButton)->setEnabled(enabled);
			}
			comboBox->repaint();
		} else if (propertyName == "focusable"_s) {
			bool focusable = comboBox->isFocusable();
			if (this->this$0->editor != nullptr) {
				$nc(this->this$0->editor)->setFocusable(focusable);
			}
			if (this->this$0->arrowButton != nullptr) {
				$nc(this->this$0->arrowButton)->setFocusable(focusable);
			}
			comboBox->repaint();
		} else if (propertyName == "maximumRowCount"_s) {
			if (this->this$0->isPopupVisible(comboBox)) {
				this->this$0->setPopupVisible(comboBox, false);
				this->this$0->setPopupVisible(comboBox, true);
			}
		} else if (propertyName == "font"_s) {
			$nc(this->this$0->listBox)->setFont($(comboBox->getFont()));
			if (this->this$0->editor != nullptr) {
				$nc(this->this$0->editor)->setFont($(comboBox->getFont()));
			}
			this->this$0->isMinimumSizeDirty = true;
			this->this$0->isDisplaySizeDirty = true;
			comboBox->validate();
		} else if ($SwingUtilities2::isScaleChanged(e)) {
			this->this$0->isMinimumSizeDirty = true;
			this->this$0->isDisplaySizeDirty = true;
			comboBox->validate();
		} else {
			$init($JComponent);
			if (propertyName == $JComponent::TOOL_TIP_TEXT_KEY) {
				this->this$0->updateToolTipTextForChildren();
			} else {
				$init($BasicComboBoxUI);
				if (propertyName == $BasicComboBoxUI::IS_TABLE_CELL_EDITOR) {
					$var($Boolean, inTable, $cast($Boolean, e->getNewValue()));
					$init($Boolean);
					this->this$0->isTableCellEditor$ = $nc(inTable)->equals($Boolean::TRUE) ? true : false;
				} else if (propertyName == "prototypeDisplayValue"_s) {
					this->this$0->isMinimumSizeDirty = true;
					this->this$0->isDisplaySizeDirty = true;
					comboBox->revalidate();
				} else if (propertyName == "renderer"_s) {
					this->this$0->isMinimumSizeDirty = true;
					this->this$0->isDisplaySizeDirty = true;
					comboBox->revalidate();
				}
			}
		}
	}
}

void BasicComboBoxUI$Handler::keyPressed($KeyEvent* e) {
	int32_t var$0 = $nc(e)->getKeyCode();
	if (this->this$0->isNavigationKey(var$0, e->getModifiers())) {
		this->this$0->lastTime = 0;
	} else {
		bool var$6 = $nc(this->this$0->comboBox)->isEnabled();
		bool var$5 = var$6 && $nc($($nc(this->this$0->comboBox)->getModel()))->getSize() != 0;
		bool var$4 = var$5 && isTypeAheadKey(e);
		if (var$4 && e->getKeyChar() != $KeyEvent::CHAR_UNDEFINED) {
			this->this$0->time = e->getWhen();
			if ($nc(this->this$0->comboBox)->selectWithKeyChar(e->getKeyChar())) {
				e->consume();
			}
		}
	}
}

void BasicComboBoxUI$Handler::keyTyped($KeyEvent* e) {
}

void BasicComboBoxUI$Handler::keyReleased($KeyEvent* e) {
}

bool BasicComboBoxUI$Handler::isTypeAheadKey($KeyEvent* e) {
	bool var$0 = !$nc(e)->isAltDown();
	return var$0 && !$BasicGraphicsUtils::isMenuShortcutKeyDown(e);
}

void BasicComboBoxUI$Handler::focusGained($FocusEvent* e) {
	$var($ComboBoxEditor, comboBoxEditor, $nc(this->this$0->comboBox)->getEditor());
	bool var$0 = (comboBoxEditor != nullptr);
	if (var$0) {
		var$0 = ($equals($nc(e)->getSource(), comboBoxEditor->getEditorComponent()));
	}
	if (var$0) {
		return;
	}
	this->this$0->hasFocus = true;
	$nc(this->this$0->comboBox)->repaint();
	if ($nc(this->this$0->comboBox)->isEditable() && this->this$0->editor != nullptr) {
		$nc(this->this$0->editor)->requestFocus();
	}
}

void BasicComboBoxUI$Handler::focusLost($FocusEvent* e) {
	$var($ComboBoxEditor, editor, $nc(this->this$0->comboBox)->getEditor());
	bool var$0 = (editor != nullptr);
	if (var$0) {
		var$0 = ($equals($nc(e)->getSource(), editor->getEditorComponent()));
	}
	if (var$0) {
		$var($Object, item, editor->getItem());
		$var($Object, selectedItem, $nc(this->this$0->comboBox)->getSelectedItem());
		bool var$1 = !e->isTemporary() && item != nullptr;
		if (var$1 && !$of(item)->equals((selectedItem == nullptr) ? $of(""_s) : selectedItem)) {
			$nc(this->this$0->comboBox)->actionPerformed($$new($ActionEvent, editor, 0, ""_s, $EventQueue::getMostRecentEventTime(), 0));
		}
	}
	this->this$0->hasFocus = false;
	if (!$nc(e)->isTemporary()) {
		this->this$0->setPopupVisible(this->this$0->comboBox, false);
	}
	$nc(this->this$0->comboBox)->repaint();
}

void BasicComboBoxUI$Handler::contentsChanged($ListDataEvent* e) {
	bool var$0 = $nc(e)->getIndex0() == -1;
	if (!(var$0 && e->getIndex1() == -1)) {
		this->this$0->isMinimumSizeDirty = true;
		$nc(this->this$0->comboBox)->revalidate();
	}
	if ($nc(this->this$0->comboBox)->isEditable() && this->this$0->editor != nullptr) {
		$var($ComboBoxEditor, var$1, $nc(this->this$0->comboBox)->getEditor());
		$nc(this->this$0->comboBox)->configureEditor(var$1, $($nc(this->this$0->comboBox)->getSelectedItem()));
	}
	this->this$0->isDisplaySizeDirty = true;
	$nc(this->this$0->comboBox)->repaint();
}

void BasicComboBoxUI$Handler::intervalAdded($ListDataEvent* e) {
	contentsChanged(e);
}

void BasicComboBoxUI$Handler::intervalRemoved($ListDataEvent* e) {
	contentsChanged(e);
}

void BasicComboBoxUI$Handler::addLayoutComponent($String* name, $Component* comp) {
}

void BasicComboBoxUI$Handler::removeLayoutComponent($Component* comp) {
}

$Dimension* BasicComboBoxUI$Handler::preferredLayoutSize($Container* parent) {
	return $nc(parent)->getPreferredSize();
}

$Dimension* BasicComboBoxUI$Handler::minimumLayoutSize($Container* parent) {
	return $nc(parent)->getMinimumSize();
}

void BasicComboBoxUI$Handler::layoutContainer($Container* parent) {
	$var($JComboBox, cb, $cast($JComboBox, parent));
	int32_t width = $nc(cb)->getWidth();
	int32_t height = cb->getHeight();
	$var($Insets, insets, this->this$0->getInsets());
	int32_t buttonHeight = height - ($nc(insets)->top + insets->bottom);
	int32_t buttonWidth = buttonHeight;
	if (this->this$0->arrowButton != nullptr) {
		$var($Insets, arrowInsets, $nc(this->this$0->arrowButton)->getInsets());
		buttonWidth = this->this$0->squareButton ? buttonHeight : $nc($($nc(this->this$0->arrowButton)->getPreferredSize()))->width + $nc(arrowInsets)->left + arrowInsets->right;
	}
	$var($Rectangle, cvb, nullptr);
	if (this->this$0->arrowButton != nullptr) {
		if ($BasicGraphicsUtils::isLeftToRight(cb)) {
			$nc(this->this$0->arrowButton)->setBounds(width - (insets->right + buttonWidth), insets->top, buttonWidth, buttonHeight);
		} else {
			$nc(this->this$0->arrowButton)->setBounds(insets->left, insets->top, buttonWidth, buttonHeight);
		}
	}
	if (this->this$0->editor != nullptr) {
		$assign(cvb, this->this$0->rectangleForCurrentValue());
		$nc(this->this$0->editor)->setBounds(cvb);
	}
}

void BasicComboBoxUI$Handler::actionPerformed($ActionEvent* evt) {
	$var($Object, item, $nc($($nc(this->this$0->comboBox)->getEditor()))->getItem());
	if (item != nullptr) {
		bool var$0 = !$nc(this->this$0->comboBox)->isPopupVisible();
		if (var$0 && !$of(item)->equals($($nc(this->this$0->comboBox)->getSelectedItem()))) {
			$nc(this->this$0->comboBox)->setSelectedItem($($nc($($nc(this->this$0->comboBox)->getEditor()))->getItem()));
		}
		$var($ActionMap, am, $nc(this->this$0->comboBox)->getActionMap());
		if (am != nullptr) {
			$var($Action, action, am->get("enterPressed"_s));
			if (action != nullptr) {
				$var($Object, var$1, $of(this->this$0->comboBox));
				int32_t var$2 = $nc(evt)->getID();
				$var($String, var$3, evt->getActionCommand());
				action->actionPerformed($$new($ActionEvent, var$1, var$2, var$3, evt->getModifiers()));
			}
		}
	}
}

BasicComboBoxUI$Handler::BasicComboBoxUI$Handler() {
}

$Class* BasicComboBoxUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxUI$Handler, name, initialize, &_BasicComboBoxUI$Handler_ClassInfo_, allocate$BasicComboBoxUI$Handler);
	return class$;
}

$Class* BasicComboBoxUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax