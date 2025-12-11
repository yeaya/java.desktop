#include <NimbusGlueTest$1.h>

#include <NimbusGlueTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JToolBar.h>
#include <jcpp.h>

using $NimbusGlueTest = ::NimbusGlueTest;
using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JToolBar = ::javax::swing::JToolBar;

$MethodInfo _NimbusGlueTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NimbusGlueTest$1::*)()>(&NimbusGlueTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NimbusGlueTest$1_EnclosingMethodInfo_ = {
	"NimbusGlueTest",
	"performTest",
	"()V"
};

$InnerClassInfo _NimbusGlueTest$1_InnerClassesInfo_[] = {
	{"NimbusGlueTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NimbusGlueTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"NimbusGlueTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NimbusGlueTest$1_MethodInfo_,
	nullptr,
	&_NimbusGlueTest$1_EnclosingMethodInfo_,
	_NimbusGlueTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NimbusGlueTest"
};

$Object* allocate$NimbusGlueTest$1($Class* clazz) {
	return $of($alloc(NimbusGlueTest$1));
}

void NimbusGlueTest$1::init$() {
}

void NimbusGlueTest$1::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t width = 0;
			{
				$init($NimbusGlueTest);
				$var($ComponentArray, arr$, $nc($NimbusGlueTest::bar)->getComponents());
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Component, comp, arr$->get(i$));
					{
						width += $nc(comp)->getWidth();
					}
				}
			}
			if (width > 600) {
				$init($NimbusGlueTest);
				$assignStatic($NimbusGlueTest::errorMessage, "Test Failed"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init($NimbusGlueTest);
			$nc($NimbusGlueTest::frame)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

NimbusGlueTest$1::NimbusGlueTest$1() {
}

$Class* NimbusGlueTest$1::load$($String* name, bool initialize) {
	$loadClass(NimbusGlueTest$1, name, initialize, &_NimbusGlueTest$1_ClassInfo_, allocate$NimbusGlueTest$1);
	return class$;
}

$Class* NimbusGlueTest$1::class$ = nullptr;