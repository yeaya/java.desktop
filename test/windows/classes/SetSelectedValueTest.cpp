#include <SetSelectedValueTest.h>

#include <SetSelectedValueTest$1.h>
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
#include <java/util/List.h>
#include <javax/swing/JList.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $SetSelectedValueTest$1 = ::SetSelectedValueTest$1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;
using $JList = ::javax::swing::JList;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _SetSelectedValueTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SetSelectedValueTest::*)()>(&SetSelectedValueTest::init$))},
	{"checkSelectionByList", "(Ljavax/swing/JList;Ljava/util/List;)V", "(Ljavax/swing/JList;Ljava/util/List<Ljava/lang/String;>;)V", $STATIC, $method(static_cast<void(*)($JList*,$List*)>(&SetSelectedValueTest::checkSelectionByList)), "java.lang.RuntimeException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SetSelectedValueTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _SetSelectedValueTest_InnerClassesInfo_[] = {
	{"SetSelectedValueTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SetSelectedValueTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SetSelectedValueTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SetSelectedValueTest_MethodInfo_,
	nullptr,
	nullptr,
	_SetSelectedValueTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SetSelectedValueTest$1"
};

$Object* allocate$SetSelectedValueTest($Class* clazz) {
	return $of($alloc(SetSelectedValueTest));
}

void SetSelectedValueTest::init$() {
}

void SetSelectedValueTest::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($SetSelectedValueTest$1));
}

void SetSelectedValueTest::checkSelectionByList($JList* list, $List* selectionList) {
	$useLocalCurrentObjectStackCache();
	$var($List, listSelection, $nc(list)->getSelectedValuesList());
	if (!$nc(listSelection)->equals(selectionList)) {
		$init($System);
		$nc($System::out)->println($$str({"Expected: "_s, selectionList}));
		$nc($System::out)->println($$str({"Actual: "_s, listSelection}));
		$throwNew($RuntimeException, "Wrong selection"_s);
	}
}

SetSelectedValueTest::SetSelectedValueTest() {
}

$Class* SetSelectedValueTest::load$($String* name, bool initialize) {
	$loadClass(SetSelectedValueTest, name, initialize, &_SetSelectedValueTest_ClassInfo_, allocate$SetSelectedValueTest);
	return class$;
}

$Class* SetSelectedValueTest::class$ = nullptr;