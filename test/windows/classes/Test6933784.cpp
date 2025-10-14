#include <Test6933784.h>

#include <Test6933784$1.h>
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
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $Test6933784$1 = ::Test6933784$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$MethodInfo _Test6933784_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6933784::*)()>(&Test6933784::init$))},
	{"checkImages", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Test6933784::checkImages)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6933784::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Test6933784_InnerClassesInfo_[] = {
	{"Test6933784$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6933784_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6933784",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test6933784_MethodInfo_,
	nullptr,
	nullptr,
	_Test6933784_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test6933784$1"
};

$Object* allocate$Test6933784($Class* clazz) {
	return $of($alloc(Test6933784));
}

void Test6933784::init$() {
}

void Test6933784::main($StringArray* args) {
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($SynthLookAndFeel)));
	checkImages();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($NimbusLookAndFeel)));
	checkImages();
}

void Test6933784::checkImages() {
	$SwingUtilities::invokeAndWait($$new($Test6933784$1));
}

Test6933784::Test6933784() {
}

$Class* Test6933784::load$($String* name, bool initialize) {
	$loadClass(Test6933784, name, initialize, &_Test6933784_ClassInfo_, allocate$Test6933784);
	return class$;
}

$Class* Test6933784::class$ = nullptr;