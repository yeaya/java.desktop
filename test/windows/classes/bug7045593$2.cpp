#include <bug7045593$2.h>

#include <bug7045593.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug7045593 = ::bug7045593;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextField = ::javax::swing::JTextField;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _bug7045593$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7045593$2::*)()>(&bug7045593$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7045593$2_EnclosingMethodInfo_ = {
	"bug7045593",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7045593$2_InnerClassesInfo_[] = {
	{"bug7045593$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7045593$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7045593$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7045593$2_MethodInfo_,
	nullptr,
	&_bug7045593$2_EnclosingMethodInfo_,
	_bug7045593$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7045593"
};

$Object* allocate$bug7045593$2($Class* clazz) {
	return $of($alloc(bug7045593$2));
}

void bug7045593$2::init$() {
}

void bug7045593$2::run() {
	try {
		$init($bug7045593);
		$var($Rectangle, r, $nc($bug7045593::jtf)->modelToView(1));
		int32_t delta = 2;
		for (int32_t x = $nc(r)->x - delta; x < r->x + delta; ++x) {
			$bug7045593::assertEquals($nc($bug7045593::jtf)->viewToModel($$new($Point, x, r->y)), 1);
		}
		$init($System);
		$nc($System::out)->println("Passed."_s);
	} catch ($BadLocationException&) {
		$var($BadLocationException, e, $catch());
		$throwNew($RuntimeException, "Test failed"_s, e);
	}
}

bug7045593$2::bug7045593$2() {
}

$Class* bug7045593$2::load$($String* name, bool initialize) {
	$loadClass(bug7045593$2, name, initialize, &_bug7045593$2_ClassInfo_, allocate$bug7045593$2);
	return class$;
}

$Class* bug7045593$2::class$ = nullptr;