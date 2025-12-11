#include <com/apple/laf/AquaFileChooserUI$DnDHandler$1.h>

#include <com/apple/laf/AquaFileChooserUI$DnDHandler.h>
#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/io/File.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$DnDHandler = ::com::apple::laf::AquaFileChooserUI$DnDHandler;
using $AquaFileChooserUI$JTableExtension = ::com::apple::laf::AquaFileChooserUI$JTableExtension;
using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$DnDHandler$1_FieldInfo_[] = {
	{"this$1", "Lcom/apple/laf/AquaFileChooserUI$DnDHandler;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DnDHandler$1, this$1)},
	{"val$files", "[Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DnDHandler$1, val$files)},
	{}
};

$MethodInfo _AquaFileChooserUI$DnDHandler$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI$DnDHandler;[Ljava/io/File;)V", "()V", 0, $method(static_cast<void(AquaFileChooserUI$DnDHandler$1::*)($AquaFileChooserUI$DnDHandler*,$FileArray*)>(&AquaFileChooserUI$DnDHandler$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaFileChooserUI$DnDHandler$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFileChooserUI$DnDHandler",
	"dropFiles",
	"([Ljava/io/File;)V"
};

$InnerClassInfo _AquaFileChooserUI$DnDHandler$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$DnDHandler", "com.apple.laf.AquaFileChooserUI", "DnDHandler", 0},
	{"com.apple.laf.AquaFileChooserUI$DnDHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFileChooserUI$DnDHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$DnDHandler$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_AquaFileChooserUI$DnDHandler$1_FieldInfo_,
	_AquaFileChooserUI$DnDHandler$1_MethodInfo_,
	nullptr,
	&_AquaFileChooserUI$DnDHandler$1_EnclosingMethodInfo_,
	_AquaFileChooserUI$DnDHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$DnDHandler$1($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$DnDHandler$1));
}

void AquaFileChooserUI$DnDHandler$1::init$($AquaFileChooserUI$DnDHandler* this$1, $FileArray* val$files) {
	$set(this, this$1, this$1);
	$set(this, val$files, val$files);
}

void AquaFileChooserUI$DnDHandler$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($AquaFileSystemModel, fileSystemModel, $nc(this->this$1->this$0)->getModel());
	{
		$var($FileArray, arr$, this->val$files);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($File, element, arr$->get(i$));
			{
				int32_t index = $nc(fileSystemModel)->indexOf(element);
				if (index >= 0) {
					$nc($nc(this->this$1->this$0)->fFileList)->addRowSelectionInterval(index, index);
				}
			}
		}
	}
}

AquaFileChooserUI$DnDHandler$1::AquaFileChooserUI$DnDHandler$1() {
}

$Class* AquaFileChooserUI$DnDHandler$1::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$DnDHandler$1, name, initialize, &_AquaFileChooserUI$DnDHandler$1_ClassInfo_, allocate$AquaFileChooserUI$DnDHandler$1);
	return class$;
}

$Class* AquaFileChooserUI$DnDHandler$1::class$ = nullptr;

		} // laf
	} // apple
} // com