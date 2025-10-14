#include <GetSelectedValueTest.h>

#include <GetSelectedValueTest$1.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <javax/swing/JList.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $GetSelectedValueTest$1 = ::GetSelectedValueTest$1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Objects = ::java::util::Objects;
using $JList = ::javax::swing::JList;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _GetSelectedValueTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetSelectedValueTest::*)()>(&GetSelectedValueTest::init$))},
	{"checkSelectedIndex", "(Ljavax/swing/JList;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($JList*,Object$*)>(&GetSelectedValueTest::checkSelectedIndex)), "java.lang.RuntimeException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetSelectedValueTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _GetSelectedValueTest_InnerClassesInfo_[] = {
	{"GetSelectedValueTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetSelectedValueTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetSelectedValueTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetSelectedValueTest_MethodInfo_,
	nullptr,
	nullptr,
	_GetSelectedValueTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GetSelectedValueTest$1"
};

$Object* allocate$GetSelectedValueTest($Class* clazz) {
	return $of($alloc(GetSelectedValueTest));
}

void GetSelectedValueTest::init$() {
}

void GetSelectedValueTest::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($GetSelectedValueTest$1));
}

void GetSelectedValueTest::checkSelectedIndex($JList* list, Object$* value) {
	$var($Object, selectedObject, $nc(list)->getSelectedValue());
	if (!$Objects::equals(value, selectedObject)) {
		$init($System);
		$nc($System::out)->println($$str({"Expected: "_s, value}));
		$nc($System::out)->println($$str({"Actual: "_s, selectedObject}));
		$throwNew($RuntimeException, "Wrong selection"_s);
	}
}

GetSelectedValueTest::GetSelectedValueTest() {
}

$Class* GetSelectedValueTest::load$($String* name, bool initialize) {
	$loadClass(GetSelectedValueTest, name, initialize, &_GetSelectedValueTest_ClassInfo_, allocate$GetSelectedValueTest);
	return class$;
}

$Class* GetSelectedValueTest::class$ = nullptr;