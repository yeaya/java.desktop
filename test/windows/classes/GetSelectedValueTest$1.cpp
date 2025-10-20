#include <GetSelectedValueTest$1.h>

#include <GetSelectedValueTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION

using $GetSelectedValueTest = ::GetSelectedValueTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

$MethodInfo _GetSelectedValueTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GetSelectedValueTest$1::*)()>(&GetSelectedValueTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GetSelectedValueTest$1_EnclosingMethodInfo_ = {
	"GetSelectedValueTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _GetSelectedValueTest$1_InnerClassesInfo_[] = {
	{"GetSelectedValueTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetSelectedValueTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"GetSelectedValueTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_GetSelectedValueTest$1_MethodInfo_,
	nullptr,
	&_GetSelectedValueTest$1_EnclosingMethodInfo_,
	_GetSelectedValueTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetSelectedValueTest"
};

$Object* allocate$GetSelectedValueTest$1($Class* clazz) {
	return $of($alloc(GetSelectedValueTest$1));
}

void GetSelectedValueTest$1::init$() {
}

void GetSelectedValueTest$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($DefaultListModel, dlm, $new($DefaultListModel));
	$var($JList, list, $new($JList, static_cast<$ListModel*>(dlm)));
	list->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	dlm->addElement("1"_s);
	dlm->addElement("2"_s);
	list->setSelectionInterval(0, 2);
	$GetSelectedValueTest::checkSelectedIndex(list, "1"_s);
	list->setSelectionInterval(4, 5);
	$GetSelectedValueTest::checkSelectedIndex(list, nullptr);
}

GetSelectedValueTest$1::GetSelectedValueTest$1() {
}

$Class* GetSelectedValueTest$1::load$($String* name, bool initialize) {
	$loadClass(GetSelectedValueTest$1, name, initialize, &_GetSelectedValueTest$1_ClassInfo_, allocate$GetSelectedValueTest$1);
	return class$;
}

$Class* GetSelectedValueTest$1::class$ = nullptr;