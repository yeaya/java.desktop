#include <bug6348946$ParameterTable.h>

#include <bug6348946$Editor.h>
#include <bug6348946$Renderer.h>
#include <bug6348946.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $bug6348946 = ::bug6348946;
using $bug6348946$Editor = ::bug6348946$Editor;
using $bug6348946$Renderer = ::bug6348946$Renderer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

$MethodInfo _bug6348946$ParameterTable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6348946$ParameterTable::*)()>(&bug6348946$ParameterTable::init$))},
	{}
};

$InnerClassInfo _bug6348946$ParameterTable_InnerClassesInfo_[] = {
	{"bug6348946$ParameterTable", "bug6348946", "ParameterTable", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug6348946$ParameterTable_ClassInfo_ = {
	$ACC_SUPER,
	"bug6348946$ParameterTable",
	"javax.swing.JTable",
	nullptr,
	nullptr,
	_bug6348946$ParameterTable_MethodInfo_,
	nullptr,
	nullptr,
	_bug6348946$ParameterTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6348946"
};

$Object* allocate$bug6348946$ParameterTable($Class* clazz) {
	return $of($alloc(bug6348946$ParameterTable));
}

void bug6348946$ParameterTable::init$() {
	$useLocalCurrentObjectStackCache();
	$JTable::init$($$new($ObjectArray2, {$$new($ObjectArray, {$($of($Integer::valueOf(5)))})}), $$new($StringArray, {"Value"_s}));
	$nc($($nc($(getColumnModel()))->getColumn(0)))->setCellRenderer($$new($bug6348946$Renderer));
	$nc($($nc($(getColumnModel()))->getColumn(0)))->setCellEditor($$new($bug6348946$Editor));
}

bug6348946$ParameterTable::bug6348946$ParameterTable() {
}

$Class* bug6348946$ParameterTable::load$($String* name, bool initialize) {
	$loadClass(bug6348946$ParameterTable, name, initialize, &_bug6348946$ParameterTable_ClassInfo_, allocate$bug6348946$ParameterTable);
	return class$;
}

$Class* bug6348946$ParameterTable::class$ = nullptr;