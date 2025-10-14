#include <bug6612531.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ScrollPaneLayout.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $ScrollPaneLayout = ::javax::swing::ScrollPaneLayout;

$MethodInfo _bug6612531_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6612531::*)()>(&bug6612531::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6612531::main))},
	{}
};

$ClassInfo _bug6612531_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6612531",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6612531_MethodInfo_
};

$Object* allocate$bug6612531($Class* clazz) {
	return $of($alloc(bug6612531));
}

void bug6612531::init$() {
}

void bug6612531::main($StringArray* args) {
	$var($ScrollPaneLayout, c, $new($ScrollPaneLayout));
	$var($JViewport, vp, $new($JViewport));
	c->addLayoutComponent("VIEWPORT"_s, vp);
	c->preferredLayoutSize($$new($JScrollPane));
	$init($System);
	$nc($System::out)->println("Test passed"_s);
}

bug6612531::bug6612531() {
}

$Class* bug6612531::load$($String* name, bool initialize) {
	$loadClass(bug6612531, name, initialize, &_bug6612531_ClassInfo_, allocate$bug6612531);
	return class$;
}

$Class* bug6612531::class$ = nullptr;