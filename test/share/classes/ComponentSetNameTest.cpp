#include <ComponentSetNameTest.h>

#include <ComponentSetNameTest$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $ComponentSetNameTest$1 = ::ComponentSetNameTest$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _ComponentSetNameTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ComponentSetNameTest::*)()>(&ComponentSetNameTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ComponentSetNameTest::main)), "java.lang.Exception"},
	{"printTestInfo", "(Ljavax/swing/JComponent;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JComponent*,$String*)>(&ComponentSetNameTest::printTestInfo))},
	{"testSetName", "(Ljavax/swing/JComponent;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JComponent*,$String*)>(&ComponentSetNameTest::testSetName))},
	{}
};

$InnerClassInfo _ComponentSetNameTest_InnerClassesInfo_[] = {
	{"ComponentSetNameTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ComponentSetNameTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ComponentSetNameTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ComponentSetNameTest_MethodInfo_,
	nullptr,
	nullptr,
	_ComponentSetNameTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ComponentSetNameTest$1"
};

$Object* allocate$ComponentSetNameTest($Class* clazz) {
	return $of($alloc(ComponentSetNameTest));
}

void ComponentSetNameTest::init$() {
}

void ComponentSetNameTest::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($ComponentSetNameTest$1));
}

void ComponentSetNameTest::testSetName($JComponent* component, $String* looknFeelClassName) {
	$useLocalCurrentObjectStackCache();
	$var($Color, bg1, $nc(component)->getBackground());
	if (bg1 == nullptr) {
		printTestInfo(component, looknFeelClassName);
		$throwNew($RuntimeException, "background is null"_s);
	}
	component->setName("noname"_s);
	$var($Color, bg2, component->getBackground());
	if (bg2 != bg1) {
		printTestInfo(component, looknFeelClassName);
		$throwNew($RuntimeException, "background changed after setting name"_s);
	}
}

void ComponentSetNameTest::printTestInfo($JComponent* component, $String* looknFeelClassName) {
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->println("Test fails"_s);
	$nc($System::err)->println($$str({"LookAndFeel "_s, looknFeelClassName}));
	$nc($System::err)->println($$str({"JComponent "_s, $nc($of(component))->getClass()}));
}

ComponentSetNameTest::ComponentSetNameTest() {
}

$Class* ComponentSetNameTest::load$($String* name, bool initialize) {
	$loadClass(ComponentSetNameTest, name, initialize, &_ComponentSetNameTest_ClassInfo_, allocate$ComponentSetNameTest);
	return class$;
}

$Class* ComponentSetNameTest::class$ = nullptr;