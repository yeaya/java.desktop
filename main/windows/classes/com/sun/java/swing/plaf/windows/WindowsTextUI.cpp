#include <com/sun/java/swing/plaf/windows/WindowsTextUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsTextUI$WindowsCaret.h>
#include <com/sun/java/swing/plaf/windows/WindowsTextUI$WindowsHighlightPainter.h>
#include <java/awt/Color.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/DefaultHighlighter$DefaultHighlightPainter.h>
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>
#include <jcpp.h>

using $WindowsTextUI$WindowsCaret = ::com::sun::java::swing::plaf::windows::WindowsTextUI$WindowsCaret;
using $WindowsTextUI$WindowsHighlightPainter = ::com::sun::java::swing::plaf::windows::WindowsTextUI$WindowsHighlightPainter;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $DefaultHighlighter$DefaultHighlightPainter = ::javax::swing::text::DefaultHighlighter$DefaultHighlightPainter;
using $LayeredHighlighter$LayerPainter = ::javax::swing::text::LayeredHighlighter$LayerPainter;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsTextUI_FieldInfo_[] = {
	{"WindowsPainter", "Ljavax/swing/text/LayeredHighlighter$LayerPainter;", nullptr, $STATIC, $staticField(WindowsTextUI, WindowsPainter)},
	{}
};

$MethodInfo _WindowsTextUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsTextUI::*)()>(&WindowsTextUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _WindowsTextUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsHighlightPainter", "com.sun.java.swing.plaf.windows.WindowsTextUI", "WindowsHighlightPainter", $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsCaret", "com.sun.java.swing.plaf.windows.WindowsTextUI", "WindowsCaret", $STATIC},
	{}
};

$ClassInfo _WindowsTextUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.java.swing.plaf.windows.WindowsTextUI",
	"javax.swing.plaf.basic.BasicTextUI",
	nullptr,
	_WindowsTextUI_FieldInfo_,
	_WindowsTextUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsTextUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsHighlightPainter,com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsCaret"
};

$Object* allocate$WindowsTextUI($Class* clazz) {
	return $of($alloc(WindowsTextUI));
}

$LayeredHighlighter$LayerPainter* WindowsTextUI::WindowsPainter = nullptr;

void WindowsTextUI::init$() {
	$BasicTextUI::init$();
}

$Caret* WindowsTextUI::createCaret() {
	return $new($WindowsTextUI$WindowsCaret);
}

void clinit$WindowsTextUI($Class* class$) {
	$assignStatic(WindowsTextUI::WindowsPainter, $new($WindowsTextUI$WindowsHighlightPainter, nullptr));
}

WindowsTextUI::WindowsTextUI() {
}

$Class* WindowsTextUI::load$($String* name, bool initialize) {
	$loadClass(WindowsTextUI, name, initialize, &_WindowsTextUI_ClassInfo_, clinit$WindowsTextUI, allocate$WindowsTextUI);
	return class$;
}

$Class* WindowsTextUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com