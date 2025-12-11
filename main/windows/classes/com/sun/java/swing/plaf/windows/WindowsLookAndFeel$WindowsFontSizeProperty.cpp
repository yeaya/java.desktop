#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$WindowsFontSizeProperty.h>

#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <jcpp.h>

using $WindowsDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$WindowsFontSizeProperty_FieldInfo_[] = {
	{"fontName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsLookAndFeel$WindowsFontSizeProperty, fontName)},
	{"fontSize", "I", nullptr, $PRIVATE, $field(WindowsLookAndFeel$WindowsFontSizeProperty, fontSize)},
	{"fontStyle", "I", nullptr, $PRIVATE, $field(WindowsLookAndFeel$WindowsFontSizeProperty, fontStyle)},
	{}
};

$MethodInfo _WindowsLookAndFeel$WindowsFontSizeProperty_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;II)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$WindowsFontSizeProperty::*)($String*,$String*,int32_t,int32_t)>(&WindowsLookAndFeel$WindowsFontSizeProperty::init$))},
	{"configureValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$WindowsFontSizeProperty_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontSizeProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "WindowsFontSizeProperty", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsLookAndFeel$WindowsFontSizeProperty_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontSizeProperty",
	"com.sun.java.swing.plaf.windows.WindowsDesktopProperty",
	nullptr,
	_WindowsLookAndFeel$WindowsFontSizeProperty_FieldInfo_,
	_WindowsLookAndFeel$WindowsFontSizeProperty_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$WindowsFontSizeProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$WindowsFontSizeProperty($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$WindowsFontSizeProperty));
}

void WindowsLookAndFeel$WindowsFontSizeProperty::init$($String* key, $String* fontName, int32_t fontStyle, int32_t fontSize) {
	$WindowsDesktopProperty::init$(key, nullptr);
	$set(this, fontName, fontName);
	this->fontSize = fontSize;
	this->fontStyle = fontStyle;
}

$Object* WindowsLookAndFeel$WindowsFontSizeProperty::configureValue(Object$* value$renamed) {
	$var($Object, value, value$renamed);
	if (value == nullptr) {
		$assign(value, $new($FontUIResource, this->fontName, this->fontStyle, this->fontSize));
	} else if ($instanceOf($Integer, value)) {
		$assign(value, $new($FontUIResource, this->fontName, this->fontStyle, $nc(($cast($Integer, value)))->intValue()));
	}
	return $of(value);
}

WindowsLookAndFeel$WindowsFontSizeProperty::WindowsLookAndFeel$WindowsFontSizeProperty() {
}

$Class* WindowsLookAndFeel$WindowsFontSizeProperty::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$WindowsFontSizeProperty, name, initialize, &_WindowsLookAndFeel$WindowsFontSizeProperty_ClassInfo_, allocate$WindowsLookAndFeel$WindowsFontSizeProperty);
	return class$;
}

$Class* WindowsLookAndFeel$WindowsFontSizeProperty::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com