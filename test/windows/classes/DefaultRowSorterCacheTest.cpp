#include <DefaultRowSorterCacheTest.h>

#include <CustomTableModel.h>
#include <DefaultRowSorterCacheTest$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter.h>
#include <jcpp.h>

using $CustomTableModel = ::CustomTableModel;
using $DefaultRowSorterCacheTest$1 = ::DefaultRowSorterCacheTest$1;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $TableModel = ::javax::swing::table::TableModel;
using $TableRowSorter = ::javax::swing::table::TableRowSorter;

$MethodInfo _DefaultRowSorterCacheTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultRowSorterCacheTest::*)()>(&DefaultRowSorterCacheTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DefaultRowSorterCacheTest::main)), "java.lang.Exception"},
	{"testSort", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultRowSorterCacheTest_InnerClassesInfo_[] = {
	{"DefaultRowSorterCacheTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultRowSorterCacheTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DefaultRowSorterCacheTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DefaultRowSorterCacheTest_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultRowSorterCacheTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"DefaultRowSorterCacheTest$1"
};

$Object* allocate$DefaultRowSorterCacheTest($Class* clazz) {
	return $of($alloc(DefaultRowSorterCacheTest));
}

void DefaultRowSorterCacheTest::init$() {
}

void DefaultRowSorterCacheTest::testSort() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, values, $new($ObjectArray, {
		$($of($Integer::valueOf(1))),
		$($of($Integer::valueOf(2))),
		$($of($Integer::valueOf(10)))
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {values->get(0)}),
		$$new($ObjectArray, {values->get(1)}),
		$$new($ObjectArray, {values->get(2)})
	}));
	$var($DefaultTableModel, model, $new($CustomTableModel, data, $$new($ObjectArray, {$of("A"_s)})));
	$var($TableRowSorter, rowSorter, $new($TableRowSorter, model));
	rowSorter->toggleSortOrder(0);
	for (int32_t row = 0; row < model->getRowCount(); ++row) {
		if (row != rowSorter->convertRowIndexToView(row)) {
			$throwNew($RuntimeException, "Wrong sorting before making any changes in test case"_s);
		}
	}
	model->setRowCount(0);
	rowSorter->rowsDeleted(0, values->length - 1);
	for (int32_t i = 0; i < values->length; ++i) {
		model->addRow($$new($ObjectArray, {values->get(i)}));
		rowSorter->rowsInserted(i, i);
	}
	for (int32_t row = 0; row < model->getRowCount(); ++row) {
		if (row != rowSorter->convertRowIndexToView(row)) {
			$throwNew($RuntimeException, "Wrong sorting at end of test case"_s);
		}
	}
}

void DefaultRowSorterCacheTest::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($DefaultRowSorterCacheTest$1));
}

DefaultRowSorterCacheTest::DefaultRowSorterCacheTest() {
}

$Class* DefaultRowSorterCacheTest::load$($String* name, bool initialize) {
	$loadClass(DefaultRowSorterCacheTest, name, initialize, &_DefaultRowSorterCacheTest_ClassInfo_, allocate$DefaultRowSorterCacheTest);
	return class$;
}

$Class* DefaultRowSorterCacheTest::class$ = nullptr;