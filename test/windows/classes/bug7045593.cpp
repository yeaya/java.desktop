#include <bug7045593.h>

#include <bug7045593$1.h>
#include <bug7045593$2.h>
#include <java/awt/Robot.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug7045593$1 = ::bug7045593$1;
using $bug7045593$2 = ::bug7045593$2;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug7045593_FieldInfo_[] = {
	{"jtf", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7045593, jtf)},
	{}
};

$MethodInfo _bug7045593_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7045593::*)()>(&bug7045593::init$))},
	{"assertEquals", "(II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t)>(&bug7045593::assertEquals))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7045593::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7045593_InnerClassesInfo_[] = {
	{"bug7045593$2", nullptr, nullptr, 0},
	{"bug7045593$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7045593_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7045593",
	"java.lang.Object",
	nullptr,
	_bug7045593_FieldInfo_,
	_bug7045593_MethodInfo_,
	nullptr,
	nullptr,
	_bug7045593_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7045593$2,bug7045593$1"
};

$Object* allocate$bug7045593($Class* clazz) {
	return $of($alloc(bug7045593));
}

$volatile($JTextField*) bug7045593::jtf = nullptr;

void bug7045593::init$() {
}

void bug7045593::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait($$new($bug7045593$1));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7045593$2));
}

void bug7045593::assertEquals(int32_t i1, int32_t i2) {
	$useLocalCurrentObjectStackCache();
	if (i1 != i2) {
		$throwNew($RuntimeException, $$str({"Test failed, "_s, $$str(i1), " != "_s, $$str(i2)}));
	}
}

bug7045593::bug7045593() {
}

$Class* bug7045593::load$($String* name, bool initialize) {
	$loadClass(bug7045593, name, initialize, &_bug7045593_ClassInfo_, allocate$bug7045593);
	return class$;
}

$Class* bug7045593::class$ = nullptr;