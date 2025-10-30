#include <Test6632810$1.h>

#include <Test6632810.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

using $Test6632810 = ::Test6632810;
using $intArray2 = $Array<int32_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JScrollPane = ::javax::swing::JScrollPane;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;

$MethodInfo _Test6632810$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test6632810$1::*)()>(&Test6632810$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6632810$1_EnclosingMethodInfo_ = {
	"Test6632810",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test6632810$1_InnerClassesInfo_[] = {
	{"Test6632810$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6632810$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test6632810$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test6632810$1_MethodInfo_,
	nullptr,
	&_Test6632810$1_EnclosingMethodInfo_,
	_Test6632810$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6632810"
};

$Object* allocate$Test6632810$1($Class* clazz) {
	return $of($alloc(Test6632810$1));
}

void Test6632810$1::init$() {
}

void Test6632810$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($BasicScrollPaneUI, ui, $new($BasicScrollPaneUI));
	ui->installUI($$new($JScrollPane));
	try {
		ui->getBaseline(nullptr, 1, 1);
		$throwNew($RuntimeException, "getBaseline(null, 1, 1) does not throw NPE"_s);
	} catch ($NullPointerException& e) {
	}
	$var($intArray2, illegelParams, $new($intArray2, {
		$$new($ints, {
			-1,
			1
		}),
		$$new($ints, {
			1,
			-1
		}),
		$$new($ints, {
			-1,
			-1
		})
	}));
	{
		$var($intArray2, arr$, illegelParams);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ints, illegelParam, arr$->get(i$));
			{
				try {
					int32_t width = $nc(illegelParam)->get(0);
					int32_t height = illegelParam->get(1);
					ui->getBaseline($$new($JScrollPane), width, height);
					$throwNew($RuntimeException, $$str({"getBaseline(new JScrollPane(), "_s, $$str(width), ", "_s, $$str(height), ") does not throw IAE"_s}));
				} catch ($IllegalArgumentException& e) {
				}
			}
		}
	}
}

Test6632810$1::Test6632810$1() {
}

$Class* Test6632810$1::load$($String* name, bool initialize) {
	$loadClass(Test6632810$1, name, initialize, &_Test6632810$1_ClassInfo_, allocate$Test6632810$1);
	return class$;
}

$Class* Test6632810$1::class$ = nullptr;