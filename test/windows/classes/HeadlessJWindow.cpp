#include <HeadlessJWindow.h>

#include <java/awt/Frame.h>
#include <java/awt/HeadlessException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JWindow.h>
#include <jcpp.h>

using $Frame = ::java::awt::Frame;
using $HeadlessException = ::java::awt::HeadlessException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JWindow = ::javax::swing::JWindow;

$MethodInfo _HeadlessJWindow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJWindow::*)()>(&HeadlessJWindow::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJWindow::main))},
	{}
};

$ClassInfo _HeadlessJWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJWindow",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJWindow_MethodInfo_
};

$Object* allocate$HeadlessJWindow($Class* clazz) {
	return $of($alloc(HeadlessJWindow));
}

void HeadlessJWindow::init$() {
}

void HeadlessJWindow::main($StringArray* args) {
	bool exceptions = false;
	$var($JWindow, w, nullptr);
	try {
		$assign(w, $new($JWindow));
	} catch ($HeadlessException&) {
		$var($HeadlessException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
	exceptions = false;
	try {
		$assign(w, $new($JWindow, $$new($Frame, "Frame title"_s)));
	} catch ($HeadlessException&) {
		$var($HeadlessException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
}

HeadlessJWindow::HeadlessJWindow() {
}

$Class* HeadlessJWindow::load$($String* name, bool initialize) {
	$loadClass(HeadlessJWindow, name, initialize, &_HeadlessJWindow_ClassInfo_, allocate$HeadlessJWindow);
	return class$;
}

$Class* HeadlessJWindow::class$ = nullptr;