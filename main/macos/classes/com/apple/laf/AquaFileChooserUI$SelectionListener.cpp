#include <com/apple/laf/AquaFileChooserUI$SelectionListener.h>

#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileView.h>
#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTable.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <jcpp.h>

#undef SAVE_DIALOG

using $FileArray = $Array<::java::io::File>;
using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$JTableExtension = ::com::apple::laf::AquaFileChooserUI$JTableExtension;
using $AquaFileView = ::com::apple::laf::AquaFileView;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$SelectionListener_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$SelectionListener, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$SelectionListener_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaFileChooserUI$SelectionListener::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$SelectionListener::init$))},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$SelectionListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$SelectionListener", "com.apple.laf.AquaFileChooserUI", "SelectionListener", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$SelectionListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$SelectionListener",
	"java.lang.Object",
	"javax.swing.event.ListSelectionListener",
	_AquaFileChooserUI$SelectionListener_FieldInfo_,
	_AquaFileChooserUI$SelectionListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$SelectionListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$SelectionListener($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$SelectionListener));
}

void AquaFileChooserUI$SelectionListener::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaFileChooserUI$SelectionListener::valueChanged($ListSelectionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->getValueIsAdjusting()) {
		return;
	}
	$var($File, f, nullptr);
	int32_t selectedRow = $nc(this->this$0->fFileList)->getSelectedRow();
	$var($JFileChooser, chooser, this->this$0->getFileChooser());
	bool isSave = ($nc(chooser)->getDialogType() == $JFileChooser::SAVE_DIALOG);
	if (selectedRow >= 0) {
		$assign(f, $cast($File, $nc(this->this$0->fFileList)->getValueAt(selectedRow, 0)));
	}
	this->this$0->selectionInProgress = true;
	if (!isSave && chooser->isMultiSelectionEnabled()) {
		$var($ints, rows, $nc(this->this$0->fFileList)->getSelectedRows());
		int32_t selectableCount = 0;
		if ($nc(rows)->length > 0) {
			{
				$var($ints, arr$, rows);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					int32_t element = arr$->get(i$);
					{
						if (this->this$0->isSelectableForMode(chooser, $cast($File, $($nc(this->this$0->fFileList)->getValueAt(element, 0))))) {
							++selectableCount;
						}
					}
				}
			}
		}
		if (selectableCount > 0) {
			$var($FileArray, files, $new($FileArray, selectableCount));
			{
				int32_t i = 0;
				int32_t si = 0;
				for (; i < $nc(rows)->length; ++i) {
					$assign(f, $cast($File, $nc(this->this$0->fFileList)->getValueAt(rows->get(i), 0)));
					if (this->this$0->isSelectableForMode(chooser, f)) {
						if ($nc(this->this$0->fileView)->isAlias(f)) {
							$assign(f, $nc(this->this$0->fileView)->resolveAlias(f));
						}
						files->set(si++, f);
					}
				}
			}
			chooser->setSelectedFiles(files);
		} else {
			chooser->setSelectedFiles(nullptr);
		}
	} else {
		chooser->setSelectedFiles(nullptr);
		chooser->setSelectedFile(f);
	}
	this->this$0->selectionInProgress = false;
}

AquaFileChooserUI$SelectionListener::AquaFileChooserUI$SelectionListener() {
}

$Class* AquaFileChooserUI$SelectionListener::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$SelectionListener, name, initialize, &_AquaFileChooserUI$SelectionListener_ClassInfo_, allocate$AquaFileChooserUI$SelectionListener);
	return class$;
}

$Class* AquaFileChooserUI$SelectionListener::class$ = nullptr;

		} // laf
	} // apple
} // com