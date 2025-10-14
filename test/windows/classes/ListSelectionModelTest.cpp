#include <ListSelectionModelTest.h>

#include <ListSelectionModelTest$1.h>
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
#include <java/util/Arrays.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION
#undef SINGLE_INTERVAL_SELECTION
#undef SINGLE_SELECTION

using $ListSelectionModelTest$1 = ::ListSelectionModelTest$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$MethodInfo _ListSelectionModelTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ListSelectionModelTest::*)()>(&ListSelectionModelTest::init$))},
	{"CreateGUIAndTest", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&ListSelectionModelTest::CreateGUIAndTest)), "java.lang.Exception"},
	{"checkSelection", "(Ljavax/swing/JList;[ILjava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($JList*,$ints*,$String*)>(&ListSelectionModelTest::checkSelection)), "java.lang.RuntimeException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ListSelectionModelTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ListSelectionModelTest_InnerClassesInfo_[] = {
	{"ListSelectionModelTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ListSelectionModelTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ListSelectionModelTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ListSelectionModelTest_MethodInfo_,
	nullptr,
	nullptr,
	_ListSelectionModelTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ListSelectionModelTest$1"
};

$Object* allocate$ListSelectionModelTest($Class* clazz) {
	return $of($alloc(ListSelectionModelTest));
}

void ListSelectionModelTest::init$() {
}

void ListSelectionModelTest::main($StringArray* args) {
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelInfoArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelInfoArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait($$new($ListSelectionModelTest$1, lookAndFeelInfo));
			}
		}
	}
}

void ListSelectionModelTest::CreateGUIAndTest($String* lookAndFeel) {
	$UIManager::setLookAndFeel(lookAndFeel);
	$var($DefaultListModel, listModel, $new($DefaultListModel));
	for (int32_t j = 0; j < 10; ++j) {
		listModel->add(j, $$str({"Item: "_s, $$str(j)}));
	}
	$var($JList, list, $new($JList, static_cast<$ListModel*>(listModel)));
	$var($ListSelectionModel, selectionModel, list->getSelectionModel());
	$nc(selectionModel)->setSelectionMode($ListSelectionModel::SINGLE_INTERVAL_SELECTION);
	selectionModel->setSelectionInterval(0, 1);
	checkSelection(list, $$new($ints, {
		0,
		1
	}), lookAndFeel);
	selectionModel->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	selectionModel->setSelectionInterval(0, 2);
	checkSelection(list, $$new($ints, {
		0,
		1,
		2
	}), lookAndFeel);
	selectionModel->addSelectionInterval(5, 7);
	checkSelection(list, $$new($ints, {
		0,
		1,
		2,
		5,
		6,
		7
	}), lookAndFeel);
	selectionModel->setSelectionMode($ListSelectionModel::SINGLE_INTERVAL_SELECTION);
	checkSelection(list, $$new($ints, {
		0,
		1,
		2
	}), lookAndFeel);
	selectionModel->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
	checkSelection(list, $$new($ints, {0}), lookAndFeel);
	selectionModel->setSelectionMode($ListSelectionModel::SINGLE_INTERVAL_SELECTION);
	selectionModel->addSelectionInterval(4, 5);
	checkSelection(list, $$new($ints, {
		4,
		5
	}), lookAndFeel);
	selectionModel->addSelectionInterval(0, 2);
	checkSelection(list, $$new($ints, {
		0,
		1,
		2
	}), lookAndFeel);
	selectionModel->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	selectionModel->addSelectionInterval(6, 7);
	checkSelection(list, $$new($ints, {
		0,
		1,
		2,
		6,
		7
	}), lookAndFeel);
	$init($System);
	$nc($System::out)->println($$str({"Test passed for "_s, lookAndFeel}));
}

void ListSelectionModelTest::checkSelection($JList* list, $ints* selectionArray, $String* lookAndFeel) {
	$var($ints, listSelection, $nc(list)->getSelectedIndices());
	if ($nc(listSelection)->length != $nc(selectionArray)->length) {
		$init($System);
		$nc($System::out)->println($$str({"Expected: "_s, $($Arrays::toString(selectionArray))}));
		$nc($System::out)->println($$str({"Actual: "_s, $($Arrays::toString(listSelection))}));
		$throwNew($RuntimeException, $$str({"Wrong selection for "_s, lookAndFeel}));
	}
	$Arrays::sort(listSelection);
	$Arrays::sort(selectionArray);
	if (!$Arrays::equals(listSelection, selectionArray)) {
		$init($System);
		$nc($System::out)->println($$str({"Expected: "_s, $($Arrays::toString(selectionArray))}));
		$nc($System::out)->println($$str({"Actual: "_s, $($Arrays::toString(listSelection))}));
		$throwNew($RuntimeException, $$str({"Wrong selection for "_s, lookAndFeel}));
	}
}

ListSelectionModelTest::ListSelectionModelTest() {
}

$Class* ListSelectionModelTest::load$($String* name, bool initialize) {
	$loadClass(ListSelectionModelTest, name, initialize, &_ListSelectionModelTest_ClassInfo_, allocate$ListSelectionModelTest);
	return class$;
}

$Class* ListSelectionModelTest::class$ = nullptr;