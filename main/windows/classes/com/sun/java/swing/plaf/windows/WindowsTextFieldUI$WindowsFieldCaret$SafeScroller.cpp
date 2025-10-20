#include <com/sun/java/swing/plaf/windows/WindowsTextFieldUI$WindowsFieldCaret$SafeScroller.h>

#include <com/sun/java/swing/plaf/windows/WindowsTextFieldUI$WindowsFieldCaret.h>
#include <com/sun/java/swing/plaf/windows/WindowsTextFieldUI.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

using $WindowsTextFieldUI = ::com::sun::java::swing::plaf::windows::WindowsTextFieldUI;
using $WindowsTextFieldUI$WindowsFieldCaret = ::com::sun::java::swing::plaf::windows::WindowsTextFieldUI$WindowsFieldCaret;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position$Bias = ::javax::swing::text::Position$Bias;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsTextFieldUI$WindowsFieldCaret$SafeScroller_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsTextFieldUI$WindowsFieldCaret;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsTextFieldUI$WindowsFieldCaret$SafeScroller, this$0)},
	{"r", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(WindowsTextFieldUI$WindowsFieldCaret$SafeScroller, r)},
	{}
};

$MethodInfo _WindowsTextFieldUI$WindowsFieldCaret$SafeScroller_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsTextFieldUI$WindowsFieldCaret;Ljava/awt/Rectangle;)V", nullptr, 0, $method(static_cast<void(WindowsTextFieldUI$WindowsFieldCaret$SafeScroller::*)($WindowsTextFieldUI$WindowsFieldCaret*,$Rectangle*)>(&WindowsTextFieldUI$WindowsFieldCaret$SafeScroller::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsTextFieldUI$WindowsFieldCaret$SafeScroller_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret", "com.sun.java.swing.plaf.windows.WindowsTextFieldUI", "WindowsFieldCaret", $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret$SafeScroller", "com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret", "SafeScroller", $PRIVATE},
	{}
};

$ClassInfo _WindowsTextFieldUI$WindowsFieldCaret$SafeScroller_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret$SafeScroller",
	"java.lang.Object",
	"java.lang.Runnable",
	_WindowsTextFieldUI$WindowsFieldCaret$SafeScroller_FieldInfo_,
	_WindowsTextFieldUI$WindowsFieldCaret$SafeScroller_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsTextFieldUI$WindowsFieldCaret$SafeScroller_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsTextFieldUI"
};

$Object* allocate$WindowsTextFieldUI$WindowsFieldCaret$SafeScroller($Class* clazz) {
	return $of($alloc(WindowsTextFieldUI$WindowsFieldCaret$SafeScroller));
}

void WindowsTextFieldUI$WindowsFieldCaret$SafeScroller::init$($WindowsTextFieldUI$WindowsFieldCaret* this$0, $Rectangle* r) {
	$set(this, this$0, this$0);
	$set(this, r, r);
}

void WindowsTextFieldUI$WindowsFieldCaret$SafeScroller::run() {
	$useLocalCurrentObjectStackCache();
	$var($JTextField, field, $cast($JTextField, $WindowsTextFieldUI$WindowsFieldCaret::access$000(this->this$0)));
	if (field != nullptr) {
		$var($TextUI, ui, $cast($TextUI, field->getUI()));
		int32_t dot = this->this$0->getDot();
		$init($Position$Bias);
		$var($Position$Bias, bias, $Position$Bias::Forward);
		$var($Rectangle, startRect, nullptr);
		try {
			$assign(startRect, $nc(ui)->modelToView(field, dot, bias));
		} catch ($BadLocationException&) {
			$catch();
		}
		$var($Insets, i, field->getInsets());
		$var($BoundedRangeModel, vis, field->getHorizontalVisibility());
		int32_t x = $nc(this->r)->x + $nc(vis)->getValue() - $nc(i)->left;
		int32_t quarterSpan = vis->getExtent() / 4;
		if ($nc(this->r)->x < i->left) {
			vis->setValue(x - quarterSpan);
		} else if ($nc(this->r)->x + $nc(this->r)->width > i->left + vis->getExtent()) {
			vis->setValue(x - (3 * quarterSpan));
		}
		if (startRect != nullptr) {
			try {
				$var($Rectangle, endRect, nullptr);
				$assign(endRect, $nc(ui)->modelToView(field, dot, bias));
				if (endRect != nullptr && !endRect->equals(startRect)) {
					$WindowsTextFieldUI$WindowsFieldCaret::access$100(this->this$0, endRect);
				}
			} catch ($BadLocationException&) {
				$catch();
			}
		}
	}
}

WindowsTextFieldUI$WindowsFieldCaret$SafeScroller::WindowsTextFieldUI$WindowsFieldCaret$SafeScroller() {
}

$Class* WindowsTextFieldUI$WindowsFieldCaret$SafeScroller::load$($String* name, bool initialize) {
	$loadClass(WindowsTextFieldUI$WindowsFieldCaret$SafeScroller, name, initialize, &_WindowsTextFieldUI$WindowsFieldCaret$SafeScroller_ClassInfo_, allocate$WindowsTextFieldUI$WindowsFieldCaret$SafeScroller);
	return class$;
}

$Class* WindowsTextFieldUI$WindowsFieldCaret$SafeScroller::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com