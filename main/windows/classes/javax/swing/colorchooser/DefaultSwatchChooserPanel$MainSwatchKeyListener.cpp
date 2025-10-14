#include <javax/swing/colorchooser/DefaultSwatchChooserPanel$MainSwatchKeyListener.h>

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

$FieldInfo _DefaultSwatchChooserPanel$MainSwatchKeyListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/colorchooser/DefaultSwatchChooserPanel;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultSwatchChooserPanel$MainSwatchKeyListener, this$0)},
	{}
};

$MethodInfo _DefaultSwatchChooserPanel$MainSwatchKeyListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/colorchooser/DefaultSwatchChooserPanel;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultSwatchChooserPanel$MainSwatchKeyListener::*)($DefaultSwatchChooserPanel*)>(&DefaultSwatchChooserPanel$MainSwatchKeyListener::init$))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultSwatchChooserPanel$MainSwatchKeyListener_InnerClassesInfo_[] = {
	{"javax.swing.colorchooser.DefaultSwatchChooserPanel$MainSwatchKeyListener", "javax.swing.colorchooser.DefaultSwatchChooserPanel", "MainSwatchKeyListener", $PRIVATE},
	{}
};

$ClassInfo _DefaultSwatchChooserPanel$MainSwatchKeyListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.DefaultSwatchChooserPanel$MainSwatchKeyListener",
	"java.awt.event.KeyAdapter",
	nullptr,
	_DefaultSwatchChooserPanel$MainSwatchKeyListener_FieldInfo_,
	_DefaultSwatchChooserPanel$MainSwatchKeyListener_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultSwatchChooserPanel$MainSwatchKeyListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.colorchooser.DefaultSwatchChooserPanel"
};

$Object* allocate$DefaultSwatchChooserPanel$MainSwatchKeyListener($Class* clazz) {
	return $of($alloc(DefaultSwatchChooserPanel$MainSwatchKeyListener));
}

void DefaultSwatchChooserPanel$MainSwatchKeyListener::init$($DefaultSwatchChooserPanel* this$0) {
	$set(this, this$0, this$0);
	$KeyAdapter::init$();
}

void DefaultSwatchChooserPanel$MainSwatchKeyListener::keyPressed($KeyEvent* e) {
	if ($KeyEvent::VK_SPACE == $nc(e)->getKeyCode()) {
		$var($Color, color, $nc(this->this$0->swatchPanel)->getSelectedColor());
		this->this$0->setSelectedColor(color);
		$nc(this->this$0->recentSwatchPanel)->setMostRecentColor(color);
	}
}

DefaultSwatchChooserPanel$MainSwatchKeyListener::DefaultSwatchChooserPanel$MainSwatchKeyListener() {
}

$Class* DefaultSwatchChooserPanel$MainSwatchKeyListener::load$($String* name, bool initialize) {
	$loadClass(DefaultSwatchChooserPanel$MainSwatchKeyListener, name, initialize, &_DefaultSwatchChooserPanel$MainSwatchKeyListener_ClassInfo_, allocate$DefaultSwatchChooserPanel$MainSwatchKeyListener);
	return class$;
}

$Class* DefaultSwatchChooserPanel$MainSwatchKeyListener::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax