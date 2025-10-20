#include <bug6918861.h>

#include <bug6918861$1.h>
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

using $bug6918861$1 = ::bug6918861$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$MethodInfo _bug6918861_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6918861::*)()>(&bug6918861::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6918861::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6918861_InnerClassesInfo_[] = {
	{"bug6918861$HackedSynthSliderUI", "bug6918861", "HackedSynthSliderUI", $PRIVATE | $STATIC},
	{"bug6918861$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6918861_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6918861",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6918861_MethodInfo_,
	nullptr,
	nullptr,
	_bug6918861_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6918861$HackedSynthSliderUI,bug6918861$1"
};

$Object* allocate$bug6918861($Class* clazz) {
	return $of($alloc(bug6918861));
}

void bug6918861::init$() {
}

void bug6918861::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($SynthLookAndFeel)));
	$SwingUtilities::invokeAndWait($$new($bug6918861$1));
}

bug6918861::bug6918861() {
}

$Class* bug6918861::load$($String* name, bool initialize) {
	$loadClass(bug6918861, name, initialize, &_bug6918861_ClassInfo_, allocate$bug6918861);
	return class$;
}

$Class* bug6918861::class$ = nullptr;