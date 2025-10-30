#include <javax/swing/colorchooser/DefaultSwatchChooserPanel$RecentSwatchListener.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/colorchooser/DefaultSwatchChooserPanel.h>
#include <javax/swing/colorchooser/RecentSwatchPanel.h>
#include <javax/swing/colorchooser/SwatchPanel.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;
using $DefaultSwatchChooserPanel = ::javax::swing::colorchooser::DefaultSwatchChooserPanel;
using $RecentSwatchPanel = ::javax::swing::colorchooser::RecentSwatchPanel;
using $SwatchPanel = ::javax::swing::colorchooser::SwatchPanel;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _DefaultSwatchChooserPanel$RecentSwatchListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/colorchooser/DefaultSwatchChooserPanel;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultSwatchChooserPanel$RecentSwatchListener, this$0)},
	{}
};

$MethodInfo _DefaultSwatchChooserPanel$RecentSwatchListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/colorchooser/DefaultSwatchChooserPanel;)V", nullptr, 0, $method(static_cast<void(DefaultSwatchChooserPanel$RecentSwatchListener::*)($DefaultSwatchChooserPanel*)>(&DefaultSwatchChooserPanel$RecentSwatchListener::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultSwatchChooserPanel$RecentSwatchListener_InnerClassesInfo_[] = {
	{"javax.swing.colorchooser.DefaultSwatchChooserPanel$RecentSwatchListener", "javax.swing.colorchooser.DefaultSwatchChooserPanel", "RecentSwatchListener", 0},
	{}
};

$ClassInfo _DefaultSwatchChooserPanel$RecentSwatchListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.DefaultSwatchChooserPanel$RecentSwatchListener",
	"java.awt.event.MouseAdapter",
	"java.io.Serializable",
	_DefaultSwatchChooserPanel$RecentSwatchListener_FieldInfo_,
	_DefaultSwatchChooserPanel$RecentSwatchListener_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultSwatchChooserPanel$RecentSwatchListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.colorchooser.DefaultSwatchChooserPanel"
};

$Object* allocate$DefaultSwatchChooserPanel$RecentSwatchListener($Class* clazz) {
	return $of($alloc(DefaultSwatchChooserPanel$RecentSwatchListener));
}

int32_t DefaultSwatchChooserPanel$RecentSwatchListener::hashCode() {
	 return this->$MouseAdapter::hashCode();
}

bool DefaultSwatchChooserPanel$RecentSwatchListener::equals(Object$* arg0) {
	 return this->$MouseAdapter::equals(arg0);
}

$Object* DefaultSwatchChooserPanel$RecentSwatchListener::clone() {
	 return this->$MouseAdapter::clone();
}

$String* DefaultSwatchChooserPanel$RecentSwatchListener::toString() {
	 return this->$MouseAdapter::toString();
}

void DefaultSwatchChooserPanel$RecentSwatchListener::finalize() {
	this->$MouseAdapter::finalize();
}

void DefaultSwatchChooserPanel$RecentSwatchListener::init$($DefaultSwatchChooserPanel* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void DefaultSwatchChooserPanel$RecentSwatchListener::mousePressed($MouseEvent* e) {
	if (this->this$0->isEnabled()) {
		int32_t var$0 = $nc(e)->getX();
		$var($Color, color, $nc(this->this$0->recentSwatchPanel)->getColorForLocation(var$0, e->getY()));
		int32_t var$1 = $nc(e)->getX();
		$nc(this->this$0->recentSwatchPanel)->setSelectedColorFromLocation(var$1, e->getY());
		this->this$0->setSelectedColor(color);
		$nc(this->this$0->recentSwatchPanel)->requestFocusInWindow();
	}
}

DefaultSwatchChooserPanel$RecentSwatchListener::DefaultSwatchChooserPanel$RecentSwatchListener() {
}

$Class* DefaultSwatchChooserPanel$RecentSwatchListener::load$($String* name, bool initialize) {
	$loadClass(DefaultSwatchChooserPanel$RecentSwatchListener, name, initialize, &_DefaultSwatchChooserPanel$RecentSwatchListener_ClassInfo_, allocate$DefaultSwatchChooserPanel$RecentSwatchListener);
	return class$;
}

$Class* DefaultSwatchChooserPanel$RecentSwatchListener::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax