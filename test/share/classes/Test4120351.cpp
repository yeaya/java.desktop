#include <Test4120351.h>

#include <java/awt/Color.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EtchedBorder.h>
#include <jcpp.h>

#undef BLACK
#undef LOWERED
#undef RAISED
#undef WHITE

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BorderFactory = ::javax::swing::BorderFactory;
using $EtchedBorder = ::javax::swing::border::EtchedBorder;

$MethodInfo _Test4120351_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4120351::*)()>(&Test4120351::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test4120351::main))},
	{}
};

$ClassInfo _Test4120351_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4120351",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test4120351_MethodInfo_
};

$Object* allocate$Test4120351($Class* clazz) {
	return $of($alloc(Test4120351));
}

void Test4120351::init$() {
}

void Test4120351::main($StringArray* args) {
	$BorderFactory::createEtchedBorder($EtchedBorder::RAISED);
	$BorderFactory::createEtchedBorder($EtchedBorder::LOWERED);
	$init($Color);
	$BorderFactory::createEtchedBorder($EtchedBorder::RAISED, $Color::BLACK, $Color::WHITE);
	$BorderFactory::createEtchedBorder($EtchedBorder::LOWERED, $Color::WHITE, $Color::BLACK);
}

Test4120351::Test4120351() {
}

$Class* Test4120351::load$($String* name, bool initialize) {
	$loadClass(Test4120351, name, initialize, &_Test4120351_ClassInfo_, allocate$Test4120351);
	return class$;
}

$Class* Test4120351::class$ = nullptr;