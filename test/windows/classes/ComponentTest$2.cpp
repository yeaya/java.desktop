#include <ComponentTest$2.h>

#include <ComponentTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $ComponentTest = ::ComponentTest;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$FieldInfo _ComponentTest$2_FieldInfo_[] = {
	{"val$laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $FINAL | $SYNTHETIC, $field(ComponentTest$2, val$laf)},
	{}
};

$MethodInfo _ComponentTest$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", "()V", 0, $method(static_cast<void(ComponentTest$2::*)($UIManager$LookAndFeelInfo*)>(&ComponentTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ComponentTest$2_EnclosingMethodInfo_ = {
	"ComponentTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ComponentTest$2_InnerClassesInfo_[] = {
	{"ComponentTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ComponentTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"ComponentTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_ComponentTest$2_FieldInfo_,
	_ComponentTest$2_MethodInfo_,
	nullptr,
	&_ComponentTest$2_EnclosingMethodInfo_,
	_ComponentTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ComponentTest"
};

$Object* allocate$ComponentTest$2($Class* clazz) {
	return $of($alloc(ComponentTest$2));
}

void ComponentTest$2::init$($UIManager$LookAndFeelInfo* val$laf) {
	$set(this, val$laf, val$laf);
}

void ComponentTest$2::run() {
	try {
		$UIManager::setLookAndFeel($($nc(this->val$laf)->getClassName()));
	} catch ($Exception& e) {
		$new($RuntimeException, static_cast<$Throwable*>(e));
	}
	$init($ComponentTest);
	$SwingUtilities::updateComponentTreeUI($ComponentTest::frame);
}

ComponentTest$2::ComponentTest$2() {
}

$Class* ComponentTest$2::load$($String* name, bool initialize) {
	$loadClass(ComponentTest$2, name, initialize, &_ComponentTest$2_ClassInfo_, allocate$ComponentTest$2);
	return class$;
}

$Class* ComponentTest$2::class$ = nullptr;