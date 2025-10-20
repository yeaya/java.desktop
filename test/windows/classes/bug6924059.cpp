#include <bug6924059.h>

#include <bug6924059$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $bug6924059$1 = ::bug6924059$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$FieldInfo _bug6924059_FieldInfo_[] = {
	{"isMethodCalled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug6924059, isMethodCalled)},
	{}
};

$MethodInfo _bug6924059_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6924059::*)()>(&bug6924059::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6924059::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6924059_InnerClassesInfo_[] = {
	{"bug6924059$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6924059_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6924059",
	"java.lang.Object",
	nullptr,
	_bug6924059_FieldInfo_,
	_bug6924059_MethodInfo_,
	nullptr,
	nullptr,
	_bug6924059_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6924059$1,bug6924059$1$1"
};

$Object* allocate$bug6924059($Class* clazz) {
	return $of($alloc(bug6924059));
}

bool bug6924059::isMethodCalled = false;

void bug6924059::init$() {
}

void bug6924059::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($SynthLookAndFeel)));
	$SwingUtilities::invokeAndWait($$new($bug6924059$1));
}

bug6924059::bug6924059() {
}

$Class* bug6924059::load$($String* name, bool initialize) {
	$loadClass(bug6924059, name, initialize, &_bug6924059_ClassInfo_, allocate$bug6924059);
	return class$;
}

$Class* bug6924059::class$ = nullptr;