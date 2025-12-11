#include <javax/swing/table/TableModel.h>

#include <javax/swing/event/TableModelListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace table {

$MethodInfo _TableModel_MethodInfo_[] = {
	{"addTableModelListener", "(Ljavax/swing/event/TableModelListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getColumnClass", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{"getColumnCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRowCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"isCellEditable", "(II)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeTableModelListener", "(Ljavax/swing/event/TableModelListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setValueAt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TableModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.table.TableModel",
	nullptr,
	nullptr,
	nullptr,
	_TableModel_MethodInfo_
};

$Object* allocate$TableModel($Class* clazz) {
	return $of($alloc(TableModel));
}

$Class* TableModel::load$($String* name, bool initialize) {
	$loadClass(TableModel, name, initialize, &_TableModel_ClassInfo_, allocate$TableModel);
	return class$;
}

$Class* TableModel::class$ = nullptr;

		} // table
	} // swing
} // javax