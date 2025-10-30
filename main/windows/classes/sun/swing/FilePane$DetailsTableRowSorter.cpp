#include <sun/swing/FilePane$DetailsTableRowSorter.h>

#include <java/util/Comparator.h>
#include <java/util/concurrent/Callable.h>
#include <javax/swing/DefaultRowSorter$ModelWrapper.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/event/TableModelListener.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/ShellFolderColumnInfo.h>
#include <sun/swing/FilePane$DetailsTableModel.h>
#include <sun/swing/FilePane$DetailsTableRowSorter$1.h>
#include <sun/swing/FilePane$DetailsTableRowSorter$2.h>
#include <sun/swing/FilePane$DetailsTableRowSorter$SorterModelWrapper.h>
#include <sun/swing/FilePane$DirectoriesFirstComparatorWrapper.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ShellFolderColumnInfoArray = $Array<::sun::awt::shell::ShellFolderColumnInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Callable = ::java::util::concurrent::Callable;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $DefaultRowSorter$ModelWrapper = ::javax::swing::DefaultRowSorter$ModelWrapper;
using $TableModelListener = ::javax::swing::event::TableModelListener;
using $TableModel = ::javax::swing::table::TableModel;
using $TableRowSorter = ::javax::swing::table::TableRowSorter;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $ShellFolderColumnInfo = ::sun::awt::shell::ShellFolderColumnInfo;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$DetailsTableModel = ::sun::swing::FilePane$DetailsTableModel;
using $FilePane$DetailsTableRowSorter$1 = ::sun::swing::FilePane$DetailsTableRowSorter$1;
using $FilePane$DetailsTableRowSorter$2 = ::sun::swing::FilePane$DetailsTableRowSorter$2;
using $FilePane$DetailsTableRowSorter$SorterModelWrapper = ::sun::swing::FilePane$DetailsTableRowSorter$SorterModelWrapper;
using $FilePane$DirectoriesFirstComparatorWrapper = ::sun::swing::FilePane$DirectoriesFirstComparatorWrapper;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$DetailsTableRowSorter_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableRowSorter, this$0)},
	{}
};

$MethodInfo _FilePane$DetailsTableRowSorter_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;)V", nullptr, $PUBLIC, $method(static_cast<void(FilePane$DetailsTableRowSorter::*)($FilePane*)>(&FilePane$DetailsTableRowSorter::init$))},
	{"access$001", "(Lsun/swing/FilePane$DetailsTableRowSorter;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(FilePane$DetailsTableRowSorter*)>(&FilePane$DetailsTableRowSorter::access$001))},
	{"modelStructureChanged", "()V", nullptr, $PUBLIC},
	{"sort", "()V", nullptr, $PUBLIC},
	{"updateComparators", "([Lsun/awt/shell/ShellFolderColumnInfo;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FilePane$DetailsTableRowSorter_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$DetailsTableRowSorter", "sun.swing.FilePane", "DetailsTableRowSorter", $PRIVATE},
	{"sun.swing.FilePane$DetailsTableRowSorter$SorterModelWrapper", "sun.swing.FilePane$DetailsTableRowSorter", "SorterModelWrapper", $PRIVATE},
	{"sun.swing.FilePane$DetailsTableRowSorter$2", nullptr, nullptr, 0},
	{"sun.swing.FilePane$DetailsTableRowSorter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$DetailsTableRowSorter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$DetailsTableRowSorter",
	"javax.swing.table.TableRowSorter",
	nullptr,
	_FilePane$DetailsTableRowSorter_FieldInfo_,
	_FilePane$DetailsTableRowSorter_MethodInfo_,
	"Ljavax/swing/table/TableRowSorter<Ljavax/swing/table/TableModel;>;",
	nullptr,
	_FilePane$DetailsTableRowSorter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$DetailsTableRowSorter($Class* clazz) {
	return $of($alloc(FilePane$DetailsTableRowSorter));
}

void FilePane$DetailsTableRowSorter::access$001(FilePane$DetailsTableRowSorter* x0) {
	$init(FilePane$DetailsTableRowSorter);
	$nc(x0)->$TableRowSorter::sort();
}

void FilePane$DetailsTableRowSorter::init$($FilePane* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$TableRowSorter::init$();
	$var($FilePane$DetailsTableRowSorter$SorterModelWrapper, modelWrapper, $new($FilePane$DetailsTableRowSorter$SorterModelWrapper, this));
	setModelWrapper(modelWrapper);
	$nc($($cast($TableModel, modelWrapper->getModel())))->addTableModelListener($$new($FilePane$DetailsTableRowSorter$1, this, this$0));
}

void FilePane$DetailsTableRowSorter::updateComparators($ShellFolderColumnInfoArray* columns) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(columns)->length; ++i) {
		$var($Comparator, c, $nc(columns->get(i))->getComparator());
		if (c != nullptr) {
			$assign(c, $new($FilePane$DirectoriesFirstComparatorWrapper, this->this$0, i, c));
		}
		setComparator(i, c);
	}
}

void FilePane$DetailsTableRowSorter::sort() {
	$ShellFolder::invoke($$new($FilePane$DetailsTableRowSorter$2, this));
}

void FilePane$DetailsTableRowSorter::modelStructureChanged() {
	$TableRowSorter::modelStructureChanged();
	updateComparators($($nc(this->this$0->detailsTableModel)->getColumns()));
}

FilePane$DetailsTableRowSorter::FilePane$DetailsTableRowSorter() {
}

$Class* FilePane$DetailsTableRowSorter::load$($String* name, bool initialize) {
	$loadClass(FilePane$DetailsTableRowSorter, name, initialize, &_FilePane$DetailsTableRowSorter_ClassInfo_, allocate$FilePane$DetailsTableRowSorter);
	return class$;
}

$Class* FilePane$DetailsTableRowSorter::class$ = nullptr;

	} // swing
} // sun