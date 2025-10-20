#include <Test6849805$Minimbus.h>

#include <Test6849805.h>
#include <java/awt/Color.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $Test6849805 = ::Test6849805;
using $Color = ::java::awt::Color;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

$MethodInfo _Test6849805$Minimbus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test6849805$Minimbus::*)()>(&Test6849805$Minimbus::init$))},
	{"test", "(Ljava/awt/Color;Ljava/awt/Color;F)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Test6849805$Minimbus_InnerClassesInfo_[] = {
	{"Test6849805$Minimbus", "Test6849805", "Minimbus", $STATIC},
	{}
};

$ClassInfo _Test6849805$Minimbus_ClassInfo_ = {
	$ACC_SUPER,
	"Test6849805$Minimbus",
	"javax.swing.plaf.nimbus.NimbusLookAndFeel",
	nullptr,
	nullptr,
	_Test6849805$Minimbus_MethodInfo_,
	nullptr,
	nullptr,
	_Test6849805$Minimbus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6849805"
};

$Object* allocate$Test6849805$Minimbus($Class* clazz) {
	return $of($alloc(Test6849805$Minimbus));
}

void Test6849805$Minimbus::init$() {
	$NimbusLookAndFeel::init$();
}

void Test6849805$Minimbus::test($Color* c1, $Color* c2, float f) {
	$useLocalCurrentObjectStackCache();
	$var($Color, r, getDerivedColor(c1, c2, f));
	$var($Color, test, f > 0 ? c2 : c1);
	$init($System);
	$nc($System::out)->printf("Got %s, need %s "_s, $$new($ObjectArray, {
		$of(r),
		$of(test)
	}));
	int32_t var$1 = $nc(r)->getRGB();
	bool var$0 = var$1 == $nc(test)->getRGB();
	if (var$0) {
		int32_t var$2 = r->getAlpha();
		var$0 = var$2 == test->getAlpha();
	}
	if (var$0) {
		$nc($System::out)->println("Ok"_s);
	} else {
		$nc($System::out)->println("FAIL"_s);
		$init($Test6849805);
		$Test6849805::pass = false;
	}
}

Test6849805$Minimbus::Test6849805$Minimbus() {
}

$Class* Test6849805$Minimbus::load$($String* name, bool initialize) {
	$loadClass(Test6849805$Minimbus, name, initialize, &_Test6849805$Minimbus_ClassInfo_, allocate$Test6849805$Minimbus);
	return class$;
}

$Class* Test6849805$Minimbus::class$ = nullptr;