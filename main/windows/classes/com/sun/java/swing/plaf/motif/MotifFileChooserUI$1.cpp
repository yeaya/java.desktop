#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$1.h>

#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/ListSelectionModel.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

#undef ACCESSORY_CHANGED_PROPERTY
#undef APPROVE_BUTTON_TEXT_CHANGED_PROPERTY
#undef APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY
#undef CENTER
#undef CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY
#undef DIALOG_TYPE_CHANGED_PROPERTY
#undef DIRECTORIES_ONLY
#undef DIRECTORY_CHANGED_PROPERTY
#undef FILE_FILTER_CHANGED_PROPERTY
#undef FILE_SELECTION_MODE_CHANGED_PROPERTY
#undef MAX_SIZE
#undef MULTIPLE_INTERVAL_SELECTION
#undef MULTI_SELECTION_ENABLED_CHANGED_PROPERTY
#undef PREF_ACC_SIZE
#undef SELECTED_FILES_CHANGED_PROPERTY
#undef SELECTED_FILE_CHANGED_PROPERTY
#undef SINGLE_SELECTION
#undef ZERO_ACC_SIZE

using $FileArray = $Array<::java::io::File>;
using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifFileChooserUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$1, this$0)},
	{}
};

$MethodInfo _MotifFileChooserUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;)V", nullptr, 0, $method(static_cast<void(MotifFileChooserUI$1::*)($MotifFileChooserUI*)>(&MotifFileChooserUI$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifFileChooserUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI",
	"createPropertyChangeListener",
	"(Ljavax/swing/JFileChooser;)Ljava/beans/PropertyChangeListener;"
};

$InnerClassInfo _MotifFileChooserUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifFileChooserUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI$1",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_MotifFileChooserUI$1_FieldInfo_,
	_MotifFileChooserUI$1_MethodInfo_,
	nullptr,
	&_MotifFileChooserUI$1_EnclosingMethodInfo_,
	_MotifFileChooserUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
};

$Object* allocate$MotifFileChooserUI$1($Class* clazz) {
	return $of($alloc(MotifFileChooserUI$1));
}

void MotifFileChooserUI$1::init$($MotifFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifFileChooserUI$1::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, prop, $nc(e)->getPropertyName());
	$init($JFileChooser);
	if ($nc(prop)->equals($JFileChooser::SELECTED_FILE_CHANGED_PROPERTY)) {
		$var($File, f, $cast($File, e->getNewValue()));
		if (f != nullptr) {
			this->this$0->setFileName($($nc($(this->this$0->getFileChooser()))->getName(f)));
		}
	} else {
		if (prop->equals($JFileChooser::SELECTED_FILES_CHANGED_PROPERTY)) {
			$var($FileArray, files, $cast($FileArray, e->getNewValue()));
			$var($JFileChooser, fc, this->this$0->getFileChooser());
			bool var$0 = files != nullptr && files->length > 0;
			if (var$0) {
				bool var$1 = files->length > 1 || $nc(fc)->isDirectorySelectionEnabled();
				var$0 = (var$1 || !$nc(files->get(0))->isDirectory());
			}
			if (var$0) {
				this->this$0->setFileName($(this->this$0->fileNameString(files)));
			}
		} else {
			if (prop->equals($JFileChooser::FILE_FILTER_CHANGED_PROPERTY)) {
				$nc(this->this$0->fileList)->clearSelection();
			} else {
				if (prop->equals($JFileChooser::DIRECTORY_CHANGED_PROPERTY)) {
					$nc(this->this$0->directoryList)->clearSelection();
					$var($ListSelectionModel, sm, $nc(this->this$0->directoryList)->getSelectionModel());
					if ($instanceOf($DefaultListSelectionModel, sm)) {
						$nc(($cast($DefaultListSelectionModel, sm)))->moveLeadSelectionIndex(0);
						$nc(sm)->setAnchorSelectionIndex(0);
					}
					$nc(this->this$0->fileList)->clearSelection();
					$assign(sm, $nc(this->this$0->fileList)->getSelectionModel());
					if ($instanceOf($DefaultListSelectionModel, sm)) {
						$nc(($cast($DefaultListSelectionModel, sm)))->moveLeadSelectionIndex(0);
						$nc(sm)->setAnchorSelectionIndex(0);
					}
					$var($File, currentDirectory, $nc($(this->this$0->getFileChooser()))->getCurrentDirectory());
					if (currentDirectory != nullptr) {
						try {
							this->this$0->setDirectoryName($($nc($($ShellFolder::getNormalizedFile($cast($File, $(e->getNewValue())))))->getPath()));
						} catch ($IOException&) {
							$var($IOException, ioe, $catch());
							this->this$0->setDirectoryName($($nc(($cast($File, $(e->getNewValue()))))->getAbsolutePath()));
						}
						bool var$2 = ($nc($(this->this$0->getFileChooser()))->getFileSelectionMode() == $JFileChooser::DIRECTORIES_ONLY);
						if (var$2 && !$nc($(this->this$0->getFileChooser()))->isMultiSelectionEnabled()) {
							this->this$0->setFileName($(this->this$0->getDirectoryName()));
						}
					}
				} else {
					if (prop->equals($JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY)) {
						if (this->this$0->fileNameLabel != nullptr) {
							this->this$0->populateFileNameLabel();
						}
						$nc(this->this$0->directoryList)->clearSelection();
					} else {
						if (prop->equals($JFileChooser::MULTI_SELECTION_ENABLED_CHANGED_PROPERTY)) {
							if ($nc($(this->this$0->getFileChooser()))->isMultiSelectionEnabled()) {
								$nc(this->this$0->fileList)->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
							} else {
								$nc(this->this$0->fileList)->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
								$nc(this->this$0->fileList)->clearSelection();
								$nc($(this->this$0->getFileChooser()))->setSelectedFiles(nullptr);
							}
						} else {
							if (prop->equals($JFileChooser::ACCESSORY_CHANGED_PROPERTY)) {
								if (this->this$0->getAccessoryPanel() != nullptr) {
									if (e->getOldValue() != nullptr) {
										$nc($(this->this$0->getAccessoryPanel()))->remove($cast($JComponent, $(e->getOldValue())));
									}
									$var($JComponent, accessory, $cast($JComponent, e->getNewValue()));
									if (accessory != nullptr) {
										$init($BorderLayout);
										$nc($(this->this$0->getAccessoryPanel()))->add(static_cast<$Component*>(accessory), $of($BorderLayout::CENTER));
										$nc($(this->this$0->getAccessoryPanel()))->setPreferredSize($MotifFileChooserUI::PREF_ACC_SIZE);
										$nc($(this->this$0->getAccessoryPanel()))->setMaximumSize($MotifFileChooserUI::MAX_SIZE);
									} else {
										$init($MotifFileChooserUI);
										$nc($(this->this$0->getAccessoryPanel()))->setPreferredSize($MotifFileChooserUI::ZERO_ACC_SIZE);
										$nc($(this->this$0->getAccessoryPanel()))->setMaximumSize($MotifFileChooserUI::ZERO_ACC_SIZE);
									}
								}
							} else {
								bool var$6 = prop->equals($JFileChooser::APPROVE_BUTTON_TEXT_CHANGED_PROPERTY);
								bool var$5 = var$6 || prop->equals($JFileChooser::APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY);
								if (var$5 || prop->equals($JFileChooser::DIALOG_TYPE_CHANGED_PROPERTY)) {
									$nc(this->this$0->approveButton)->setText($(this->this$0->getApproveButtonText($(this->this$0->getFileChooser()))));
									$nc(this->this$0->approveButton)->setToolTipText($(this->this$0->getApproveButtonToolTipText($(this->this$0->getFileChooser()))));
								} else {
									if (prop->equals($JFileChooser::CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY)) {
										this->this$0->doControlButtonsChanged(e);
									} else if (prop->equals("componentOrientation"_s)) {
										$var($ComponentOrientation, o, $cast($ComponentOrientation, e->getNewValue()));
										$var($JFileChooser, cc, $cast($JFileChooser, e->getSource()));
										if (o != $cast($ComponentOrientation, e->getOldValue())) {
											$nc(cc)->applyComponentOrientation(o);
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

MotifFileChooserUI$1::MotifFileChooserUI$1() {
}

$Class* MotifFileChooserUI$1::load$($String* name, bool initialize) {
	$loadClass(MotifFileChooserUI$1, name, initialize, &_MotifFileChooserUI$1_ClassInfo_, allocate$MotifFileChooserUI$1);
	return class$;
}

$Class* MotifFileChooserUI$1::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com