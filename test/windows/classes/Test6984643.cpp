#include <Test6984643.h>

#include <Test6984643$1.h>
#include <Test6984643$2.h>
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
#include <jcpp.h>

using $Test6984643$1 = ::Test6984643$1;
using $Test6984643$2 = ::Test6984643$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;

$MethodInfo _Test6984643_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6984643::*)()>(&Test6984643::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6984643::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Test6984643_InnerClassesInfo_[] = {
	{"Test6984643$2", nullptr, nullptr, 0},
	{"Test6984643$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6984643_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6984643",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test6984643_MethodInfo_,
	nullptr,
	nullptr,
	_Test6984643_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test6984643$2,Test6984643$1"
};

$Object* allocate$Test6984643($Class* clazz) {
	return $of($alloc(Test6984643));
}

void Test6984643::init$() {
}

void Test6984643::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($Test6984643$1)));
	$SwingUtilities::invokeAndWait($$new($Test6984643$2));
}

Test6984643::Test6984643() {
}

$Class* Test6984643::load$($String* name, bool initialize) {
	$loadClass(Test6984643, name, initialize, &_Test6984643_ClassInfo_, allocate$Test6984643);
	return class$;
}

$Class* Test6984643::class$ = nullptr;