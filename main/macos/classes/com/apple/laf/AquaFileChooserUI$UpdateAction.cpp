#include <com/apple/laf/AquaFileChooserUI$UpdateAction.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$UpdateAction_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$UpdateAction, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$UpdateAction_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaFileChooserUI$UpdateAction::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$UpdateAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$UpdateAction_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$UpdateAction", "com.apple.laf.AquaFileChooserUI", "UpdateAction", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$UpdateAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$UpdateAction",
	"javax.swing.AbstractAction",
	nullptr,
	_AquaFileChooserUI$UpdateAction_FieldInfo_,
	_AquaFileChooserUI$UpdateAction_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$UpdateAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$UpdateAction($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$UpdateAction));
}

void AquaFileChooserUI$UpdateAction::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void AquaFileChooserUI$UpdateAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$nc(fc)->setCurrentDirectory($($nc($(fc->getFileSystemView()))->createFileObject($(this->this$0->getDirectoryName()))));
	fc->rescanCurrentDirectory();
}

AquaFileChooserUI$UpdateAction::AquaFileChooserUI$UpdateAction() {
}

$Class* AquaFileChooserUI$UpdateAction::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$UpdateAction, name, initialize, &_AquaFileChooserUI$UpdateAction_ClassInfo_, allocate$AquaFileChooserUI$UpdateAction);
	return class$;
}

$Class* AquaFileChooserUI$UpdateAction::class$ = nullptr;

		} // laf
	} // apple
} // com