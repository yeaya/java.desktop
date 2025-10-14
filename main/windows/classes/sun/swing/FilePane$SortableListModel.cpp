#include <sun/swing/FilePane$SortableListModel.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/event/RowSorterEvent.h>
#include <javax/swing/event/RowSorterListener.h>
#include <javax/swing/event/TableModelEvent.h>
#include <javax/swing/event/TableModelListener.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <sun/swing/FilePane$DetailsTableModel.h>
#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $RowSorter = ::javax::swing::RowSorter;
using $RowSorterEvent = ::javax::swing::event::RowSorterEvent;
using $RowSorterListener = ::javax::swing::event::RowSorterListener;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;
using $TableModelListener = ::javax::swing::event::TableModelListener;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$DetailsTableModel = ::sun::swing::FilePane$DetailsTableModel;
using $FilePane$DetailsTableRowSorter = ::sun::swing::FilePane$DetailsTableRowSorter;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$SortableListModel_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$SortableListModel, this$0)},
	{}
};

$MethodInfo _FilePane$SortableListModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/swing/FilePane;)V", nullptr, $PUBLIC, $method(static_cast<void(FilePane$SortableListModel::*)($FilePane*)>(&FilePane$SortableListModel::init$))},
	{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"sorterChanged", "(Ljavax/swing/event/RowSorterEvent;)V", nullptr, $PUBLIC},
	{"tableChanged", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FilePane$SortableListModel_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$SortableListModel", "sun.swing.FilePane", "SortableListModel", $PRIVATE},
	{}
};

$ClassInfo _FilePane$SortableListModel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$SortableListModel",
	"javax.swing.AbstractListModel",
	"javax.swing.event.TableModelListener,javax.swing.event.RowSorterListener",
	_FilePane$SortableListModel_FieldInfo_,
	_FilePane$SortableListModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljava/lang/Object;>;Ljavax/swing/event/TableModelListener;Ljavax/swing/event/RowSorterListener;",
	nullptr,
	_FilePane$SortableListModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$SortableListModel($Class* clazz) {
	return $of($alloc(FilePane$SortableListModel));
}

int32_t FilePane$SortableListModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool FilePane$SortableListModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* FilePane$SortableListModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* FilePane$SortableListModel::toString() {
	 return this->$AbstractListModel::toString();
}

void FilePane$SortableListModel::finalize() {
	this->$AbstractListModel::finalize();
}

void FilePane$SortableListModel::init$($FilePane* this$0) {
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$nc($(this$0->getDetailsTableModel()))->addTableModelListener(this);
	$nc($(this$0->getRowSorter()))->addRowSorterListener(this);
}

int32_t FilePane$SortableListModel::getSize() {
	return $nc($(this->this$0->getModel()))->getSize();
}

$Object* FilePane$SortableListModel::getElementAt(int32_t index) {
	return $of($nc($(this->this$0->getModel()))->getElementAt($nc($(this->this$0->getRowSorter()))->convertRowIndexToModel(index)));
}

void FilePane$SortableListModel::tableChanged($TableModelEvent* e) {
	fireContentsChanged(this, 0, getSize());
}

void FilePane$SortableListModel::sorterChanged($RowSorterEvent* e) {
	fireContentsChanged(this, 0, getSize());
}

FilePane$SortableListModel::FilePane$SortableListModel() {
}

$Class* FilePane$SortableListModel::load$($String* name, bool initialize) {
	$loadClass(FilePane$SortableListModel, name, initialize, &_FilePane$SortableListModel_ClassInfo_, allocate$FilePane$SortableListModel);
	return class$;
}

$Class* FilePane$SortableListModel::class$ = nullptr;

	} // swing
} // sun