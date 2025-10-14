#include <HeadlessSpinnerListModel.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <javax/swing/SpinnerListModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $SpinnerListModel = ::javax::swing::SpinnerListModel;

$MethodInfo _HeadlessSpinnerListModel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessSpinnerListModel::*)()>(&HeadlessSpinnerListModel::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessSpinnerListModel::main))},
	{}
};

$ClassInfo _HeadlessSpinnerListModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessSpinnerListModel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessSpinnerListModel_MethodInfo_
};

$Object* allocate$HeadlessSpinnerListModel($Class* clazz) {
	return $of($alloc(HeadlessSpinnerListModel));
}

void HeadlessSpinnerListModel::init$() {
}

void HeadlessSpinnerListModel::main($StringArray* args) {
	$var($LinkedList, list, $new($LinkedList));
	list->add("prev"_s);
	list->add("this"_s);
	list->add("next"_s);
	$var($SpinnerListModel, m, nullptr);
	$assign(m, $new($SpinnerListModel, static_cast<$List*>(list)));
	$assign(m, $new($SpinnerListModel, $$new($StringArray, {
		"prev"_s,
		"this"_s,
		"next"_s
	})));
	m->getList();
	m->setList(list);
	m->setValue("next"_s);
	m->getNextValue();
	m->getPreviousValue();
}

HeadlessSpinnerListModel::HeadlessSpinnerListModel() {
}

$Class* HeadlessSpinnerListModel::load$($String* name, bool initialize) {
	$loadClass(HeadlessSpinnerListModel, name, initialize, &_HeadlessSpinnerListModel_ClassInfo_, allocate$HeadlessSpinnerListModel);
	return class$;
}

$Class* HeadlessSpinnerListModel::class$ = nullptr;