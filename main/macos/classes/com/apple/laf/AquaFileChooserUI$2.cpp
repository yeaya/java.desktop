#include <com/apple/laf/AquaFileChooserUI$2.h>

#include <com/apple/laf/AquaFileChooserUI$DirectoryComboBoxModel.h>
#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/io/File.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

#undef ACCESSORY_CHANGED_PROPERTY
#undef APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY
#undef APPROVE_BUTTON_TEXT_CHANGED_PROPERTY
#undef CENTER
#undef CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY
#undef DIALOG_TYPE_CHANGED_PROPERTY
#undef DIRECTORY_CHANGED_PROPERTY
#undef FILE_SELECTION_MODE_CHANGED_PROPERTY
#undef MULTIPLE_INTERVAL_SELECTION
#undef MULTI_SELECTION_ENABLED_CHANGED_PROPERTY
#undef SAVE_DIALOG
#undef SELECTED_FILES_CHANGED_PROPERTY
#undef SELECTED_FILE_CHANGED_PROPERTY
#undef SINGLE_SELECTION

using $FileArray = $Array<::java::io::File>;
using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$DirectoryComboBoxModel = ::com::apple::laf::AquaFileChooserUI$DirectoryComboBoxModel;
using $AquaFileChooserUI$JTableExtension = ::com::apple::laf::AquaFileChooserUI$JTableExtension;
using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$2_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$2, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$2_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$2::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$2::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaFileChooserUI$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFileChooserUI",
	"createPropertyChangeListener",
	"(Ljavax/swing/JFileChooser;)Ljava/beans/PropertyChangeListener;"
};

$InnerClassInfo _AquaFileChooserUI$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFileChooserUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$2",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_AquaFileChooserUI$2_FieldInfo_,
	_AquaFileChooserUI$2_MethodInfo_,
	nullptr,
	&_AquaFileChooserUI$2_EnclosingMethodInfo_,
	_AquaFileChooserUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$2($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$2));
}

void AquaFileChooserUI$2::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaFileChooserUI$2::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(e)->getPropertyName());
	$init($JFileChooser);
	if ($nc(prop)->equals($JFileChooser::SELECTED_FILE_CHANGED_PROPERTY)) {
		$var($File, f, $cast($File, e->getNewValue()));
		if (f != nullptr) {
			if (!this->this$0->selectionInProgress && $nc($(this->this$0->getModel()))->contains(f)) {
				$nc(this->this$0->fFileList)->setSelectedIndex($nc($(this->this$0->getModel()))->indexOf(f));
			}
			if (!f->isDirectory()) {
				this->this$0->setFileName($($nc($(this->this$0->getFileChooser()))->getName(f)));
			}
		}
		this->this$0->updateButtonState($(this->this$0->getFileChooser()));
	} else {
		if (prop->equals($JFileChooser::SELECTED_FILES_CHANGED_PROPERTY)) {
			$var($JFileChooser, fileChooser, this->this$0->getFileChooser());
			if (!$nc(fileChooser)->isDirectorySelectionEnabled()) {
				$var($FileArray, files, $cast($FileArray, e->getNewValue()));
				if (files != nullptr) {
					{
						$var($ints, arr$, $nc(this->this$0->fFileList)->getSelectedRows());
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							int32_t selectedRow = arr$->get(i$);
							{
								$var($File, file, $cast($File, $nc(this->this$0->fFileList)->getValueAt(selectedRow, 0)));
								if (fileChooser->isTraversable(file)) {
									$nc(this->this$0->fFileList)->removeSelectedIndex(selectedRow);
								}
							}
						}
					}
				}
			}
		} else {
			if (prop->equals($JFileChooser::DIRECTORY_CHANGED_PROPERTY)) {
				$nc(this->this$0->fFileList)->clearSelection();
				$var($File, currentDirectory, $nc($(this->this$0->getFileChooser()))->getCurrentDirectory());
				if (currentDirectory != nullptr) {
					$nc(this->this$0->fDirectoryComboBoxModel)->addItem(currentDirectory);
					$nc($(this->this$0->getAction(5)))->setEnabled(currentDirectory->canWrite());
				}
				this->this$0->updateButtonState($(this->this$0->getFileChooser()));
			} else {
				if (prop->equals($JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY)) {
					$nc(this->this$0->fFileList)->clearSelection();
					this->this$0->setBottomPanelForMode($(this->this$0->getFileChooser()));
				} else {
					if (prop == $JFileChooser::ACCESSORY_CHANGED_PROPERTY) {
						if (this->this$0->getAccessoryPanel() != nullptr) {
							if (e->getOldValue() != nullptr) {
								$nc($(this->this$0->getAccessoryPanel()))->remove($cast($JComponent, $(e->getOldValue())));
							}
							$var($JComponent, accessory, $cast($JComponent, e->getNewValue()));
							if (accessory != nullptr) {
								$init($BorderLayout);
								$nc($(this->this$0->getAccessoryPanel()))->add(static_cast<$Component*>(accessory), $of($BorderLayout::CENTER));
							}
						}
					} else {
						if (prop == $JFileChooser::APPROVE_BUTTON_TEXT_CHANGED_PROPERTY) {
							this->this$0->updateApproveButton($(this->this$0->getFileChooser()));
							$nc($(this->this$0->getFileChooser()))->invalidate();
						} else {
							if (prop == $JFileChooser::DIALOG_TYPE_CHANGED_PROPERTY) {
								if ($nc($(this->this$0->getFileChooser()))->getDialogType() == $JFileChooser::SAVE_DIALOG) {
									$init($AquaFileChooserUI);
									$assignStatic($AquaFileChooserUI::fileNameLabelText, this->this$0->getString("FileChooser.saveDialogFileNameLabelText"_s, "Save As:"_s));
								} else {
									$init($AquaFileChooserUI);
									$assignStatic($AquaFileChooserUI::fileNameLabelText, this->this$0->getString("FileChooser.fileNameLabelText"_s, "Name:"_s));
								}
								$nc(this->this$0->fTextFieldLabel)->setText($AquaFileChooserUI::fileNameLabelText);
								this->this$0->setBottomPanelForMode($(this->this$0->getFileChooser()));
							} else {
								if (prop->equals($JFileChooser::APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY)) {
									$nc($(this->this$0->getApproveButton($(this->this$0->getFileChooser()))))->setMnemonic(this->this$0->getApproveButtonMnemonic($(this->this$0->getFileChooser())));
								} else if (prop->equals("JFileChooser.packageIsTraversable"_s)) {
									this->this$0->setPackageIsTraversable($(e->getNewValue()));
								} else if (prop->equals("JFileChooser.appBundleIsTraversable"_s)) {
									this->this$0->setApplicationIsTraversable($(e->getNewValue()));
								} else {
									if (prop->equals($JFileChooser::MULTI_SELECTION_ENABLED_CHANGED_PROPERTY)) {
										if ($nc($(this->this$0->getFileChooser()))->isMultiSelectionEnabled()) {
											$nc($($nc(this->this$0->fFileList)->getSelectionModel()))->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
										} else {
											$nc($($nc(this->this$0->fFileList)->getSelectionModel()))->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
										}
									} else {
										if (prop->equals($JFileChooser::CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY)) {
											this->this$0->doControlButtonsChanged(e);
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

AquaFileChooserUI$2::AquaFileChooserUI$2() {
}

$Class* AquaFileChooserUI$2::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$2, name, initialize, &_AquaFileChooserUI$2_ClassInfo_, allocate$AquaFileChooserUI$2);
	return class$;
}

$Class* AquaFileChooserUI$2::class$ = nullptr;

		} // laf
	} // apple
} // com