#include <JTreeFocusTest$FormEditor.h>

#include <JTreeFocusTest.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

using $JTreeFocusTest = ::JTreeFocusTest;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JTree = ::javax::swing::JTree;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

$FieldInfo _JTreeFocusTest$FormEditor_FieldInfo_[] = {
	{"this$0", "LJTreeFocusTest;", nullptr, $FINAL | $SYNTHETIC, $field(JTreeFocusTest$FormEditor, this$0)},
	{}
};

$MethodInfo _JTreeFocusTest$FormEditor_MethodInfo_[] = {
	{"<init>", "(LJTreeFocusTest;Ljavax/swing/JTree;Ljavax/swing/tree/DefaultTreeCellRenderer;)V", nullptr, $PUBLIC, $method(static_cast<void(JTreeFocusTest$FormEditor::*)($JTreeFocusTest*,$JTree*,$DefaultTreeCellRenderer*)>(&JTreeFocusTest$FormEditor::init$))},
	{"getTreeCellEditorComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZI)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTreeFocusTest$FormEditor_InnerClassesInfo_[] = {
	{"JTreeFocusTest$FormEditor", "JTreeFocusTest", "FormEditor", 0},
	{}
};

$ClassInfo _JTreeFocusTest$FormEditor_ClassInfo_ = {
	$ACC_SUPER,
	"JTreeFocusTest$FormEditor",
	"javax.swing.tree.DefaultTreeCellEditor",
	nullptr,
	_JTreeFocusTest$FormEditor_FieldInfo_,
	_JTreeFocusTest$FormEditor_MethodInfo_,
	nullptr,
	nullptr,
	_JTreeFocusTest$FormEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTreeFocusTest"
};

$Object* allocate$JTreeFocusTest$FormEditor($Class* clazz) {
	return $of($alloc(JTreeFocusTest$FormEditor));
}

void JTreeFocusTest$FormEditor::init$($JTreeFocusTest* this$0, $JTree* tree, $DefaultTreeCellRenderer* renderer) {
	$set(this, this$0, this$0);
	$DefaultTreeCellEditor::init$(tree, renderer);
}

$Component* JTreeFocusTest$FormEditor::getTreeCellEditorComponent($JTree* tree, Object$* value, bool sel, bool expanded, bool leaf, int32_t row) {
	$var($Object, obj, $nc(($cast($DefaultMutableTreeNode, value)))->getUserObject());
	if ($instanceOf($Component, obj)) {
		return $cast($Component, ($cast($DefaultMutableTreeNode, value))->getUserObject());
	}
	return $DefaultTreeCellEditor::getTreeCellEditorComponent(tree, value, sel, expanded, leaf, row);
}

bool JTreeFocusTest$FormEditor::shouldSelectCell($EventObject* anEvent) {
	return true;
}

JTreeFocusTest$FormEditor::JTreeFocusTest$FormEditor() {
}

$Class* JTreeFocusTest$FormEditor::load$($String* name, bool initialize) {
	$loadClass(JTreeFocusTest$FormEditor, name, initialize, &_JTreeFocusTest$FormEditor_ClassInfo_, allocate$JTreeFocusTest$FormEditor);
	return class$;
}

$Class* JTreeFocusTest$FormEditor::class$ = nullptr;