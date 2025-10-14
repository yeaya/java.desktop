#include <javax/swing/plaf/metal/MetalFileChooserUI$5.h>

#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ACCESSORY_CHANGED_PROPERTY
#undef APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY
#undef APPROVE_BUTTON_TEXT_CHANGED_PROPERTY
#undef APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY
#undef CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY
#undef DIALOG_TYPE_CHANGED_PROPERTY
#undef DIRECTORY_CHANGED_PROPERTY
#undef FILE_FILTER_CHANGED_PROPERTY
#undef FILE_SELECTION_MODE_CHANGED_PROPERTY
#undef SELECTED_FILES_CHANGED_PROPERTY
#undef SELECTED_FILE_CHANGED_PROPERTY

using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JTextField = ::javax::swing::JTextField;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$5_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$5, this$0)},
	{}
};

$MethodInfo _MetalFileChooserUI$5_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, 0, $method(static_cast<void(MetalFileChooserUI$5::*)($MetalFileChooserUI*)>(&MetalFileChooserUI$5::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalFileChooserUI$5_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.MetalFileChooserUI",
	"createPropertyChangeListener",
	"(Ljavax/swing/JFileChooser;)Ljava/beans/PropertyChangeListener;"
};

$InnerClassInfo _MetalFileChooserUI$5_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalFileChooserUI$5_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$5",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_MetalFileChooserUI$5_FieldInfo_,
	_MetalFileChooserUI$5_MethodInfo_,
	nullptr,
	&_MetalFileChooserUI$5_EnclosingMethodInfo_,
	_MetalFileChooserUI$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$5($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$5));
}

void MetalFileChooserUI$5::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void MetalFileChooserUI$5::propertyChange($PropertyChangeEvent* e) {
	$var($String, s, $nc(e)->getPropertyName());
	$init($JFileChooser);
	if ($nc(s)->equals($JFileChooser::SELECTED_FILE_CHANGED_PROPERTY)) {
		this->this$0->doSelectedFileChanged(e);
	} else {
		if (s->equals($JFileChooser::SELECTED_FILES_CHANGED_PROPERTY)) {
			this->this$0->doSelectedFilesChanged(e);
		} else {
			if (s->equals($JFileChooser::DIRECTORY_CHANGED_PROPERTY)) {
				this->this$0->doDirectoryChanged(e);
			} else {
				if (s->equals($JFileChooser::FILE_FILTER_CHANGED_PROPERTY)) {
					this->this$0->doFilterChanged(e);
				} else {
					if (s->equals($JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY)) {
						this->this$0->doFileSelectionModeChanged(e);
					} else {
						if (s->equals($JFileChooser::ACCESSORY_CHANGED_PROPERTY)) {
							this->this$0->doAccessoryChanged(e);
						} else {
							bool var$1 = s->equals($JFileChooser::APPROVE_BUTTON_TEXT_CHANGED_PROPERTY);
							if (var$1 || s->equals($JFileChooser::APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY)) {
								this->this$0->doApproveButtonTextChanged(e);
							} else {
								if (s->equals($JFileChooser::DIALOG_TYPE_CHANGED_PROPERTY)) {
									this->this$0->doDialogTypeChanged(e);
								} else {
									if (s->equals($JFileChooser::APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY)) {
										this->this$0->doApproveButtonMnemonicChanged(e);
									} else {
										if (s->equals($JFileChooser::CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY)) {
											this->this$0->doControlButtonsChanged(e);
										} else if (s->equals("componentOrientation"_s)) {
											$var($ComponentOrientation, o, $cast($ComponentOrientation, e->getNewValue()));
											$var($JFileChooser, cc, $cast($JFileChooser, e->getSource()));
											if (!$equals(o, e->getOldValue())) {
												$nc(cc)->applyComponentOrientation(o);
											}
										} else if (s == "FileChooser.useShellFolder"_s) {
											this->this$0->doDirectoryChanged(e);
										} else if (s->equals("ancestor"_s)) {
											bool var$2 = e->getOldValue() == nullptr;
											if (var$2 && e->getNewValue() != nullptr) {
												$nc(this->this$0->fileNameTextField)->selectAll();
												$nc(this->this$0->fileNameTextField)->requestFocus();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

MetalFileChooserUI$5::MetalFileChooserUI$5() {
}

$Class* MetalFileChooserUI$5::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$5, name, initialize, &_MetalFileChooserUI$5_ClassInfo_, allocate$MetalFileChooserUI$5);
	return class$;
}

$Class* MetalFileChooserUI$5::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax