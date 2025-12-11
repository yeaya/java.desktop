#include <com/sun/java/swing/plaf/windows/XPStyle$XPStatefulFillBorder.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$XPFillBorder.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef NORMAL

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsComboBoxUI = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$XPFillBorder = ::com::sun::java::swing::plaf::windows::XPStyle$XPFillBorder;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _XPStyle$XPStatefulFillBorder_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/XPStyle;", nullptr, $FINAL | $SYNTHETIC, $field(XPStyle$XPStatefulFillBorder, this$0)},
	{"part", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PRIVATE | $FINAL, $field(XPStyle$XPStatefulFillBorder, part)},
	{"prop", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PRIVATE | $FINAL, $field(XPStyle$XPStatefulFillBorder, prop)},
	{}
};

$MethodInfo _XPStyle$XPStatefulFillBorder_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/XPStyle;Ljava/awt/Color;ILcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;)V", nullptr, 0, $method(static_cast<void(XPStyle$XPStatefulFillBorder::*)($XPStyle*,$Color*,int32_t,$TMSchema$Part*,$TMSchema$Prop*)>(&XPStyle$XPStatefulFillBorder::init$))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XPStyle$XPStatefulFillBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.XPStyle$XPStatefulFillBorder", "com.sun.java.swing.plaf.windows.XPStyle", "XPStatefulFillBorder", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.XPStyle$XPFillBorder", "com.sun.java.swing.plaf.windows.XPStyle", "XPFillBorder", $PRIVATE},
	{}
};

$ClassInfo _XPStyle$XPStatefulFillBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.XPStyle$XPStatefulFillBorder",
	"com.sun.java.swing.plaf.windows.XPStyle$XPFillBorder",
	nullptr,
	_XPStyle$XPStatefulFillBorder_FieldInfo_,
	_XPStyle$XPStatefulFillBorder_MethodInfo_,
	nullptr,
	nullptr,
	_XPStyle$XPStatefulFillBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.XPStyle"
};

$Object* allocate$XPStyle$XPStatefulFillBorder($Class* clazz) {
	return $of($alloc(XPStyle$XPStatefulFillBorder));
}

void XPStyle$XPStatefulFillBorder::init$($XPStyle* this$0, $Color* color, int32_t thickness, $TMSchema$Part* part, $TMSchema$Prop* prop) {
	$set(this, this$0, this$0);
	$XPStyle$XPFillBorder::init$(this$0, color, thickness);
	$set(this, part, part);
	$set(this, prop, prop);
}

void XPStyle$XPStatefulFillBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$init($TMSchema$State);
	$TMSchema$State* state = $TMSchema$State::NORMAL;
	if ($instanceOf($JComboBox, c)) {
		$var($JComboBox, cb, $cast($JComboBox, c));
		if ($instanceOf($WindowsComboBoxUI, $($cast($ComboBoxUI, $nc(cb)->getUI())))) {
			$var($WindowsComboBoxUI, wcb, $cast($WindowsComboBoxUI, $cast($ComboBoxUI, cb->getUI())));
			state = $nc(wcb)->getXPComboBoxState(cb);
		}
	}
	$init($Color);
	$set(this, lineColor, this->this$0->getColor(c, this->part, state, this->prop, $Color::black));
	$XPStyle$XPFillBorder::paintBorder(c, g, x, y, width, height);
}

XPStyle$XPStatefulFillBorder::XPStyle$XPStatefulFillBorder() {
}

$Class* XPStyle$XPStatefulFillBorder::load$($String* name, bool initialize) {
	$loadClass(XPStyle$XPStatefulFillBorder, name, initialize, &_XPStyle$XPStatefulFillBorder_ClassInfo_, allocate$XPStyle$XPStatefulFillBorder);
	return class$;
}

$Class* XPStyle$XPStatefulFillBorder::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com