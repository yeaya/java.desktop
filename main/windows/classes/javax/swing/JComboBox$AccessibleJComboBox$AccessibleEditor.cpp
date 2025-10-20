#include <javax/swing/JComboBox$AccessibleJComboBox$AccessibleEditor.h>

#include <java/awt/Component.h>
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
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/JComboBox$AccessibleJComboBox$EditorAccessibleContext.h>
#include <javax/swing/JComboBox$AccessibleJComboBox.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $JComboBox = ::javax::swing::JComboBox;
using $JComboBox$AccessibleJComboBox = ::javax::swing::JComboBox$AccessibleJComboBox;
using $JComboBox$AccessibleJComboBox$EditorAccessibleContext = ::javax::swing::JComboBox$AccessibleJComboBox$EditorAccessibleContext;

namespace javax {
	namespace swing {

$FieldInfo _JComboBox$AccessibleJComboBox$AccessibleEditor_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JComboBox$AccessibleJComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(JComboBox$AccessibleJComboBox$AccessibleEditor, this$1)},
	{}
};

$MethodInfo _JComboBox$AccessibleJComboBox$AccessibleEditor_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComboBox$AccessibleJComboBox;)V", nullptr, $PRIVATE, $method(static_cast<void(JComboBox$AccessibleJComboBox$AccessibleEditor::*)($JComboBox$AccessibleJComboBox*)>(&JComboBox$AccessibleJComboBox$AccessibleEditor::init$))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JComboBox$AccessibleJComboBox$AccessibleEditor_InnerClassesInfo_[] = {
	{"javax.swing.JComboBox$AccessibleJComboBox", "javax.swing.JComboBox", "AccessibleJComboBox", $PROTECTED},
	{"javax.swing.JComboBox$AccessibleJComboBox$AccessibleEditor", "javax.swing.JComboBox$AccessibleJComboBox", "AccessibleEditor", $PRIVATE},
	{}
};

$ClassInfo _JComboBox$AccessibleJComboBox$AccessibleEditor_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JComboBox$AccessibleJComboBox$AccessibleEditor",
	"java.lang.Object",
	"javax.accessibility.Accessible",
	_JComboBox$AccessibleJComboBox$AccessibleEditor_FieldInfo_,
	_JComboBox$AccessibleJComboBox$AccessibleEditor_MethodInfo_,
	nullptr,
	nullptr,
	_JComboBox$AccessibleJComboBox$AccessibleEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComboBox"
};

$Object* allocate$JComboBox$AccessibleJComboBox$AccessibleEditor($Class* clazz) {
	return $of($alloc(JComboBox$AccessibleJComboBox$AccessibleEditor));
}

void JComboBox$AccessibleJComboBox$AccessibleEditor::init$($JComboBox$AccessibleJComboBox* this$1) {
	$set(this, this$1, this$1);
}

$AccessibleContext* JComboBox$AccessibleJComboBox$AccessibleEditor::getAccessibleContext() {
	$useLocalCurrentObjectStackCache();
	if (this->this$1->editorAccessibleContext == nullptr) {
		$var($Component, c, $nc($($nc(this->this$1->this$0)->getEditor()))->getEditorComponent());
		if ($instanceOf($Accessible, c)) {
			$set(this->this$1, editorAccessibleContext, $new($JComboBox$AccessibleJComboBox$EditorAccessibleContext, this->this$1, $cast($Accessible, c)));
		}
	}
	return this->this$1->editorAccessibleContext;
}

JComboBox$AccessibleJComboBox$AccessibleEditor::JComboBox$AccessibleJComboBox$AccessibleEditor() {
}

$Class* JComboBox$AccessibleJComboBox$AccessibleEditor::load$($String* name, bool initialize) {
	$loadClass(JComboBox$AccessibleJComboBox$AccessibleEditor, name, initialize, &_JComboBox$AccessibleJComboBox$AccessibleEditor_ClassInfo_, allocate$JComboBox$AccessibleJComboBox$AccessibleEditor);
	return class$;
}

$Class* JComboBox$AccessibleJComboBox$AccessibleEditor::class$ = nullptr;

	} // swing
} // javax