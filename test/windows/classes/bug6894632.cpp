#include <bug6894632.h>

#include <bug6894632$1.h>
#include <bug6894632$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/RowSorter$SortKey.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SortOrder.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter.h>
#include <jcpp.h>

#undef ASCENDING
#undef EXIT_ON_CLOSE
#undef UNSORTED

using $bug6894632$1 = ::bug6894632$1;
using $bug6894632$2 = ::bug6894632$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $RowSorter = ::javax::swing::RowSorter;
using $RowSorter$SortKey = ::javax::swing::RowSorter$SortKey;
using $SortOrder = ::javax::swing::SortOrder;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $TableModel = ::javax::swing::table::TableModel;
using $TableRowSorter = ::javax::swing::table::TableRowSorter;

$FieldInfo _bug6894632_FieldInfo_[] = {
	{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE | $STATIC, $staticField(bug6894632, table)},
	{}
};

$MethodInfo _bug6894632_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6894632::*)()>(&bug6894632::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6894632::main)), "java.lang.Exception"},
	{"test", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/swing/RowSorter$SortKey;>;)V", $STATIC, $method(static_cast<void(*)($List*)>(&bug6894632::test))},
	{}
};

$InnerClassInfo _bug6894632_InnerClassesInfo_[] = {
	{"bug6894632$2", nullptr, nullptr, 0},
	{"bug6894632$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6894632_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6894632",
	"java.lang.Object",
	nullptr,
	_bug6894632_FieldInfo_,
	_bug6894632_MethodInfo_,
	nullptr,
	nullptr,
	_bug6894632_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6894632$2,bug6894632$1"
};

$Object* allocate$bug6894632($Class* clazz) {
	return $of($alloc(bug6894632));
}

$JTable* bug6894632::table = nullptr;

void bug6894632::init$() {
}

void bug6894632::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6894632$1));
	$init($System);
	$nc($System::out)->println("ok"_s);
}

void bug6894632::test($List* sortKeys) {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, $new($JFrame));
	{
		$var($Throwable, var$0, nullptr);
		try {
			frame->setUndecorated(true);
			frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
			$init(bug6894632);
			$assignStatic(bug6894632::table, $new($JTable));
			$var($DefaultTableModel, tableModel, $new($bug6894632$2, 10, 1));
			$nc(bug6894632::table)->setModel(tableModel);
			$var($TableRowSorter, sorter, $new($TableRowSorter, tableModel));
			sorter->setSortKeys(sortKeys);
			$nc(bug6894632::table)->setRowSorter(sorter);
			frame->setContentPane(bug6894632::table);
			frame->pack();
			frame->setLocationRelativeTo(nullptr);
			frame->setVisible(true);
			int32_t lastRow = $nc(bug6894632::table)->getRowCount() - 1;
			$nc(bug6894632::table)->setRowSelectionInterval(lastRow, lastRow);
			tableModel->removeRow(lastRow - 1);
			lastRow = $nc(bug6894632::table)->getRowCount() - 1;
			if (lastRow != $nc(bug6894632::table)->getSelectedRow()) {
				$throwNew($RuntimeException, "last row must be still selected"_s);
			}
			$nc(sortKeys)->clear();
			$init($SortOrder);
			sortKeys->add(0, $$new($RowSorter$SortKey, 0, $SortOrder::ASCENDING));
			sorter->setSortKeys(sortKeys);
			lastRow = $nc(bug6894632::table)->getRowCount() - 1;
			tableModel->removeRow(lastRow - 1);
			if (!$nc($($nc($of($($nc(bug6894632::table)->getValueAt($nc(bug6894632::table)->getSelectedRow(), 0))))->toString()))->endsWith("==last"_s)) {
				$throwNew($RuntimeException, "row ends with \"==last\" row must be still selected"_s);
			}
			sortKeys->clear();
			sortKeys->add(0, $$new($RowSorter$SortKey, 0, $SortOrder::UNSORTED));
			sorter->setSortKeys(sortKeys);
			lastRow = $nc(bug6894632::table)->getRowCount() - 1;
			tableModel->removeRow(lastRow - 1);
			lastRow = $nc(bug6894632::table)->getRowCount() - 1;
			if (lastRow != $nc(bug6894632::table)->getSelectedRow()) {
				$throwNew($RuntimeException, "last row must be still selected"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			frame->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bug6894632::bug6894632() {
}

$Class* bug6894632::load$($String* name, bool initialize) {
	$loadClass(bug6894632, name, initialize, &_bug6894632_ClassInfo_, allocate$bug6894632);
	return class$;
}

$Class* bug6894632::class$ = nullptr;