#include <javax/swing/plaf/basic/BasicFileChooserUI$1.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicFileChooserUI$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$1, this$0)},
	{}
};

$MethodInfo _BasicFileChooserUI$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicFileChooserUI$1::*)($BasicFileChooserUI*,$String*)>(&BasicFileChooserUI$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicFileChooserUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicFileChooserUI",
	"createActionMap",
	"()Ljavax/swing/ActionMap;"
};

$InnerClassInfo _BasicFileChooserUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicFileChooserUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI$1",
	"sun.swing.UIAction",
	nullptr,
	_BasicFileChooserUI$1_FieldInfo_,
	_BasicFileChooserUI$1_MethodInfo_,
	nullptr,
	&_BasicFileChooserUI$1_EnclosingMethodInfo_,
	_BasicFileChooserUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI"
};

$Object* allocate$BasicFileChooserUI$1($Class* clazz) {
	return $of($alloc(BasicFileChooserUI$1));
}

void BasicFileChooserUI$1::init$($BasicFileChooserUI* this$0, $String* name) {
	$set(this, this$0, this$0);
	$UIAction::init$(name);
}

void BasicFileChooserUI$1::actionPerformed($ActionEvent* evt) {
	$nc($(this->this$0->getFileChooser()))->rescanCurrentDirectory();
}

BasicFileChooserUI$1::BasicFileChooserUI$1() {
}

$Class* BasicFileChooserUI$1::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI$1, name, initialize, &_BasicFileChooserUI$1_ClassInfo_, allocate$BasicFileChooserUI$1);
	return class$;
}

$Class* BasicFileChooserUI$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax