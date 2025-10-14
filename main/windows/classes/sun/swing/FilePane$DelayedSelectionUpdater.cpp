#include <sun/swing/FilePane$DelayedSelectionUpdater.h>

#include <java/awt/Component.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$DetailsTableRowSorter = ::sun::swing::FilePane$DetailsTableRowSorter;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$DelayedSelectionUpdater_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DelayedSelectionUpdater, this$0)},
	{"editFile", "Ljava/io/File;", nullptr, 0, $field(FilePane$DelayedSelectionUpdater, editFile)},
	{}
};

$MethodInfo _FilePane$DelayedSelectionUpdater_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;)V", nullptr, 0, $method(static_cast<void(FilePane$DelayedSelectionUpdater::*)($FilePane*)>(&FilePane$DelayedSelectionUpdater::init$))},
	{"<init>", "(Lsun/swing/FilePane;Ljava/io/File;)V", nullptr, 0, $method(static_cast<void(FilePane$DelayedSelectionUpdater::*)($FilePane*,$File*)>(&FilePane$DelayedSelectionUpdater::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FilePane$DelayedSelectionUpdater_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$DelayedSelectionUpdater", "sun.swing.FilePane", "DelayedSelectionUpdater", $PRIVATE},
	{}
};

$ClassInfo _FilePane$DelayedSelectionUpdater_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$DelayedSelectionUpdater",
	"java.lang.Object",
	"java.lang.Runnable",
	_FilePane$DelayedSelectionUpdater_FieldInfo_,
	_FilePane$DelayedSelectionUpdater_MethodInfo_,
	nullptr,
	nullptr,
	_FilePane$DelayedSelectionUpdater_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$DelayedSelectionUpdater($Class* clazz) {
	return $of($alloc(FilePane$DelayedSelectionUpdater));
}

void FilePane$DelayedSelectionUpdater::init$($FilePane* this$0) {
	FilePane$DelayedSelectionUpdater::init$(this$0, nullptr);
}

void FilePane$DelayedSelectionUpdater::init$($FilePane* this$0, $File* editFile) {
	$set(this, this$0, this$0);
	$set(this, editFile, editFile);
	if (this$0->isShowing()) {
		$SwingUtilities::invokeLater(this);
	}
}

void FilePane$DelayedSelectionUpdater::run() {
	this->this$0->setFileSelected();
	if (this->editFile != nullptr) {
		this->this$0->editFileName($nc($(this->this$0->getRowSorter()))->convertRowIndexToView($nc($(this->this$0->getModel()))->indexOf(this->editFile)));
		$set(this, editFile, nullptr);
	}
}

FilePane$DelayedSelectionUpdater::FilePane$DelayedSelectionUpdater() {
}

$Class* FilePane$DelayedSelectionUpdater::load$($String* name, bool initialize) {
	$loadClass(FilePane$DelayedSelectionUpdater, name, initialize, &_FilePane$DelayedSelectionUpdater_ClassInfo_, allocate$FilePane$DelayedSelectionUpdater);
	return class$;
}

$Class* FilePane$DelayedSelectionUpdater::class$ = nullptr;

	} // swing
} // sun