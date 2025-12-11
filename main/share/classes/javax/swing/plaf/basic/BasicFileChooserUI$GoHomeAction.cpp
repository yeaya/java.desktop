#include <javax/swing/plaf/basic/BasicFileChooserUI$GoHomeAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
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

$FieldInfo _BasicFileChooserUI$GoHomeAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$GoHomeAction, this$0)},
	{}
};

$MethodInfo _BasicFileChooserUI$GoHomeAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicFileChooserUI$GoHomeAction::*)($BasicFileChooserUI*)>(&BasicFileChooserUI$GoHomeAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicFileChooserUI$GoHomeAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$GoHomeAction", "javax.swing.plaf.basic.BasicFileChooserUI", "GoHomeAction", $PROTECTED},
	{}
};

$ClassInfo _BasicFileChooserUI$GoHomeAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI$GoHomeAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicFileChooserUI$GoHomeAction_FieldInfo_,
	_BasicFileChooserUI$GoHomeAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicFileChooserUI$GoHomeAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI"
};

$Object* allocate$BasicFileChooserUI$GoHomeAction($Class* clazz) {
	return $of($alloc(BasicFileChooserUI$GoHomeAction));
}

void BasicFileChooserUI$GoHomeAction::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("Go Home"_s);
}

void BasicFileChooserUI$GoHomeAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	this->this$0->changeDirectory($($nc($($nc(fc)->getFileSystemView()))->getHomeDirectory()));
}

BasicFileChooserUI$GoHomeAction::BasicFileChooserUI$GoHomeAction() {
}

$Class* BasicFileChooserUI$GoHomeAction::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI$GoHomeAction, name, initialize, &_BasicFileChooserUI$GoHomeAction_ClassInfo_, allocate$BasicFileChooserUI$GoHomeAction);
	return class$;
}

$Class* BasicFileChooserUI$GoHomeAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax