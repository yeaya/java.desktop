#include <bug6894632$1.h>

#include <bug6894632.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/RowSorter$SortKey.h>
#include <javax/swing/SortOrder.h>
#include <jcpp.h>

#undef UNSORTED

using $bug6894632 = ::bug6894632;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $RowSorter$SortKey = ::javax::swing::RowSorter$SortKey;
using $SortOrder = ::javax::swing::SortOrder;

$MethodInfo _bug6894632$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6894632$1::*)()>(&bug6894632$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6894632$1_EnclosingMethodInfo_ = {
	"bug6894632",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6894632$1_InnerClassesInfo_[] = {
	{"bug6894632$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6894632$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6894632$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6894632$1_MethodInfo_,
	nullptr,
	&_bug6894632$1_EnclosingMethodInfo_,
	_bug6894632$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6894632"
};

$Object* allocate$bug6894632$1($Class* clazz) {
	return $of($alloc(bug6894632$1));
}

void bug6894632$1::init$() {
}

void bug6894632$1::run() {
	$bug6894632::test($$new($ArrayList));
	$var($List, sortKeys, $new($ArrayList));
	$init($SortOrder);
	sortKeys->add(0, $$new($RowSorter$SortKey, 0, $SortOrder::UNSORTED));
	$bug6894632::test(sortKeys);
}

bug6894632$1::bug6894632$1() {
}

$Class* bug6894632$1::load$($String* name, bool initialize) {
	$loadClass(bug6894632$1, name, initialize, &_bug6894632$1_ClassInfo_, allocate$bug6894632$1);
	return class$;
}

$Class* bug6894632$1::class$ = nullptr;