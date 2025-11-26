#include <javax/swing/plaf/basic/BasicFileChooserUI$ChangeToParentDirectoryAction.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef ACTION_CHANGE_TO_PARENT_DIRECTORY
#undef ACTION_COMMAND_KEY

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JFileChooser = ::javax::swing::JFileChooser;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $FilePane = ::sun::swing::FilePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicFileChooserUI$ChangeToParentDirectoryAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$ChangeToParentDirectoryAction, this$0)},
	{}
};

$MethodInfo _BasicFileChooserUI$ChangeToParentDirectoryAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicFileChooserUI$ChangeToParentDirectoryAction::*)($BasicFileChooserUI*)>(&BasicFileChooserUI$ChangeToParentDirectoryAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicFileChooserUI$ChangeToParentDirectoryAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$ChangeToParentDirectoryAction", "javax.swing.plaf.basic.BasicFileChooserUI", "ChangeToParentDirectoryAction", $PROTECTED},
	{}
};

$ClassInfo _BasicFileChooserUI$ChangeToParentDirectoryAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI$ChangeToParentDirectoryAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicFileChooserUI$ChangeToParentDirectoryAction_FieldInfo_,
	_BasicFileChooserUI$ChangeToParentDirectoryAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicFileChooserUI$ChangeToParentDirectoryAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI"
};

$Object* allocate$BasicFileChooserUI$ChangeToParentDirectoryAction($Class* clazz) {
	return $of($alloc(BasicFileChooserUI$ChangeToParentDirectoryAction));
}

void BasicFileChooserUI$ChangeToParentDirectoryAction::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$("Go Up"_s);
	$init($Action);
	$init($FilePane);
	putValue($Action::ACTION_COMMAND_KEY, $FilePane::ACTION_CHANGE_TO_PARENT_DIRECTORY);
}

void BasicFileChooserUI$ChangeToParentDirectoryAction::actionPerformed($ActionEvent* e) {
	$nc($(this->this$0->getFileChooser()))->changeToParentDirectory();
}

BasicFileChooserUI$ChangeToParentDirectoryAction::BasicFileChooserUI$ChangeToParentDirectoryAction() {
}

$Class* BasicFileChooserUI$ChangeToParentDirectoryAction::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI$ChangeToParentDirectoryAction, name, initialize, &_BasicFileChooserUI$ChangeToParentDirectoryAction_ClassInfo_, allocate$BasicFileChooserUI$ChangeToParentDirectoryAction);
	return class$;
}

$Class* BasicFileChooserUI$ChangeToParentDirectoryAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax