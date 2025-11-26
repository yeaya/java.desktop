#include <bug6263446JTree$6.h>

#include <bug6263446JTree.h>
#include <java/awt/Component.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Field.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <javax/swing/tree/TreeCellEditor.h>
#include <jcpp.h>

using $bug6263446JTree = ::bug6263446JTree;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JTextField = ::javax::swing::JTextField;
using $JTree = ::javax::swing::JTree;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;
using $TreeCellEditor = ::javax::swing::tree::TreeCellEditor;

$FieldInfo _bug6263446JTree$6_FieldInfo_[] = {
	{"val$sel", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug6263446JTree$6, val$sel)},
	{}
};

$MethodInfo _bug6263446JTree$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(bug6263446JTree$6::*)($String*)>(&bug6263446JTree$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6263446JTree$6_EnclosingMethodInfo_ = {
	"bug6263446JTree",
	"checkSelection",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _bug6263446JTree$6_InnerClassesInfo_[] = {
	{"bug6263446JTree$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6263446JTree$6_ClassInfo_ = {
	$ACC_SUPER,
	"bug6263446JTree$6",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6263446JTree$6_FieldInfo_,
	_bug6263446JTree$6_MethodInfo_,
	nullptr,
	&_bug6263446JTree$6_EnclosingMethodInfo_,
	_bug6263446JTree$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6263446JTree"
};

$Object* allocate$bug6263446JTree$6($Class* clazz) {
	return $of($alloc(bug6263446JTree$6));
}

void bug6263446JTree$6::init$($String* val$sel) {
	$set(this, val$sel, val$sel);
}

void bug6263446JTree$6::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$init($bug6263446JTree);
		$var($DefaultTreeCellEditor, editor, $cast($DefaultTreeCellEditor, $nc($bug6263446JTree::tree)->getCellEditor()));
		$load($DefaultTreeCellEditor);
		$var($Field, field, $DefaultTreeCellEditor::class$->getDeclaredField("realEditor"_s));
		$nc(field)->setAccessible(true);
		$var($DefaultCellEditor, ce, $cast($DefaultCellEditor, field->get(editor)));
		$var($JTextField, tf, $cast($JTextField, $nc(ce)->getComponent()));
		$var($String, text, $nc(tf)->getSelectedText());
		if (this->val$sel == nullptr) {
			if (text != nullptr && text->length() != 0) {
				$throwNew($RuntimeException, $$str({"Nothing should be selected, but \""_s, text, "\" is selected."_s}));
			}
		} else if (!$nc(this->val$sel)->equals(text)) {
			$throwNew($RuntimeException, $$str({"\""_s, this->val$sel, "\" should be selected, but \""_s, text, "\" is selected."_s}));
		}
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($NoSuchFieldException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

bug6263446JTree$6::bug6263446JTree$6() {
}

$Class* bug6263446JTree$6::load$($String* name, bool initialize) {
	$loadClass(bug6263446JTree$6, name, initialize, &_bug6263446JTree$6_ClassInfo_, allocate$bug6263446JTree$6);
	return class$;
}

$Class* bug6263446JTree$6::class$ = nullptr;