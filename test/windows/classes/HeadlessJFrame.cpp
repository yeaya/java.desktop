#include <HeadlessJFrame.h>

#include <java/awt/HeadlessException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $HeadlessException = ::java::awt::HeadlessException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _HeadlessJFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJFrame::*)()>(&HeadlessJFrame::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJFrame::main))},
	{}
};

$ClassInfo _HeadlessJFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJFrame",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJFrame_MethodInfo_
};

$Object* allocate$HeadlessJFrame($Class* clazz) {
	return $of($alloc(HeadlessJFrame));
}

void HeadlessJFrame::init$() {
}

void HeadlessJFrame::main($StringArray* args) {
	bool exceptions = false;
	try {
		$var($JFrame, b, $new($JFrame));
	} catch ($HeadlessException&) {
		$var($HeadlessException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
	exceptions = false;
	try {
		$var($JFrame, b, $new($JFrame, "Swingin\' in the window"_s));
	} catch ($HeadlessException&) {
		$var($HeadlessException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
}

HeadlessJFrame::HeadlessJFrame() {
}

$Class* HeadlessJFrame::load$($String* name, bool initialize) {
	$loadClass(HeadlessJFrame, name, initialize, &_HeadlessJFrame_ClassInfo_, allocate$HeadlessJFrame);
	return class$;
}

$Class* HeadlessJFrame::class$ = nullptr;