#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPColorValue.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPColorValue$XPColorValueKey.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPValue.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsLookAndFeel$XPColorValue$XPColorValueKey = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPColorValue$XPColorValueKey;
using $WindowsLookAndFeel$XPValue = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPValue;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsLookAndFeel$XPColorValue_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$XPColorValue::*)($TMSchema$Part*,$TMSchema$State*,$TMSchema$Prop*,Object$*)>(&WindowsLookAndFeel$XPColorValue::init$))},
	{"getXPValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$XPColorValue_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPColorValue", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPValue", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue$XPColorValueKey", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue", "XPColorValueKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsLookAndFeel$XPColorValue_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue",
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue",
	nullptr,
	nullptr,
	_WindowsLookAndFeel$XPColorValue_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$XPColorValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$XPColorValue($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$XPColorValue));
}

void WindowsLookAndFeel$XPColorValue::init$($TMSchema$Part* part, $TMSchema$State* state, $TMSchema$Prop* prop, Object$* classicValue) {
	$WindowsLookAndFeel$XPValue::init$($$new($WindowsLookAndFeel$XPColorValue$XPColorValueKey, part, state, prop), classicValue);
}

$Object* WindowsLookAndFeel$XPColorValue::getXPValue($UIDefaults* table) {
	$var($WindowsLookAndFeel$XPColorValue$XPColorValueKey, key, $cast($WindowsLookAndFeel$XPColorValue$XPColorValueKey, this->xpValue));
	$var($XPStyle, xp, $XPStyle::getXP());
	return $of(xp != nullptr ? $of($nc(xp)->getColor($nc(key)->skin, key->prop, nullptr)) : ($Object*)nullptr);
}

WindowsLookAndFeel$XPColorValue::WindowsLookAndFeel$XPColorValue() {
}

$Class* WindowsLookAndFeel$XPColorValue::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$XPColorValue, name, initialize, &_WindowsLookAndFeel$XPColorValue_ClassInfo_, allocate$WindowsLookAndFeel$XPColorValue);
	return class$;
}

$Class* WindowsLookAndFeel$XPColorValue::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com