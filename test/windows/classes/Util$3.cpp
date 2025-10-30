#include <Util$3.h>

#include <Util.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JDialog.h>
#include <jcpp.h>

using $Util = ::Util;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDialog = ::javax::swing::JDialog;

$FieldInfo _Util$3_FieldInfo_[] = {
	{"val$retDialog", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(Util$3, val$retDialog)},
	{}
};

$MethodInfo _Util$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JDialog;)V", "()V", 0, $method(static_cast<void(Util$3::*)($JDialog*)>(&Util$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Util$3_EnclosingMethodInfo_ = {
	"Util",
	"createModalDialogWithPassFailButtons",
	"(Ljava/lang/String;)Ljavax/swing/JDialog;"
};

$InnerClassInfo _Util$3_InnerClassesInfo_[] = {
	{"Util$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Util$3_ClassInfo_ = {
	$ACC_SUPER,
	"Util$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_Util$3_FieldInfo_,
	_Util$3_MethodInfo_,
	nullptr,
	&_Util$3_EnclosingMethodInfo_,
	_Util$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Util"
};

$Object* allocate$Util$3($Class* clazz) {
	return $of($alloc(Util$3));
}

void Util$3::init$($JDialog* val$retDialog) {
	$set(this, val$retDialog, val$retDialog);
}

void Util$3::actionPerformed($ActionEvent* ae) {
	$nc(this->val$retDialog)->dispose();
}

Util$3::Util$3() {
}

$Class* Util$3::load$($String* name, bool initialize) {
	$loadClass(Util$3, name, initialize, &_Util$3_ClassInfo_, allocate$Util$3);
	return class$;
}

$Class* Util$3::class$ = nullptr;