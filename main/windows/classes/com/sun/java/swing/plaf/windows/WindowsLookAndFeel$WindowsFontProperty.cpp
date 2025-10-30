#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$WindowsFontProperty.h>

#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/awt/Font.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Toolkit.h>
#include <java/lang/Math.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/UIResource.h>
#include <sun/font/FontUtilities.h>
#include <sun/swing/plaf/DesktopProperty.h>
#include <jcpp.h>

using $WindowsDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $Font = ::java::awt::Font;
using $HeadlessException = ::java::awt::HeadlessException;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $FontUtilities = ::sun::font::FontUtilities;
using $DesktopProperty = ::sun::swing::plaf::DesktopProperty;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsLookAndFeel$WindowsFontProperty_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$WindowsFontProperty::*)($String*,Object$*)>(&WindowsLookAndFeel$WindowsFontProperty::init$))},
	{"configureValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"invalidate", "(Ljavax/swing/LookAndFeel;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$WindowsFontProperty_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "WindowsFontProperty", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsLookAndFeel$WindowsFontProperty_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontProperty",
	"com.sun.java.swing.plaf.windows.WindowsDesktopProperty",
	nullptr,
	nullptr,
	_WindowsLookAndFeel$WindowsFontProperty_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$WindowsFontProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$WindowsFontProperty($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$WindowsFontProperty));
}

void WindowsLookAndFeel$WindowsFontProperty::init$($String* key, Object$* backup) {
	$WindowsDesktopProperty::init$(key, backup);
}

void WindowsLookAndFeel$WindowsFontProperty::invalidate($LookAndFeel* laf) {
	if ("win.defaultGUI.font.height"_s->equals($(getKey()))) {
		$set($nc($cast($WindowsLookAndFeel, laf)), style, nullptr);
	}
	$WindowsDesktopProperty::invalidate(laf);
}

$Object* WindowsLookAndFeel$WindowsFontProperty::configureValue(Object$* value) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Font, value)) {
		$var($Font, font, $cast($Font, value));
		if ("MS Sans Serif"_s->equals($($nc(font)->getName()))) {
			int32_t size = $nc(font)->getSize();
			int32_t dpi = 0;
			try {
				dpi = $nc($($Toolkit::getDefaultToolkit()))->getScreenResolution();
			} catch ($HeadlessException& ex) {
				dpi = 96;
			}
			if ($Math::round(size * 72.0f / dpi) < 8) {
				size = $Math::round(8 * dpi / 72.0f);
			}
			$var($Font, msFont, $new($FontUIResource, "Microsoft Sans Serif"_s, font->getStyle(), size));
			bool var$0 = msFont->getName() != nullptr;
			if (var$0 && $nc($(msFont->getName()))->equals($(msFont->getFamily()))) {
				$assign(font, msFont);
			} else if (size != font->getSize()) {
				$assign(font, $new($FontUIResource, "MS Sans Serif"_s, font->getStyle(), size));
			}
		}
		if ($FontUtilities::fontSupportsDefaultEncoding(font)) {
			if (!($instanceOf($UIResource, font))) {
				$assign(font, $new($FontUIResource, font));
			}
		} else {
			$assign(font, $FontUtilities::getCompositeFontUIResource(font));
		}
		return $of(font);
	}
	return $of($WindowsDesktopProperty::configureValue(value));
}

WindowsLookAndFeel$WindowsFontProperty::WindowsLookAndFeel$WindowsFontProperty() {
}

$Class* WindowsLookAndFeel$WindowsFontProperty::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$WindowsFontProperty, name, initialize, &_WindowsLookAndFeel$WindowsFontProperty_ClassInfo_, allocate$WindowsLookAndFeel$WindowsFontProperty);
	return class$;
}

$Class* WindowsLookAndFeel$WindowsFontProperty::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com