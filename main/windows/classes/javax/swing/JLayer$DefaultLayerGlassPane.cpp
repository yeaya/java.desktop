#include <javax/swing/JLayer$DefaultLayerGlassPane.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/MouseWheelListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $MouseListenerArray = $Array<::java::awt::event::MouseListener>;
using $MouseMotionListenerArray = $Array<::java::awt::event::MouseMotionListener>;
using $MouseWheelListenerArray = $Array<::java::awt::event::MouseWheelListener>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLayer = ::javax::swing::JLayer;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

$MethodInfo _JLayer$DefaultLayerGlassPane_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JLayer$DefaultLayerGlassPane::*)()>(&JLayer$DefaultLayerGlassPane::init$))},
	{"contains", "(II)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JLayer$DefaultLayerGlassPane_InnerClassesInfo_[] = {
	{"javax.swing.JLayer$DefaultLayerGlassPane", "javax.swing.JLayer", "DefaultLayerGlassPane", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JLayer$DefaultLayerGlassPane_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JLayer$DefaultLayerGlassPane",
	"javax.swing.JPanel",
	nullptr,
	nullptr,
	_JLayer$DefaultLayerGlassPane_MethodInfo_,
	nullptr,
	nullptr,
	_JLayer$DefaultLayerGlassPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JLayer"
};

$Object* allocate$JLayer$DefaultLayerGlassPane($Class* clazz) {
	return $of($alloc(JLayer$DefaultLayerGlassPane));
}

void JLayer$DefaultLayerGlassPane::init$() {
	$JPanel::init$();
	setOpaque(false);
}

bool JLayer$DefaultLayerGlassPane::contains(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < getComponentCount(); ++i) {
		$var($Component, c, getComponent(i));
		$var($Point, point, $SwingUtilities::convertPoint(this, $$new($Point, x, y), c));
		bool var$0 = $nc(c)->isVisible();
		if (var$0 && c->contains(point)) {
			return true;
		}
	}
	bool var$3 = $nc($(getMouseListeners()))->length == 0;
	bool var$2 = var$3 && $nc($(getMouseMotionListeners()))->length == 0;
	bool var$1 = var$2 && $nc($(getMouseWheelListeners()))->length == 0;
	if (var$1 && !isCursorSet()) {
		return false;
	}
	return $JPanel::contains(x, y);
}

JLayer$DefaultLayerGlassPane::JLayer$DefaultLayerGlassPane() {
}

$Class* JLayer$DefaultLayerGlassPane::load$($String* name, bool initialize) {
	$loadClass(JLayer$DefaultLayerGlassPane, name, initialize, &_JLayer$DefaultLayerGlassPane_ClassInfo_, allocate$JLayer$DefaultLayerGlassPane);
	return class$;
}

$Class* JLayer$DefaultLayerGlassPane::class$ = nullptr;

	} // swing
} // javax