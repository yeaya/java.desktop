#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$AudioAction.h>

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <javax/swing/AbstractAction.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AbstractAction = ::javax::swing::AbstractAction;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$AudioAction_FieldInfo_[] = {
	{"audioRunnable", "Ljava/lang/Runnable;", nullptr, $PRIVATE, $field(WindowsLookAndFeel$AudioAction, audioRunnable)},
	{"audioResource", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsLookAndFeel$AudioAction, audioResource)},
	{}
};

$MethodInfo _WindowsLookAndFeel$AudioAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$AudioAction::*)($String*,$String*)>(&WindowsLookAndFeel$AudioAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$AudioAction_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$AudioAction", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "AudioAction", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsLookAndFeel$AudioAction_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$AudioAction",
	"javax.swing.AbstractAction",
	nullptr,
	_WindowsLookAndFeel$AudioAction_FieldInfo_,
	_WindowsLookAndFeel$AudioAction_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$AudioAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$AudioAction($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$AudioAction));
}

void WindowsLookAndFeel$AudioAction::init$($String* name, $String* resource) {
	$AbstractAction::init$(name);
	$set(this, audioResource, resource);
}

void WindowsLookAndFeel$AudioAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->audioRunnable == nullptr) {
		$set(this, audioRunnable, $cast($Runnable, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty(this->audioResource)));
	}
	if (this->audioRunnable != nullptr) {
		$$new($Thread, nullptr, this->audioRunnable, "Audio"_s, 0, false)->start();
	}
}

WindowsLookAndFeel$AudioAction::WindowsLookAndFeel$AudioAction() {
}

$Class* WindowsLookAndFeel$AudioAction::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$AudioAction, name, initialize, &_WindowsLookAndFeel$AudioAction_ClassInfo_, allocate$WindowsLookAndFeel$AudioAction);
	return class$;
}

$Class* WindowsLookAndFeel$AudioAction::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com