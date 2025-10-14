#include <bug8041561$1.h>

#include <bug8041561.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <jcpp.h>

using $bug8041561 = ::bug8041561;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;

$MethodInfo _bug8041561$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8041561$1::*)()>(&bug8041561$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8041561$1_EnclosingMethodInfo_ = {
	"bug8041561",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8041561$1_InnerClassesInfo_[] = {
	{"bug8041561$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8041561$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8041561$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8041561$1_MethodInfo_,
	nullptr,
	&_bug8041561$1_EnclosingMethodInfo_,
	_bug8041561$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8041561"
};

$Object* allocate$bug8041561$1($Class* clazz) {
	return $of($alloc(bug8041561$1));
}

void bug8041561$1::init$() {
}

void bug8041561$1::run() {
	try {
		$MetalLookAndFeel::setCurrentTheme($$new($DefaultMetalTheme));
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
		$bug8041561::createAndShowGUI();
	} catch ($UnsupportedLookAndFeelException&) {
		$var($UnsupportedLookAndFeelException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

bug8041561$1::bug8041561$1() {
}

$Class* bug8041561$1::load$($String* name, bool initialize) {
	$loadClass(bug8041561$1, name, initialize, &_bug8041561$1_ClassInfo_, allocate$bug8041561$1);
	return class$;
}

$Class* bug8041561$1::class$ = nullptr;