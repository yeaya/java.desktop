#include <CustomTableModel.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

$MethodInfo _CustomTableModel_MethodInfo_[] = {
	{"<init>", "([[Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(CustomTableModel::*)($ObjectArray2*,$ObjectArray*)>(&CustomTableModel::init$))},
	{"getColumnClass", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $PUBLIC},
	{}
};

$ClassInfo _CustomTableModel_ClassInfo_ = {
	$ACC_SUPER,
	"CustomTableModel",
	"javax.swing.table.DefaultTableModel",
	nullptr,
	nullptr,
	_CustomTableModel_MethodInfo_
};

$Object* allocate$CustomTableModel($Class* clazz) {
	return $of($alloc(CustomTableModel));
}

void CustomTableModel::init$($ObjectArray2* data, $ObjectArray* columnNames) {
	$DefaultTableModel::init$(data, columnNames);
}

$Class* CustomTableModel::getColumnClass(int32_t columnIndex) {
	if (getRowCount() > 0) {
		return $nc($of($(getValueAt(0, columnIndex))))->getClass();
	}
	return $DefaultTableModel::getColumnClass(columnIndex);
}

CustomTableModel::CustomTableModel() {
}

$Class* CustomTableModel::load$($String* name, bool initialize) {
	$loadClass(CustomTableModel, name, initialize, &_CustomTableModel_ClassInfo_, allocate$CustomTableModel);
	return class$;
}

$Class* CustomTableModel::class$ = nullptr;