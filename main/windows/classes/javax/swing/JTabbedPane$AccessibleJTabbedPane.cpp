#include <javax/swing/JTabbedPane$AccessibleJTabbedPane.h>

#include <java/awt/Point.h>
#include <java/util/List.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane$Page.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SingleSelectionModel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef ACCESSIBLE_SELECTION_PROPERTY
#undef PAGE_TAB_LIST

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $List = ::java::util::List;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $JTabbedPane$Page = ::javax::swing::JTabbedPane$Page;
using $SingleSelectionModel = ::javax::swing::SingleSelectionModel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;

namespace javax {
	namespace swing {

$FieldInfo _JTabbedPane$AccessibleJTabbedPane_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTabbedPane;", nullptr, $FINAL | $SYNTHETIC, $field(JTabbedPane$AccessibleJTabbedPane, this$0)},
	{}
};

$MethodInfo _JTabbedPane$AccessibleJTabbedPane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JTabbedPane;)V", nullptr, $PUBLIC, $method(static_cast<void(JTabbedPane$AccessibleJTabbedPane::*)($JTabbedPane*)>(&JTabbedPane$AccessibleJTabbedPane::init$))},
	{"addAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"clearAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleSelectionCount", "()I", nullptr, $PUBLIC},
	{"isAccessibleChildSelected", "(I)Z", nullptr, $PUBLIC},
	{"removeAccessibleSelection", "(I)V", nullptr, $PUBLIC},
	{"selectAllAccessibleSelection", "()V", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTabbedPane$AccessibleJTabbedPane_InnerClassesInfo_[] = {
	{"javax.swing.JTabbedPane$AccessibleJTabbedPane", "javax.swing.JTabbedPane", "AccessibleJTabbedPane", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JTabbedPane$AccessibleJTabbedPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTabbedPane$AccessibleJTabbedPane",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleSelection,javax.swing.event.ChangeListener",
	_JTabbedPane$AccessibleJTabbedPane_FieldInfo_,
	_JTabbedPane$AccessibleJTabbedPane_MethodInfo_,
	nullptr,
	nullptr,
	_JTabbedPane$AccessibleJTabbedPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTabbedPane"
};

$Object* allocate$JTabbedPane$AccessibleJTabbedPane($Class* clazz) {
	return $of($alloc(JTabbedPane$AccessibleJTabbedPane));
}

int32_t JTabbedPane$AccessibleJTabbedPane::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JTabbedPane$AccessibleJTabbedPane::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JTabbedPane$AccessibleJTabbedPane::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JTabbedPane$AccessibleJTabbedPane::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JTabbedPane$AccessibleJTabbedPane::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

$String* JTabbedPane$AccessibleJTabbedPane::getAccessibleName() {
	$useLocalCurrentObjectStackCache();
	if (this->accessibleName != nullptr) {
		return this->accessibleName;
	}
	$init($AccessibleContext);
	$var($String, cp, $cast($String, this->this$0->getClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY)));
	if (cp != nullptr) {
		return cp;
	}
	int32_t index = this->this$0->getSelectedIndex();
	if (index >= 0) {
		return $nc(($cast($JTabbedPane$Page, $($nc(this->this$0->pages)->get(index)))))->getAccessibleName();
	}
	return $JComponent$AccessibleJComponent::getAccessibleName();
}

void JTabbedPane$AccessibleJTabbedPane::init$($JTabbedPane* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
	$nc(this$0->model)->addChangeListener(this);
}

void JTabbedPane$AccessibleJTabbedPane::stateChanged($ChangeEvent* e) {
	$var($Object, o, $nc(e)->getSource());
	$init($AccessibleContext);
	firePropertyChange($AccessibleContext::ACCESSIBLE_SELECTION_PROPERTY, nullptr, o);
}

$AccessibleRole* JTabbedPane$AccessibleJTabbedPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PAGE_TAB_LIST;
}

int32_t JTabbedPane$AccessibleJTabbedPane::getAccessibleChildrenCount() {
	return this->this$0->getTabCount();
}

$Accessible* JTabbedPane$AccessibleJTabbedPane::getAccessibleChild(int32_t i) {
	if (i < 0 || i >= this->this$0->getTabCount()) {
		return nullptr;
	}
	return $cast($Accessible, $nc(this->this$0->pages)->get(i));
}

$AccessibleSelection* JTabbedPane$AccessibleJTabbedPane::getAccessibleSelection() {
	return this;
}

$Accessible* JTabbedPane$AccessibleJTabbedPane::getAccessibleAt($Point* p) {
	int32_t tab = $nc(($cast($TabbedPaneUI, this->this$0->ui)))->tabForCoordinate(this->this$0, $nc(p)->x, p->y);
	if (tab == -1) {
		tab = this->this$0->getSelectedIndex();
	}
	return getAccessibleChild(tab);
}

int32_t JTabbedPane$AccessibleJTabbedPane::getAccessibleSelectionCount() {
	return 1;
}

$Accessible* JTabbedPane$AccessibleJTabbedPane::getAccessibleSelection(int32_t i) {
	int32_t index = this->this$0->getSelectedIndex();
	if (index == -1) {
		return nullptr;
	}
	return $cast($Accessible, $nc(this->this$0->pages)->get(index));
}

bool JTabbedPane$AccessibleJTabbedPane::isAccessibleChildSelected(int32_t i) {
	return (i == this->this$0->getSelectedIndex());
}

void JTabbedPane$AccessibleJTabbedPane::addAccessibleSelection(int32_t i) {
	this->this$0->setSelectedIndex(i);
}

void JTabbedPane$AccessibleJTabbedPane::removeAccessibleSelection(int32_t i) {
}

void JTabbedPane$AccessibleJTabbedPane::clearAccessibleSelection() {
}

void JTabbedPane$AccessibleJTabbedPane::selectAllAccessibleSelection() {
}

JTabbedPane$AccessibleJTabbedPane::JTabbedPane$AccessibleJTabbedPane() {
}

$Class* JTabbedPane$AccessibleJTabbedPane::load$($String* name, bool initialize) {
	$loadClass(JTabbedPane$AccessibleJTabbedPane, name, initialize, &_JTabbedPane$AccessibleJTabbedPane_ClassInfo_, allocate$JTabbedPane$AccessibleJTabbedPane);
	return class$;
}

$Class* JTabbedPane$AccessibleJTabbedPane::class$ = nullptr;

	} // swing
} // javax