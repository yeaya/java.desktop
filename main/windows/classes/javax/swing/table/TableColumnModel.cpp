#include <javax/swing/table/TableColumnModel.h>

#include <java/util/Enumeration.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/event/TableColumnModelListener.h>
#include <javax/swing/table/TableColumn.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $TableColumnModelListener = ::javax::swing::event::TableColumnModelListener;
using $TableColumn = ::javax::swing::table::TableColumn;

namespace javax {
	namespace swing {
		namespace table {

$MethodInfo _TableColumnModel_MethodInfo_[] = {
	{"addColumn", "(Ljavax/swing/table/TableColumn;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addColumnModelListener", "(Ljavax/swing/event/TableColumnModelListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getColumn", "(I)Ljavax/swing/table/TableColumn;", nullptr, $PUBLIC | $ABSTRACT},
	{"getColumnCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getColumnIndex", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getColumnIndexAtX", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getColumnMargin", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getColumnSelectionAllowed", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getColumns", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/table/TableColumn;>;", $PUBLIC | $ABSTRACT},
	{"getSelectedColumnCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectedColumns", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectionModel", "()Ljavax/swing/ListSelectionModel;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTotalColumnWidth", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"moveColumn", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeColumn", "(Ljavax/swing/table/TableColumn;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeColumnModelListener", "(Ljavax/swing/event/TableColumnModelListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setColumnMargin", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setColumnSelectionAllowed", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSelectionModel", "(Ljavax/swing/ListSelectionModel;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TableColumnModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.table.TableColumnModel",
	nullptr,
	nullptr,
	nullptr,
	_TableColumnModel_MethodInfo_
};

$Object* allocate$TableColumnModel($Class* clazz) {
	return $of($alloc(TableColumnModel));
}

$Class* TableColumnModel::load$($String* name, bool initialize) {
	$loadClass(TableColumnModel, name, initialize, &_TableColumnModel_ClassInfo_, allocate$TableColumnModel);
	return class$;
}

$Class* TableColumnModel::class$ = nullptr;

		} // table
	} // swing
} // javax