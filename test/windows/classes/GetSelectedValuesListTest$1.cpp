#include <GetSelectedValuesListTest$1.h>

#include <GetSelectedValuesListTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION

using $GetSelectedValuesListTest = ::GetSelectedValuesListTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

$MethodInfo _GetSelectedValuesListTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GetSelectedValuesListTest$1::*)()>(&GetSelectedValuesListTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GetSelectedValuesListTest$1_EnclosingMethodInfo_ = {
	"GetSelectedValuesListTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _GetSelectedValuesListTest$1_InnerClassesInfo_[] = {
	{"GetSelectedValuesListTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetSelectedValuesListTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"GetSelectedValuesListTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_GetSelectedValuesListTest$1_MethodInfo_,
	nullptr,
	&_GetSelectedValuesListTest$1_EnclosingMethodInfo_,
	_GetSelectedValuesListTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetSelectedValuesListTest"
};

$Object* allocate$GetSelectedValuesListTest$1($Class* clazz) {
	return $of($alloc(GetSelectedValuesListTest$1));
}

void GetSelectedValuesListTest$1::init$() {
}

void GetSelectedValuesListTest$1::run() {
	$var($DefaultListModel, dlm, $new($DefaultListModel));
	$var($JList, list, $new($JList, static_cast<$ListModel*>(dlm)));
	list->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	dlm->addElement("1"_s);
	dlm->addElement("2"_s);
	list->setSelectionInterval(0, 2);
	$GetSelectedValuesListTest::checkSelection(list, $($List::of("1"_s, "2"_s)));
	list->setSelectionInterval(4, 10);
	$GetSelectedValuesListTest::checkSelection(list, $($Collections::emptyList()));
	$nc($(list->getSelectionModel()))->setSelectionInterval(0, 2);
	$GetSelectedValuesListTest::checkSelection(list, $($List::of("1"_s, "2"_s)));
}

GetSelectedValuesListTest$1::GetSelectedValuesListTest$1() {
}

$Class* GetSelectedValuesListTest$1::load$($String* name, bool initialize) {
	$loadClass(GetSelectedValuesListTest$1, name, initialize, &_GetSelectedValuesListTest$1_ClassInfo_, allocate$GetSelectedValuesListTest$1);
	return class$;
}

$Class* GetSelectedValuesListTest$1::class$ = nullptr;