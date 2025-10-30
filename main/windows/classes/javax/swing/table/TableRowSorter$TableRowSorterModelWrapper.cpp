#include <javax/swing/table/TableRowSorter$TableRowSorterModelWrapper.h>

#include <javax/swing/DefaultRowSorter$ModelWrapper.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter.h>
#include <javax/swing/table/TableStringConverter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter$ModelWrapper = ::javax::swing::DefaultRowSorter$ModelWrapper;
using $TableModel = ::javax::swing::table::TableModel;
using $TableRowSorter = ::javax::swing::table::TableRowSorter;
using $TableStringConverter = ::javax::swing::table::TableStringConverter;

namespace javax {
	namespace swing {
		namespace table {

$FieldInfo _TableRowSorter$TableRowSorterModelWrapper_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/table/TableRowSorter;", nullptr, $FINAL | $SYNTHETIC, $field(TableRowSorter$TableRowSorterModelWrapper, this$0)},
	{}
};

$MethodInfo _TableRowSorter$TableRowSorterModelWrapper_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/table/TableRowSorter;)V", nullptr, $PRIVATE, $method(static_cast<void(TableRowSorter$TableRowSorterModelWrapper::*)($TableRowSorter*)>(&TableRowSorter$TableRowSorterModelWrapper::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getIdentifier", "(I)Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/table/TableModel;", "()TM;", $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getStringValueAt", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TableRowSorter$TableRowSorterModelWrapper_InnerClassesInfo_[] = {
	{"javax.swing.table.TableRowSorter$TableRowSorterModelWrapper", "javax.swing.table.TableRowSorter", "TableRowSorterModelWrapper", $PRIVATE},
	{"javax.swing.DefaultRowSorter$ModelWrapper", "javax.swing.DefaultRowSorter", "ModelWrapper", $PROTECTED | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _TableRowSorter$TableRowSorterModelWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.table.TableRowSorter$TableRowSorterModelWrapper",
	"javax.swing.DefaultRowSorter$ModelWrapper",
	nullptr,
	_TableRowSorter$TableRowSorterModelWrapper_FieldInfo_,
	_TableRowSorter$TableRowSorterModelWrapper_MethodInfo_,
	"Ljavax/swing/DefaultRowSorter$ModelWrapper<TM;Ljava/lang/Integer;>;",
	nullptr,
	_TableRowSorter$TableRowSorterModelWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.table.TableRowSorter"
};

$Object* allocate$TableRowSorter$TableRowSorterModelWrapper($Class* clazz) {
	return $of($alloc(TableRowSorter$TableRowSorterModelWrapper));
}

void TableRowSorter$TableRowSorterModelWrapper::init$($TableRowSorter* this$0) {
	$set(this, this$0, this$0);
	$DefaultRowSorter$ModelWrapper::init$();
}

$Object* TableRowSorter$TableRowSorterModelWrapper::getModel() {
	return $of(this->this$0->tableModel);
}

int32_t TableRowSorter$TableRowSorterModelWrapper::getColumnCount() {
	return (this->this$0->tableModel == nullptr) ? 0 : $nc(this->this$0->tableModel)->getColumnCount();
}

int32_t TableRowSorter$TableRowSorterModelWrapper::getRowCount() {
	return (this->this$0->tableModel == nullptr) ? 0 : $nc(this->this$0->tableModel)->getRowCount();
}

$Object* TableRowSorter$TableRowSorterModelWrapper::getValueAt(int32_t row, int32_t column) {
	return $of($nc(this->this$0->tableModel)->getValueAt(row, column));
}

$String* TableRowSorter$TableRowSorterModelWrapper::getStringValueAt(int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	$var($TableStringConverter, converter, this->this$0->getStringConverter());
	if (converter != nullptr) {
		$var($String, value, converter->toString(this->this$0->tableModel, row, column));
		if (value != nullptr) {
			return value;
		}
		return ""_s;
	}
	$var($Object, o, getValueAt(row, column));
	if (o == nullptr) {
		return ""_s;
	}
	$var($String, string, $nc($of(o))->toString());
	if (string == nullptr) {
		return ""_s;
	}
	return string;
}

$Object* TableRowSorter$TableRowSorterModelWrapper::getIdentifier(int32_t index) {
	return $of($Integer::valueOf(index));
}

TableRowSorter$TableRowSorterModelWrapper::TableRowSorter$TableRowSorterModelWrapper() {
}

$Class* TableRowSorter$TableRowSorterModelWrapper::load$($String* name, bool initialize) {
	$loadClass(TableRowSorter$TableRowSorterModelWrapper, name, initialize, &_TableRowSorter$TableRowSorterModelWrapper_ClassInfo_, allocate$TableRowSorter$TableRowSorterModelWrapper);
	return class$;
}

$Class* TableRowSorter$TableRowSorterModelWrapper::class$ = nullptr;

		} // table
	} // swing
} // javax