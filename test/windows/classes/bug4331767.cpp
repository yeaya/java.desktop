#include <bug4331767.h>

#include <bug4331767$BrokenLookAndFeel.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JButton.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $bug4331767$BrokenLookAndFeel = ::bug4331767$BrokenLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JButton = ::javax::swing::JButton;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$FieldInfo _bug4331767_FieldInfo_[] = {
	{"passed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug4331767, passed)},
	{}
};

$MethodInfo _bug4331767_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4331767::*)()>(&bug4331767::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4331767::main))},
	{}
};

$InnerClassInfo _bug4331767_InnerClassesInfo_[] = {
	{"bug4331767$BrokenLookAndFeel", "bug4331767", "BrokenLookAndFeel", $STATIC},
	{"bug4331767$BrokenUIDefaults", "bug4331767", "BrokenUIDefaults", $STATIC},
	{}
};

$ClassInfo _bug4331767_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4331767",
	"java.lang.Object",
	nullptr,
	_bug4331767_FieldInfo_,
	_bug4331767_MethodInfo_,
	nullptr,
	nullptr,
	_bug4331767_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4331767$BrokenLookAndFeel,bug4331767$BrokenUIDefaults"
};

$Object* allocate$bug4331767($Class* clazz) {
	return $of($alloc(bug4331767));
}

bool bug4331767::passed = false;

void bug4331767::init$() {
}

void bug4331767::main($StringArray* argv) {
	$init(bug4331767);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($bug4331767$BrokenLookAndFeel)));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($Error, "Failed to set BrokenLookAndFeel, cannot test"_s, e);
	}
	$new($JButton);
	if (!bug4331767::passed) {
		$throwNew($RuntimeException, "Failed: Custom getUIError() not called"_s);
	}
}

void clinit$bug4331767($Class* class$) {
	bug4331767::passed = false;
}

bug4331767::bug4331767() {
}

$Class* bug4331767::load$($String* name, bool initialize) {
	$loadClass(bug4331767, name, initialize, &_bug4331767_ClassInfo_, clinit$bug4331767, allocate$bug4331767);
	return class$;
}

$Class* bug4331767::class$ = nullptr;