#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$FontDesktopProperty.h>

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$TriggerDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsLookAndFeel$TriggerDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$TriggerDesktopProperty;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$FontDesktopProperty_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$FontDesktopProperty, this$0)},
	{}
};

$MethodInfo _WindowsLookAndFeel$FontDesktopProperty_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$FontDesktopProperty::*)($WindowsLookAndFeel*,$String*)>(&WindowsLookAndFeel$FontDesktopProperty::init$))},
	{"updateUI", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$FontDesktopProperty_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FontDesktopProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "FontDesktopProperty", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "TriggerDesktopProperty", $PRIVATE},
	{}
};

$ClassInfo _WindowsLookAndFeel$FontDesktopProperty_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FontDesktopProperty",
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty",
	nullptr,
	_WindowsLookAndFeel$FontDesktopProperty_FieldInfo_,
	_WindowsLookAndFeel$FontDesktopProperty_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$FontDesktopProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$FontDesktopProperty($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$FontDesktopProperty));
}

void WindowsLookAndFeel$FontDesktopProperty::init$($WindowsLookAndFeel* this$0, $String* key) {
	$set(this, this$0, this$0);
	$WindowsLookAndFeel$TriggerDesktopProperty::init$(this$0, key);
}

void WindowsLookAndFeel$FontDesktopProperty::updateUI() {
	$var($UIDefaults, defaults, $UIManager::getLookAndFeelDefaults());
	$SwingUtilities2::putAATextInfo(true, defaults);
	$WindowsLookAndFeel$TriggerDesktopProperty::updateUI();
}

WindowsLookAndFeel$FontDesktopProperty::WindowsLookAndFeel$FontDesktopProperty() {
}

$Class* WindowsLookAndFeel$FontDesktopProperty::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$FontDesktopProperty, name, initialize, &_WindowsLookAndFeel$FontDesktopProperty_ClassInfo_, allocate$WindowsLookAndFeel$FontDesktopProperty);
	return class$;
}

$Class* WindowsLookAndFeel$FontDesktopProperty::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com