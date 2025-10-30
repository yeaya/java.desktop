#include <bug6953396$1$1.h>

#include <bug6953396$1.h>
#include <bug6953396.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/basic/BasicViewportUI.h>
#include <jcpp.h>

using $bug6953396 = ::bug6953396;
using $bug6953396$1 = ::bug6953396$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $BasicViewportUI = ::javax::swing::plaf::basic::BasicViewportUI;

$FieldInfo _bug6953396$1$1_FieldInfo_[] = {
	{"this$0", "Lbug6953396$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6953396$1$1, this$0)},
	{}
};

$MethodInfo _bug6953396$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug6953396$1;)V", nullptr, 0, $method(static_cast<void(bug6953396$1$1::*)($bug6953396$1*)>(&bug6953396$1$1::init$))},
	{"installDefaults", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _bug6953396$1$1_EnclosingMethodInfo_ = {
	"bug6953396$1",
	"run",
	"()V"
};

$InnerClassInfo _bug6953396$1$1_InnerClassesInfo_[] = {
	{"bug6953396$1", nullptr, nullptr, 0},
	{"bug6953396$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6953396$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6953396$1$1",
	"javax.swing.plaf.basic.BasicViewportUI",
	nullptr,
	_bug6953396$1$1_FieldInfo_,
	_bug6953396$1$1_MethodInfo_,
	nullptr,
	&_bug6953396$1$1_EnclosingMethodInfo_,
	_bug6953396$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6953396"
};

$Object* allocate$bug6953396$1$1($Class* clazz) {
	return $of($alloc(bug6953396$1$1));
}

void bug6953396$1$1::init$($bug6953396$1* this$0) {
	$set(this, this$0, this$0);
	$BasicViewportUI::init$();
}

void bug6953396$1$1::installDefaults($JComponent* c) {
	$BasicViewportUI::installDefaults(c);
	$init($bug6953396);
	$bug6953396::flag = true;
}

void bug6953396$1$1::uninstallDefaults($JComponent* c) {
	$BasicViewportUI::uninstallDefaults(c);
	$init($bug6953396);
	$bug6953396::flag = false;
}

bug6953396$1$1::bug6953396$1$1() {
}

$Class* bug6953396$1$1::load$($String* name, bool initialize) {
	$loadClass(bug6953396$1$1, name, initialize, &_bug6953396$1$1_ClassInfo_, allocate$bug6953396$1$1);
	return class$;
}

$Class* bug6953396$1$1::class$ = nullptr;