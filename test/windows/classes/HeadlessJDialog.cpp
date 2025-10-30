#include <HeadlessJDialog.h>

#include <java/awt/Frame.h>
#include <java/awt/HeadlessException.h>
#include <javax/swing/JDialog.h>
#include <jcpp.h>

using $Frame = ::java::awt::Frame;
using $HeadlessException = ::java::awt::HeadlessException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JDialog = ::javax::swing::JDialog;

$MethodInfo _HeadlessJDialog_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJDialog::*)()>(&HeadlessJDialog::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJDialog::main))},
	{}
};

$ClassInfo _HeadlessJDialog_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJDialog",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJDialog_MethodInfo_
};

$Object* allocate$HeadlessJDialog($Class* clazz) {
	return $of($alloc(HeadlessJDialog));
}

void HeadlessJDialog::init$() {
}

void HeadlessJDialog::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	bool exceptions = false;
	$var($JDialog, b, nullptr);
	try {
		$assign(b, $new($JDialog));
	} catch ($HeadlessException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
	exceptions = false;
	try {
		$assign(b, $new($JDialog, $$new($Frame, "Frame title"_s)));
	} catch ($HeadlessException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
	exceptions = false;
	try {
		$assign(b, $new($JDialog, $$new($Frame, "Frame title"_s), true));
	} catch ($HeadlessException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
	exceptions = false;
	try {
		$assign(b, $new($JDialog, $$new($Frame, "Frame title"_s), false));
	} catch ($HeadlessException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
	exceptions = false;
	try {
		$assign(b, $new($JDialog, $$new($Frame, "Frame title"_s), "Dialog title"_s));
	} catch ($HeadlessException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
	exceptions = false;
	try {
		$assign(b, $new($JDialog, $$new($Frame, "Frame title"_s), "Dialog title"_s, true));
	} catch ($HeadlessException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
	exceptions = false;
	try {
		$assign(b, $new($JDialog, $$new($Frame, "Frame title"_s), "Dialog title"_s, false));
	} catch ($HeadlessException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
}

HeadlessJDialog::HeadlessJDialog() {
}

$Class* HeadlessJDialog::load$($String* name, bool initialize) {
	$loadClass(HeadlessJDialog, name, initialize, &_HeadlessJDialog_ClassInfo_, allocate$HeadlessJDialog);
	return class$;
}

$Class* HeadlessJDialog::class$ = nullptr;