#include <javax/swing/plaf/synth/SynthLookAndFeel$Handler.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef BACKGROUND
#undef FALSE
#undef FOCUSED

using $Color = ::java::awt::Color;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthLookAndFeel$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(SynthLookAndFeel$Handler, this$0)},
	{}
};

$MethodInfo _SynthLookAndFeel$Handler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthLookAndFeel;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthLookAndFeel$Handler::*)($SynthLookAndFeel*)>(&SynthLookAndFeel$Handler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"repaintIfBackgroundsDiffer", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthLookAndFeel$Handler::*)($JComponent*)>(&SynthLookAndFeel$Handler::repaintIfBackgroundsDiffer))},
	{}
};

$InnerClassInfo _SynthLookAndFeel$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthLookAndFeel$Handler", "javax.swing.plaf.synth.SynthLookAndFeel", "Handler", $PRIVATE},
	{}
};

$ClassInfo _SynthLookAndFeel$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthLookAndFeel$Handler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_SynthLookAndFeel$Handler_FieldInfo_,
	_SynthLookAndFeel$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_SynthLookAndFeel$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthLookAndFeel"
};

$Object* allocate$SynthLookAndFeel$Handler($Class* clazz) {
	return $of($alloc(SynthLookAndFeel$Handler));
}

void SynthLookAndFeel$Handler::init$($SynthLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

void SynthLookAndFeel$Handler::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(evt)->getPropertyName());
	$var($Object, newValue, evt->getNewValue());
	$var($Object, oldValue, evt->getOldValue());
	if ("focusOwner"_s == propertyName) {
		if ($instanceOf($JComponent, oldValue)) {
			repaintIfBackgroundsDiffer($cast($JComponent, oldValue));
		}
		if ($instanceOf($JComponent, newValue)) {
			repaintIfBackgroundsDiffer($cast($JComponent, newValue));
		}
	} else if ("managingFocus"_s == propertyName) {
		$var($KeyboardFocusManager, manager, $cast($KeyboardFocusManager, evt->getSource()));
		$init($Boolean);
		if ($nc($of(newValue))->equals($Boolean::FALSE)) {
			$nc(manager)->removePropertyChangeListener(this->this$0->_handler);
		} else {
			$nc(manager)->addPropertyChangeListener(this->this$0->_handler);
		}
	}
}

void SynthLookAndFeel$Handler::repaintIfBackgroundsDiffer($JComponent* comp) {
	$useLocalCurrentObjectStackCache();
	$var($ComponentUI, ui, $nc(comp)->getUI());
	if ($instanceOf($SynthUI, ui)) {
		$var($SynthUI, synthUI, $cast($SynthUI, ui));
		$var($SynthContext, context, $nc(synthUI)->getContext(comp));
		$var($SynthStyle, style, $nc(context)->getStyle());
		int32_t state = context->getComponentState();
		$init($ColorType);
		$var($Color, currBG, $nc(style)->getColor(context, $ColorType::BACKGROUND));
		state ^= $SynthConstants::FOCUSED;
		context->setComponentState(state);
		$var($Color, lastBG, style->getColor(context, $ColorType::BACKGROUND));
		state ^= $SynthConstants::FOCUSED;
		context->setComponentState(state);
		if (currBG != nullptr && !currBG->equals(lastBG)) {
			comp->repaint();
		}
	}
}

SynthLookAndFeel$Handler::SynthLookAndFeel$Handler() {
}

$Class* SynthLookAndFeel$Handler::load$($String* name, bool initialize) {
	$loadClass(SynthLookAndFeel$Handler, name, initialize, &_SynthLookAndFeel$Handler_ClassInfo_, allocate$SynthLookAndFeel$Handler);
	return class$;
}

$Class* SynthLookAndFeel$Handler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax