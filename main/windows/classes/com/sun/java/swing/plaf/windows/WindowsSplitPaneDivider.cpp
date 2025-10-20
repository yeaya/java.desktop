#include <com/sun/java/swing/plaf/windows/WindowsSplitPaneDivider.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;
using $UIManager = ::javax::swing::UIManager;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsSplitPaneDivider_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsSplitPaneDivider::*)($BasicSplitPaneUI*)>(&WindowsSplitPaneDivider::init$))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowsSplitPaneDivider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsSplitPaneDivider",
	"javax.swing.plaf.basic.BasicSplitPaneDivider",
	nullptr,
	nullptr,
	_WindowsSplitPaneDivider_MethodInfo_
};

$Object* allocate$WindowsSplitPaneDivider($Class* clazz) {
	return $of($alloc(WindowsSplitPaneDivider));
}

void WindowsSplitPaneDivider::init$($BasicSplitPaneUI* ui) {
	$BasicSplitPaneDivider::init$(ui);
}

void WindowsSplitPaneDivider::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Color, bgColor, ($nc(this->splitPane)->hasFocus()) ? $UIManager::getColor("SplitPane.shadow"_s) : getBackground());
	$var($Dimension, size, getSize());
	if (bgColor != nullptr) {
		$nc(g)->setColor(bgColor);
		g->fillRect(0, 0, $nc(size)->width, size->height);
	}
	$BasicSplitPaneDivider::paint(g);
}

WindowsSplitPaneDivider::WindowsSplitPaneDivider() {
}

$Class* WindowsSplitPaneDivider::load$($String* name, bool initialize) {
	$loadClass(WindowsSplitPaneDivider, name, initialize, &_WindowsSplitPaneDivider_ClassInfo_, allocate$WindowsSplitPaneDivider);
	return class$;
}

$Class* WindowsSplitPaneDivider::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com