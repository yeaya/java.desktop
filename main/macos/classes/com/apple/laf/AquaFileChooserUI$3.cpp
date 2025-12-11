#include <com/apple/laf/AquaFileChooserUI$3.h>

#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/io/File.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
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

$FieldInfo _AquaFileChooserUI$3_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$3, this$0)},
	{"val$f", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$3, val$f)},
	{}
};

$MethodInfo _AquaFileChooserUI$3_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Ljava/io/File;)V", "()V", 0, $method(static_cast<void(AquaFileChooserUI$3::*)($AquaFileChooserUI*,$File*)>(&AquaFileChooserUI$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaFileChooserUI$3_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFileChooserUI",
	"ensureFileIsVisible",
	"(Ljavax/swing/JFileChooser;Ljava/io/File;)V"
};

$InnerClassInfo _AquaFileChooserUI$3_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFileChooserUI$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_AquaFileChooserUI$3_FieldInfo_,
	_AquaFileChooserUI$3_MethodInfo_,
	nullptr,
	&_AquaFileChooserUI$3_EnclosingMethodInfo_,
	_AquaFileChooserUI$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$3($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$3));
}

void AquaFileChooserUI$3::init$($AquaFileChooserUI* this$0, $File* val$f) {
	$set(this, this$0, this$0);
	$set(this, val$f, val$f);
}

void AquaFileChooserUI$3::run() {
	$nc(this->this$0->fFileList)->requestFocusInWindow();
	$nc(this->this$0->fFileList)->ensureIndexIsVisible($nc($(this->this$0->getModel()))->indexOf(this->val$f));
}

AquaFileChooserUI$3::AquaFileChooserUI$3() {
}

$Class* AquaFileChooserUI$3::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$3, name, initialize, &_AquaFileChooserUI$3_ClassInfo_, allocate$AquaFileChooserUI$3);
	return class$;
}

$Class* AquaFileChooserUI$3::class$ = nullptr;

		} // laf
	} // apple
} // com