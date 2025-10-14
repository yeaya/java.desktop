#include <sun/swing/FilePane$DetailsTableRowSorter$SorterModelWrapper.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultRowSorter$ModelWrapper.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <sun/swing/FilePane$DetailsTableModel.h>
#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter$ModelWrapper = ::javax::swing::DefaultRowSorter$ModelWrapper;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$DetailsTableModel = ::sun::swing::FilePane$DetailsTableModel;
using $FilePane$DetailsTableRowSorter = ::sun::swing::FilePane$DetailsTableRowSorter;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$DetailsTableRowSorter$SorterModelWrapper_FieldInfo_[] = {
	{"this$1", "Lsun/swing/FilePane$DetailsTableRowSorter;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableRowSorter$SorterModelWrapper, this$1)},
	{}
};

$MethodInfo _FilePane$DetailsTableRowSorter$SorterModelWrapper_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane$DetailsTableRowSorter;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane$DetailsTableRowSorter$SorterModelWrapper::*)($FilePane$DetailsTableRowSorter*)>(&FilePane$DetailsTableRowSorter$SorterModelWrapper::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getIdentifier", "(I)Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/table/TableModel;", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FilePane$DetailsTableRowSorter$SorterModelWrapper_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$DetailsTableRowSorter", "sun.swing.FilePane", "DetailsTableRowSorter", $PRIVATE},
	{"sun.swing.FilePane$DetailsTableRowSorter$SorterModelWrapper", "sun.swing.FilePane$DetailsTableRowSorter", "SorterModelWrapper", $PRIVATE},
	{"javax.swing.DefaultRowSorter$ModelWrapper", "javax.swing.DefaultRowSorter", "ModelWrapper", $PROTECTED | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _FilePane$DetailsTableRowSorter$SorterModelWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$DetailsTableRowSorter$SorterModelWrapper",
	"javax.swing.DefaultRowSorter$ModelWrapper",
	nullptr,
	_FilePane$DetailsTableRowSorter$SorterModelWrapper_FieldInfo_,
	_FilePane$DetailsTableRowSorter$SorterModelWrapper_MethodInfo_,
	"Ljavax/swing/DefaultRowSorter$ModelWrapper<Ljavax/swing/table/TableModel;Ljava/lang/Integer;>;",
	nullptr,
	_FilePane$DetailsTableRowSorter$SorterModelWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$DetailsTableRowSorter$SorterModelWrapper($Class* clazz) {
	return $of($alloc(FilePane$DetailsTableRowSorter$SorterModelWrapper));
}

void FilePane$DetailsTableRowSorter$SorterModelWrapper::init$($FilePane$DetailsTableRowSorter* this$1) {
	$set(this, this$1, this$1);
	$DefaultRowSorter$ModelWrapper::init$();
}

$Object* FilePane$DetailsTableRowSorter$SorterModelWrapper::getModel() {
	return $of($nc(this->this$1->this$0)->getDetailsTableModel());
}

int32_t FilePane$DetailsTableRowSorter$SorterModelWrapper::getColumnCount() {
	return $nc($($nc(this->this$1->this$0)->getDetailsTableModel()))->getColumnCount();
}

int32_t FilePane$DetailsTableRowSorter$SorterModelWrapper::getRowCount() {
	return $nc($($nc(this->this$1->this$0)->getDetailsTableModel()))->getRowCount();
}

$Object* FilePane$DetailsTableRowSorter$SorterModelWrapper::getValueAt(int32_t row, int32_t column) {
	return $of($nc($($nc(this->this$1->this$0)->getModel()))->getElementAt(row));
}

$Object* FilePane$DetailsTableRowSorter$SorterModelWrapper::getIdentifier(int32_t row) {
	return $of($Integer::valueOf(row));
}

FilePane$DetailsTableRowSorter$SorterModelWrapper::FilePane$DetailsTableRowSorter$SorterModelWrapper() {
}

$Class* FilePane$DetailsTableRowSorter$SorterModelWrapper::load$($String* name, bool initialize) {
	$loadClass(FilePane$DetailsTableRowSorter$SorterModelWrapper, name, initialize, &_FilePane$DetailsTableRowSorter$SorterModelWrapper_ClassInfo_, allocate$FilePane$DetailsTableRowSorter$SorterModelWrapper);
	return class$;
}

$Class* FilePane$DetailsTableRowSorter$SorterModelWrapper::class$ = nullptr;

	} // swing
} // sun