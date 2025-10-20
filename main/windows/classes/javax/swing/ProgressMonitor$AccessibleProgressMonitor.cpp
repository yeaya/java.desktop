#include <javax/swing/ProgressMonitor$AccessibleProgressMonitor.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/ProgressMonitor$ProgressOptionPane.h>
#include <javax/swing/ProgressMonitor.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

#undef ACCESSIBLE_TEXT_PROPERTY
#undef ACCESSIBLE_VALUE_PROPERTY
#undef PROGRESS_MONITOR

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JLabel = ::javax::swing::JLabel;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JProgressBar = ::javax::swing::JProgressBar;
using $ProgressMonitor = ::javax::swing::ProgressMonitor;
using $ProgressMonitor$ProgressOptionPane = ::javax::swing::ProgressMonitor$ProgressOptionPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace swing {

$FieldInfo _ProgressMonitor$AccessibleProgressMonitor_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ProgressMonitor;", nullptr, $FINAL | $SYNTHETIC, $field(ProgressMonitor$AccessibleProgressMonitor, this$0)},
	{"oldModelValue", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(ProgressMonitor$AccessibleProgressMonitor, oldModelValue)},
	{}
};

$MethodInfo _ProgressMonitor$AccessibleProgressMonitor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/ProgressMonitor;)V", nullptr, $PROTECTED, $method(static_cast<void(ProgressMonitor$AccessibleProgressMonitor::*)($ProgressMonitor*)>(&ProgressMonitor$AccessibleProgressMonitor::init$))},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleComponent", "()Ljavax/accessibility/AccessibleComponent;", nullptr, $PUBLIC},
	{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleParent", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getAfterIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAtIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBeforeIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCaretPosition", "()I", nullptr, $PUBLIC},
	{"getCharCount", "()I", nullptr, $PUBLIC},
	{"getCharacterAttribute", "(I)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getCharacterBounds", "(I)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getIndexAtPoint", "(Ljava/awt/Point;)I", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, nullptr, "java.awt.IllegalComponentStateException"},
	{"getNoteLabelAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PRIVATE, $method(static_cast<$AccessibleText*(ProgressMonitor$AccessibleProgressMonitor::*)()>(&ProgressMonitor$AccessibleProgressMonitor::getNoteLabelAccessibleText))},
	{"getPanelAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $method(static_cast<$AccessibleContext*(ProgressMonitor$AccessibleProgressMonitor::*)()>(&ProgressMonitor$AccessibleProgressMonitor::getPanelAccessibleContext))},
	{"getParentAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $method(static_cast<$AccessibleContext*(ProgressMonitor$AccessibleProgressMonitor::*)()>(&ProgressMonitor$AccessibleProgressMonitor::getParentAccessibleContext))},
	{"getSelectedText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC},
	{"getSelectionStart", "()I", nullptr, $PUBLIC},
	{"optionPaneCreated", "()V", nullptr, $PRIVATE, $method(static_cast<void(ProgressMonitor$AccessibleProgressMonitor::*)()>(&ProgressMonitor$AccessibleProgressMonitor::optionPaneCreated))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"sameWindowAncestor", "(Ljava/awt/Component;Ljava/awt/Component;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ProgressMonitor$AccessibleProgressMonitor::*)($Component*,$Component*)>(&ProgressMonitor$AccessibleProgressMonitor::sameWindowAncestor))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProgressMonitor$AccessibleProgressMonitor_InnerClassesInfo_[] = {
	{"javax.swing.ProgressMonitor$AccessibleProgressMonitor", "javax.swing.ProgressMonitor", "AccessibleProgressMonitor", $PROTECTED},
	{}
};

$ClassInfo _ProgressMonitor$AccessibleProgressMonitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.ProgressMonitor$AccessibleProgressMonitor",
	"javax.accessibility.AccessibleContext",
	"javax.accessibility.AccessibleText,javax.swing.event.ChangeListener,java.beans.PropertyChangeListener",
	_ProgressMonitor$AccessibleProgressMonitor_FieldInfo_,
	_ProgressMonitor$AccessibleProgressMonitor_MethodInfo_,
	nullptr,
	nullptr,
	_ProgressMonitor$AccessibleProgressMonitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ProgressMonitor"
};

$Object* allocate$ProgressMonitor$AccessibleProgressMonitor($Class* clazz) {
	return $of($alloc(ProgressMonitor$AccessibleProgressMonitor));
}

int32_t ProgressMonitor$AccessibleProgressMonitor::hashCode() {
	 return this->$AccessibleContext::hashCode();
}

bool ProgressMonitor$AccessibleProgressMonitor::equals(Object$* arg0) {
	 return this->$AccessibleContext::equals(arg0);
}

$Object* ProgressMonitor$AccessibleProgressMonitor::clone() {
	 return this->$AccessibleContext::clone();
}

$String* ProgressMonitor$AccessibleProgressMonitor::toString() {
	 return this->$AccessibleContext::toString();
}

void ProgressMonitor$AccessibleProgressMonitor::finalize() {
	this->$AccessibleContext::finalize();
}

void ProgressMonitor$AccessibleProgressMonitor::init$($ProgressMonitor* this$0) {
	$set(this, this$0, this$0);
	$AccessibleContext::init$();
}

void ProgressMonitor$AccessibleProgressMonitor::optionPaneCreated() {
	$set(this->this$0, accessibleJOptionPane, $nc(($cast($ProgressMonitor$ProgressOptionPane, this->this$0->pane)))->getAccessibleJOptionPane());
	if (this->this$0->myBar != nullptr) {
		$nc(this->this$0->myBar)->addChangeListener(this);
	}
	if (this->this$0->noteLabel != nullptr) {
		$nc(this->this$0->noteLabel)->addPropertyChangeListener(this);
	}
}

void ProgressMonitor$AccessibleProgressMonitor::stateChanged($ChangeEvent* e) {
	if (e == nullptr) {
		return;
	}
	if (this->this$0->myBar != nullptr) {
		$var($Object, newModelValue, $Integer::valueOf($nc(this->this$0->myBar)->getValue()));
		$init($AccessibleContext);
		firePropertyChange($AccessibleContext::ACCESSIBLE_VALUE_PROPERTY, this->oldModelValue, newModelValue);
		$set(this, oldModelValue, newModelValue);
	}
}

void ProgressMonitor$AccessibleProgressMonitor::propertyChange($PropertyChangeEvent* e) {
	bool var$0 = $equals($nc(e)->getSource(), this->this$0->noteLabel);
	if (var$0 && e->getPropertyName() == "text"_s) {
		$init($AccessibleContext);
		firePropertyChange($AccessibleContext::ACCESSIBLE_TEXT_PROPERTY, nullptr, $($Integer::valueOf(0)));
	}
}

$String* ProgressMonitor$AccessibleProgressMonitor::getAccessibleName() {
	if (this->accessibleName != nullptr) {
		return this->accessibleName;
	} else if (this->this$0->accessibleJOptionPane != nullptr) {
		return $nc(this->this$0->accessibleJOptionPane)->getAccessibleName();
	}
	return nullptr;
}

$String* ProgressMonitor$AccessibleProgressMonitor::getAccessibleDescription() {
	if (this->accessibleDescription != nullptr) {
		return this->accessibleDescription;
	} else if (this->this$0->accessibleJOptionPane != nullptr) {
		return $nc(this->this$0->accessibleJOptionPane)->getAccessibleDescription();
	}
	return nullptr;
}

$AccessibleRole* ProgressMonitor$AccessibleProgressMonitor::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PROGRESS_MONITOR;
}

$AccessibleStateSet* ProgressMonitor$AccessibleProgressMonitor::getAccessibleStateSet() {
	if (this->this$0->accessibleJOptionPane != nullptr) {
		return $nc(this->this$0->accessibleJOptionPane)->getAccessibleStateSet();
	}
	return nullptr;
}

$Accessible* ProgressMonitor$AccessibleProgressMonitor::getAccessibleParent() {
	return this->this$0->dialog;
}

$AccessibleContext* ProgressMonitor$AccessibleProgressMonitor::getParentAccessibleContext() {
	if (this->this$0->dialog != nullptr) {
		return $nc(this->this$0->dialog)->getAccessibleContext();
	}
	return nullptr;
}

int32_t ProgressMonitor$AccessibleProgressMonitor::getAccessibleIndexInParent() {
	if (this->this$0->accessibleJOptionPane != nullptr) {
		return $nc(this->this$0->accessibleJOptionPane)->getAccessibleIndexInParent();
	}
	return -1;
}

int32_t ProgressMonitor$AccessibleProgressMonitor::getAccessibleChildrenCount() {
	$var($AccessibleContext, ac, getPanelAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleChildrenCount();
	}
	return 0;
}

$Accessible* ProgressMonitor$AccessibleProgressMonitor::getAccessibleChild(int32_t i) {
	$var($AccessibleContext, ac, getPanelAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleChild(i);
	}
	return nullptr;
}

$AccessibleContext* ProgressMonitor$AccessibleProgressMonitor::getPanelAccessibleContext() {
	if (this->this$0->myBar != nullptr) {
		$var($Component, c, $nc(this->this$0->myBar)->getParent());
		if ($instanceOf($Accessible, c)) {
			return $nc(c)->getAccessibleContext();
		}
	}
	return nullptr;
}

$Locale* ProgressMonitor$AccessibleProgressMonitor::getLocale() {
	if (this->this$0->accessibleJOptionPane != nullptr) {
		return $nc(this->this$0->accessibleJOptionPane)->getLocale();
	}
	return nullptr;
}

$AccessibleComponent* ProgressMonitor$AccessibleProgressMonitor::getAccessibleComponent() {
	if (this->this$0->accessibleJOptionPane != nullptr) {
		return $nc(this->this$0->accessibleJOptionPane)->getAccessibleComponent();
	}
	return nullptr;
}

$AccessibleValue* ProgressMonitor$AccessibleProgressMonitor::getAccessibleValue() {
	if (this->this$0->myBar != nullptr) {
		return $nc($($nc(this->this$0->myBar)->getAccessibleContext()))->getAccessibleValue();
	}
	return nullptr;
}

$AccessibleText* ProgressMonitor$AccessibleProgressMonitor::getAccessibleText() {
	if (getNoteLabelAccessibleText() != nullptr) {
		return this;
	}
	return nullptr;
}

$AccessibleText* ProgressMonitor$AccessibleProgressMonitor::getNoteLabelAccessibleText() {
	if (this->this$0->noteLabel != nullptr) {
		return $nc($($nc(this->this$0->noteLabel)->getAccessibleContext()))->getAccessibleText();
	}
	return nullptr;
}

int32_t ProgressMonitor$AccessibleProgressMonitor::getIndexAtPoint($Point* p) {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleText, at, getNoteLabelAccessibleText());
	if (at != nullptr && sameWindowAncestor(this->this$0->pane, this->this$0->noteLabel)) {
		$var($Point, noteLabelPoint, $SwingUtilities::convertPoint(this->this$0->pane, p, this->this$0->noteLabel));
		if (noteLabelPoint != nullptr) {
			return at->getIndexAtPoint(noteLabelPoint);
		}
	}
	return -1;
}

$Rectangle* ProgressMonitor$AccessibleProgressMonitor::getCharacterBounds(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleText, at, getNoteLabelAccessibleText());
	if (at != nullptr && sameWindowAncestor(this->this$0->pane, this->this$0->noteLabel)) {
		$var($Rectangle, noteLabelRect, at->getCharacterBounds(i));
		if (noteLabelRect != nullptr) {
			return $SwingUtilities::convertRectangle(this->this$0->noteLabel, noteLabelRect, this->this$0->pane);
		}
	}
	return nullptr;
}

bool ProgressMonitor$AccessibleProgressMonitor::sameWindowAncestor($Component* src, $Component* dest) {
	if (src == nullptr || dest == nullptr) {
		return false;
	}
	return $SwingUtilities::getWindowAncestor(src) == $SwingUtilities::getWindowAncestor(dest);
}

int32_t ProgressMonitor$AccessibleProgressMonitor::getCharCount() {
	$var($AccessibleText, at, getNoteLabelAccessibleText());
	if (at != nullptr) {
		return at->getCharCount();
	}
	return -1;
}

int32_t ProgressMonitor$AccessibleProgressMonitor::getCaretPosition() {
	$var($AccessibleText, at, getNoteLabelAccessibleText());
	if (at != nullptr) {
		return at->getCaretPosition();
	}
	return -1;
}

$String* ProgressMonitor$AccessibleProgressMonitor::getAtIndex(int32_t part, int32_t index) {
	$var($AccessibleText, at, getNoteLabelAccessibleText());
	if (at != nullptr) {
		return at->getAtIndex(part, index);
	}
	return nullptr;
}

$String* ProgressMonitor$AccessibleProgressMonitor::getAfterIndex(int32_t part, int32_t index) {
	$var($AccessibleText, at, getNoteLabelAccessibleText());
	if (at != nullptr) {
		return at->getAfterIndex(part, index);
	}
	return nullptr;
}

$String* ProgressMonitor$AccessibleProgressMonitor::getBeforeIndex(int32_t part, int32_t index) {
	$var($AccessibleText, at, getNoteLabelAccessibleText());
	if (at != nullptr) {
		return at->getBeforeIndex(part, index);
	}
	return nullptr;
}

$AttributeSet* ProgressMonitor$AccessibleProgressMonitor::getCharacterAttribute(int32_t i) {
	$var($AccessibleText, at, getNoteLabelAccessibleText());
	if (at != nullptr) {
		return at->getCharacterAttribute(i);
	}
	return nullptr;
}

int32_t ProgressMonitor$AccessibleProgressMonitor::getSelectionStart() {
	$var($AccessibleText, at, getNoteLabelAccessibleText());
	if (at != nullptr) {
		return at->getSelectionStart();
	}
	return -1;
}

int32_t ProgressMonitor$AccessibleProgressMonitor::getSelectionEnd() {
	$var($AccessibleText, at, getNoteLabelAccessibleText());
	if (at != nullptr) {
		return at->getSelectionEnd();
	}
	return -1;
}

$String* ProgressMonitor$AccessibleProgressMonitor::getSelectedText() {
	$var($AccessibleText, at, getNoteLabelAccessibleText());
	if (at != nullptr) {
		return at->getSelectedText();
	}
	return nullptr;
}

ProgressMonitor$AccessibleProgressMonitor::ProgressMonitor$AccessibleProgressMonitor() {
}

$Class* ProgressMonitor$AccessibleProgressMonitor::load$($String* name, bool initialize) {
	$loadClass(ProgressMonitor$AccessibleProgressMonitor, name, initialize, &_ProgressMonitor$AccessibleProgressMonitor_ClassInfo_, allocate$ProgressMonitor$AccessibleProgressMonitor);
	return class$;
}

$Class* ProgressMonitor$AccessibleProgressMonitor::class$ = nullptr;

	} // swing
} // javax