#include <com/sun/java/swing/plaf/windows/WindowsClassicLookAndFeel.h>

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <jcpp.h>

using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsClassicLookAndFeel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsClassicLookAndFeel::*)()>(&WindowsClassicLookAndFeel::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowsClassicLookAndFeel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsClassicLookAndFeel",
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel",
	nullptr,
	nullptr,
	_WindowsClassicLookAndFeel_MethodInfo_
};

$Object* allocate$WindowsClassicLookAndFeel($Class* clazz) {
	return $of($alloc(WindowsClassicLookAndFeel));
}

void WindowsClassicLookAndFeel::init$() {
	$WindowsLookAndFeel::init$();
}

$String* WindowsClassicLookAndFeel::getName() {
	return "Windows Classic"_s;
}

WindowsClassicLookAndFeel::WindowsClassicLookAndFeel() {
}

$Class* WindowsClassicLookAndFeel::load$($String* name, bool initialize) {
	$loadClass(WindowsClassicLookAndFeel, name, initialize, &_WindowsClassicLookAndFeel_ClassInfo_, allocate$WindowsClassicLookAndFeel);
	return class$;
}

$Class* WindowsClassicLookAndFeel::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com