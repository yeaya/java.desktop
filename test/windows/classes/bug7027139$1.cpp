#include <bug7027139$1.h>

#include <bug7027139$1$1.h>
#include <bug7027139.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $bug7027139 = ::bug7027139;
using $bug7027139$1$1 = ::bug7027139$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTable = ::javax::swing::JTable;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;

$MethodInfo _bug7027139$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7027139$1::*)()>(&bug7027139$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7027139$1_EnclosingMethodInfo_ = {
	"bug7027139",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7027139$1_InnerClassesInfo_[] = {
	{"bug7027139$1", nullptr, nullptr, 0},
	{"bug7027139$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7027139$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7027139$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7027139$1_MethodInfo_,
	nullptr,
	&_bug7027139$1_EnclosingMethodInfo_,
	_bug7027139$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7027139"
};

$Object* allocate$bug7027139$1($Class* clazz) {
	return $of($alloc(bug7027139$1));
}

void bug7027139$1::init$() {
}

void bug7027139$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JTable, orderTable, $new($JTable, $fcast($ObjectArray2, $$new($StringArray2, {
		$$new($StringArray, {
			"Item 1 1"_s,
			"Item 1 2"_s
		}),
		$$new($StringArray, {
			"Item 2 1"_s,
			"Item 2 2"_s
		}),
		$$new($StringArray, {
			"Item 3 1"_s,
			"Item 3 2"_s
		}),
		$$new($StringArray, {
			"Item 4 1"_s,
			"Item 4 2"_s
		})
	})), $$new($StringArray, {
		"Col 1"_s,
		"Col 2"_s
	})));
	$var($ListSelectionModel, selectionModel, orderTable->getSelectionModel());
	$nc(selectionModel)->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	selectionModel->addListSelectionListener($$new($bug7027139$1$1, this));
	orderTable->selectAll();
}

bug7027139$1::bug7027139$1() {
}

$Class* bug7027139$1::load$($String* name, bool initialize) {
	$loadClass(bug7027139$1, name, initialize, &_bug7027139$1_ClassInfo_, allocate$bug7027139$1);
	return class$;
}

$Class* bug7027139$1::class$ = nullptr;