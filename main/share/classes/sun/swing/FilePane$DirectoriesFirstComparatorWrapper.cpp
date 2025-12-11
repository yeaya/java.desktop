#include <sun/swing/FilePane$DirectoriesFirstComparatorWrapper.h>

#include <java/io/File.h>
#include <java/util/Comparator.h>
#include <javax/swing/JFileChooser.h>
#include <sun/awt/shell/ShellFolderColumnInfo.h>
#include <sun/swing/FilePane$DetailsTableModel.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ShellFolderColumnInfo = ::sun::awt::shell::ShellFolderColumnInfo;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$DetailsTableModel = ::sun::swing::FilePane$DetailsTableModel;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$DirectoriesFirstComparatorWrapper_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DirectoriesFirstComparatorWrapper, this$0)},
	{"comparator", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/lang/Object;>;", $PRIVATE, $field(FilePane$DirectoriesFirstComparatorWrapper, comparator)},
	{"column", "I", nullptr, $PRIVATE, $field(FilePane$DirectoriesFirstComparatorWrapper, column)},
	{}
};

$MethodInfo _FilePane$DirectoriesFirstComparatorWrapper_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;ILjava/util/Comparator;)V", "(ILjava/util/Comparator<*>;)V", $PUBLIC, $method(static_cast<void(FilePane$DirectoriesFirstComparatorWrapper::*)($FilePane*,int32_t,$Comparator*)>(&FilePane$DirectoriesFirstComparatorWrapper::init$))},
	{"compare", "(Ljava/io/File;Ljava/io/File;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _FilePane$DirectoriesFirstComparatorWrapper_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$DirectoriesFirstComparatorWrapper", "sun.swing.FilePane", "DirectoriesFirstComparatorWrapper", $PRIVATE},
	{}
};

$ClassInfo _FilePane$DirectoriesFirstComparatorWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$DirectoriesFirstComparatorWrapper",
	"java.lang.Object",
	"java.util.Comparator",
	_FilePane$DirectoriesFirstComparatorWrapper_FieldInfo_,
	_FilePane$DirectoriesFirstComparatorWrapper_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/io/File;>;",
	nullptr,
	_FilePane$DirectoriesFirstComparatorWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$DirectoriesFirstComparatorWrapper($Class* clazz) {
	return $of($alloc(FilePane$DirectoriesFirstComparatorWrapper));
}

void FilePane$DirectoriesFirstComparatorWrapper::init$($FilePane* this$0, int32_t column, $Comparator* comparator) {
	$set(this, this$0, this$0);
	this->column = column;
	$set(this, comparator, comparator);
}

int32_t FilePane$DirectoriesFirstComparatorWrapper::compare($File* f1, $File* f2) {
	$useLocalCurrentObjectStackCache();
	if (f1 != nullptr && f2 != nullptr) {
		bool traversable1 = $nc($(this->this$0->getFileChooser()))->isTraversable(f1);
		bool traversable2 = $nc($(this->this$0->getFileChooser()))->isTraversable(f2);
		if (traversable1 && !traversable2) {
			return -1;
		}
		if (!traversable1 && traversable2) {
			return 1;
		}
	}
	if ($nc($nc($($nc(this->this$0->detailsTableModel)->getColumns()))->get(this->column))->isCompareByColumn()) {
		$var($Object, var$0, $nc($(this->this$0->getDetailsTableModel()))->getFileColumnValue(f1, this->column));
		return $nc(this->comparator)->compare(var$0, $($nc($(this->this$0->getDetailsTableModel()))->getFileColumnValue(f2, this->column)));
	}
	return $nc(this->comparator)->compare(f1, f2);
}

int32_t FilePane$DirectoriesFirstComparatorWrapper::compare(Object$* f1, Object$* f2) {
	return this->compare($cast($File, f1), $cast($File, f2));
}

FilePane$DirectoriesFirstComparatorWrapper::FilePane$DirectoriesFirstComparatorWrapper() {
}

$Class* FilePane$DirectoriesFirstComparatorWrapper::load$($String* name, bool initialize) {
	$loadClass(FilePane$DirectoriesFirstComparatorWrapper, name, initialize, &_FilePane$DirectoriesFirstComparatorWrapper_ClassInfo_, allocate$FilePane$DirectoriesFirstComparatorWrapper);
	return class$;
}

$Class* FilePane$DirectoriesFirstComparatorWrapper::class$ = nullptr;

	} // swing
} // sun