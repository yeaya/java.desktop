#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPBorderValue.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPValue.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/BorderUIResource$CompoundBorderUIResource.h>
#include <jcpp.h>

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsLookAndFeel$XPValue = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPValue;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $Border = ::javax::swing::border::Border;
using $BorderUIResource$CompoundBorderUIResource = ::javax::swing::plaf::BorderUIResource$CompoundBorderUIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$XPBorderValue_FieldInfo_[] = {
	{"extraMargin", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $FINAL, $field(WindowsLookAndFeel$XPBorderValue, extraMargin)},
	{}
};

$MethodInfo _WindowsLookAndFeel$XPBorderValue_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$XPBorderValue::*)($TMSchema$Part*,Object$*)>(&WindowsLookAndFeel$XPBorderValue::init$))},
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Ljava/lang/Object;Ljavax/swing/border/Border;)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$XPBorderValue::*)($TMSchema$Part*,Object$*,$Border*)>(&WindowsLookAndFeel$XPBorderValue::init$))},
	{"getXPValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$XPBorderValue_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPBorderValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPBorderValue", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPValue", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsLookAndFeel$XPBorderValue_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPBorderValue",
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue",
	nullptr,
	_WindowsLookAndFeel$XPBorderValue_FieldInfo_,
	_WindowsLookAndFeel$XPBorderValue_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$XPBorderValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$XPBorderValue($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$XPBorderValue));
}

void WindowsLookAndFeel$XPBorderValue::init$($TMSchema$Part* xpValue, Object$* classicValue) {
	WindowsLookAndFeel$XPBorderValue::init$(xpValue, classicValue, nullptr);
}

void WindowsLookAndFeel$XPBorderValue::init$($TMSchema$Part* xpValue, Object$* classicValue, $Border* extraMargin) {
	$WindowsLookAndFeel$XPValue::init$(xpValue, classicValue);
	$set(this, extraMargin, extraMargin);
}

$Object* WindowsLookAndFeel$XPBorderValue::getXPValue($UIDefaults* table) {
	$var($XPStyle, xp, $XPStyle::getXP());
	$var($Border, xpBorder, xp != nullptr ? $nc(xp)->getBorder(nullptr, $cast($TMSchema$Part, this->xpValue)) : ($Border*)nullptr);
	if (xpBorder != nullptr && this->extraMargin != nullptr) {
		return $of($new($BorderUIResource$CompoundBorderUIResource, xpBorder, this->extraMargin));
	} else {
		return $of(xpBorder);
	}
}

WindowsLookAndFeel$XPBorderValue::WindowsLookAndFeel$XPBorderValue() {
}

$Class* WindowsLookAndFeel$XPBorderValue::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$XPBorderValue, name, initialize, &_WindowsLookAndFeel$XPBorderValue_ClassInfo_, allocate$WindowsLookAndFeel$XPBorderValue);
	return class$;
}

$Class* WindowsLookAndFeel$XPBorderValue::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com