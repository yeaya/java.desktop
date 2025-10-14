#include <javax/swing/tree/TreeCellEditor.h>

#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTree.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CellEditor = ::javax::swing::CellEditor;
using $JTree = ::javax::swing::JTree;

namespace javax {
	namespace swing {
		namespace tree {

$MethodInfo _TreeCellEditor_MethodInfo_[] = {
	{"getTreeCellEditorComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZI)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TreeCellEditor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.tree.TreeCellEditor",
	nullptr,
	"javax.swing.CellEditor",
	nullptr,
	_TreeCellEditor_MethodInfo_
};

$Object* allocate$TreeCellEditor($Class* clazz) {
	return $of($alloc(TreeCellEditor));
}

$Class* TreeCellEditor::load$($String* name, bool initialize) {
	$loadClass(TreeCellEditor, name, initialize, &_TreeCellEditor_ClassInfo_, allocate$TreeCellEditor);
	return class$;
}

$Class* TreeCellEditor::class$ = nullptr;

		} // tree
	} // swing
} // javax