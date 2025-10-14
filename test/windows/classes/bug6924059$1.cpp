#include <bug6924059$1.h>

#include <bug6924059$1$1.h>
#include <bug6924059.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <javax/swing/plaf/synth/SynthScrollBarUI.h>
#include <jcpp.h>

using $bug6924059 = ::bug6924059;
using $bug6924059$1$1 = ::bug6924059$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JScrollBar = ::javax::swing::JScrollBar;
using $ScrollBarUI = ::javax::swing::plaf::ScrollBarUI;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $SynthScrollBarUI = ::javax::swing::plaf::synth::SynthScrollBarUI;

$MethodInfo _bug6924059$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6924059$1::*)()>(&bug6924059$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6924059$1_EnclosingMethodInfo_ = {
	"bug6924059",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6924059$1_InnerClassesInfo_[] = {
	{"bug6924059$1", nullptr, nullptr, 0},
	{"bug6924059$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6924059$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6924059$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6924059$1_MethodInfo_,
	nullptr,
	&_bug6924059$1_EnclosingMethodInfo_,
	_bug6924059$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6924059"
};

$Object* allocate$bug6924059$1($Class* clazz) {
	return $of($alloc(bug6924059$1));
}

void bug6924059$1::init$() {
}

void bug6924059$1::run() {
	$$new($JScrollBar)->setUI(static_cast<$ScrollBarUI*>($$new($bug6924059$1$1, this)));
	$init($bug6924059);
	if (!$bug6924059::isMethodCalled) {
		$throwNew($RuntimeException, "The configureScrollBarColors was not called"_s);
	}
}

bug6924059$1::bug6924059$1() {
}

$Class* bug6924059$1::load$($String* name, bool initialize) {
	$loadClass(bug6924059$1, name, initialize, &_bug6924059$1_ClassInfo_, allocate$bug6924059$1);
	return class$;
}

$Class* bug6924059$1::class$ = nullptr;