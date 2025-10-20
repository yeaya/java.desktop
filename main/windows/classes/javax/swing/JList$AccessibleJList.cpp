#include <javax/swing/JList$AccessibleJList.h>

#include <java/awt/Point.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList$AccessibleJList$AccessibleJListChild.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <jcpp.h>

#undef ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY
#undef ACCESSIBLE_SELECTION_PROPERTY
#undef ACCESSIBLE_STATE_PROPERTY
#undef ACCESSIBLE_VISIBLE_DATA_PROPERTY
#undef LIST
#undef MULTISELECTABLE
#undef SINGLE_SELECTION

using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JList = ::javax::swing::JList;
using $JList$AccessibleJList$AccessibleJListChild = ::javax::swing::JList$AccessibleJList$AccessibleJListChild;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;

namespace javax {
	namespace swing {

$FieldInfo _JList$AccessibleJList_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JList;", nullptr, $FINAL | $SYNTHETIC, $field(JList$AccessibleJList, this$0)},
	{"leadSelectionIndex", "I", nullptr, 0, $field(JList$AccessibleJList, leadSelectionIndex)},
	{}
};

$MethodInfo _JList$AccessibleJList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JList;)V", nullptr, $PUBLIC, $method(static_cast<void(JList$AccessibleJList::*)($JList*)>(&JList$AccessibleJList::init$))},
	{"addAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"clearAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleSelectionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"isAccessibleChildSelected", "(I)Z", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removeAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"selectAllAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JList$AccessibleJList_InnerClassesInfo_[] = {
	{"javax.swing.JList$AccessibleJList", "javax.swing.JList", "AccessibleJList", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{"javax.swing.JList$AccessibleJList$AccessibleJListChild", "javax.swing.JList$AccessibleJList", "AccessibleJListChild", $PROTECTED},
	{}
};

$ClassInfo _JList$AccessibleJList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JList$AccessibleJList",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleSelection,java.beans.PropertyChangeListener,javax.swing.event.ListSelectionListener,javax.swing.event.ListDataListener",
	_JList$AccessibleJList_FieldInfo_,
	_JList$AccessibleJList_MethodInfo_,
	nullptr,
	nullptr,
	_JList$AccessibleJList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JList"
};

$Object* allocate$JList$AccessibleJList($Class* clazz) {
	return $of($alloc(JList$AccessibleJList));
}

int32_t JList$AccessibleJList::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JList$AccessibleJList::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JList$AccessibleJList::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JList$AccessibleJList::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JList$AccessibleJList::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JList$AccessibleJList::init$($JList* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
	this$0->addPropertyChangeListener(this);
	$nc($(this$0->getSelectionModel()))->addListSelectionListener(this);
	$nc($(this$0->getModel()))->addListDataListener(this);
	this->leadSelectionIndex = this$0->getLeadSelectionIndex();
}

void JList$AccessibleJList::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(e)->getPropertyName());
	$var($Object, oldValue, e->getOldValue());
	$var($Object, newValue, e->getNewValue());
	if ($nc(name)->compareTo("model"_s) == 0) {
		if (oldValue != nullptr && $instanceOf($ListModel, oldValue)) {
			$nc(($cast($ListModel, oldValue)))->removeListDataListener(this);
		}
		if (newValue != nullptr && $instanceOf($ListModel, newValue)) {
			$nc(($cast($ListModel, newValue)))->addListDataListener(this);
		}
	} else if (name->compareTo("selectionModel"_s) == 0) {
		if (oldValue != nullptr && $instanceOf($ListSelectionModel, oldValue)) {
			$nc(($cast($ListSelectionModel, oldValue)))->removeListSelectionListener(this);
		}
		if (newValue != nullptr && $instanceOf($ListSelectionModel, newValue)) {
			$nc(($cast($ListSelectionModel, newValue)))->addListSelectionListener(this);
		}
		$init($AccessibleContext);
		$var($String, var$0, $AccessibleContext::ACCESSIBLE_SELECTION_PROPERTY);
		$var($Object, var$1, $of($Boolean::valueOf(false)));
		firePropertyChange(var$0, var$1, $($Boolean::valueOf(true)));
	}
}

void JList$AccessibleJList::valueChanged($ListSelectionEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t oldLeadSelectionIndex = this->leadSelectionIndex;
	this->leadSelectionIndex = this->this$0->getLeadSelectionIndex();
	if (oldLeadSelectionIndex != this->leadSelectionIndex) {
		$var($Accessible, oldLS, nullptr);
		$var($Accessible, newLS, nullptr);
		$assign(oldLS, (oldLeadSelectionIndex >= 0) ? getAccessibleChild(oldLeadSelectionIndex) : ($Accessible*)nullptr);
		$assign(newLS, (this->leadSelectionIndex >= 0) ? getAccessibleChild(this->leadSelectionIndex) : ($Accessible*)nullptr);
		$init($AccessibleContext);
		firePropertyChange($AccessibleContext::ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY, oldLS, newLS);
	}
	$init($AccessibleContext);
	$var($String, var$0, $AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY);
	$var($Object, var$1, $of($Boolean::valueOf(false)));
	firePropertyChange(var$0, var$1, $($Boolean::valueOf(true)));
	$var($String, var$2, $AccessibleContext::ACCESSIBLE_SELECTION_PROPERTY);
	$var($Object, var$3, $of($Boolean::valueOf(false)));
	firePropertyChange(var$2, var$3, $($Boolean::valueOf(true)));
	$var($AccessibleStateSet, s, getAccessibleStateSet());
	$var($ListSelectionModel, lsm, this->this$0->getSelectionModel());
	if ($nc(lsm)->getSelectionMode() != $ListSelectionModel::SINGLE_SELECTION) {
		$init($AccessibleState);
		if (!$nc(s)->contains($AccessibleState::MULTISELECTABLE)) {
			s->add($AccessibleState::MULTISELECTABLE);
			firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::MULTISELECTABLE);
		}
	} else {
		$init($AccessibleState);
		if ($nc(s)->contains($AccessibleState::MULTISELECTABLE)) {
			s->remove($AccessibleState::MULTISELECTABLE);
			firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::MULTISELECTABLE, nullptr);
		}
	}
}

void JList$AccessibleJList::intervalAdded($ListDataEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($AccessibleContext);
	$var($String, var$0, $AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY);
	$var($Object, var$1, $of($Boolean::valueOf(false)));
	firePropertyChange(var$0, var$1, $($Boolean::valueOf(true)));
}

void JList$AccessibleJList::intervalRemoved($ListDataEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($AccessibleContext);
	$var($String, var$0, $AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY);
	$var($Object, var$1, $of($Boolean::valueOf(false)));
	firePropertyChange(var$0, var$1, $($Boolean::valueOf(true)));
}

void JList$AccessibleJList::contentsChanged($ListDataEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($AccessibleContext);
	$var($String, var$0, $AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY);
	$var($Object, var$1, $of($Boolean::valueOf(false)));
	firePropertyChange(var$0, var$1, $($Boolean::valueOf(true)));
}

$AccessibleStateSet* JList$AccessibleJList::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $JComponent$AccessibleJComponent::getAccessibleStateSet());
	if ($nc(this->this$0->selectionModel)->getSelectionMode() != $ListSelectionModel::SINGLE_SELECTION) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::MULTISELECTABLE);
	}
	return states;
}

$AccessibleRole* JList$AccessibleJList::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::LIST;
}

$Accessible* JList$AccessibleJList::getAccessibleAt($Point* p) {
	int32_t i = this->this$0->locationToIndex(p);
	if (i >= 0) {
		return $new($JList$AccessibleJList$AccessibleJListChild, this, this->this$0, i);
	} else {
		return nullptr;
	}
}

int32_t JList$AccessibleJList::getAccessibleChildrenCount() {
	return $nc($(this->this$0->getModel()))->getSize();
}

$Accessible* JList$AccessibleJList::getAccessibleChild(int32_t i) {
	if (i >= $nc($(this->this$0->getModel()))->getSize()) {
		return nullptr;
	} else {
		return $new($JList$AccessibleJList$AccessibleJListChild, this, this->this$0, i);
	}
}

$AccessibleSelection* JList$AccessibleJList::getAccessibleSelection() {
	return this;
}

int32_t JList$AccessibleJList::getAccessibleSelectionCount() {
	return $nc($(this->this$0->getSelectedIndices()))->length;
}

$Accessible* JList$AccessibleJList::getAccessibleSelection(int32_t i) {
	int32_t len = getAccessibleSelectionCount();
	if (i < 0 || i >= len) {
		return nullptr;
	} else {
		return getAccessibleChild($nc($(this->this$0->getSelectedIndices()))->get(i));
	}
}

bool JList$AccessibleJList::isAccessibleChildSelected(int32_t i) {
	return this->this$0->isSelectedIndex(i);
}

void JList$AccessibleJList::addAccessibleSelection(int32_t i) {
	this->this$0->addSelectionInterval(i, i);
}

void JList$AccessibleJList::removeAccessibleSelection(int32_t i) {
	this->this$0->removeSelectionInterval(i, i);
}

void JList$AccessibleJList::clearAccessibleSelection() {
	this->this$0->clearSelection();
}

void JList$AccessibleJList::selectAllAccessibleSelection() {
	this->this$0->addSelectionInterval(0, getAccessibleChildrenCount() - 1);
}

JList$AccessibleJList::JList$AccessibleJList() {
}

$Class* JList$AccessibleJList::load$($String* name, bool initialize) {
	$loadClass(JList$AccessibleJList, name, initialize, &_JList$AccessibleJList_ClassInfo_, allocate$JList$AccessibleJList);
	return class$;
}

$Class* JList$AccessibleJList::class$ = nullptr;

	} // swing
} // javax