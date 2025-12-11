#include <bug6559589.h>

#include <bug6559589$1.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $bug6559589$1 = ::bug6559589$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JScrollPane = ::javax::swing::JScrollPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$MethodInfo _bug6559589_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6559589::*)()>(&bug6559589::init$))},
	{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6559589::createGui))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6559589::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6559589_InnerClassesInfo_[] = {
	{"bug6559589$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6559589_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6559589",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6559589_MethodInfo_,
	nullptr,
	nullptr,
	_bug6559589_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6559589$1"
};

$Object* allocate$bug6559589($Class* clazz) {
	return $of($alloc(bug6559589));
}

void bug6559589::init$() {
}

void bug6559589::createGui() {
	$useLocalCurrentObjectStackCache();
	$var($JScrollPane, sp, $new($JScrollPane));
	int32_t listenerCount = $nc($(sp->getPropertyChangeListeners()))->length;
	sp->updateUI();
	if (listenerCount != $nc($(sp->getPropertyChangeListeners()))->length) {
		$throwNew($RuntimeException, "Listeners\' leak"_s);
	}
}

void bug6559589::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	$SwingUtilities::invokeAndWait($$new($bug6559589$1));
}

bug6559589::bug6559589() {
}

$Class* bug6559589::load$($String* name, bool initialize) {
	$loadClass(bug6559589, name, initialize, &_bug6559589_ClassInfo_, allocate$bug6559589);
	return class$;
}

$Class* bug6559589::class$ = nullptr;