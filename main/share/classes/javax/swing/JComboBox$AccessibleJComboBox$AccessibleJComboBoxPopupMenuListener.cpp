#include <javax/swing/JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener.h>

#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComboBox$AccessibleJComboBox.h>
#include <javax/swing/JList.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComboBox$AccessibleJComboBox = ::javax::swing::JComboBox$AccessibleJComboBox;
using $JList = ::javax::swing::JList;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;

namespace javax {
	namespace swing {

$FieldInfo _JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JComboBox$AccessibleJComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener, this$1)},
	{}
};

$MethodInfo _JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComboBox$AccessibleJComboBox;)V", nullptr, $PRIVATE, $method(static_cast<void(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener::*)($JComboBox$AccessibleJComboBox*)>(&JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener::init$))},
	{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener_InnerClassesInfo_[] = {
	{"javax.swing.JComboBox$AccessibleJComboBox", "javax.swing.JComboBox", "AccessibleJComboBox", $PROTECTED},
	{"javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener", "javax.swing.JComboBox$AccessibleJComboBox", "AccessibleJComboBoxPopupMenuListener", $PRIVATE},
	{}
};

$ClassInfo _JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener",
	"java.lang.Object",
	"javax.swing.event.PopupMenuListener",
	_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener_FieldInfo_,
	_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener_MethodInfo_,
	nullptr,
	nullptr,
	_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComboBox"
};

$Object* allocate$JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener($Class* clazz) {
	return $of($alloc(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener));
}

void JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener::init$($JComboBox$AccessibleJComboBox* this$1) {
	$set(this, this$1, this$1);
}

void JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
	if (this->this$1->popupList == nullptr) {
		return;
	}
	int32_t selectedIndex = $nc(this->this$1->popupList)->getSelectedIndex();
	if (selectedIndex < 0) {
		return;
	}
	$set(this->this$1, previousSelectedAccessible, $nc($($nc(this->this$1->popupList)->getAccessibleContext()))->getAccessibleChild(selectedIndex));
}

void JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
}

void JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener::popupMenuCanceled($PopupMenuEvent* e) {
}

JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener::JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener() {
}

$Class* JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener::load$($String* name, bool initialize) {
	$loadClass(JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener, name, initialize, &_JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener_ClassInfo_, allocate$JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener);
	return class$;
}

$Class* JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener::class$ = nullptr;

	} // swing
} // javax