#include <javax/swing/JTable$BooleanEditor.h>

#include <java/awt/Component.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

#undef CENTER

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JTable = ::javax::swing::JTable;

namespace javax {
	namespace swing {

$MethodInfo _JTable$BooleanEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTable$BooleanEditor::*)()>(&JTable$BooleanEditor::init$))},
	{}
};

$InnerClassInfo _JTable$BooleanEditor_InnerClassesInfo_[] = {
	{"javax.swing.JTable$BooleanEditor", "javax.swing.JTable", "BooleanEditor", $STATIC},
	{}
};

$ClassInfo _JTable$BooleanEditor_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$BooleanEditor",
	"javax.swing.DefaultCellEditor",
	nullptr,
	nullptr,
	_JTable$BooleanEditor_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$BooleanEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$BooleanEditor($Class* clazz) {
	return $of($alloc(JTable$BooleanEditor));
}

void JTable$BooleanEditor::init$() {
	$useLocalCurrentObjectStackCache();
	$DefaultCellEditor::init$($$new($JCheckBox));
	$var($JCheckBox, checkBox, $cast($JCheckBox, getComponent()));
	$nc(checkBox)->setHorizontalAlignment($JCheckBox::CENTER);
}

JTable$BooleanEditor::JTable$BooleanEditor() {
}

$Class* JTable$BooleanEditor::load$($String* name, bool initialize) {
	$loadClass(JTable$BooleanEditor, name, initialize, &_JTable$BooleanEditor_ClassInfo_, allocate$JTable$BooleanEditor);
	return class$;
}

$Class* JTable$BooleanEditor::class$ = nullptr;

	} // swing
} // javax