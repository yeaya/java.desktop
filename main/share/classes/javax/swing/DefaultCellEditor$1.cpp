#include <javax/swing/DefaultCellEditor$1.h>

#include <javax/swing/DefaultCellEditor$EditorDelegate.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $DefaultCellEditor$EditorDelegate = ::javax::swing::DefaultCellEditor$EditorDelegate;
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {

$FieldInfo _DefaultCellEditor$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/DefaultCellEditor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCellEditor$1, this$0)},
	{"val$textField", "Ljavax/swing/JTextField;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCellEditor$1, val$textField)},
	{}
};

$MethodInfo _DefaultCellEditor$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/DefaultCellEditor;Ljavax/swing/JTextField;)V", nullptr, 0, $method(static_cast<void(DefaultCellEditor$1::*)($DefaultCellEditor*,$JTextField*)>(&DefaultCellEditor$1::init$))},
	{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultCellEditor$1_EnclosingMethodInfo_ = {
	"javax.swing.DefaultCellEditor",
	"<init>",
	"(Ljavax/swing/JTextField;)V"
};

$InnerClassInfo _DefaultCellEditor$1_InnerClassesInfo_[] = {
	{"javax.swing.DefaultCellEditor$1", nullptr, nullptr, 0},
	{"javax.swing.DefaultCellEditor$EditorDelegate", "javax.swing.DefaultCellEditor", "EditorDelegate", $PROTECTED},
	{}
};

$ClassInfo _DefaultCellEditor$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.DefaultCellEditor$1",
	"javax.swing.DefaultCellEditor$EditorDelegate",
	nullptr,
	_DefaultCellEditor$1_FieldInfo_,
	_DefaultCellEditor$1_MethodInfo_,
	nullptr,
	&_DefaultCellEditor$1_EnclosingMethodInfo_,
	_DefaultCellEditor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.DefaultCellEditor"
};

$Object* allocate$DefaultCellEditor$1($Class* clazz) {
	return $of($alloc(DefaultCellEditor$1));
}

void DefaultCellEditor$1::init$($DefaultCellEditor* this$0, $JTextField* val$textField) {
	$set(this, this$0, this$0);
	$set(this, val$textField, val$textField);
	$DefaultCellEditor$EditorDelegate::init$(this$0);
}

void DefaultCellEditor$1::setValue(Object$* value) {
	$nc(this->val$textField)->setText((value != nullptr) ? $($nc($of(value))->toString()) : ""_s);
}

$Object* DefaultCellEditor$1::getCellEditorValue() {
	return $of($nc(this->val$textField)->getText());
}

DefaultCellEditor$1::DefaultCellEditor$1() {
}

$Class* DefaultCellEditor$1::load$($String* name, bool initialize) {
	$loadClass(DefaultCellEditor$1, name, initialize, &_DefaultCellEditor$1_ClassInfo_, allocate$DefaultCellEditor$1);
	return class$;
}

$Class* DefaultCellEditor$1::class$ = nullptr;

	} // swing
} // javax