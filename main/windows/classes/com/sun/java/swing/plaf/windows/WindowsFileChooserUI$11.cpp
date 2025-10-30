#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$11.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTextField.h>
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

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
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
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$11_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$11, this$0)},
	{}
};

$MethodInfo _WindowsFileChooserUI$11_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$11::*)($WindowsFileChooserUI*)>(&WindowsFileChooserUI$11::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$11_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"createPropertyChangeListener",
	"(Ljavax/swing/JFileChooser;)Ljava/beans/PropertyChangeListener;"
};

$InnerClassInfo _WindowsFileChooserUI$11_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$11", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$11_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$11",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_WindowsFileChooserUI$11_FieldInfo_,
	_WindowsFileChooserUI$11_MethodInfo_,
	nullptr,
	&_WindowsFileChooserUI$11_EnclosingMethodInfo_,
	_WindowsFileChooserUI$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$11($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$11));
}

void WindowsFileChooserUI$11::init$($WindowsFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void WindowsFileChooserUI$11::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
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
										} else if (s == "FileChooser.useShellFolder"_s) {
											this->this$0->updateUseShellFolder();
											this->this$0->doDirectoryChanged(e);
										} else if (s->equals("componentOrientation"_s)) {
											$var($ComponentOrientation, o, $cast($ComponentOrientation, e->getNewValue()));
											$var($JFileChooser, cc, $cast($JFileChooser, e->getSource()));
											if (!$equals(o, e->getOldValue())) {
												$nc(cc)->applyComponentOrientation(o);
											}
										} else if (s->equals("ancestor"_s)) {
											bool var$2 = e->getOldValue() == nullptr;
											if (var$2 && e->getNewValue() != nullptr) {
												$nc(this->this$0->filenameTextField)->selectAll();
												$nc(this->this$0->filenameTextField)->requestFocus();
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

WindowsFileChooserUI$11::WindowsFileChooserUI$11() {
}

$Class* WindowsFileChooserUI$11::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$11, name, initialize, &_WindowsFileChooserUI$11_ClassInfo_, allocate$WindowsFileChooserUI$11);
	return class$;
}

$Class* WindowsFileChooserUI$11::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com