#include <Util$4.h>

#include <Util.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JDialog.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JDialog = ::javax::swing::JDialog;

$FieldInfo _Util$4_FieldInfo_[] = {
	{"val$failString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Util$4, val$failString)},
	{"val$retDialog", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(Util$4, val$retDialog)},
	{}
};

$MethodInfo _Util$4_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JDialog;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(Util$4::*)($JDialog*,$String*)>(&Util$4::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Util$4_EnclosingMethodInfo_ = {
	"Util",
	"createModalDialogWithPassFailButtons",
	"(Ljava/lang/String;)Ljavax/swing/JDialog;"
};

$InnerClassInfo _Util$4_InnerClassesInfo_[] = {
	{"Util$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Util$4_ClassInfo_ = {
	$ACC_SUPER,
	"Util$4",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_Util$4_FieldInfo_,
	_Util$4_MethodInfo_,
	nullptr,
	&_Util$4_EnclosingMethodInfo_,
	_Util$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Util"
};

$Object* allocate$Util$4($Class* clazz) {
	return $of($alloc(Util$4));
}

void Util$4::init$($JDialog* val$retDialog, $String* val$failString) {
	$set(this, val$retDialog, val$retDialog);
	$set(this, val$failString, val$failString);
}

void Util$4::actionPerformed($ActionEvent* ae) {
	$nc(this->val$retDialog)->dispose();
	$throwNew($RuntimeException, $$str({"Test failed. "_s, this->val$failString}));
}

Util$4::Util$4() {
}

$Class* Util$4::load$($String* name, bool initialize) {
	$loadClass(Util$4, name, initialize, &_Util$4_ClassInfo_, allocate$Util$4);
	return class$;
}

$Class* Util$4::class$ = nullptr;