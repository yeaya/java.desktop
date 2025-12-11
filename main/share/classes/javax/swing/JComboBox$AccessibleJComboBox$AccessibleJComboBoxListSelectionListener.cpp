#include <javax/swing/JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/JComboBox$AccessibleJComboBox.h>
#include <javax/swing/JList.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <jcpp.h>

#undef ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY
#undef ACCESSIBLE_STATE_PROPERTY
#undef FOCUSED

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $JComboBox$AccessibleJComboBox = ::javax::swing::JComboBox$AccessibleJComboBox;
using $JList = ::javax::swing::JList;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;

namespace javax {
	namespace swing {

$FieldInfo _JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JComboBox$AccessibleJComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener, this$1)},
	{}
};

$MethodInfo _JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComboBox$AccessibleJComboBox;)V", nullptr, $PRIVATE, $method(static_cast<void(JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener::*)($JComboBox$AccessibleJComboBox*)>(&JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener::init$))},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener_InnerClassesInfo_[] = {
	{"javax.swing.JComboBox$AccessibleJComboBox", "javax.swing.JComboBox", "AccessibleJComboBox", $PROTECTED},
	{"javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener", "javax.swing.JComboBox$AccessibleJComboBox", "AccessibleJComboBoxListSelectionListener", $PRIVATE},
	{}
};

$ClassInfo _JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener",
	"java.lang.Object",
	"javax.swing.event.ListSelectionListener",
	_JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener_FieldInfo_,
	_JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener_MethodInfo_,
	nullptr,
	nullptr,
	_JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComboBox"
};

$Object* allocate$JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener($Class* clazz) {
	return $of($alloc(JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener));
}

void JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener::init$($JComboBox$AccessibleJComboBox* this$1) {
	$set(this, this$1, this$1);
}

void JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener::valueChanged($ListSelectionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->this$1->popupList == nullptr) {
		return;
	}
	int32_t selectedIndex = $nc(this->this$1->popupList)->getSelectedIndex();
	if (selectedIndex < 0) {
		return;
	}
	$var($Accessible, selectedAccessible, $nc($($nc(this->this$1->popupList)->getAccessibleContext()))->getAccessibleChild(selectedIndex));
	if (selectedAccessible == nullptr) {
		return;
	}
	$var($PropertyChangeEvent, pce, nullptr);
	if (this->this$1->previousSelectedAccessible != nullptr) {
		$init($AccessibleState);
		$assign(pce, $new($PropertyChangeEvent, this->this$1->previousSelectedAccessible, $AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::FOCUSED, nullptr));
		this->this$1->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, pce);
	}
	$init($AccessibleState);
	$assign(pce, $new($PropertyChangeEvent, selectedAccessible, $AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::FOCUSED));
	this->this$1->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, pce);
	this->this$1->firePropertyChange($AccessibleContext::ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY, this->this$1->previousSelectedAccessible, selectedAccessible);
	$set(this->this$1, previousSelectedAccessible, selectedAccessible);
}

JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener::JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener() {
}

$Class* JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener::load$($String* name, bool initialize) {
	$loadClass(JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener, name, initialize, &_JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener_ClassInfo_, allocate$JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener);
	return class$;
}

$Class* JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener::class$ = nullptr;

	} // swing
} // javax