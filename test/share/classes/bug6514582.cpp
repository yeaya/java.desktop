#include <bug6514582.h>

#include <bug6514582$1.h>
#include <bug6514582$2.h>
#include <java/awt/Component.h>
#include <java/awt/Robot.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6514582$1 = ::bug6514582$1;
using $bug6514582$2 = ::bug6514582$2;
using $Component = ::java::awt::Component;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6514582_FieldInfo_[] = {
	{"popup", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE | $STATIC, $staticField(bug6514582, popup)},
	{}
};

$MethodInfo _bug6514582_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6514582::*)()>(&bug6514582::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&bug6514582::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6514582_InnerClassesInfo_[] = {
	{"bug6514582$2", nullptr, nullptr, 0},
	{"bug6514582$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6514582_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6514582",
	"java.lang.Object",
	nullptr,
	_bug6514582_FieldInfo_,
	_bug6514582_MethodInfo_,
	nullptr,
	nullptr,
	_bug6514582_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6514582$2,bug6514582$1"
};

$Object* allocate$bug6514582($Class* clazz) {
	return $of($alloc(bug6514582));
}

$JPopupMenu* bug6514582::popup = nullptr;

void bug6514582::init$() {
}

void bug6514582::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($bug6514582$1));
	robot->waitForIdle();
	$init(bug6514582);
	if (!$nc(bug6514582::popup)->isShowing()) {
		$throwNew($RuntimeException, "Where is my popup ?"_s);
	}
	$SwingUtilities::invokeAndWait($$new($bug6514582$2));
	robot->waitForIdle();
	if ($nc(bug6514582::popup)->isShowing()) {
		$throwNew($RuntimeException, "Empty popup is shown"_s);
	}
	$nc(bug6514582::popup)->setVisible(false);
}

bug6514582::bug6514582() {
}

$Class* bug6514582::load$($String* name, bool initialize) {
	$loadClass(bug6514582, name, initialize, &_bug6514582_ClassInfo_, allocate$bug6514582);
	return class$;
}

$Class* bug6514582::class$ = nullptr;