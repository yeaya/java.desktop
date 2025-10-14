#include <javax/swing/colorchooser/DefaultSwatchChooserPanel$RecentSwatchKeyListener.h>

#include <java/awt/Color.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/colorchooser/DefaultSwatchChooserPanel.h>
#include <javax/swing/colorchooser/RecentSwatchPanel.h>
#include <javax/swing/colorchooser/SwatchPanel.h>
#include <jcpp.h>

#undef VK_SPACE

using $Color = ::java::awt::Color;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;
using $DefaultSwatchChooserPanel = ::javax::swing::colorchooser::DefaultSwatchChooserPanel;
using $RecentSwatchPanel = ::javax::swing::colorchooser::RecentSwatchPanel;
using $SwatchPanel = ::javax::swing::colorchooser::SwatchPanel;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _DefaultSwatchChooserPanel$RecentSwatchKeyListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/colorchooser/DefaultSwatchChooserPanel;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultSwatchChooserPanel$RecentSwatchKeyListener, this$0)},
	{}
};

$MethodInfo _DefaultSwatchChooserPanel$RecentSwatchKeyListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/colorchooser/DefaultSwatchChooserPanel;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultSwatchChooserPanel$RecentSwatchKeyListener::*)($DefaultSwatchChooserPanel*)>(&DefaultSwatchChooserPanel$RecentSwatchKeyListener::init$))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultSwatchChooserPanel$RecentSwatchKeyListener_InnerClassesInfo_[] = {
	{"javax.swing.colorchooser.DefaultSwatchChooserPanel$RecentSwatchKeyListener", "javax.swing.colorchooser.DefaultSwatchChooserPanel", "RecentSwatchKeyListener", $PRIVATE},
	{}
};

$ClassInfo _DefaultSwatchChooserPanel$RecentSwatchKeyListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.DefaultSwatchChooserPanel$RecentSwatchKeyListener",
	"java.awt.event.KeyAdapter",
	nullptr,
	_DefaultSwatchChooserPanel$RecentSwatchKeyListener_FieldInfo_,
	_DefaultSwatchChooserPanel$RecentSwatchKeyListener_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultSwatchChooserPanel$RecentSwatchKeyListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.colorchooser.DefaultSwatchChooserPanel"
};

$Object* allocate$DefaultSwatchChooserPanel$RecentSwatchKeyListener($Class* clazz) {
	return $of($alloc(DefaultSwatchChooserPanel$RecentSwatchKeyListener));
}

void DefaultSwatchChooserPanel$RecentSwatchKeyListener::init$($DefaultSwatchChooserPanel* this$0) {
	$set(this, this$0, this$0);
	$KeyAdapter::init$();
}

void DefaultSwatchChooserPanel$RecentSwatchKeyListener::keyPressed($KeyEvent* e) {
	if ($KeyEvent::VK_SPACE == $nc(e)->getKeyCode()) {
		$var($Color, color, $nc(this->this$0->recentSwatchPanel)->getSelectedColor());
		this->this$0->setSelectedColor(color);
	}
}

DefaultSwatchChooserPanel$RecentSwatchKeyListener::DefaultSwatchChooserPanel$RecentSwatchKeyListener() {
}

$Class* DefaultSwatchChooserPanel$RecentSwatchKeyListener::load$($String* name, bool initialize) {
	$loadClass(DefaultSwatchChooserPanel$RecentSwatchKeyListener, name, initialize, &_DefaultSwatchChooserPanel$RecentSwatchKeyListener_ClassInfo_, allocate$DefaultSwatchChooserPanel$RecentSwatchKeyListener);
	return class$;
}

$Class* DefaultSwatchChooserPanel$RecentSwatchKeyListener::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax