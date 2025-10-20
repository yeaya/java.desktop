#include <bug6923305.h>

#include <bug6923305$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
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

using $bug6923305$1 = ::bug6923305$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$MethodInfo _bug6923305_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6923305::*)()>(&bug6923305::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6923305::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6923305_InnerClassesInfo_[] = {
	{"bug6923305$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6923305_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6923305",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6923305_MethodInfo_,
	nullptr,
	nullptr,
	_bug6923305_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6923305$1,bug6923305$1$1"
};

$Object* allocate$bug6923305($Class* clazz) {
	return $of($alloc(bug6923305));
}

void bug6923305::init$() {
}

void bug6923305::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($SynthLookAndFeel)));
	$SwingUtilities::invokeAndWait($$new($bug6923305$1));
}

bug6923305::bug6923305() {
}

$Class* bug6923305::load$($String* name, bool initialize) {
	$loadClass(bug6923305, name, initialize, &_bug6923305_ClassInfo_, allocate$bug6923305);
	return class$;
}

$Class* bug6923305::class$ = nullptr;