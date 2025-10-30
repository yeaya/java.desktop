#include <DefaultRowSorterIOOBEtest$SorterModelWrapper.h>

#include <DefaultRowSorterIOOBEtest.h>
#include <javax/swing/DefaultRowSorter$ModelWrapper.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $DefaultRowSorterIOOBEtest = ::DefaultRowSorterIOOBEtest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter$ModelWrapper = ::javax::swing::DefaultRowSorter$ModelWrapper;
using $TableModel = ::javax::swing::table::TableModel;

$MethodInfo _DefaultRowSorterIOOBEtest$SorterModelWrapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultRowSorterIOOBEtest$SorterModelWrapper::*)()>(&DefaultRowSorterIOOBEtest$SorterModelWrapper::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getIdentifier", "(I)Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/table/TableModel;", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultRowSorterIOOBEtest$SorterModelWrapper_InnerClassesInfo_[] = {
	{"DefaultRowSorterIOOBEtest$SorterModelWrapper", "DefaultRowSorterIOOBEtest", "SorterModelWrapper", $STATIC},
	{"javax.swing.DefaultRowSorter$ModelWrapper", "javax.swing.DefaultRowSorter", "ModelWrapper", $PROTECTED | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultRowSorterIOOBEtest$SorterModelWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"DefaultRowSorterIOOBEtest$SorterModelWrapper",
	"javax.swing.DefaultRowSorter$ModelWrapper",
	nullptr,
	nullptr,
	_DefaultRowSorterIOOBEtest$SorterModelWrapper_MethodInfo_,
	"Ljavax/swing/DefaultRowSorter$ModelWrapper<Ljavax/swing/table/TableModel;Ljava/lang/Integer;>;",
	nullptr,
	_DefaultRowSorterIOOBEtest$SorterModelWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DefaultRowSorterIOOBEtest"
};

$Object* allocate$DefaultRowSorterIOOBEtest$SorterModelWrapper($Class* clazz) {
	return $of($alloc(DefaultRowSorterIOOBEtest$SorterModelWrapper));
}

void DefaultRowSorterIOOBEtest$SorterModelWrapper::init$() {
	$DefaultRowSorter$ModelWrapper::init$();
}

$Object* DefaultRowSorterIOOBEtest$SorterModelWrapper::getModel() {
	$init($DefaultRowSorterIOOBEtest);
	return $of($DefaultRowSorterIOOBEtest::tableModel);
}

int32_t DefaultRowSorterIOOBEtest$SorterModelWrapper::getColumnCount() {
	$init($DefaultRowSorterIOOBEtest);
	return $nc($DefaultRowSorterIOOBEtest::tableModel)->getColumnCount();
}

int32_t DefaultRowSorterIOOBEtest$SorterModelWrapper::getRowCount() {
	$init($DefaultRowSorterIOOBEtest);
	return $nc($DefaultRowSorterIOOBEtest::tableModel)->getRowCount();
}

$Object* DefaultRowSorterIOOBEtest$SorterModelWrapper::getValueAt(int32_t row, int32_t column) {
	$init($DefaultRowSorterIOOBEtest);
	return $of($nc($DefaultRowSorterIOOBEtest::tableModel)->getValueAt(row, column));
}

$Object* DefaultRowSorterIOOBEtest$SorterModelWrapper::getIdentifier(int32_t row) {
	return $of($Integer::valueOf(row));
}

DefaultRowSorterIOOBEtest$SorterModelWrapper::DefaultRowSorterIOOBEtest$SorterModelWrapper() {
}

$Class* DefaultRowSorterIOOBEtest$SorterModelWrapper::load$($String* name, bool initialize) {
	$loadClass(DefaultRowSorterIOOBEtest$SorterModelWrapper, name, initialize, &_DefaultRowSorterIOOBEtest$SorterModelWrapper_ClassInfo_, allocate$DefaultRowSorterIOOBEtest$SorterModelWrapper);
	return class$;
}

$Class* DefaultRowSorterIOOBEtest$SorterModelWrapper::class$ = nullptr;