#include <com/apple/laf/AquaFileChooserUI$DnDHandler.h>

#include <com/apple/laf/AquaFileChooserUI$DnDHandler$1.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DropTargetAdapter.h>
#include <java/awt/dnd/DropTargetDragEvent.h>
#include <java/awt/dnd/DropTargetDropEvent.h>
#include <java/io/File.h>
#include <java/lang/Runnable.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

#undef ACTION_COPY

using $FileArray = $Array<::java::io::File>;
using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$DnDHandler$1 = ::com::apple::laf::AquaFileChooserUI$DnDHandler$1;
using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DropTargetAdapter = ::java::awt::dnd::DropTargetAdapter;
using $DropTargetDragEvent = ::java::awt::dnd::DropTargetDragEvent;
using $DropTargetDropEvent = ::java::awt::dnd::DropTargetDropEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $URI = ::java::net::URI;
using $List = ::java::util::List;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$DnDHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DnDHandler, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$DnDHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$DnDHandler::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$DnDHandler::init$))},
	{"dragEnter", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC},
	{"dragOver", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC},
	{"drop", "(Ljava/awt/dnd/DropTargetDropEvent;)V", nullptr, $PUBLIC},
	{"dropActionChanged", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC},
	{"dropFiles", "([Ljava/io/File;)V", nullptr, $PROTECTED},
	{"handleFileDropEvent", "(Ljava/awt/dnd/DropTargetDropEvent;)V", nullptr, $PROTECTED},
	{"handleStringDropEvent", "(Ljava/awt/dnd/DropTargetDropEvent;)V", nullptr, $PROTECTED},
	{"tryToAcceptDrag", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaFileChooserUI$DnDHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$DnDHandler", "com.apple.laf.AquaFileChooserUI", "DnDHandler", 0},
	{"com.apple.laf.AquaFileChooserUI$DnDHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFileChooserUI$DnDHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$DnDHandler",
	"java.awt.dnd.DropTargetAdapter",
	nullptr,
	_AquaFileChooserUI$DnDHandler_FieldInfo_,
	_AquaFileChooserUI$DnDHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$DnDHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$DnDHandler($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$DnDHandler));
}

void AquaFileChooserUI$DnDHandler::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DropTargetAdapter::init$();
}

void AquaFileChooserUI$DnDHandler::dragEnter($DropTargetDragEvent* dtde) {
	tryToAcceptDrag(dtde);
}

void AquaFileChooserUI$DnDHandler::dragOver($DropTargetDragEvent* dtde) {
	tryToAcceptDrag(dtde);
}

void AquaFileChooserUI$DnDHandler::dropActionChanged($DropTargetDragEvent* dtde) {
	tryToAcceptDrag(dtde);
}

void AquaFileChooserUI$DnDHandler::drop($DropTargetDropEvent* dtde) {
	$init($DataFlavor);
	if ($nc(dtde)->isDataFlavorSupported($DataFlavor::javaFileListFlavor)) {
		handleFileDropEvent(dtde);
		return;
	}
	if ($nc(dtde)->isDataFlavorSupported($DataFlavor::stringFlavor)) {
		handleStringDropEvent(dtde);
		return;
	}
}

void AquaFileChooserUI$DnDHandler::tryToAcceptDrag($DropTargetDragEvent* dtde) {
	$init($DataFlavor);
	bool var$0 = $nc(dtde)->isDataFlavorSupported($DataFlavor::javaFileListFlavor);
	if (var$0 || $nc(dtde)->isDataFlavorSupported($DataFlavor::stringFlavor)) {
		dtde->acceptDrag($DnDConstants::ACTION_COPY);
		return;
	}
	$nc(dtde)->rejectDrag();
}

void AquaFileChooserUI$DnDHandler::handleFileDropEvent($DropTargetDropEvent* dtde) {
	$useLocalCurrentObjectStackCache();
	$nc(dtde)->acceptDrop(dtde->getDropAction());
	$var($Transferable, transferable, dtde->getTransferable());
	try {
		$init($DataFlavor);
		$var($List, fileList, $cast($List, $nc(transferable)->getTransferData($DataFlavor::javaFileListFlavor)));
		dropFiles($fcast($FileArray, $($nc(fileList)->toArray($$new($FileArray, fileList->size())))));
		dtde->dropComplete(true);
	} catch ($Exception& e) {
		dtde->dropComplete(false);
	}
}

void AquaFileChooserUI$DnDHandler::handleStringDropEvent($DropTargetDropEvent* dtde) {
	$useLocalCurrentObjectStackCache();
	$nc(dtde)->acceptDrop(dtde->getDropAction());
	$var($Transferable, transferable, dtde->getTransferable());
	$var($String, stringData, nullptr);
	try {
		$init($DataFlavor);
		$assign(stringData, $cast($String, $nc(transferable)->getTransferData($DataFlavor::stringFlavor)));
	} catch ($Exception& e) {
		dtde->dropComplete(false);
		return;
	}
	try {
		$var($File, fileAsPath, $new($File, stringData));
		if (fileAsPath->exists()) {
			dropFiles($$new($FileArray, {fileAsPath}));
			dtde->dropComplete(true);
			return;
		}
	} catch ($Exception& e) {
	}
	try {
		$var($File, fileAsURI, $new($File, $$new($URI, stringData)));
		if (fileAsURI->exists()) {
			dropFiles($$new($FileArray, {fileAsURI}));
			dtde->dropComplete(true);
			return;
		}
	} catch ($Exception& e) {
	}
	dtde->dropComplete(false);
}

void AquaFileChooserUI$DnDHandler::dropFiles($FileArray* files) {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, jfc, this->this$0->getFileChooser());
	if ($nc(files)->length == 1) {
		if ($nc(files->get(0))->isDirectory()) {
			$nc(jfc)->setCurrentDirectory(files->get(0));
			return;
		}
		if (!this->this$0->isSelectableForMode(jfc, files->get(0))) {
			return;
		}
	}
	$nc(jfc)->setSelectedFiles(files);
	{
		$var($FileArray, arr$, files);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($File, file, arr$->get(i$));
			{
				jfc->ensureFileIsVisible(file);
			}
		}
	}
	$nc($(this->this$0->getModel()))->runWhenDone($$new($AquaFileChooserUI$DnDHandler$1, this, files));
}

AquaFileChooserUI$DnDHandler::AquaFileChooserUI$DnDHandler() {
}

$Class* AquaFileChooserUI$DnDHandler::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$DnDHandler, name, initialize, &_AquaFileChooserUI$DnDHandler_ClassInfo_, allocate$AquaFileChooserUI$DnDHandler);
	return class$;
}

$Class* AquaFileChooserUI$DnDHandler::class$ = nullptr;

		} // laf
	} // apple
} // com