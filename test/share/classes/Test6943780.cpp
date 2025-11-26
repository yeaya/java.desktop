#include <Test6943780.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Runnable.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef SCROLL_TAB_LAYOUT
#undef TOP

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _Test6943780_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6943780::*)()>(&Test6943780::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6943780::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Test6943780_InnerClassesInfo_[] = {
	{"java.lang.Thread$UncaughtExceptionHandler", "java.lang.Thread", "UncaughtExceptionHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Test6943780_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6943780",
	"java.lang.Object",
	"java.lang.Runnable,java.lang.Thread$UncaughtExceptionHandler",
	nullptr,
	_Test6943780_MethodInfo_,
	nullptr,
	nullptr,
	_Test6943780_InnerClassesInfo_
};

$Object* allocate$Test6943780($Class* clazz) {
	return $of($alloc(Test6943780));
}

int32_t Test6943780::hashCode() {
	 return this->$Runnable::hashCode();
}

bool Test6943780::equals(Object$* arg0) {
	 return this->$Runnable::equals(arg0);
}

$Object* Test6943780::clone() {
	 return this->$Runnable::clone();
}

$String* Test6943780::toString() {
	 return this->$Runnable::toString();
}

void Test6943780::finalize() {
	this->$Runnable::finalize();
}

void Test6943780::init$() {
}

void Test6943780::main($StringArray* args) {
	$init(Test6943780);
	$SwingUtilities::invokeAndWait($$new(Test6943780));
}

void Test6943780::uncaughtException($Thread* thread, $Throwable* throwable) {
	$nc(throwable)->printStackTrace();
	$System::exit(1);
}

void Test6943780::run() {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane, pane, $new($JTabbedPane, $JTabbedPane::TOP, $JTabbedPane::SCROLL_TAB_LAYOUT));
	pane->addTab("first"_s, $$new($JButton, "first"_s));
	pane->addTab("second"_s, $$new($JButton, "second"_s));
	{
		$var($ComponentArray, arr$, pane->getComponents());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, component, arr$->get(i$));
			{
				$nc(component)->setSize(100, 100);
			}
		}
	}
}

Test6943780::Test6943780() {
}

$Class* Test6943780::load$($String* name, bool initialize) {
	$loadClass(Test6943780, name, initialize, &_Test6943780_ClassInfo_, allocate$Test6943780);
	return class$;
}

$Class* Test6943780::class$ = nullptr;