#include <com/sun/java/swing/plaf/windows/WindowsTextFieldUI$WindowsFieldCaret.h>

#include <com/sun/java/swing/plaf/windows/WindowsTextFieldUI$WindowsFieldCaret$SafeScroller.h>
#include <com/sun/java/swing/plaf/windows/WindowsTextFieldUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsTextUI.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>
#include <jcpp.h>

using $WindowsTextFieldUI = ::com::sun::java::swing::plaf::windows::WindowsTextFieldUI;
using $WindowsTextFieldUI$WindowsFieldCaret$SafeScroller = ::com::sun::java::swing::plaf::windows::WindowsTextFieldUI$WindowsFieldCaret$SafeScroller;
using $WindowsTextUI = ::com::sun::java::swing::plaf::windows::WindowsTextUI;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIResource = ::javax::swing::plaf::UIResource;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LayeredHighlighter$LayerPainter = ::javax::swing::text::LayeredHighlighter$LayerPainter;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsTextFieldUI$WindowsFieldCaret_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsTextFieldUI$WindowsFieldCaret::*)()>(&WindowsTextFieldUI$WindowsFieldCaret::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsTextFieldUI$WindowsFieldCaret;)Ljavax/swing/text/JTextComponent;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTextComponent*(*)(WindowsTextFieldUI$WindowsFieldCaret*)>(&WindowsTextFieldUI$WindowsFieldCaret::access$000))},
	{"access$100", "(Lcom/sun/java/swing/plaf/windows/WindowsTextFieldUI$WindowsFieldCaret;Ljava/awt/Rectangle;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(WindowsTextFieldUI$WindowsFieldCaret*,$Rectangle*)>(&WindowsTextFieldUI$WindowsFieldCaret::access$100))},
	{"adjustVisibility", "(Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"getSelectionPainter", "()Ljavax/swing/text/Highlighter$HighlightPainter;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsTextFieldUI$WindowsFieldCaret_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret", "com.sun.java.swing.plaf.windows.WindowsTextFieldUI", "WindowsFieldCaret", $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret$SafeScroller", "com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret", "SafeScroller", $PRIVATE},
	{}
};

$ClassInfo _WindowsTextFieldUI$WindowsFieldCaret_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret",
	"javax.swing.text.DefaultCaret",
	"javax.swing.plaf.UIResource",
	nullptr,
	_WindowsTextFieldUI$WindowsFieldCaret_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsTextFieldUI$WindowsFieldCaret_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsTextFieldUI"
};

$Object* allocate$WindowsTextFieldUI$WindowsFieldCaret($Class* clazz) {
	return $of($alloc(WindowsTextFieldUI$WindowsFieldCaret));
}

bool WindowsTextFieldUI$WindowsFieldCaret::equals(Object$* obj) {
	 return this->$DefaultCaret::equals(obj);
}

$String* WindowsTextFieldUI$WindowsFieldCaret::toString() {
	 return this->$DefaultCaret::toString();
}

int32_t WindowsTextFieldUI$WindowsFieldCaret::hashCode() {
	 return this->$DefaultCaret::hashCode();
}

$Object* WindowsTextFieldUI$WindowsFieldCaret::clone() {
	 return this->$DefaultCaret::clone();
}

void WindowsTextFieldUI$WindowsFieldCaret::finalize() {
	this->$DefaultCaret::finalize();
}

void WindowsTextFieldUI$WindowsFieldCaret::access$100(WindowsTextFieldUI$WindowsFieldCaret* x0, $Rectangle* x1) {
	$init(WindowsTextFieldUI$WindowsFieldCaret);
	$nc(x0)->damage(x1);
}

$JTextComponent* WindowsTextFieldUI$WindowsFieldCaret::access$000(WindowsTextFieldUI$WindowsFieldCaret* x0) {
	$init(WindowsTextFieldUI$WindowsFieldCaret);
	return $nc(x0)->getComponent();
}

void WindowsTextFieldUI$WindowsFieldCaret::init$() {
	$DefaultCaret::init$();
}

void WindowsTextFieldUI$WindowsFieldCaret::adjustVisibility($Rectangle* r) {
	$SwingUtilities::invokeLater($$new($WindowsTextFieldUI$WindowsFieldCaret$SafeScroller, this, r));
}

$Highlighter$HighlightPainter* WindowsTextFieldUI$WindowsFieldCaret::getSelectionPainter() {
	$init($WindowsTextUI);
	return $WindowsTextUI::WindowsPainter;
}

WindowsTextFieldUI$WindowsFieldCaret::WindowsTextFieldUI$WindowsFieldCaret() {
}

$Class* WindowsTextFieldUI$WindowsFieldCaret::load$($String* name, bool initialize) {
	$loadClass(WindowsTextFieldUI$WindowsFieldCaret, name, initialize, &_WindowsTextFieldUI$WindowsFieldCaret_ClassInfo_, allocate$WindowsTextFieldUI$WindowsFieldCaret);
	return class$;
}

$Class* WindowsTextFieldUI$WindowsFieldCaret::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com