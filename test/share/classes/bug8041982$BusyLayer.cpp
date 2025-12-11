#include <bug8041982$BusyLayer.h>

#include <bug8041982.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/net/URL.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/plaf/LayerUI.h>
#include <jcpp.h>

using $bug8041982 = ::bug8041982;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JLayer = ::javax::swing::JLayer;
using $LayerUI = ::javax::swing::plaf::LayerUI;

$FieldInfo _bug8041982$BusyLayer_FieldInfo_[] = {
	{"this$0", "Lbug8041982;", nullptr, $FINAL | $SYNTHETIC, $field(bug8041982$BusyLayer, this$0)},
	{"animated", "Z", nullptr, $PRIVATE | $VOLATILE, $field(bug8041982$BusyLayer, animated)},
	{"icon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(bug8041982$BusyLayer, icon)},
	{"imageUpdateCount", "I", nullptr, $PRIVATE, $field(bug8041982$BusyLayer, imageUpdateCount)},
	{}
};

$MethodInfo _bug8041982$BusyLayer_MethodInfo_[] = {
	{"<init>", "(Lbug8041982;)V", nullptr, $PRIVATE, $method(static_cast<void(bug8041982$BusyLayer::*)($bug8041982*)>(&bug8041982$BusyLayer::init$))},
	{"applyPropertyChange", "(Ljava/beans/PropertyChangeEvent;Ljavax/swing/JLayer;)V", nullptr, $PUBLIC},
	{"imageUpdate", "(Ljava/awt/Image;IIIIILjavax/swing/JLayer;)Z", "(Ljava/awt/Image;IIIIILjavax/swing/JLayer<+Ljavax/swing/JComponent;>;)Z", $PUBLIC},
	{"isAnimated", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"setAnimated", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug8041982$BusyLayer_InnerClassesInfo_[] = {
	{"bug8041982$BusyLayer", "bug8041982", "BusyLayer", $PRIVATE},
	{}
};

$ClassInfo _bug8041982$BusyLayer_ClassInfo_ = {
	$ACC_SUPER,
	"bug8041982$BusyLayer",
	"javax.swing.plaf.LayerUI",
	nullptr,
	_bug8041982$BusyLayer_FieldInfo_,
	_bug8041982$BusyLayer_MethodInfo_,
	"Ljavax/swing/plaf/LayerUI<Ljavax/swing/JComponent;>;",
	nullptr,
	_bug8041982$BusyLayer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8041982"
};

$Object* allocate$bug8041982$BusyLayer($Class* clazz) {
	return $of($alloc(bug8041982$BusyLayer));
}

void bug8041982$BusyLayer::init$($bug8041982* this$0) {
	$beforeCallerSensitive();
	$set(this, this$0, this$0);
	$LayerUI::init$();
	this->animated = true;
	$load($bug8041982);
	$set(this, icon, $new($ImageIcon, $($bug8041982::class$->getResource("duke.gif"_s))));
}

void bug8041982$BusyLayer::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$LayerUI::paint(g, c);
	if (isAnimated()) {
		$var($Component, var$0, static_cast<$Component*>(c));
		$var($Graphics, var$1, g);
		int32_t var$3 = $nc(c)->getWidth() / 2;
		int32_t var$2 = var$3 - $nc(this->icon)->getIconWidth() / 2;
		int32_t var$4 = c->getHeight() / 2;
		$nc(this->icon)->paintIcon(var$0, var$1, var$2, var$4 - $nc(this->icon)->getIconHeight() / 2);
	}
}

bool bug8041982$BusyLayer::isAnimated() {
	return this->animated;
}

void bug8041982$BusyLayer::setAnimated(bool animated) {
	$useLocalCurrentObjectStackCache();
	if (this->animated != animated) {
		this->animated = animated;
		$var($String, var$0, "animated"_s);
		$var($Object, var$1, $of($Boolean::valueOf(!animated)));
		firePropertyChange(var$0, var$1, $($Boolean::valueOf(animated)));
	}
}

void bug8041982$BusyLayer::applyPropertyChange($PropertyChangeEvent* evt, $JLayer* l) {
	$nc(l)->repaint();
}

bool bug8041982$BusyLayer::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h, $JLayer* l) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({"imageUpdate "_s, $$str(this->imageUpdateCount)}));
	if (this->imageUpdateCount++ == 100) {
		setAnimated(false);
	} else if (this->imageUpdateCount > 100) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
	bool var$0 = isAnimated();
	return var$0 && $LayerUI::imageUpdate(img, infoflags, x, y, w, h, l);
}

bug8041982$BusyLayer::bug8041982$BusyLayer() {
}

$Class* bug8041982$BusyLayer::load$($String* name, bool initialize) {
	$loadClass(bug8041982$BusyLayer, name, initialize, &_bug8041982$BusyLayer_ClassInfo_, allocate$bug8041982$BusyLayer);
	return class$;
}

$Class* bug8041982$BusyLayer::class$ = nullptr;