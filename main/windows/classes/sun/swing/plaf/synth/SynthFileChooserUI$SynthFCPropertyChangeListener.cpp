#include <sun/swing/plaf/synth/SynthFileChooserUI$SynthFCPropertyChangeListener.h>

#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JFileChooser.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <jcpp.h>

#undef ACCESSORY_CHANGED_PROPERTY
#undef APPROVE_BUTTON_TEXT_CHANGED_PROPERTY
#undef APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY
#undef CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY
#undef DIALOG_TYPE_CHANGED_PROPERTY
#undef DIRECTORY_CHANGED_PROPERTY
#undef FILE_SELECTION_MODE_CHANGED_PROPERTY
#undef MULTI_SELECTION_ENABLED_CHANGED_PROPERTY
#undef SELECTED_FILES_CHANGED_PROPERTY
#undef SELECTED_FILE_CHANGED_PROPERTY

using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUI$SynthFCPropertyChangeListener_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUI$SynthFCPropertyChangeListener, this$0)},
	{}
};

$MethodInfo _SynthFileChooserUI$SynthFCPropertyChangeListener_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUI;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthFileChooserUI$SynthFCPropertyChangeListener::*)($SynthFileChooserUI*)>(&SynthFileChooserUI$SynthFCPropertyChangeListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthFileChooserUI$SynthFCPropertyChangeListener_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUI$SynthFCPropertyChangeListener", "sun.swing.plaf.synth.SynthFileChooserUI", "SynthFCPropertyChangeListener", $PRIVATE},
	{}
};

$ClassInfo _SynthFileChooserUI$SynthFCPropertyChangeListener_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUI$SynthFCPropertyChangeListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_SynthFileChooserUI$SynthFCPropertyChangeListener_FieldInfo_,
	_SynthFileChooserUI$SynthFCPropertyChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_SynthFileChooserUI$SynthFCPropertyChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUI"
};

$Object* allocate$SynthFileChooserUI$SynthFCPropertyChangeListener($Class* clazz) {
	return $of($alloc(SynthFileChooserUI$SynthFCPropertyChangeListener));
}

void SynthFileChooserUI$SynthFCPropertyChangeListener::init$($SynthFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthFileChooserUI$SynthFCPropertyChangeListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(e)->getPropertyName());
	$init($JFileChooser);
	if ($nc(prop)->equals($JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY)) {
		this->this$0->doFileSelectionModeChanged(e);
	} else {
		if (prop->equals($JFileChooser::SELECTED_FILE_CHANGED_PROPERTY)) {
			this->this$0->doSelectedFileChanged(e);
		} else {
			if (prop->equals($JFileChooser::SELECTED_FILES_CHANGED_PROPERTY)) {
				this->this$0->doSelectedFilesChanged(e);
			} else {
				if (prop->equals($JFileChooser::DIRECTORY_CHANGED_PROPERTY)) {
					this->this$0->doDirectoryChanged(e);
				} else {
					if (prop == $JFileChooser::MULTI_SELECTION_ENABLED_CHANGED_PROPERTY) {
						this->this$0->doMultiSelectionChanged(e);
					} else {
						if (prop == $JFileChooser::ACCESSORY_CHANGED_PROPERTY) {
							this->this$0->doAccessoryChanged(e);
						} else {
							if (prop == $JFileChooser::APPROVE_BUTTON_TEXT_CHANGED_PROPERTY || prop == $JFileChooser::APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY || prop == $JFileChooser::DIALOG_TYPE_CHANGED_PROPERTY || prop == $JFileChooser::CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY) {
								this->this$0->doControlButtonsChanged(e);
							} else if (prop->equals("componentOrientation"_s)) {
								$var($ComponentOrientation, o, $cast($ComponentOrientation, e->getNewValue()));
								$var($JFileChooser, cc, $cast($JFileChooser, e->getSource()));
								if (o != $cast($ComponentOrientation, e->getOldValue())) {
									$nc(cc)->applyComponentOrientation(o);
								}
							} else if (prop->equals("ancestor"_s)) {
								this->this$0->doAncestorChanged(e);
							}
						}
					}
				}
			}
		}
	}
}

SynthFileChooserUI$SynthFCPropertyChangeListener::SynthFileChooserUI$SynthFCPropertyChangeListener() {
}

$Class* SynthFileChooserUI$SynthFCPropertyChangeListener::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUI$SynthFCPropertyChangeListener, name, initialize, &_SynthFileChooserUI$SynthFCPropertyChangeListener_ClassInfo_, allocate$SynthFileChooserUI$SynthFCPropertyChangeListener);
	return class$;
}

$Class* SynthFileChooserUI$SynthFCPropertyChangeListener::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun