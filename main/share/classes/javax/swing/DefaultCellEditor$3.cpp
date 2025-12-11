#include <javax/swing/DefaultCellEditor$3.h>

#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/DefaultCellEditor$EditorDelegate.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

#undef MOUSE_DRAGGED

using $ActionEvent = ::java::awt::event::ActionEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $DefaultCellEditor$EditorDelegate = ::javax::swing::DefaultCellEditor$EditorDelegate;
using $JComboBox = ::javax::swing::JComboBox;

namespace javax {
	namespace swing {

$FieldInfo _DefaultCellEditor$3_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/DefaultCellEditor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCellEditor$3, this$0)},
	{"val$comboBox", "Ljavax/swing/JComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCellEditor$3, val$comboBox)},
	{}
};

$MethodInfo _DefaultCellEditor$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/DefaultCellEditor;Ljavax/swing/JComboBox;)V", nullptr, 0, $method(static_cast<void(DefaultCellEditor$3::*)($DefaultCellEditor*,$JComboBox*)>(&DefaultCellEditor$3::init$))},
	{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"stopCellEditing", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultCellEditor$3_EnclosingMethodInfo_ = {
	"javax.swing.DefaultCellEditor",
	"<init>",
	"(Ljavax/swing/JComboBox;)V"
};

$InnerClassInfo _DefaultCellEditor$3_InnerClassesInfo_[] = {
	{"javax.swing.DefaultCellEditor$3", nullptr, nullptr, 0},
	{"javax.swing.DefaultCellEditor$EditorDelegate", "javax.swing.DefaultCellEditor", "EditorDelegate", $PROTECTED},
	{}
};

$ClassInfo _DefaultCellEditor$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.DefaultCellEditor$3",
	"javax.swing.DefaultCellEditor$EditorDelegate",
	nullptr,
	_DefaultCellEditor$3_FieldInfo_,
	_DefaultCellEditor$3_MethodInfo_,
	nullptr,
	&_DefaultCellEditor$3_EnclosingMethodInfo_,
	_DefaultCellEditor$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.DefaultCellEditor"
};

$Object* allocate$DefaultCellEditor$3($Class* clazz) {
	return $of($alloc(DefaultCellEditor$3));
}

void DefaultCellEditor$3::init$($DefaultCellEditor* this$0, $JComboBox* val$comboBox) {
	$set(this, this$0, this$0);
	$set(this, val$comboBox, val$comboBox);
	$DefaultCellEditor$EditorDelegate::init$(this$0);
}

void DefaultCellEditor$3::setValue(Object$* value) {
	$nc(this->val$comboBox)->setSelectedItem(value);
}

$Object* DefaultCellEditor$3::getCellEditorValue() {
	return $of($nc(this->val$comboBox)->getSelectedItem());
}

bool DefaultCellEditor$3::shouldSelectCell($EventObject* anEvent) {
	if ($instanceOf($MouseEvent, anEvent)) {
		$var($MouseEvent, e, $cast($MouseEvent, anEvent));
		return $nc(e)->getID() != $MouseEvent::MOUSE_DRAGGED;
	}
	return true;
}

bool DefaultCellEditor$3::stopCellEditing() {
	if ($nc(this->val$comboBox)->isEditable()) {
		$nc(this->val$comboBox)->actionPerformed($$new($ActionEvent, this->this$0, 0, ""_s));
	}
	return $DefaultCellEditor$EditorDelegate::stopCellEditing();
}

DefaultCellEditor$3::DefaultCellEditor$3() {
}

$Class* DefaultCellEditor$3::load$($String* name, bool initialize) {
	$loadClass(DefaultCellEditor$3, name, initialize, &_DefaultCellEditor$3_ClassInfo_, allocate$DefaultCellEditor$3);
	return class$;
}

$Class* DefaultCellEditor$3::class$ = nullptr;

	} // swing
} // javax