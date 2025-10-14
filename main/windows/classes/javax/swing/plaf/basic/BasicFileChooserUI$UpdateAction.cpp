#include <javax/swing/plaf/basic/BasicFileChooserUI$UpdateAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicFileChooserUI$UpdateAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$UpdateAction, this$0)},
	{}
};

$MethodInfo _BasicFileChooserUI$UpdateAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicFileChooserUI$UpdateAction::*)($BasicFileChooserUI*)>(&BasicFileChooserUI$UpdateAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicFileChooserUI$UpdateAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$UpdateAction", "javax.swing.plaf.basic.BasicFileChooserUI", "UpdateAction", $PROTECTED},
	{}
};

$ClassInfo _BasicFileChooserUI$UpdateAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI$UpdateAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicFileChooserUI$UpdateAction_FieldInfo_,
	_BasicFileChooserUI$UpdateAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicFileChooserUI$UpdateAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI"
};

$Object* allocate$BasicFileChooserUI$UpdateAction($Class* clazz) {
	return $of($alloc(BasicFileChooserUI$UpdateAction));
}

void BasicFileChooserUI$UpdateAction::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicFileChooserUI$UpdateAction::actionPerformed($ActionEvent* e) {
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	$nc(fc)->setCurrentDirectory($($nc($(fc->getFileSystemView()))->createFileObject($(this->this$0->getDirectoryName()))));
	fc->rescanCurrentDirectory();
}

BasicFileChooserUI$UpdateAction::BasicFileChooserUI$UpdateAction() {
}

$Class* BasicFileChooserUI$UpdateAction::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI$UpdateAction, name, initialize, &_BasicFileChooserUI$UpdateAction_ClassInfo_, allocate$BasicFileChooserUI$UpdateAction);
	return class$;
}

$Class* BasicFileChooserUI$UpdateAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax