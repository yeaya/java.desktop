#include <bug8054543.h>

#include <bug8054543$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Runnable.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef GREEN

using $bug8054543$1 = ::bug8054543$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JLayer = ::javax::swing::JLayer;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Border = ::javax::swing::border::Border;

$MethodInfo _bug8054543_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8054543::*)()>(&bug8054543::init$))},
	{"check", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(bug8054543::*)(Object$*,Object$*)>(&bug8054543::check))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&bug8054543::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8054543_InnerClassesInfo_[] = {
	{"bug8054543$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8054543_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8054543",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug8054543_MethodInfo_,
	nullptr,
	nullptr,
	_bug8054543_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8054543$1"
};

$Object* allocate$bug8054543($Class* clazz) {
	return $of($alloc(bug8054543));
}

void bug8054543::init$() {
	$useLocalCurrentObjectStackCache();
	$var($JLayer, layer, $new($JLayer));
	$init($Color);
	$var($Border, border, $BorderFactory::createLineBorder($Color::GREEN));
	$var($JButton, view, $new($JButton, "JButton"_s));
	layer->setBorder(border);
	check($(layer->getBorder()), nullptr);
	layer->setBorder(nullptr);
	check($(layer->getBorder()), nullptr);
	layer->setView(view);
	$var($Object, var$0, $of(layer->getBorder()));
	check(var$0, $(view->getBorder()));
	layer->setBorder(border);
	check(border, $(view->getBorder()));
	layer->setBorder(nullptr);
	$var($Object, var$1, $of(layer->getBorder()));
	check(var$1, $(view->getBorder()));
}

void bug8054543::check(Object$* o1, Object$* o2) {
	if (!$equals(o1, o2)) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

void bug8054543::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug8054543$1));
}

bug8054543::bug8054543() {
}

$Class* bug8054543::load$($String* name, bool initialize) {
	$loadClass(bug8054543, name, initialize, &_bug8054543_ClassInfo_, allocate$bug8054543);
	return class$;
}

$Class* bug8054543::class$ = nullptr;