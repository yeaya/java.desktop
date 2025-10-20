#include <com/sun/java/swing/plaf/motif/MotifBorders$MenuBarBorder.h>

#include <com/sun/java/swing/plaf/motif/MotifBorders$ButtonBorder.h>
#include <com/sun/java/swing/plaf/motif/MotifBorders.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JMenuBar.h>
#include <jcpp.h>

using $MotifBorders = ::com::sun::java::swing::plaf::motif::MotifBorders;
using $MotifBorders$ButtonBorder = ::com::sun::java::swing::plaf::motif::MotifBorders$ButtonBorder;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuBar = ::javax::swing::JMenuBar;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifBorders$MenuBarBorder_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifBorders$MenuBarBorder::*)($Color*,$Color*,$Color*,$Color*)>(&MotifBorders$MenuBarBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifBorders$MenuBarBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifBorders$MenuBarBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "MenuBarBorder", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifBorders$ButtonBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "ButtonBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifBorders$MenuBarBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifBorders$MenuBarBorder",
	"com.sun.java.swing.plaf.motif.MotifBorders$ButtonBorder",
	nullptr,
	nullptr,
	_MotifBorders$MenuBarBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MotifBorders$MenuBarBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifBorders"
};

$Object* allocate$MotifBorders$MenuBarBorder($Class* clazz) {
	return $of($alloc(MotifBorders$MenuBarBorder));
}

void MotifBorders$MenuBarBorder::init$($Color* shadow, $Color* highlight, $Color* darkShadow, $Color* focus) {
	$MotifBorders$ButtonBorder::init$(shadow, highlight, darkShadow, focus);
}

void MotifBorders$MenuBarBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($JMenuBar, c))) {
		return;
	}
	$var($JMenuBar, menuBar, $cast($JMenuBar, c));
	if ($nc(menuBar)->isBorderPainted() == true) {
		$var($Dimension, size, menuBar->getSize());
		$MotifBorders::drawBezel(g, x, y, $nc(size)->width, size->height, false, false, this->shadow, this->highlight, this->darkShadow, this->focus);
	}
}

$Insets* MotifBorders$MenuBarBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(6, 6, 6, 6);
	return insets;
}

MotifBorders$MenuBarBorder::MotifBorders$MenuBarBorder() {
}

$Class* MotifBorders$MenuBarBorder::load$($String* name, bool initialize) {
	$loadClass(MotifBorders$MenuBarBorder, name, initialize, &_MotifBorders$MenuBarBorder_ClassInfo_, allocate$MotifBorders$MenuBarBorder);
	return class$;
}

$Class* MotifBorders$MenuBarBorder::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com