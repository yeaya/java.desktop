#include <bug6994419$1.h>

#include <bug6994419$1$1.h>
#include <bug6994419.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayer.h>
#include <jcpp.h>

using $bug6994419 = ::bug6994419;
using $bug6994419$1$1 = ::bug6994419$1$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JLayer = ::javax::swing::JLayer;

$MethodInfo _bug6994419$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6994419$1::*)()>(&bug6994419$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6994419$1_EnclosingMethodInfo_ = {
	"bug6994419",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6994419$1_InnerClassesInfo_[] = {
	{"bug6994419$1", nullptr, nullptr, 0},
	{"bug6994419$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6994419$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6994419$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6994419$1_MethodInfo_,
	nullptr,
	&_bug6994419$1_EnclosingMethodInfo_,
	_bug6994419$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6994419"
};

$Object* allocate$bug6994419$1($Class* clazz) {
	return $of($alloc(bug6994419$1));
}

void bug6994419$1::init$() {
}

void bug6994419$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JLayer, l, $new($JLayer, $$new($JButton)));
	l->removeAll();
	l->addPropertyChangeListener($$new($bug6994419$1$1, this));
	l->removeAll();
}

bug6994419$1::bug6994419$1() {
}

$Class* bug6994419$1::load$($String* name, bool initialize) {
	$loadClass(bug6994419$1, name, initialize, &_bug6994419$1_ClassInfo_, allocate$bug6994419$1);
	return class$;
}

$Class* bug6994419$1::class$ = nullptr;