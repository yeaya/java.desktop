#include <UIManagerSetLookAndFeelNPETest.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UIManager = ::javax::swing::UIManager;

$MethodInfo _UIManagerSetLookAndFeelNPETest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UIManagerSetLookAndFeelNPETest::*)()>(&UIManagerSetLookAndFeelNPETest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&UIManagerSetLookAndFeelNPETest::main)), "java.lang.ClassNotFoundException,javax.swing.UnsupportedLookAndFeelException,java.lang.InstantiationException,java.lang.IllegalAccessException"},
	{}
};

$ClassInfo _UIManagerSetLookAndFeelNPETest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UIManagerSetLookAndFeelNPETest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_UIManagerSetLookAndFeelNPETest_MethodInfo_
};

$Object* allocate$UIManagerSetLookAndFeelNPETest($Class* clazz) {
	return $of($alloc(UIManagerSetLookAndFeelNPETest));
}

void UIManagerSetLookAndFeelNPETest::init$() {
}

void UIManagerSetLookAndFeelNPETest::main($StringArray* args) {
	bool NPEThrown = false;
	try {
		$UIManager::setLookAndFeel(($String*)nullptr);
	} catch ($NullPointerException&) {
		$var($NullPointerException, e, $catch());
		NPEThrown = true;
	}
	if (!NPEThrown) {
		$throwNew($RuntimeException, "A NullPointerException is expected from setLookAndFeel(String), if the className is null"_s);
	}
}

UIManagerSetLookAndFeelNPETest::UIManagerSetLookAndFeelNPETest() {
}

$Class* UIManagerSetLookAndFeelNPETest::load$($String* name, bool initialize) {
	$loadClass(UIManagerSetLookAndFeelNPETest, name, initialize, &_UIManagerSetLookAndFeelNPETest_ClassInfo_, allocate$UIManagerSetLookAndFeelNPETest);
	return class$;
}

$Class* UIManagerSetLookAndFeelNPETest::class$ = nullptr;