#include <Test7048204$1.h>

#include <Test7048204.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $Test7048204 = ::Test7048204;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JLabel = ::javax::swing::JLabel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;

$MethodInfo _Test7048204$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test7048204$1::*)()>(&Test7048204$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test7048204$1_EnclosingMethodInfo_ = {
	"Test7048204",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test7048204$1_InnerClassesInfo_[] = {
	{"Test7048204$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test7048204$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test7048204$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test7048204$1_MethodInfo_,
	nullptr,
	&_Test7048204$1_EnclosingMethodInfo_,
	_Test7048204$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test7048204"
};

$Object* allocate$Test7048204$1($Class* clazz) {
	return $of($alloc(Test7048204$1));
}

void Test7048204$1::init$() {
}

void Test7048204$1::run() {
	$useLocalCurrentObjectStackCache();
	$new($JLabel);
	$var($UIDefaults, uid, $UIManager::getDefaults());
	$nc(uid)->putDefaults($$new($ObjectArray, 0));
	uid->put("what.ever"_s, "else"_s);
}

Test7048204$1::Test7048204$1() {
}

$Class* Test7048204$1::load$($String* name, bool initialize) {
	$loadClass(Test7048204$1, name, initialize, &_Test7048204$1_ClassInfo_, allocate$Test7048204$1);
	return class$;
}

$Class* Test7048204$1::class$ = nullptr;