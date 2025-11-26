#include <GetSelectedValuesListTest.h>

#include <GetSelectedValuesListTest$1.h>
#include <java/lang/Runnable.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/swing/JList.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $GetSelectedValuesListTest$1 = ::GetSelectedValuesListTest$1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $JList = ::javax::swing::JList;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _GetSelectedValuesListTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetSelectedValuesListTest::*)()>(&GetSelectedValuesListTest::init$))},
	{"checkSelection", "(Ljavax/swing/JList;Ljava/util/List;)V", "(Ljavax/swing/JList;Ljava/util/List<Ljava/lang/String;>;)V", $STATIC, $method(static_cast<void(*)($JList*,$List*)>(&GetSelectedValuesListTest::checkSelection)), "java.lang.RuntimeException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetSelectedValuesListTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _GetSelectedValuesListTest_InnerClassesInfo_[] = {
	{"GetSelectedValuesListTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetSelectedValuesListTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetSelectedValuesListTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetSelectedValuesListTest_MethodInfo_,
	nullptr,
	nullptr,
	_GetSelectedValuesListTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GetSelectedValuesListTest$1"
};

$Object* allocate$GetSelectedValuesListTest($Class* clazz) {
	return $of($alloc(GetSelectedValuesListTest));
}

void GetSelectedValuesListTest::init$() {
}

void GetSelectedValuesListTest::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($GetSelectedValuesListTest$1));
}

void GetSelectedValuesListTest::checkSelection($JList* list, $List* selectionList) {
	$useLocalCurrentObjectStackCache();
	$var($List, listSelection, $nc(list)->getSelectedValuesList());
	if (!$nc(listSelection)->equals(selectionList)) {
		$nc($System::out)->println($$str({"Expected: "_s, selectionList}));
		$nc($System::out)->println($$str({"Actual: "_s, listSelection}));
		$throwNew($RuntimeException, "Wrong selection from getSelectedValuesList"_s);
	}
	$var($ObjectArray, arraySelection, list->getSelectedValues());
	if (!$Arrays::equals(arraySelection, $($nc(selectionList)->toArray()))) {
		$nc($System::out)->println($$str({"Expected: "_s, selectionList}));
		$nc($System::out)->println($$str({"Actual: "_s, $($Arrays::asList(arraySelection))}));
		$throwNew($RuntimeException, "Wrong selection from getSelectedValues"_s);
	}
}

GetSelectedValuesListTest::GetSelectedValuesListTest() {
}

$Class* GetSelectedValuesListTest::load$($String* name, bool initialize) {
	$loadClass(GetSelectedValuesListTest, name, initialize, &_GetSelectedValuesListTest_ClassInfo_, allocate$GetSelectedValuesListTest);
	return class$;
}

$Class* GetSelectedValuesListTest::class$ = nullptr;