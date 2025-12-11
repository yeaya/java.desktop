#include <javax/swing/JTable$NumberEditor.h>

#include <java/awt/Component.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JTable$GenericEditor.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

#undef RIGHT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable$GenericEditor = ::javax::swing::JTable$GenericEditor;
using $JTextField = ::javax::swing::JTextField;

namespace javax {
	namespace swing {

$MethodInfo _JTable$NumberEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTable$NumberEditor::*)()>(&JTable$NumberEditor::init$))},
	{}
};

$InnerClassInfo _JTable$NumberEditor_InnerClassesInfo_[] = {
	{"javax.swing.JTable$NumberEditor", "javax.swing.JTable", "NumberEditor", $STATIC},
	{"javax.swing.JTable$GenericEditor", "javax.swing.JTable", "GenericEditor", $STATIC},
	{}
};

$ClassInfo _JTable$NumberEditor_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$NumberEditor",
	"javax.swing.JTable$GenericEditor",
	nullptr,
	nullptr,
	_JTable$NumberEditor_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$NumberEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$NumberEditor($Class* clazz) {
	return $of($alloc(JTable$NumberEditor));
}

void JTable$NumberEditor::init$() {
	$JTable$GenericEditor::init$();
	$nc(($cast($JTextField, $(getComponent()))))->setHorizontalAlignment($JTextField::RIGHT);
}

JTable$NumberEditor::JTable$NumberEditor() {
}

$Class* JTable$NumberEditor::load$($String* name, bool initialize) {
	$loadClass(JTable$NumberEditor, name, initialize, &_JTable$NumberEditor_ClassInfo_, allocate$JTable$NumberEditor);
	return class$;
}

$Class* JTable$NumberEditor::class$ = nullptr;

	} // swing
} // javax