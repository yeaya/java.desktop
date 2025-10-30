#include <bug7199708$2.h>

#include <bug7199708$2$1.h>
#include <bug7199708$2$2.h>
#include <bug7199708$ComponentAction.h>
#include <bug7199708.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/util/Locale.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug7199708 = ::bug7199708;
using $bug7199708$2$1 = ::bug7199708$2$1;
using $bug7199708$2$2 = ::bug7199708$2$2;
using $bug7199708$ComponentAction = ::bug7199708$ComponentAction;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Locale = ::java::util::Locale;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $UIManager = ::javax::swing::UIManager;

$MethodInfo _bug7199708$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7199708$2::*)()>(&bug7199708$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7199708$2_EnclosingMethodInfo_ = {
	"bug7199708",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7199708$2_InnerClassesInfo_[] = {
	{"bug7199708$2", nullptr, nullptr, 0},
	{"bug7199708$2$2", nullptr, nullptr, 0},
	{"bug7199708$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7199708$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7199708$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7199708$2_MethodInfo_,
	nullptr,
	&_bug7199708$2_EnclosingMethodInfo_,
	_bug7199708$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7199708"
};

$Object* allocate$bug7199708$2($Class* clazz) {
	return $of($alloc(bug7199708$2));
}

void bug7199708$2::init$() {
}

void bug7199708$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug7199708);
	$var($String, detailsTooltip, $UIManager::getString($of("FileChooser.detailsViewButtonToolTipText"_s), $($nc($bug7199708::fileChooser)->getLocale())));
	$bug7199708::doAction($bug7199708::fileChooser, $$new($bug7199708$2$1, this, detailsTooltip));
	$bug7199708::doAction($bug7199708::fileChooser, $$new($bug7199708$2$2, this));
}

bug7199708$2::bug7199708$2() {
}

$Class* bug7199708$2::load$($String* name, bool initialize) {
	$loadClass(bug7199708$2, name, initialize, &_bug7199708$2_ClassInfo_, allocate$bug7199708$2);
	return class$;
}

$Class* bug7199708$2::class$ = nullptr;