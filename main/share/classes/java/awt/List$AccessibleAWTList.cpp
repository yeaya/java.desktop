#include <java/awt/List$AccessibleAWTList.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/List$AccessibleAWTList$AccessibleAWTListChild.h>
#include <java/awt/List.h>
#include <java/awt/Point.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef LIST
#undef MULTISELECTABLE

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $List = ::java::awt::List;
using $List$AccessibleAWTList$AccessibleAWTListChild = ::java::awt::List$AccessibleAWTList$AccessibleAWTListChild;
using $Point = ::java::awt::Point;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

$FieldInfo _List$AccessibleAWTList_FieldInfo_[] = {
	{"this$0", "Ljava/awt/List;", nullptr, $FINAL | $SYNTHETIC, $field(List$AccessibleAWTList, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(List$AccessibleAWTList, serialVersionUID)},
	{}
};

$MethodInfo _List$AccessibleAWTList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/List;)V", nullptr, $PUBLIC, $method(static_cast<void(List$AccessibleAWTList::*)($List*)>(&List$AccessibleAWTList::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"addAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"clearAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleSelectionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"isAccessibleChildSelected", "(I)Z", nullptr, $PUBLIC},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"removeAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"selectAllAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _List$AccessibleAWTList_InnerClassesInfo_[] = {
	{"java.awt.List$AccessibleAWTList", "java.awt.List", "AccessibleAWTList", $PROTECTED},
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{"java.awt.List$AccessibleAWTList$AccessibleAWTListChild", "java.awt.List$AccessibleAWTList", "AccessibleAWTListChild", $PROTECTED},
	{}
};

$ClassInfo _List$AccessibleAWTList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.List$AccessibleAWTList",
	"java.awt.Component$AccessibleAWTComponent",
	"javax.accessibility.AccessibleSelection,java.awt.event.ItemListener,java.awt.event.ActionListener",
	_List$AccessibleAWTList_FieldInfo_,
	_List$AccessibleAWTList_MethodInfo_,
	nullptr,
	nullptr,
	_List$AccessibleAWTList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.List"
};

$Object* allocate$List$AccessibleAWTList($Class* clazz) {
	return $of($alloc(List$AccessibleAWTList));
}

int32_t List$AccessibleAWTList::hashCode() {
	 return this->$Component$AccessibleAWTComponent::hashCode();
}

bool List$AccessibleAWTList::equals(Object$* arg0) {
	 return this->$Component$AccessibleAWTComponent::equals(arg0);
}

$Object* List$AccessibleAWTList::clone() {
	 return this->$Component$AccessibleAWTComponent::clone();
}

$String* List$AccessibleAWTList::toString() {
	 return this->$Component$AccessibleAWTComponent::toString();
}

void List$AccessibleAWTList::finalize() {
	this->$Component$AccessibleAWTComponent::finalize();
}

void List$AccessibleAWTList::init$($List* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
	this$0->addActionListener(this);
	this$0->addItemListener(this);
}

void List$AccessibleAWTList::actionPerformed($ActionEvent* event) {
}

void List$AccessibleAWTList::itemStateChanged($ItemEvent* event) {
}

$AccessibleStateSet* List$AccessibleAWTList::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Component$AccessibleAWTComponent::getAccessibleStateSet());
	if (this->this$0->isMultipleMode()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::MULTISELECTABLE);
	}
	return states;
}

$AccessibleRole* List$AccessibleAWTList::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::LIST;
}

$Accessible* List$AccessibleAWTList::getAccessibleAt($Point* p) {
	return nullptr;
}

int32_t List$AccessibleAWTList::getAccessibleChildrenCount() {
	return this->this$0->getItemCount();
}

$Accessible* List$AccessibleAWTList::getAccessibleChild(int32_t i) {
	$synchronized(this->this$0) {
		if (i >= this->this$0->getItemCount()) {
			return nullptr;
		} else {
			return $new($List$AccessibleAWTList$AccessibleAWTListChild, this, this->this$0, i);
		}
	}
}

$AccessibleSelection* List$AccessibleAWTList::getAccessibleSelection() {
	return this;
}

int32_t List$AccessibleAWTList::getAccessibleSelectionCount() {
	return $nc($(this->this$0->getSelectedIndexes()))->length;
}

$Accessible* List$AccessibleAWTList::getAccessibleSelection(int32_t i) {
	$synchronized(this->this$0) {
		int32_t len = getAccessibleSelectionCount();
		if (i < 0 || i >= len) {
			return nullptr;
		} else {
			return getAccessibleChild($nc($(this->this$0->getSelectedIndexes()))->get(i));
		}
	}
}

bool List$AccessibleAWTList::isAccessibleChildSelected(int32_t i) {
	return this->this$0->isIndexSelected(i);
}

void List$AccessibleAWTList::addAccessibleSelection(int32_t i) {
	this->this$0->select(i);
}

void List$AccessibleAWTList::removeAccessibleSelection(int32_t i) {
	this->this$0->deselect(i);
}

void List$AccessibleAWTList::clearAccessibleSelection() {
	$synchronized(this->this$0) {
		$var($ints, selectedIndexes, this->this$0->getSelectedIndexes());
		if (selectedIndexes == nullptr) {
			return;
		}
		for (int32_t i = $nc(selectedIndexes)->length - 1; i >= 0; --i) {
			this->this$0->deselect(selectedIndexes->get(i));
		}
	}
}

void List$AccessibleAWTList::selectAllAccessibleSelection() {
	$synchronized(this->this$0) {
		for (int32_t i = this->this$0->getItemCount() - 1; i >= 0; --i) {
			this->this$0->select(i);
		}
	}
}

List$AccessibleAWTList::List$AccessibleAWTList() {
}

$Class* List$AccessibleAWTList::load$($String* name, bool initialize) {
	$loadClass(List$AccessibleAWTList, name, initialize, &_List$AccessibleAWTList_ClassInfo_, allocate$List$AccessibleAWTList);
	return class$;
}

$Class* List$AccessibleAWTList::class$ = nullptr;

	} // awt
} // java