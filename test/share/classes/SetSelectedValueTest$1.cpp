#include <SetSelectedValueTest$1.h>

#include <SetSelectedValueTest.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION

using $SetSelectedValueTest = ::SetSelectedValueTest;
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

$MethodInfo _SetSelectedValueTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SetSelectedValueTest$1::*)()>(&SetSelectedValueTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SetSelectedValueTest$1_EnclosingMethodInfo_ = {
	"SetSelectedValueTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _SetSelectedValueTest$1_InnerClassesInfo_[] = {
	{"SetSelectedValueTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SetSelectedValueTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"SetSelectedValueTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_SetSelectedValueTest$1_MethodInfo_,
	nullptr,
	&_SetSelectedValueTest$1_EnclosingMethodInfo_,
	_SetSelectedValueTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SetSelectedValueTest"
};

$Object* allocate$SetSelectedValueTest$1($Class* clazz) {
	return $of($alloc(SetSelectedValueTest$1));
}

void SetSelectedValueTest$1::init$() {
}

void SetSelectedValueTest$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($DefaultListModel, dlm, $new($DefaultListModel));
	$var($JList, list, $new($JList, static_cast<$ListModel*>(dlm)));
	list->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	dlm->addElement("1"_s);
	dlm->addElement("2"_s);
	list->setSelectionInterval(0, 1);
	$SetSelectedValueTest::checkSelectionByList(list, $($List::of("1"_s, "2"_s)));
	list->setSelectedValue(nullptr, true);
	$SetSelectedValueTest::checkSelectionByList(list, $($Collections::emptyList()));
	list->setSelectionInterval(0, 1);
	$SetSelectedValueTest::checkSelectionByList(list, $($List::of("1"_s, "2"_s)));
}

SetSelectedValueTest$1::SetSelectedValueTest$1() {
}

$Class* SetSelectedValueTest$1::load$($String* name, bool initialize) {
	$loadClass(SetSelectedValueTest$1, name, initialize, &_SetSelectedValueTest$1_ClassInfo_, allocate$SetSelectedValueTest$1);
	return class$;
}

$Class* SetSelectedValueTest$1::class$ = nullptr;