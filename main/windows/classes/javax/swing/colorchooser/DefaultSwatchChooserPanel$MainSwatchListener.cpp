#include <javax/swing/colorchooser/DefaultSwatchChooserPanel$MainSwatchListener.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _DefaultSwatchChooserPanel$MainSwatchListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/colorchooser/DefaultSwatchChooserPanel;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultSwatchChooserPanel$MainSwatchListener, this$0)},
	{}
};

$MethodInfo _DefaultSwatchChooserPanel$MainSwatchListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/colorchooser/DefaultSwatchChooserPanel;)V", nullptr, 0, $method(static_cast<void(DefaultSwatchChooserPanel$MainSwatchListener::*)($DefaultSwatchChooserPanel*)>(&DefaultSwatchChooserPanel$MainSwatchListener::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultSwatchChooserPanel$MainSwatchListener_InnerClassesInfo_[] = {
	{"javax.swing.colorchooser.DefaultSwatchChooserPanel$MainSwatchListener", "javax.swing.colorchooser.DefaultSwatchChooserPanel", "MainSwatchListener", 0},
	{}
};

$ClassInfo _DefaultSwatchChooserPanel$MainSwatchListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.DefaultSwatchChooserPanel$MainSwatchListener",
	"java.awt.event.MouseAdapter",
	"java.io.Serializable",
	_DefaultSwatchChooserPanel$MainSwatchListener_FieldInfo_,
	_DefaultSwatchChooserPanel$MainSwatchListener_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultSwatchChooserPanel$MainSwatchListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.colorchooser.DefaultSwatchChooserPanel"
};

$Object* allocate$DefaultSwatchChooserPanel$MainSwatchListener($Class* clazz) {
	return $of($alloc(DefaultSwatchChooserPanel$MainSwatchListener));
}

int32_t DefaultSwatchChooserPanel$MainSwatchListener::hashCode() {
	 return this->$MouseAdapter::hashCode();
}

bool DefaultSwatchChooserPanel$MainSwatchListener::equals(Object$* arg0) {
	 return this->$MouseAdapter::equals(arg0);
}

$Object* DefaultSwatchChooserPanel$MainSwatchListener::clone() {
	 return this->$MouseAdapter::clone();
}

$String* DefaultSwatchChooserPanel$MainSwatchListener::toString() {
	 return this->$MouseAdapter::toString();
}

void DefaultSwatchChooserPanel$MainSwatchListener::finalize() {
	this->$MouseAdapter::finalize();
}

void DefaultSwatchChooserPanel$MainSwatchListener::init$($DefaultSwatchChooserPanel* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void DefaultSwatchChooserPanel$MainSwatchListener::mousePressed($MouseEvent* e) {
	if (this->this$0->isEnabled()) {
		int32_t var$0 = $nc(e)->getX();
		$var($Color, color, $nc(this->this$0->swatchPanel)->getColorForLocation(var$0, e->getY()));
		this->this$0->setSelectedColor(color);
		int32_t var$1 = $nc(e)->getX();
		$nc(this->this$0->swatchPanel)->setSelectedColorFromLocation(var$1, e->getY());
		$nc(this->this$0->recentSwatchPanel)->setMostRecentColor(color);
		$nc(this->this$0->swatchPanel)->requestFocusInWindow();
	}
}

DefaultSwatchChooserPanel$MainSwatchListener::DefaultSwatchChooserPanel$MainSwatchListener() {
}

$Class* DefaultSwatchChooserPanel$MainSwatchListener::load$($String* name, bool initialize) {
	$loadClass(DefaultSwatchChooserPanel$MainSwatchListener, name, initialize, &_DefaultSwatchChooserPanel$MainSwatchListener_ClassInfo_, allocate$DefaultSwatchChooserPanel$MainSwatchListener);
	return class$;
}

$Class* DefaultSwatchChooserPanel$MainSwatchListener::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax