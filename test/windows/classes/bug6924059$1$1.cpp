#include <bug6924059$1$1.h>

#include <bug6924059$1.h>
#include <bug6924059.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/synth/SynthScrollBarUI.h>
#include <jcpp.h>

using $bug6924059 = ::bug6924059;
using $bug6924059$1 = ::bug6924059$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthScrollBarUI = ::javax::swing::plaf::synth::SynthScrollBarUI;

$FieldInfo _bug6924059$1$1_FieldInfo_[] = {
	{"this$0", "Lbug6924059$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6924059$1$1, this$0)},
	{}
};

$MethodInfo _bug6924059$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug6924059$1;)V", nullptr, 0, $method(static_cast<void(bug6924059$1$1::*)($bug6924059$1*)>(&bug6924059$1$1::init$))},
	{"configureScrollBarColors", "()V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _bug6924059$1$1_EnclosingMethodInfo_ = {
	"bug6924059$1",
	"run",
	"()V"
};

$InnerClassInfo _bug6924059$1$1_InnerClassesInfo_[] = {
	{"bug6924059$1", nullptr, nullptr, 0},
	{"bug6924059$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6924059$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6924059$1$1",
	"javax.swing.plaf.synth.SynthScrollBarUI",
	nullptr,
	_bug6924059$1$1_FieldInfo_,
	_bug6924059$1$1_MethodInfo_,
	nullptr,
	&_bug6924059$1$1_EnclosingMethodInfo_,
	_bug6924059$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6924059"
};

$Object* allocate$bug6924059$1$1($Class* clazz) {
	return $of($alloc(bug6924059$1$1));
}

void bug6924059$1$1::init$($bug6924059$1* this$0) {
	$set(this, this$0, this$0);
	$SynthScrollBarUI::init$();
}

void bug6924059$1$1::configureScrollBarColors() {
	$SynthScrollBarUI::configureScrollBarColors();
	$init($bug6924059);
	$bug6924059::isMethodCalled = true;
}

bug6924059$1$1::bug6924059$1$1() {
}

$Class* bug6924059$1$1::load$($String* name, bool initialize) {
	$loadClass(bug6924059$1$1, name, initialize, &_bug6924059$1$1_ClassInfo_, allocate$bug6924059$1$1);
	return class$;
}

$Class* bug6924059$1$1::class$ = nullptr;