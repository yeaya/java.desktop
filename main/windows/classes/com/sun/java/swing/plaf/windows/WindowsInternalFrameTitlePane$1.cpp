#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane$1.h>

#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $WindowsInternalFrameTitlePane = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsInternalFrameTitlePane$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsInternalFrameTitlePane$1, this$0)},
	{}
};

$MethodInfo _WindowsInternalFrameTitlePane$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;Ljavax/swing/Icon;)V", nullptr, 0, $method(static_cast<void(WindowsInternalFrameTitlePane$1::*)($WindowsInternalFrameTitlePane*,$Icon*)>(&WindowsInternalFrameTitlePane$1::init$))},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _WindowsInternalFrameTitlePane$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane",
	"assembleSystemMenu",
	"()V"
};

$InnerClassInfo _WindowsInternalFrameTitlePane$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsInternalFrameTitlePane$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$1",
	"javax.swing.JLabel",
	nullptr,
	_WindowsInternalFrameTitlePane$1_FieldInfo_,
	_WindowsInternalFrameTitlePane$1_MethodInfo_,
	nullptr,
	&_WindowsInternalFrameTitlePane$1_EnclosingMethodInfo_,
	_WindowsInternalFrameTitlePane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane"
};

$Object* allocate$WindowsInternalFrameTitlePane$1($Class* clazz) {
	return $of($alloc(WindowsInternalFrameTitlePane$1));
}

void WindowsInternalFrameTitlePane$1::init$($WindowsInternalFrameTitlePane* this$0, $Icon* image) {
	$set(this, this$0, this$0);
	$JLabel::init$(image);
}

void WindowsInternalFrameTitlePane$1::paintComponent($Graphics* g$renamed) {
	$var($Graphics, g, g$renamed);
	int32_t x = 0;
	int32_t y = 0;
	int32_t w = getWidth();
	int32_t h = getHeight();
	$assign(g, $nc(g)->create());
	if (isOpaque()) {
		g->setColor($(getBackground()));
		g->fillRect(0, 0, w, h);
	}
	$var($Icon, icon, getIcon());
	int32_t iconWidth = 0;
	int32_t iconHeight = 0;
	bool var$0 = icon != nullptr && (iconWidth = icon->getIconWidth()) > 0;
	if (var$0 && (iconHeight = icon->getIconHeight()) > 0) {
		double drawScale = 0.0;
		if (iconWidth > iconHeight) {
			y = (h - $div(w * iconHeight, iconWidth)) / 2;
			drawScale = w / (double)iconWidth;
		} else {
			x = (w - $div(h * iconWidth, iconHeight)) / 2;
			drawScale = h / (double)iconHeight;
		}
		$nc(($cast($Graphics2D, g)))->translate(x, y);
		($cast($Graphics2D, g))->scale(drawScale, drawScale);
		icon->paintIcon(this, g, 0, 0);
	}
	g->dispose();
}

WindowsInternalFrameTitlePane$1::WindowsInternalFrameTitlePane$1() {
}

$Class* WindowsInternalFrameTitlePane$1::load$($String* name, bool initialize) {
	$loadClass(WindowsInternalFrameTitlePane$1, name, initialize, &_WindowsInternalFrameTitlePane$1_ClassInfo_, allocate$WindowsInternalFrameTitlePane$1);
	return class$;
}

$Class* WindowsInternalFrameTitlePane$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com