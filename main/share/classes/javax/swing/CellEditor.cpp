#include <javax/swing/CellEditor.h>

#include <java/util/EventObject.h>
#include <javax/swing/event/CellEditorListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _CellEditor_MethodInfo_[] = {
	{"addCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"cancelCellEditing", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"isCellEditable", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"stopCellEditing", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CellEditor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.CellEditor",
	nullptr,
	nullptr,
	nullptr,
	_CellEditor_MethodInfo_
};

$Object* allocate$CellEditor($Class* clazz) {
	return $of($alloc(CellEditor));
}

$Class* CellEditor::load$($String* name, bool initialize) {
	$loadClass(CellEditor, name, initialize, &_CellEditor_ClassInfo_, allocate$CellEditor);
	return class$;
}

$Class* CellEditor::class$ = nullptr;

	} // swing
} // javax