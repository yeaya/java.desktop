#include <Test5062055.h>

#include <java/awt/Dimension.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _Test5062055_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test5062055::*)()>(&Test5062055::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test5062055::main))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test5062055_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test5062055",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test5062055_MethodInfo_
};

$Object* allocate$Test5062055($Class* clazz) {
	return $of($alloc(Test5062055));
}

void Test5062055::init$() {
}

void Test5062055::main($StringArray* argv) {
	$init(Test5062055);
	$SwingUtilities::invokeLater($$new(Test5062055));
	try {
		$Thread::sleep(5000);
	} catch ($InterruptedException&) {
		$var($InterruptedException, ex, $catch());
		$throwNew($Error, "Wait interrupted"_s);
	}
}

void Test5062055::run() {
	$var($JEditorPane, jep, $new($JEditorPane));
	jep->setContentType("text/html"_s);
	jep->setEditable(false);
	jep->setText("<HTML><BODY><HR size=\'5px\'></BODY></HTML>"_s);
	jep->setPreferredSize($$new($Dimension, 640, 480));
}

Test5062055::Test5062055() {
}

$Class* Test5062055::load$($String* name, bool initialize) {
	$loadClass(Test5062055, name, initialize, &_Test5062055_ClassInfo_, allocate$Test5062055);
	return class$;
}

$Class* Test5062055::class$ = nullptr;