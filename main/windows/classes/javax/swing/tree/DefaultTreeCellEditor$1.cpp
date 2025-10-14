#include <javax/swing/tree/DefaultTreeCellEditor$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JTextField = ::javax::swing::JTextField;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _DefaultTreeCellEditor$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/tree/DefaultTreeCellEditor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultTreeCellEditor$1, this$0)},
	{}
};

$MethodInfo _DefaultTreeCellEditor$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/DefaultTreeCellEditor;Ljavax/swing/JTextField;)V", nullptr, 0, $method(static_cast<void(DefaultTreeCellEditor$1::*)($DefaultTreeCellEditor*,$JTextField*)>(&DefaultTreeCellEditor$1::init$))},
	{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultTreeCellEditor$1_EnclosingMethodInfo_ = {
	"javax.swing.tree.DefaultTreeCellEditor",
	"createTreeCellEditor",
	"()Ljavax/swing/tree/TreeCellEditor;"
};

$InnerClassInfo _DefaultTreeCellEditor$1_InnerClassesInfo_[] = {
	{"javax.swing.tree.DefaultTreeCellEditor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultTreeCellEditor$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.tree.DefaultTreeCellEditor$1",
	"javax.swing.DefaultCellEditor",
	nullptr,
	_DefaultTreeCellEditor$1_FieldInfo_,
	_DefaultTreeCellEditor$1_MethodInfo_,
	nullptr,
	&_DefaultTreeCellEditor$1_EnclosingMethodInfo_,
	_DefaultTreeCellEditor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.DefaultTreeCellEditor"
};

$Object* allocate$DefaultTreeCellEditor$1($Class* clazz) {
	return $of($alloc(DefaultTreeCellEditor$1));
}

void DefaultTreeCellEditor$1::init$($DefaultTreeCellEditor* this$0, $JTextField* textField) {
	$set(this, this$0, this$0);
	$DefaultCellEditor::init$(textField);
}

bool DefaultTreeCellEditor$1::shouldSelectCell($EventObject* event) {
	bool retValue = $DefaultCellEditor::shouldSelectCell(event);
	return retValue;
}

DefaultTreeCellEditor$1::DefaultTreeCellEditor$1() {
}

$Class* DefaultTreeCellEditor$1::load$($String* name, bool initialize) {
	$loadClass(DefaultTreeCellEditor$1, name, initialize, &_DefaultTreeCellEditor$1_ClassInfo_, allocate$DefaultTreeCellEditor$1);
	return class$;
}

$Class* DefaultTreeCellEditor$1::class$ = nullptr;

		} // tree
	} // swing
} // javax