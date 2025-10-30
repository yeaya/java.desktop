#include <sun/swing/FilePane$DetailsTableModel$1.h>

#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <sun/swing/FilePane$DetailsTableModel.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FilePane$DetailsTableModel = ::sun::swing::FilePane$DetailsTableModel;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$DetailsTableModel$1_FieldInfo_[] = {
	{"this$1", "Lsun/swing/FilePane$DetailsTableModel;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableModel$1, this$1)},
	{"val$f2", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableModel$1, val$f2)},
	{"val$chooser", "Ljavax/swing/JFileChooser;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableModel$1, val$chooser)},
	{}
};

$MethodInfo _FilePane$DetailsTableModel$1_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane$DetailsTableModel;Ljavax/swing/JFileChooser;Ljava/io/File;)V", "()V", 0, $method(static_cast<void(FilePane$DetailsTableModel$1::*)($FilePane$DetailsTableModel*,$JFileChooser*,$File*)>(&FilePane$DetailsTableModel$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FilePane$DetailsTableModel$1_EnclosingMethodInfo_ = {
	"sun.swing.FilePane$DetailsTableModel",
	"setValueAt",
	"(Ljava/lang/Object;II)V"
};

$InnerClassInfo _FilePane$DetailsTableModel$1_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$DetailsTableModel", "sun.swing.FilePane", "DetailsTableModel", 0},
	{"sun.swing.FilePane$DetailsTableModel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane$DetailsTableModel$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$DetailsTableModel$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_FilePane$DetailsTableModel$1_FieldInfo_,
	_FilePane$DetailsTableModel$1_MethodInfo_,
	nullptr,
	&_FilePane$DetailsTableModel$1_EnclosingMethodInfo_,
	_FilePane$DetailsTableModel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$DetailsTableModel$1($Class* clazz) {
	return $of($alloc(FilePane$DetailsTableModel$1));
}

void FilePane$DetailsTableModel$1::init$($FilePane$DetailsTableModel* this$1, $JFileChooser* val$chooser, $File* val$f2) {
	$set(this, this$1, this$1);
	$set(this, val$chooser, val$chooser);
	$set(this, val$f2, val$f2);
}

void FilePane$DetailsTableModel$1::run() {
	if ($nc(this->val$chooser)->isMultiSelectionEnabled()) {
		$nc(this->val$chooser)->setSelectedFiles($$new($FileArray, {this->val$f2}));
	} else {
		$nc(this->val$chooser)->setSelectedFile(this->val$f2);
	}
}

FilePane$DetailsTableModel$1::FilePane$DetailsTableModel$1() {
}

$Class* FilePane$DetailsTableModel$1::load$($String* name, bool initialize) {
	$loadClass(FilePane$DetailsTableModel$1, name, initialize, &_FilePane$DetailsTableModel$1_ClassInfo_, allocate$FilePane$DetailsTableModel$1);
	return class$;
}

$Class* FilePane$DetailsTableModel$1::class$ = nullptr;

	} // swing
} // sun