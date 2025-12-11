#include <javax/swing/plaf/basic/BasicToolBarUI$1ToolBarDialog.h>

#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$1ToolBarDialog$1.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDialog = ::javax::swing::JDialog;
using $JRootPane = ::javax::swing::JRootPane;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$1ToolBarDialog$1 = ::javax::swing::plaf::basic::BasicToolBarUI$1ToolBarDialog$1;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToolBarUI$1ToolBarDialog_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$1ToolBarDialog, this$0)},
	{}
};

$MethodInfo _BasicToolBarUI$1ToolBarDialog_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;Ljava/awt/Frame;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(BasicToolBarUI$1ToolBarDialog::*)($BasicToolBarUI*,$Frame*,$String*,bool)>(&BasicToolBarUI$1ToolBarDialog::init$))},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;Ljava/awt/Dialog;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(BasicToolBarUI$1ToolBarDialog::*)($BasicToolBarUI*,$Dialog*,$String*,bool)>(&BasicToolBarUI$1ToolBarDialog::init$))},
	{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _BasicToolBarUI$1ToolBarDialog_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicToolBarUI",
	"createFloatingWindow",
	"(Ljavax/swing/JToolBar;)Ljavax/swing/RootPaneContainer;"
};

$InnerClassInfo _BasicToolBarUI$1ToolBarDialog_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog", nullptr, "ToolBarDialog", 0},
	{"javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicToolBarUI$1ToolBarDialog_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog",
	"javax.swing.JDialog",
	nullptr,
	_BasicToolBarUI$1ToolBarDialog_FieldInfo_,
	_BasicToolBarUI$1ToolBarDialog_MethodInfo_,
	nullptr,
	&_BasicToolBarUI$1ToolBarDialog_EnclosingMethodInfo_,
	_BasicToolBarUI$1ToolBarDialog_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolBarUI"
};

$Object* allocate$BasicToolBarUI$1ToolBarDialog($Class* clazz) {
	return $of($alloc(BasicToolBarUI$1ToolBarDialog));
}

void BasicToolBarUI$1ToolBarDialog::init$($BasicToolBarUI* this$0, $Frame* owner, $String* title, bool modal) {
	$set(this, this$0, this$0);
	$JDialog::init$(owner, title, modal);
}

void BasicToolBarUI$1ToolBarDialog::init$($BasicToolBarUI* this$0, $Dialog* owner, $String* title, bool modal) {
	$set(this, this$0, this$0);
	$JDialog::init$(owner, title, modal);
}

$JRootPane* BasicToolBarUI$1ToolBarDialog::createRootPane() {
	$var($JRootPane, rootPane, $new($BasicToolBarUI$1ToolBarDialog$1, this));
	rootPane->setOpaque(true);
	return rootPane;
}

BasicToolBarUI$1ToolBarDialog::BasicToolBarUI$1ToolBarDialog() {
}

$Class* BasicToolBarUI$1ToolBarDialog::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarUI$1ToolBarDialog, name, initialize, &_BasicToolBarUI$1ToolBarDialog_ClassInfo_, allocate$BasicToolBarUI$1ToolBarDialog);
	return class$;
}

$Class* BasicToolBarUI$1ToolBarDialog::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax