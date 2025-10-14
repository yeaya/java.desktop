#include <bug8005019.h>

#include <bug8005019$1.h>
#include <bug8005019$GeneralFilter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/JTable.h>
#include <javax/swing/RowFilter.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $bug8005019$1 = ::bug8005019$1;
using $bug8005019$GeneralFilter = ::bug8005019$GeneralFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $JTable = ::javax::swing::JTable;
using $RowFilter = ::javax::swing::RowFilter;
using $RowSorter = ::javax::swing::RowSorter;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $TableModel = ::javax::swing::table::TableModel;

$MethodInfo _bug8005019_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8005019::*)()>(&bug8005019::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8005019::main)), "java.lang.Exception"},
	{"testSelectionWithFilterTable", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8005019::testSelectionWithFilterTable))},
	{}
};

$InnerClassInfo _bug8005019_InnerClassesInfo_[] = {
	{"bug8005019$GeneralFilter", "bug8005019", "GeneralFilter", $PRIVATE | $STATIC},
	{"bug8005019$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8005019_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8005019",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug8005019_MethodInfo_,
	nullptr,
	nullptr,
	_bug8005019_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8005019$GeneralFilter,bug8005019$1"
};

$Object* allocate$bug8005019($Class* clazz) {
	return $of($alloc(bug8005019));
}

void bug8005019::init$() {
}

void bug8005019::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug8005019$1));
}

void bug8005019::testSelectionWithFilterTable() {
	$var($DefaultTableModel, model, $new($DefaultTableModel, 0, 1));
	int32_t last = 2;
	for (int32_t i = 0; i <= last; ++i) {
		model->addRow($$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
	}
	$var($JTable, table, $new($JTable, model));
	table->setAutoCreateRowSorter(true);
	table->setRowSelectionInterval(last, last);
	$var($RowFilter, filter, $new($bug8005019$GeneralFilter, $$new($ints, {0})));
	$nc(($cast($DefaultRowSorter, $(table->getRowSorter()))))->setRowFilter(filter);
	model->insertRow(2, $$new($ObjectArray, {$of("x"_s)}));
}

bug8005019::bug8005019() {
}

$Class* bug8005019::load$($String* name, bool initialize) {
	$loadClass(bug8005019, name, initialize, &_bug8005019_ClassInfo_, allocate$bug8005019);
	return class$;
}

$Class* bug8005019::class$ = nullptr;