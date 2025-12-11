#include <DefaultRowSorterIOOBEtest$1.h>

#include <DefaultRowSorterIOOBEtest.h>
#include <java/util/List.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $DefaultRowSorterIOOBEtest = ::DefaultRowSorterIOOBEtest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

$MethodInfo _DefaultRowSorterIOOBEtest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultRowSorterIOOBEtest$1::*)()>(&DefaultRowSorterIOOBEtest$1::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultRowSorterIOOBEtest$1_EnclosingMethodInfo_ = {
	"DefaultRowSorterIOOBEtest",
	nullptr,
	nullptr
};

$InnerClassInfo _DefaultRowSorterIOOBEtest$1_InnerClassesInfo_[] = {
	{"DefaultRowSorterIOOBEtest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultRowSorterIOOBEtest$1_ClassInfo_ = {
	$ACC_SUPER,
	"DefaultRowSorterIOOBEtest$1",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	nullptr,
	_DefaultRowSorterIOOBEtest$1_MethodInfo_,
	nullptr,
	&_DefaultRowSorterIOOBEtest$1_EnclosingMethodInfo_,
	_DefaultRowSorterIOOBEtest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DefaultRowSorterIOOBEtest"
};

$Object* allocate$DefaultRowSorterIOOBEtest$1($Class* clazz) {
	return $of($alloc(DefaultRowSorterIOOBEtest$1));
}

void DefaultRowSorterIOOBEtest$1::init$() {
	$AbstractTableModel::init$();
}

int32_t DefaultRowSorterIOOBEtest$1::getRowCount() {
	$init($DefaultRowSorterIOOBEtest);
	return $nc($DefaultRowSorterIOOBEtest::rows)->size();
}

int32_t DefaultRowSorterIOOBEtest$1::getColumnCount() {
	return 1;
}

$Object* DefaultRowSorterIOOBEtest$1::getValueAt(int32_t rowIndex, int32_t columnIndex) {
	$init($DefaultRowSorterIOOBEtest);
	return $of($nc($DefaultRowSorterIOOBEtest::rows)->get(rowIndex));
}

DefaultRowSorterIOOBEtest$1::DefaultRowSorterIOOBEtest$1() {
}

$Class* DefaultRowSorterIOOBEtest$1::load$($String* name, bool initialize) {
	$loadClass(DefaultRowSorterIOOBEtest$1, name, initialize, &_DefaultRowSorterIOOBEtest$1_ClassInfo_, allocate$DefaultRowSorterIOOBEtest$1);
	return class$;
}

$Class* DefaultRowSorterIOOBEtest$1::class$ = nullptr;