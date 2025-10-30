#include <DefaultRowSorterIOOBEtest$2.h>

#include <DefaultRowSorterIOOBEtest$SorterModelWrapper.h>
#include <DefaultRowSorterIOOBEtest.h>
#include <javax/swing/DefaultRowSorter$ModelWrapper.h>
#include <javax/swing/DefaultRowSorter.h>
#include <jcpp.h>

using $DefaultRowSorterIOOBEtest = ::DefaultRowSorterIOOBEtest;
using $DefaultRowSorterIOOBEtest$SorterModelWrapper = ::DefaultRowSorterIOOBEtest$SorterModelWrapper;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $DefaultRowSorter$ModelWrapper = ::javax::swing::DefaultRowSorter$ModelWrapper;

$MethodInfo _DefaultRowSorterIOOBEtest$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultRowSorterIOOBEtest$2::*)()>(&DefaultRowSorterIOOBEtest$2::init$))},
	{}
};

$EnclosingMethodInfo _DefaultRowSorterIOOBEtest$2_EnclosingMethodInfo_ = {
	"DefaultRowSorterIOOBEtest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _DefaultRowSorterIOOBEtest$2_InnerClassesInfo_[] = {
	{"DefaultRowSorterIOOBEtest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultRowSorterIOOBEtest$2_ClassInfo_ = {
	$ACC_SUPER,
	"DefaultRowSorterIOOBEtest$2",
	"javax.swing.DefaultRowSorter",
	nullptr,
	nullptr,
	_DefaultRowSorterIOOBEtest$2_MethodInfo_,
	"Ljavax/swing/DefaultRowSorter<Ljavax/swing/table/TableModel;Ljava/lang/Integer;>;",
	&_DefaultRowSorterIOOBEtest$2_EnclosingMethodInfo_,
	_DefaultRowSorterIOOBEtest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DefaultRowSorterIOOBEtest"
};

$Object* allocate$DefaultRowSorterIOOBEtest$2($Class* clazz) {
	return $of($alloc(DefaultRowSorterIOOBEtest$2));
}

void DefaultRowSorterIOOBEtest$2::init$() {
	$DefaultRowSorter::init$();
	{
		setModelWrapper($$new($DefaultRowSorterIOOBEtest$SorterModelWrapper));
	}
}

DefaultRowSorterIOOBEtest$2::DefaultRowSorterIOOBEtest$2() {
}

$Class* DefaultRowSorterIOOBEtest$2::load$($String* name, bool initialize) {
	$loadClass(DefaultRowSorterIOOBEtest$2, name, initialize, &_DefaultRowSorterIOOBEtest$2_ClassInfo_, allocate$DefaultRowSorterIOOBEtest$2);
	return class$;
}

$Class* DefaultRowSorterIOOBEtest$2::class$ = nullptr;