#include <bug6866751$3.h>

#include <bug6866751.h>
#include <java/awt/Point.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug6866751 = ::bug6866751;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JTextArea = ::javax::swing::JTextArea;
using $Caret = ::javax::swing::text::Caret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _bug6866751$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6866751$3::*)()>(&bug6866751$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6866751$3_EnclosingMethodInfo_ = {
	"bug6866751",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6866751$3_InnerClassesInfo_[] = {
	{"bug6866751$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6866751$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6866751$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6866751$3_MethodInfo_,
	nullptr,
	&_bug6866751$3_EnclosingMethodInfo_,
	_bug6866751$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6866751"
};

$Object* allocate$bug6866751$3($Class* clazz) {
	return $of($alloc(bug6866751$3));
}

void bug6866751$3::init$() {
}

void bug6866751$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6866751);
	int32_t width = $nc($bug6866751::area)->getWidth();
	double caretX = $nc($($nc($($nc($bug6866751::area)->getCaret()))->getMagicCaretPosition()))->getX();
	if (width < caretX + 10) {
		$throwNew($RuntimeException, $$str({"Width of the area ("_s, $$str(width), ") is less  than caret x-position "_s, $$str(caretX), $$str(10)}));
	}
}

bug6866751$3::bug6866751$3() {
}

$Class* bug6866751$3::load$($String* name, bool initialize) {
	$loadClass(bug6866751$3, name, initialize, &_bug6866751$3_ClassInfo_, allocate$bug6866751$3);
	return class$;
}

$Class* bug6866751$3::class$ = nullptr;