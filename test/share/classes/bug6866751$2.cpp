#include <bug6866751$2.h>

#include <bug6866751.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug6866751 = ::bug6866751;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JTextArea = ::javax::swing::JTextArea;
using $Caret = ::javax::swing::text::Caret;

$MethodInfo _bug6866751$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6866751$2::*)()>(&bug6866751$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6866751$2_EnclosingMethodInfo_ = {
	"bug6866751",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6866751$2_InnerClassesInfo_[] = {
	{"bug6866751$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6866751$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6866751$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6866751$2_MethodInfo_,
	nullptr,
	&_bug6866751$2_EnclosingMethodInfo_,
	_bug6866751$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6866751"
};

$Object* allocate$bug6866751$2($Class* clazz) {
	return $of($alloc(bug6866751$2));
}

void bug6866751$2::init$() {
}

void bug6866751$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6866751);
	int32_t width = $nc($bug6866751::area)->getWidth();
	double caretX = $nc($($nc($($nc($bug6866751::area)->getCaret()))->getMagicCaretPosition()))->getX();
	if (width < caretX + 1) {
		$throwNew($RuntimeException, $$str({"Width of the area ("_s, $$str(width), ") is less than caret x-position "_s, $$str(caretX), $$str(1)}));
	}
	$nc($bug6866751::area)->putClientProperty("caretWidth"_s, $($Integer::valueOf(10)));
	$nc($bug6866751::frame)->pack();
}

bug6866751$2::bug6866751$2() {
}

$Class* bug6866751$2::load$($String* name, bool initialize) {
	$loadClass(bug6866751$2, name, initialize, &_bug6866751$2_ClassInfo_, allocate$bug6866751$2);
	return class$;
}

$Class* bug6866751$2::class$ = nullptr;