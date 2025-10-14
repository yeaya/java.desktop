#include <javax/swing/table/TableCellEditor.h>

#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CellEditor = ::javax::swing::CellEditor;
using $JTable = ::javax::swing::JTable;

namespace javax {
	namespace swing {
		namespace table {

$MethodInfo _TableCellEditor_MethodInfo_[] = {
	{"getTableCellEditorComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZII)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TableCellEditor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.table.TableCellEditor",
	nullptr,
	"javax.swing.CellEditor",
	nullptr,
	_TableCellEditor_MethodInfo_
};

$Object* allocate$TableCellEditor($Class* clazz) {
	return $of($alloc(TableCellEditor));
}

$Class* TableCellEditor::load$($String* name, bool initialize) {
	$loadClass(TableCellEditor, name, initialize, &_TableCellEditor_ClassInfo_, allocate$TableCellEditor);
	return class$;
}

$Class* TableCellEditor::class$ = nullptr;

		} // table
	} // swing
} // javax