#include <com/sun/java/swing/plaf/windows/WindowsTextUI$WindowsCaret.h>

#include <com/sun/java/swing/plaf/windows/WindowsTextUI.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>
#include <jcpp.h>

using $WindowsTextUI = ::com::sun::java::swing::plaf::windows::WindowsTextUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsTextUI$WindowsCaret_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WindowsTextUI$WindowsCaret::*)()>(&WindowsTextUI$WindowsCaret::init$))},
	{"getSelectionPainter", "()Ljavax/swing/text/Highlighter$HighlightPainter;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsTextUI$WindowsCaret_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsCaret", "com.sun.java.swing.plaf.windows.WindowsTextUI", "WindowsCaret", $STATIC},
	{}
};

$ClassInfo _WindowsTextUI$WindowsCaret_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTextUI$WindowsCaret",
	"javax.swing.text.DefaultCaret",
	"javax.swing.plaf.UIResource",
	nullptr,
	_WindowsTextUI$WindowsCaret_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsTextUI$WindowsCaret_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsTextUI"
};

$Object* allocate$WindowsTextUI$WindowsCaret($Class* clazz) {
	return $of($alloc(WindowsTextUI$WindowsCaret));
}

bool WindowsTextUI$WindowsCaret::equals(Object$* obj) {
	 return this->$DefaultCaret::equals(obj);
}

$String* WindowsTextUI$WindowsCaret::toString() {
	 return this->$DefaultCaret::toString();
}

int32_t WindowsTextUI$WindowsCaret::hashCode() {
	 return this->$DefaultCaret::hashCode();
}

$Object* WindowsTextUI$WindowsCaret::clone() {
	 return this->$DefaultCaret::clone();
}

void WindowsTextUI$WindowsCaret::finalize() {
	this->$DefaultCaret::finalize();
}

void WindowsTextUI$WindowsCaret::init$() {
	$DefaultCaret::init$();
}

$Highlighter$HighlightPainter* WindowsTextUI$WindowsCaret::getSelectionPainter() {
	$init($WindowsTextUI);
	return $WindowsTextUI::WindowsPainter;
}

WindowsTextUI$WindowsCaret::WindowsTextUI$WindowsCaret() {
}

$Class* WindowsTextUI$WindowsCaret::load$($String* name, bool initialize) {
	$loadClass(WindowsTextUI$WindowsCaret, name, initialize, &_WindowsTextUI$WindowsCaret_ClassInfo_, allocate$WindowsTextUI$WindowsCaret);
	return class$;
}

$Class* WindowsTextUI$WindowsCaret::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com