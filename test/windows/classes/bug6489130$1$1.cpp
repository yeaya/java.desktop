#include <bug6489130$1$1.h>

#include <bug6489130$1.h>
#include <bug6489130.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $bug6489130 = ::bug6489130;
using $bug6489130$1 = ::bug6489130$1;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFileChooser = ::javax::swing::JFileChooser;

$FieldInfo _bug6489130$1$1_FieldInfo_[] = {
	{"this$1", "Lbug6489130$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6489130$1$1, this$1)},
	{}
};

$MethodInfo _bug6489130$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug6489130$1;)V", nullptr, 0, $method(static_cast<void(bug6489130$1$1::*)($bug6489130$1*)>(&bug6489130$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6489130$1$1_EnclosingMethodInfo_ = {
	"bug6489130$1",
	"actionPerformed",
	"(Ljava/awt/event/ActionEvent;)V"
};

$InnerClassInfo _bug6489130$1$1_InnerClassesInfo_[] = {
	{"bug6489130$1", nullptr, nullptr, 0},
	{"bug6489130$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6489130$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6489130$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6489130$1$1_FieldInfo_,
	_bug6489130$1$1_MethodInfo_,
	nullptr,
	&_bug6489130$1$1_EnclosingMethodInfo_,
	_bug6489130$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6489130"
};

$Object* allocate$bug6489130$1$1($Class* clazz) {
	return $of($alloc(bug6489130$1$1));
}

void bug6489130$1$1::init$($bug6489130$1* this$1) {
	$set(this, this$1, this$1);
}

void bug6489130$1$1::run() {
	$nc($nc(this->this$1->this$0)->chooser)->showOpenDialog(nullptr);
}

bug6489130$1$1::bug6489130$1$1() {
}

$Class* bug6489130$1$1::load$($String* name, bool initialize) {
	$loadClass(bug6489130$1$1, name, initialize, &_bug6489130$1$1_ClassInfo_, allocate$bug6489130$1$1);
	return class$;
}

$Class* bug6489130$1$1::class$ = nullptr;