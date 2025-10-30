#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPColorValue$XPColorValueKey.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPColorValue.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <jcpp.h>

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsLookAndFeel$XPColorValue = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPColorValue;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$XPColorValue$XPColorValueKey_FieldInfo_[] = {
	{"skin", "Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, 0, $field(WindowsLookAndFeel$XPColorValue$XPColorValueKey, skin)},
	{"prop", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, 0, $field(WindowsLookAndFeel$XPColorValue$XPColorValueKey, prop)},
	{}
};

$MethodInfo _WindowsLookAndFeel$XPColorValue$XPColorValueKey_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$XPColorValue$XPColorValueKey::*)($TMSchema$Part*,$TMSchema$State*,$TMSchema$Prop*)>(&WindowsLookAndFeel$XPColorValue$XPColorValueKey::init$))},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$XPColorValue$XPColorValueKey_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPColorValue", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue$XPColorValueKey", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue", "XPColorValueKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsLookAndFeel$XPColorValue$XPColorValueKey_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue$XPColorValueKey",
	"java.lang.Object",
	nullptr,
	_WindowsLookAndFeel$XPColorValue$XPColorValueKey_FieldInfo_,
	_WindowsLookAndFeel$XPColorValue$XPColorValueKey_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$XPColorValue$XPColorValueKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$XPColorValue$XPColorValueKey($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$XPColorValue$XPColorValueKey));
}

void WindowsLookAndFeel$XPColorValue$XPColorValueKey::init$($TMSchema$Part* part, $TMSchema$State* state, $TMSchema$Prop* prop) {
	$set(this, skin, $new($XPStyle$Skin, part, state));
	$set(this, prop, prop);
}

WindowsLookAndFeel$XPColorValue$XPColorValueKey::WindowsLookAndFeel$XPColorValue$XPColorValueKey() {
}

$Class* WindowsLookAndFeel$XPColorValue$XPColorValueKey::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$XPColorValue$XPColorValueKey, name, initialize, &_WindowsLookAndFeel$XPColorValue$XPColorValueKey_ClassInfo_, allocate$WindowsLookAndFeel$XPColorValue$XPColorValueKey);
	return class$;
}

$Class* WindowsLookAndFeel$XPColorValue$XPColorValueKey::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com