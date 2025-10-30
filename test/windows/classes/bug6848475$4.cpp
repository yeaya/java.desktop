#include <bug6848475$4.h>

#include <bug6848475.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug6848475 = ::bug6848475;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug6848475$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6848475$4::*)()>(&bug6848475$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6848475$4_EnclosingMethodInfo_ = {
	"bug6848475",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6848475$4_InnerClassesInfo_[] = {
	{"bug6848475$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6848475$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug6848475$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6848475$4_MethodInfo_,
	nullptr,
	&_bug6848475$4_EnclosingMethodInfo_,
	_bug6848475$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6848475"
};

$Object* allocate$bug6848475$4($Class* clazz) {
	return $of($alloc(bug6848475$4));
}

void bug6848475$4::init$() {
}

void bug6848475$4::run() {
	$var($Rectangle, newThumbRect, $bug6848475::getThumbRectField());
	if ($nc(newThumbRect)->x != $bug6848475::thumbRectX) {
		$throwNew($RuntimeException, "Test failed: the thumb was moved"_s);
	}
	$nc($bug6848475::frame)->dispose();
}

bug6848475$4::bug6848475$4() {
}

$Class* bug6848475$4::load$($String* name, bool initialize) {
	$loadClass(bug6848475$4, name, initialize, &_bug6848475$4_ClassInfo_, allocate$bug6848475$4);
	return class$;
}

$Class* bug6848475$4::class$ = nullptr;