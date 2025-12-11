#include <bug8032874$TestTableModel.h>

#include <bug8032874.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

$FieldInfo _bug8032874$TestTableModel_FieldInfo_[] = {
	{"data", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(bug8032874$TestTableModel, data)},
	{}
};

$MethodInfo _bug8032874$TestTableModel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8032874$TestTableModel::*)()>(&bug8032874$TestTableModel::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug8032874$TestTableModel_InnerClassesInfo_[] = {
	{"bug8032874$TestTableModel", "bug8032874", "TestTableModel", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug8032874$TestTableModel_ClassInfo_ = {
	$ACC_SUPER,
	"bug8032874$TestTableModel",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	_bug8032874$TestTableModel_FieldInfo_,
	_bug8032874$TestTableModel_MethodInfo_,
	nullptr,
	nullptr,
	_bug8032874$TestTableModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8032874"
};

$Object* allocate$bug8032874$TestTableModel($Class* clazz) {
	return $of($alloc(bug8032874$TestTableModel));
}

void bug8032874$TestTableModel::init$() {
	$useLocalCurrentObjectStackCache();
	$AbstractTableModel::init$();
	$set(this, data, $new($ArrayList));
	for (int32_t i = 0; i < 5; ++i) {
		$nc(this->data)->add($($Integer::valueOf(i)));
	}
}

int32_t bug8032874$TestTableModel::getRowCount() {
	return $nc(this->data)->size();
}

int32_t bug8032874$TestTableModel::getColumnCount() {
	return 1;
}

$Object* bug8032874$TestTableModel::getValueAt(int32_t rowIndex, int32_t columnIndex) {
	return $of($nc(this->data)->get(rowIndex));
}

void bug8032874$TestTableModel::remove(int32_t row) {
	$nc(this->data)->remove(row);
	fireTableRowsDeleted(row, row);
}

bug8032874$TestTableModel::bug8032874$TestTableModel() {
}

$Class* bug8032874$TestTableModel::load$($String* name, bool initialize) {
	$loadClass(bug8032874$TestTableModel, name, initialize, &_bug8032874$TestTableModel_ClassInfo_, allocate$bug8032874$TestTableModel);
	return class$;
}

$Class* bug8032874$TestTableModel::class$ = nullptr;